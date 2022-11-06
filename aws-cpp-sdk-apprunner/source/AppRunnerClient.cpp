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

#include <aws/apprunner/AppRunnerClient.h>
#include <aws/apprunner/AppRunnerErrorMarshaller.h>
#include <aws/apprunner/AppRunnerEndpointProvider.h>
#include <aws/apprunner/model/AssociateCustomDomainRequest.h>
#include <aws/apprunner/model/CreateAutoScalingConfigurationRequest.h>
#include <aws/apprunner/model/CreateConnectionRequest.h>
#include <aws/apprunner/model/CreateObservabilityConfigurationRequest.h>
#include <aws/apprunner/model/CreateServiceRequest.h>
#include <aws/apprunner/model/CreateVpcConnectorRequest.h>
#include <aws/apprunner/model/CreateVpcIngressConnectionRequest.h>
#include <aws/apprunner/model/DeleteAutoScalingConfigurationRequest.h>
#include <aws/apprunner/model/DeleteConnectionRequest.h>
#include <aws/apprunner/model/DeleteObservabilityConfigurationRequest.h>
#include <aws/apprunner/model/DeleteServiceRequest.h>
#include <aws/apprunner/model/DeleteVpcConnectorRequest.h>
#include <aws/apprunner/model/DeleteVpcIngressConnectionRequest.h>
#include <aws/apprunner/model/DescribeAutoScalingConfigurationRequest.h>
#include <aws/apprunner/model/DescribeCustomDomainsRequest.h>
#include <aws/apprunner/model/DescribeObservabilityConfigurationRequest.h>
#include <aws/apprunner/model/DescribeServiceRequest.h>
#include <aws/apprunner/model/DescribeVpcConnectorRequest.h>
#include <aws/apprunner/model/DescribeVpcIngressConnectionRequest.h>
#include <aws/apprunner/model/DisassociateCustomDomainRequest.h>
#include <aws/apprunner/model/ListAutoScalingConfigurationsRequest.h>
#include <aws/apprunner/model/ListConnectionsRequest.h>
#include <aws/apprunner/model/ListObservabilityConfigurationsRequest.h>
#include <aws/apprunner/model/ListOperationsRequest.h>
#include <aws/apprunner/model/ListServicesRequest.h>
#include <aws/apprunner/model/ListTagsForResourceRequest.h>
#include <aws/apprunner/model/ListVpcConnectorsRequest.h>
#include <aws/apprunner/model/ListVpcIngressConnectionsRequest.h>
#include <aws/apprunner/model/PauseServiceRequest.h>
#include <aws/apprunner/model/ResumeServiceRequest.h>
#include <aws/apprunner/model/StartDeploymentRequest.h>
#include <aws/apprunner/model/TagResourceRequest.h>
#include <aws/apprunner/model/UntagResourceRequest.h>
#include <aws/apprunner/model/UpdateServiceRequest.h>
#include <aws/apprunner/model/UpdateVpcIngressConnectionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppRunner;
using namespace Aws::AppRunner::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AppRunnerClient::SERVICE_NAME = "apprunner";
const char* AppRunnerClient::ALLOCATION_TAG = "AppRunnerClient";

AppRunnerClient::AppRunnerClient(const AppRunner::AppRunnerClientConfiguration& clientConfiguration,
                                 std::shared_ptr<AppRunnerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppRunnerClient::AppRunnerClient(const AWSCredentials& credentials,
                                 std::shared_ptr<AppRunnerEndpointProviderBase> endpointProvider,
                                 const AppRunner::AppRunnerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppRunnerClient::AppRunnerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<AppRunnerEndpointProviderBase> endpointProvider,
                                 const AppRunner::AppRunnerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AppRunnerClient::AppRunnerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AppRunnerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppRunnerClient::AppRunnerClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppRunnerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppRunnerClient::AppRunnerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRunnerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppRunnerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AppRunnerClient::~AppRunnerClient()
{
}

std::shared_ptr<AppRunnerEndpointProviderBase>& AppRunnerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AppRunnerClient::init(const AppRunner::AppRunnerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("AppRunner");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AppRunnerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateCustomDomainOutcome AppRunnerClient::AssociateCustomDomain(const AssociateCustomDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateCustomDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateCustomDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateCustomDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateCustomDomainOutcomeCallable AppRunnerClient::AssociateCustomDomainCallable(const AssociateCustomDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateCustomDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateCustomDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::AssociateCustomDomainAsync(const AssociateCustomDomainRequest& request, const AssociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateCustomDomain(request), context);
    } );
}

CreateAutoScalingConfigurationOutcome AppRunnerClient::CreateAutoScalingConfiguration(const CreateAutoScalingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAutoScalingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAutoScalingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAutoScalingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAutoScalingConfigurationOutcomeCallable AppRunnerClient::CreateAutoScalingConfigurationCallable(const CreateAutoScalingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAutoScalingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAutoScalingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::CreateAutoScalingConfigurationAsync(const CreateAutoScalingConfigurationRequest& request, const CreateAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAutoScalingConfiguration(request), context);
    } );
}

CreateConnectionOutcome AppRunnerClient::CreateConnection(const CreateConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectionOutcomeCallable AppRunnerClient::CreateConnectionCallable(const CreateConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::CreateConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateConnection(request), context);
    } );
}

CreateObservabilityConfigurationOutcome AppRunnerClient::CreateObservabilityConfiguration(const CreateObservabilityConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateObservabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateObservabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateObservabilityConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateObservabilityConfigurationOutcomeCallable AppRunnerClient::CreateObservabilityConfigurationCallable(const CreateObservabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateObservabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateObservabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::CreateObservabilityConfigurationAsync(const CreateObservabilityConfigurationRequest& request, const CreateObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateObservabilityConfiguration(request), context);
    } );
}

CreateServiceOutcome AppRunnerClient::CreateService(const CreateServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceOutcomeCallable AppRunnerClient::CreateServiceCallable(const CreateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::CreateServiceAsync(const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateService(request), context);
    } );
}

CreateVpcConnectorOutcome AppRunnerClient::CreateVpcConnector(const CreateVpcConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpcConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVpcConnectorOutcomeCallable AppRunnerClient::CreateVpcConnectorCallable(const CreateVpcConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::CreateVpcConnectorAsync(const CreateVpcConnectorRequest& request, const CreateVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVpcConnector(request), context);
    } );
}

CreateVpcIngressConnectionOutcome AppRunnerClient::CreateVpcIngressConnection(const CreateVpcIngressConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVpcIngressConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVpcIngressConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVpcIngressConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVpcIngressConnectionOutcomeCallable AppRunnerClient::CreateVpcIngressConnectionCallable(const CreateVpcIngressConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcIngressConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcIngressConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::CreateVpcIngressConnectionAsync(const CreateVpcIngressConnectionRequest& request, const CreateVpcIngressConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateVpcIngressConnection(request), context);
    } );
}

DeleteAutoScalingConfigurationOutcome AppRunnerClient::DeleteAutoScalingConfiguration(const DeleteAutoScalingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAutoScalingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAutoScalingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAutoScalingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAutoScalingConfigurationOutcomeCallable AppRunnerClient::DeleteAutoScalingConfigurationCallable(const DeleteAutoScalingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAutoScalingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAutoScalingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DeleteAutoScalingConfigurationAsync(const DeleteAutoScalingConfigurationRequest& request, const DeleteAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAutoScalingConfiguration(request), context);
    } );
}

DeleteConnectionOutcome AppRunnerClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectionOutcomeCallable AppRunnerClient::DeleteConnectionCallable(const DeleteConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteConnection(request), context);
    } );
}

DeleteObservabilityConfigurationOutcome AppRunnerClient::DeleteObservabilityConfiguration(const DeleteObservabilityConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObservabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteObservabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteObservabilityConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteObservabilityConfigurationOutcomeCallable AppRunnerClient::DeleteObservabilityConfigurationCallable(const DeleteObservabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteObservabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteObservabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DeleteObservabilityConfigurationAsync(const DeleteObservabilityConfigurationRequest& request, const DeleteObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteObservabilityConfiguration(request), context);
    } );
}

DeleteServiceOutcome AppRunnerClient::DeleteService(const DeleteServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceOutcomeCallable AppRunnerClient::DeleteServiceCallable(const DeleteServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DeleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteService(request), context);
    } );
}

DeleteVpcConnectorOutcome AppRunnerClient::DeleteVpcConnector(const DeleteVpcConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpcConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVpcConnectorOutcomeCallable AppRunnerClient::DeleteVpcConnectorCallable(const DeleteVpcConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DeleteVpcConnectorAsync(const DeleteVpcConnectorRequest& request, const DeleteVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVpcConnector(request), context);
    } );
}

DeleteVpcIngressConnectionOutcome AppRunnerClient::DeleteVpcIngressConnection(const DeleteVpcIngressConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVpcIngressConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVpcIngressConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVpcIngressConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVpcIngressConnectionOutcomeCallable AppRunnerClient::DeleteVpcIngressConnectionCallable(const DeleteVpcIngressConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcIngressConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcIngressConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DeleteVpcIngressConnectionAsync(const DeleteVpcIngressConnectionRequest& request, const DeleteVpcIngressConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteVpcIngressConnection(request), context);
    } );
}

DescribeAutoScalingConfigurationOutcome AppRunnerClient::DescribeAutoScalingConfiguration(const DescribeAutoScalingConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAutoScalingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAutoScalingConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAutoScalingConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAutoScalingConfigurationOutcomeCallable AppRunnerClient::DescribeAutoScalingConfigurationCallable(const DescribeAutoScalingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAutoScalingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAutoScalingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DescribeAutoScalingConfigurationAsync(const DescribeAutoScalingConfigurationRequest& request, const DescribeAutoScalingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAutoScalingConfiguration(request), context);
    } );
}

DescribeCustomDomainsOutcome AppRunnerClient::DescribeCustomDomains(const DescribeCustomDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCustomDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCustomDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCustomDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCustomDomainsOutcomeCallable AppRunnerClient::DescribeCustomDomainsCallable(const DescribeCustomDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCustomDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCustomDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DescribeCustomDomainsAsync(const DescribeCustomDomainsRequest& request, const DescribeCustomDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCustomDomains(request), context);
    } );
}

DescribeObservabilityConfigurationOutcome AppRunnerClient::DescribeObservabilityConfiguration(const DescribeObservabilityConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeObservabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeObservabilityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeObservabilityConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeObservabilityConfigurationOutcomeCallable AppRunnerClient::DescribeObservabilityConfigurationCallable(const DescribeObservabilityConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeObservabilityConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeObservabilityConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DescribeObservabilityConfigurationAsync(const DescribeObservabilityConfigurationRequest& request, const DescribeObservabilityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeObservabilityConfiguration(request), context);
    } );
}

DescribeServiceOutcome AppRunnerClient::DescribeService(const DescribeServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeServiceOutcomeCallable AppRunnerClient::DescribeServiceCallable(const DescribeServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DescribeServiceAsync(const DescribeServiceRequest& request, const DescribeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeService(request), context);
    } );
}

DescribeVpcConnectorOutcome AppRunnerClient::DescribeVpcConnector(const DescribeVpcConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeVpcConnectorOutcomeCallable AppRunnerClient::DescribeVpcConnectorCallable(const DescribeVpcConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DescribeVpcConnectorAsync(const DescribeVpcConnectorRequest& request, const DescribeVpcConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeVpcConnector(request), context);
    } );
}

DescribeVpcIngressConnectionOutcome AppRunnerClient::DescribeVpcIngressConnection(const DescribeVpcIngressConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVpcIngressConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVpcIngressConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeVpcIngressConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeVpcIngressConnectionOutcomeCallable AppRunnerClient::DescribeVpcIngressConnectionCallable(const DescribeVpcIngressConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVpcIngressConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVpcIngressConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DescribeVpcIngressConnectionAsync(const DescribeVpcIngressConnectionRequest& request, const DescribeVpcIngressConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeVpcIngressConnection(request), context);
    } );
}

DisassociateCustomDomainOutcome AppRunnerClient::DisassociateCustomDomain(const DisassociateCustomDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateCustomDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateCustomDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateCustomDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateCustomDomainOutcomeCallable AppRunnerClient::DisassociateCustomDomainCallable(const DisassociateCustomDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateCustomDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateCustomDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::DisassociateCustomDomainAsync(const DisassociateCustomDomainRequest& request, const DisassociateCustomDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateCustomDomain(request), context);
    } );
}

ListAutoScalingConfigurationsOutcome AppRunnerClient::ListAutoScalingConfigurations(const ListAutoScalingConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAutoScalingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAutoScalingConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAutoScalingConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAutoScalingConfigurationsOutcomeCallable AppRunnerClient::ListAutoScalingConfigurationsCallable(const ListAutoScalingConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAutoScalingConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAutoScalingConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListAutoScalingConfigurationsAsync(const ListAutoScalingConfigurationsRequest& request, const ListAutoScalingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAutoScalingConfigurations(request), context);
    } );
}

ListConnectionsOutcome AppRunnerClient::ListConnections(const ListConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConnectionsOutcomeCallable AppRunnerClient::ListConnectionsCallable(const ListConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListConnectionsAsync(const ListConnectionsRequest& request, const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListConnections(request), context);
    } );
}

ListObservabilityConfigurationsOutcome AppRunnerClient::ListObservabilityConfigurations(const ListObservabilityConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListObservabilityConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListObservabilityConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListObservabilityConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListObservabilityConfigurationsOutcomeCallable AppRunnerClient::ListObservabilityConfigurationsCallable(const ListObservabilityConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListObservabilityConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListObservabilityConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListObservabilityConfigurationsAsync(const ListObservabilityConfigurationsRequest& request, const ListObservabilityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListObservabilityConfigurations(request), context);
    } );
}

ListOperationsOutcome AppRunnerClient::ListOperations(const ListOperationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListOperationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOperationsOutcomeCallable AppRunnerClient::ListOperationsCallable(const ListOperationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOperationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOperations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListOperationsAsync(const ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListOperations(request), context);
    } );
}

ListServicesOutcome AppRunnerClient::ListServices(const ListServicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListServicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServicesOutcomeCallable AppRunnerClient::ListServicesCallable(const ListServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListServicesAsync(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServices(request), context);
    } );
}

ListTagsForResourceOutcome AppRunnerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppRunnerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListVpcConnectorsOutcome AppRunnerClient::ListVpcConnectors(const ListVpcConnectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVpcConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVpcConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListVpcConnectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVpcConnectorsOutcomeCallable AppRunnerClient::ListVpcConnectorsCallable(const ListVpcConnectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVpcConnectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVpcConnectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListVpcConnectorsAsync(const ListVpcConnectorsRequest& request, const ListVpcConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVpcConnectors(request), context);
    } );
}

ListVpcIngressConnectionsOutcome AppRunnerClient::ListVpcIngressConnections(const ListVpcIngressConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVpcIngressConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVpcIngressConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListVpcIngressConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVpcIngressConnectionsOutcomeCallable AppRunnerClient::ListVpcIngressConnectionsCallable(const ListVpcIngressConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVpcIngressConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVpcIngressConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ListVpcIngressConnectionsAsync(const ListVpcIngressConnectionsRequest& request, const ListVpcIngressConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListVpcIngressConnections(request), context);
    } );
}

PauseServiceOutcome AppRunnerClient::PauseService(const PauseServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PauseService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PauseService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PauseServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PauseServiceOutcomeCallable AppRunnerClient::PauseServiceCallable(const PauseServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PauseServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PauseService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::PauseServiceAsync(const PauseServiceRequest& request, const PauseServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PauseService(request), context);
    } );
}

ResumeServiceOutcome AppRunnerClient::ResumeService(const ResumeServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResumeService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResumeService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResumeServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResumeServiceOutcomeCallable AppRunnerClient::ResumeServiceCallable(const ResumeServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResumeServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResumeService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::ResumeServiceAsync(const ResumeServiceRequest& request, const ResumeServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResumeService(request), context);
    } );
}

StartDeploymentOutcome AppRunnerClient::StartDeployment(const StartDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDeploymentOutcomeCallable AppRunnerClient::StartDeploymentCallable(const StartDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::StartDeploymentAsync(const StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartDeployment(request), context);
    } );
}

TagResourceOutcome AppRunnerClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppRunnerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome AppRunnerClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppRunnerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateServiceOutcome AppRunnerClient::UpdateService(const UpdateServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceOutcomeCallable AppRunnerClient::UpdateServiceCallable(const UpdateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::UpdateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateService(request), context);
    } );
}

UpdateVpcIngressConnectionOutcome AppRunnerClient::UpdateVpcIngressConnection(const UpdateVpcIngressConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVpcIngressConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVpcIngressConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateVpcIngressConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVpcIngressConnectionOutcomeCallable AppRunnerClient::UpdateVpcIngressConnectionCallable(const UpdateVpcIngressConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVpcIngressConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVpcIngressConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRunnerClient::UpdateVpcIngressConnectionAsync(const UpdateVpcIngressConnectionRequest& request, const UpdateVpcIngressConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateVpcIngressConnection(request), context);
    } );
}

