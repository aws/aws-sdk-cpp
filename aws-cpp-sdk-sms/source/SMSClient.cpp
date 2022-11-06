/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/sms/SMSClient.h>
#include <aws/sms/SMSErrorMarshaller.h>
#include <aws/sms/SMSEndpointProvider.h>
#include <aws/sms/model/CreateAppRequest.h>
#include <aws/sms/model/CreateReplicationJobRequest.h>
#include <aws/sms/model/DeleteAppRequest.h>
#include <aws/sms/model/DeleteAppLaunchConfigurationRequest.h>
#include <aws/sms/model/DeleteAppReplicationConfigurationRequest.h>
#include <aws/sms/model/DeleteAppValidationConfigurationRequest.h>
#include <aws/sms/model/DeleteReplicationJobRequest.h>
#include <aws/sms/model/DeleteServerCatalogRequest.h>
#include <aws/sms/model/DisassociateConnectorRequest.h>
#include <aws/sms/model/GenerateChangeSetRequest.h>
#include <aws/sms/model/GenerateTemplateRequest.h>
#include <aws/sms/model/GetAppRequest.h>
#include <aws/sms/model/GetAppLaunchConfigurationRequest.h>
#include <aws/sms/model/GetAppReplicationConfigurationRequest.h>
#include <aws/sms/model/GetAppValidationConfigurationRequest.h>
#include <aws/sms/model/GetAppValidationOutputRequest.h>
#include <aws/sms/model/GetConnectorsRequest.h>
#include <aws/sms/model/GetReplicationJobsRequest.h>
#include <aws/sms/model/GetReplicationRunsRequest.h>
#include <aws/sms/model/GetServersRequest.h>
#include <aws/sms/model/ImportAppCatalogRequest.h>
#include <aws/sms/model/ImportServerCatalogRequest.h>
#include <aws/sms/model/LaunchAppRequest.h>
#include <aws/sms/model/ListAppsRequest.h>
#include <aws/sms/model/NotifyAppValidationOutputRequest.h>
#include <aws/sms/model/PutAppLaunchConfigurationRequest.h>
#include <aws/sms/model/PutAppReplicationConfigurationRequest.h>
#include <aws/sms/model/PutAppValidationConfigurationRequest.h>
#include <aws/sms/model/StartAppReplicationRequest.h>
#include <aws/sms/model/StartOnDemandAppReplicationRequest.h>
#include <aws/sms/model/StartOnDemandReplicationRunRequest.h>
#include <aws/sms/model/StopAppReplicationRequest.h>
#include <aws/sms/model/TerminateAppRequest.h>
#include <aws/sms/model/UpdateAppRequest.h>
#include <aws/sms/model/UpdateReplicationJobRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SMS;
using namespace Aws::SMS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SMSClient::SERVICE_NAME = "sms";
const char* SMSClient::ALLOCATION_TAG = "SMSClient";

SMSClient::SMSClient(const SMS::SMSClientConfiguration& clientConfiguration,
                     std::shared_ptr<SMSEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SMSErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SMSClient::SMSClient(const AWSCredentials& credentials,
                     std::shared_ptr<SMSEndpointProviderBase> endpointProvider,
                     const SMS::SMSClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SMSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SMSClient::SMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<SMSEndpointProviderBase> endpointProvider,
                     const SMS::SMSClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SMSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SMSClient::SMSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SMSErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SMSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SMSClient::SMSClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SMSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SMSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SMSClient::SMSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SMSErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SMSEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SMSClient::~SMSClient()
{
}

std::shared_ptr<SMSEndpointProviderBase>& SMSClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SMSClient::init(const SMS::SMSClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SMS");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SMSClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateAppOutcome SMSClient::CreateApp(const CreateAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppOutcomeCallable SMSClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApp(request), context);
    } );
}

CreateReplicationJobOutcome SMSClient::CreateReplicationJob(const CreateReplicationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReplicationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReplicationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateReplicationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReplicationJobOutcomeCallable SMSClient::CreateReplicationJobCallable(const CreateReplicationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReplicationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReplicationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::CreateReplicationJobAsync(const CreateReplicationJobRequest& request, const CreateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateReplicationJob(request), context);
    } );
}

DeleteAppOutcome SMSClient::DeleteApp(const DeleteAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppOutcomeCallable SMSClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApp(request), context);
    } );
}

DeleteAppLaunchConfigurationOutcome SMSClient::DeleteAppLaunchConfiguration(const DeleteAppLaunchConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAppLaunchConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAppLaunchConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAppLaunchConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppLaunchConfigurationOutcomeCallable SMSClient::DeleteAppLaunchConfigurationCallable(const DeleteAppLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::DeleteAppLaunchConfigurationAsync(const DeleteAppLaunchConfigurationRequest& request, const DeleteAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAppLaunchConfiguration(request), context);
    } );
}

DeleteAppReplicationConfigurationOutcome SMSClient::DeleteAppReplicationConfiguration(const DeleteAppReplicationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAppReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAppReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAppReplicationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppReplicationConfigurationOutcomeCallable SMSClient::DeleteAppReplicationConfigurationCallable(const DeleteAppReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::DeleteAppReplicationConfigurationAsync(const DeleteAppReplicationConfigurationRequest& request, const DeleteAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAppReplicationConfiguration(request), context);
    } );
}

DeleteAppValidationConfigurationOutcome SMSClient::DeleteAppValidationConfiguration(const DeleteAppValidationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAppValidationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAppValidationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAppValidationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppValidationConfigurationOutcomeCallable SMSClient::DeleteAppValidationConfigurationCallable(const DeleteAppValidationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppValidationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppValidationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::DeleteAppValidationConfigurationAsync(const DeleteAppValidationConfigurationRequest& request, const DeleteAppValidationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAppValidationConfiguration(request), context);
    } );
}

DeleteReplicationJobOutcome SMSClient::DeleteReplicationJob(const DeleteReplicationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReplicationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReplicationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteReplicationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteReplicationJobOutcomeCallable SMSClient::DeleteReplicationJobCallable(const DeleteReplicationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReplicationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReplicationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::DeleteReplicationJobAsync(const DeleteReplicationJobRequest& request, const DeleteReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteReplicationJob(request), context);
    } );
}

DeleteServerCatalogOutcome SMSClient::DeleteServerCatalog(const DeleteServerCatalogRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteServerCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteServerCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteServerCatalogOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServerCatalogOutcomeCallable SMSClient::DeleteServerCatalogCallable(const DeleteServerCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServerCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServerCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::DeleteServerCatalogAsync(const DeleteServerCatalogRequest& request, const DeleteServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteServerCatalog(request), context);
    } );
}

DisassociateConnectorOutcome SMSClient::DisassociateConnector(const DisassociateConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateConnectorOutcomeCallable SMSClient::DisassociateConnectorCallable(const DisassociateConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::DisassociateConnectorAsync(const DisassociateConnectorRequest& request, const DisassociateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateConnector(request), context);
    } );
}

GenerateChangeSetOutcome SMSClient::GenerateChangeSet(const GenerateChangeSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GenerateChangeSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateChangeSetOutcomeCallable SMSClient::GenerateChangeSetCallable(const GenerateChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GenerateChangeSetAsync(const GenerateChangeSetRequest& request, const GenerateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GenerateChangeSet(request), context);
    } );
}

GenerateTemplateOutcome SMSClient::GenerateTemplate(const GenerateTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GenerateTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateTemplateOutcomeCallable SMSClient::GenerateTemplateCallable(const GenerateTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GenerateTemplateAsync(const GenerateTemplateRequest& request, const GenerateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GenerateTemplate(request), context);
    } );
}

GetAppOutcome SMSClient::GetApp(const GetAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAppOutcomeCallable SMSClient::GetAppCallable(const GetAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetAppAsync(const GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApp(request), context);
    } );
}

GetAppLaunchConfigurationOutcome SMSClient::GetAppLaunchConfiguration(const GetAppLaunchConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAppLaunchConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAppLaunchConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAppLaunchConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAppLaunchConfigurationOutcomeCallable SMSClient::GetAppLaunchConfigurationCallable(const GetAppLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAppLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetAppLaunchConfigurationAsync(const GetAppLaunchConfigurationRequest& request, const GetAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAppLaunchConfiguration(request), context);
    } );
}

GetAppReplicationConfigurationOutcome SMSClient::GetAppReplicationConfiguration(const GetAppReplicationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAppReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAppReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAppReplicationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAppReplicationConfigurationOutcomeCallable SMSClient::GetAppReplicationConfigurationCallable(const GetAppReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAppReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetAppReplicationConfigurationAsync(const GetAppReplicationConfigurationRequest& request, const GetAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAppReplicationConfiguration(request), context);
    } );
}

GetAppValidationConfigurationOutcome SMSClient::GetAppValidationConfiguration(const GetAppValidationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAppValidationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAppValidationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAppValidationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAppValidationConfigurationOutcomeCallable SMSClient::GetAppValidationConfigurationCallable(const GetAppValidationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppValidationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAppValidationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetAppValidationConfigurationAsync(const GetAppValidationConfigurationRequest& request, const GetAppValidationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAppValidationConfiguration(request), context);
    } );
}

GetAppValidationOutputOutcome SMSClient::GetAppValidationOutput(const GetAppValidationOutputRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAppValidationOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAppValidationOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAppValidationOutputOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAppValidationOutputOutcomeCallable SMSClient::GetAppValidationOutputCallable(const GetAppValidationOutputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppValidationOutputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAppValidationOutput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetAppValidationOutputAsync(const GetAppValidationOutputRequest& request, const GetAppValidationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAppValidationOutput(request), context);
    } );
}

GetConnectorsOutcome SMSClient::GetConnectors(const GetConnectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetConnectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetConnectorsOutcomeCallable SMSClient::GetConnectorsCallable(const GetConnectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConnectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConnectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetConnectorsAsync(const GetConnectorsRequest& request, const GetConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetConnectors(request), context);
    } );
}

GetReplicationJobsOutcome SMSClient::GetReplicationJobs(const GetReplicationJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReplicationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReplicationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetReplicationJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetReplicationJobsOutcomeCallable SMSClient::GetReplicationJobsCallable(const GetReplicationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReplicationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReplicationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetReplicationJobsAsync(const GetReplicationJobsRequest& request, const GetReplicationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetReplicationJobs(request), context);
    } );
}

GetReplicationRunsOutcome SMSClient::GetReplicationRuns(const GetReplicationRunsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReplicationRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReplicationRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetReplicationRunsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetReplicationRunsOutcomeCallable SMSClient::GetReplicationRunsCallable(const GetReplicationRunsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReplicationRunsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReplicationRuns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetReplicationRunsAsync(const GetReplicationRunsRequest& request, const GetReplicationRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetReplicationRuns(request), context);
    } );
}

GetServersOutcome SMSClient::GetServers(const GetServersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetServers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetServersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServersOutcomeCallable SMSClient::GetServersCallable(const GetServersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::GetServersAsync(const GetServersRequest& request, const GetServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServers(request), context);
    } );
}

ImportAppCatalogOutcome SMSClient::ImportAppCatalog(const ImportAppCatalogRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportAppCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportAppCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportAppCatalogOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportAppCatalogOutcomeCallable SMSClient::ImportAppCatalogCallable(const ImportAppCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportAppCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportAppCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::ImportAppCatalogAsync(const ImportAppCatalogRequest& request, const ImportAppCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportAppCatalog(request), context);
    } );
}

ImportServerCatalogOutcome SMSClient::ImportServerCatalog(const ImportServerCatalogRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportServerCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportServerCatalog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportServerCatalogOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportServerCatalogOutcomeCallable SMSClient::ImportServerCatalogCallable(const ImportServerCatalogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportServerCatalogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportServerCatalog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::ImportServerCatalogAsync(const ImportServerCatalogRequest& request, const ImportServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportServerCatalog(request), context);
    } );
}

LaunchAppOutcome SMSClient::LaunchApp(const LaunchAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, LaunchApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, LaunchApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return LaunchAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

LaunchAppOutcomeCallable SMSClient::LaunchAppCallable(const LaunchAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< LaunchAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->LaunchApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::LaunchAppAsync(const LaunchAppRequest& request, const LaunchAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, LaunchApp(request), context);
    } );
}

ListAppsOutcome SMSClient::ListApps(const ListAppsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAppsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppsOutcomeCallable SMSClient::ListAppsCallable(const ListAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::ListAppsAsync(const ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApps(request), context);
    } );
}

NotifyAppValidationOutputOutcome SMSClient::NotifyAppValidationOutput(const NotifyAppValidationOutputRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, NotifyAppValidationOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, NotifyAppValidationOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return NotifyAppValidationOutputOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

NotifyAppValidationOutputOutcomeCallable SMSClient::NotifyAppValidationOutputCallable(const NotifyAppValidationOutputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< NotifyAppValidationOutputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->NotifyAppValidationOutput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::NotifyAppValidationOutputAsync(const NotifyAppValidationOutputRequest& request, const NotifyAppValidationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, NotifyAppValidationOutput(request), context);
    } );
}

PutAppLaunchConfigurationOutcome SMSClient::PutAppLaunchConfiguration(const PutAppLaunchConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAppLaunchConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAppLaunchConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutAppLaunchConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAppLaunchConfigurationOutcomeCallable SMSClient::PutAppLaunchConfigurationCallable(const PutAppLaunchConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAppLaunchConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAppLaunchConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::PutAppLaunchConfigurationAsync(const PutAppLaunchConfigurationRequest& request, const PutAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAppLaunchConfiguration(request), context);
    } );
}

PutAppReplicationConfigurationOutcome SMSClient::PutAppReplicationConfiguration(const PutAppReplicationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAppReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAppReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutAppReplicationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAppReplicationConfigurationOutcomeCallable SMSClient::PutAppReplicationConfigurationCallable(const PutAppReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAppReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAppReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::PutAppReplicationConfigurationAsync(const PutAppReplicationConfigurationRequest& request, const PutAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAppReplicationConfiguration(request), context);
    } );
}

PutAppValidationConfigurationOutcome SMSClient::PutAppValidationConfiguration(const PutAppValidationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAppValidationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAppValidationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutAppValidationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAppValidationConfigurationOutcomeCallable SMSClient::PutAppValidationConfigurationCallable(const PutAppValidationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAppValidationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAppValidationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::PutAppValidationConfigurationAsync(const PutAppValidationConfigurationRequest& request, const PutAppValidationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAppValidationConfiguration(request), context);
    } );
}

StartAppReplicationOutcome SMSClient::StartAppReplication(const StartAppReplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAppReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartAppReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartAppReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAppReplicationOutcomeCallable SMSClient::StartAppReplicationCallable(const StartAppReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAppReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAppReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::StartAppReplicationAsync(const StartAppReplicationRequest& request, const StartAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartAppReplication(request), context);
    } );
}

StartOnDemandAppReplicationOutcome SMSClient::StartOnDemandAppReplication(const StartOnDemandAppReplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartOnDemandAppReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartOnDemandAppReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartOnDemandAppReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartOnDemandAppReplicationOutcomeCallable SMSClient::StartOnDemandAppReplicationCallable(const StartOnDemandAppReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartOnDemandAppReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartOnDemandAppReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::StartOnDemandAppReplicationAsync(const StartOnDemandAppReplicationRequest& request, const StartOnDemandAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartOnDemandAppReplication(request), context);
    } );
}

StartOnDemandReplicationRunOutcome SMSClient::StartOnDemandReplicationRun(const StartOnDemandReplicationRunRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartOnDemandReplicationRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartOnDemandReplicationRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartOnDemandReplicationRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartOnDemandReplicationRunOutcomeCallable SMSClient::StartOnDemandReplicationRunCallable(const StartOnDemandReplicationRunRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartOnDemandReplicationRunOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartOnDemandReplicationRun(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::StartOnDemandReplicationRunAsync(const StartOnDemandReplicationRunRequest& request, const StartOnDemandReplicationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartOnDemandReplicationRun(request), context);
    } );
}

StopAppReplicationOutcome SMSClient::StopAppReplication(const StopAppReplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopAppReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopAppReplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopAppReplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopAppReplicationOutcomeCallable SMSClient::StopAppReplicationCallable(const StopAppReplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopAppReplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopAppReplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::StopAppReplicationAsync(const StopAppReplicationRequest& request, const StopAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopAppReplication(request), context);
    } );
}

TerminateAppOutcome SMSClient::TerminateApp(const TerminateAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TerminateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TerminateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TerminateAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TerminateAppOutcomeCallable SMSClient::TerminateAppCallable(const TerminateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TerminateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TerminateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::TerminateAppAsync(const TerminateAppRequest& request, const TerminateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TerminateApp(request), context);
    } );
}

UpdateAppOutcome SMSClient::UpdateApp(const UpdateAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppOutcomeCallable SMSClient::UpdateAppCallable(const UpdateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::UpdateAppAsync(const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApp(request), context);
    } );
}

UpdateReplicationJobOutcome SMSClient::UpdateReplicationJob(const UpdateReplicationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateReplicationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateReplicationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateReplicationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateReplicationJobOutcomeCallable SMSClient::UpdateReplicationJobCallable(const UpdateReplicationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReplicationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReplicationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SMSClient::UpdateReplicationJobAsync(const UpdateReplicationJobRequest& request, const UpdateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateReplicationJob(request), context);
    } );
}

