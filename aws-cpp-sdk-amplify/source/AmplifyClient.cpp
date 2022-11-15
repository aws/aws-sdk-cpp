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

#include <aws/amplify/AmplifyClient.h>
#include <aws/amplify/AmplifyErrorMarshaller.h>
#include <aws/amplify/AmplifyEndpointProvider.h>
#include <aws/amplify/model/CreateAppRequest.h>
#include <aws/amplify/model/CreateBackendEnvironmentRequest.h>
#include <aws/amplify/model/CreateBranchRequest.h>
#include <aws/amplify/model/CreateDeploymentRequest.h>
#include <aws/amplify/model/CreateDomainAssociationRequest.h>
#include <aws/amplify/model/CreateWebhookRequest.h>
#include <aws/amplify/model/DeleteAppRequest.h>
#include <aws/amplify/model/DeleteBackendEnvironmentRequest.h>
#include <aws/amplify/model/DeleteBranchRequest.h>
#include <aws/amplify/model/DeleteDomainAssociationRequest.h>
#include <aws/amplify/model/DeleteJobRequest.h>
#include <aws/amplify/model/DeleteWebhookRequest.h>
#include <aws/amplify/model/GenerateAccessLogsRequest.h>
#include <aws/amplify/model/GetAppRequest.h>
#include <aws/amplify/model/GetArtifactUrlRequest.h>
#include <aws/amplify/model/GetBackendEnvironmentRequest.h>
#include <aws/amplify/model/GetBranchRequest.h>
#include <aws/amplify/model/GetDomainAssociationRequest.h>
#include <aws/amplify/model/GetJobRequest.h>
#include <aws/amplify/model/GetWebhookRequest.h>
#include <aws/amplify/model/ListAppsRequest.h>
#include <aws/amplify/model/ListArtifactsRequest.h>
#include <aws/amplify/model/ListBackendEnvironmentsRequest.h>
#include <aws/amplify/model/ListBranchesRequest.h>
#include <aws/amplify/model/ListDomainAssociationsRequest.h>
#include <aws/amplify/model/ListJobsRequest.h>
#include <aws/amplify/model/ListTagsForResourceRequest.h>
#include <aws/amplify/model/ListWebhooksRequest.h>
#include <aws/amplify/model/StartDeploymentRequest.h>
#include <aws/amplify/model/StartJobRequest.h>
#include <aws/amplify/model/StopJobRequest.h>
#include <aws/amplify/model/TagResourceRequest.h>
#include <aws/amplify/model/UntagResourceRequest.h>
#include <aws/amplify/model/UpdateAppRequest.h>
#include <aws/amplify/model/UpdateBranchRequest.h>
#include <aws/amplify/model/UpdateDomainAssociationRequest.h>
#include <aws/amplify/model/UpdateWebhookRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Amplify;
using namespace Aws::Amplify::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AmplifyClient::SERVICE_NAME = "amplify";
const char* AmplifyClient::ALLOCATION_TAG = "AmplifyClient";

AmplifyClient::AmplifyClient(const Amplify::AmplifyClientConfiguration& clientConfiguration,
                             std::shared_ptr<AmplifyEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AmplifyClient::AmplifyClient(const AWSCredentials& credentials,
                             std::shared_ptr<AmplifyEndpointProviderBase> endpointProvider,
                             const Amplify::AmplifyClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AmplifyClient::AmplifyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<AmplifyEndpointProviderBase> endpointProvider,
                             const Amplify::AmplifyClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AmplifyClient::AmplifyClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AmplifyEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AmplifyClient::AmplifyClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AmplifyEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AmplifyClient::AmplifyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AmplifyEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AmplifyClient::~AmplifyClient()
{
}

std::shared_ptr<AmplifyEndpointProviderBase>& AmplifyClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AmplifyClient::init(const Amplify::AmplifyClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Amplify");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AmplifyClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateAppOutcome AmplifyClient::CreateApp(const CreateAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps");
  return CreateAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppOutcomeCallable AmplifyClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApp(request), context);
    } );
}

CreateBackendEnvironmentOutcome AmplifyClient::CreateBackendEnvironment(const CreateBackendEnvironmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackendEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackendEnvironment", "Required field: AppId, is not set");
    return CreateBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackendEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backendenvironments");
  return CreateBackendEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackendEnvironmentOutcomeCallable AmplifyClient::CreateBackendEnvironmentCallable(const CreateBackendEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackendEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackendEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::CreateBackendEnvironmentAsync(const CreateBackendEnvironmentRequest& request, const CreateBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBackendEnvironment(request), context);
    } );
}

CreateBranchOutcome AmplifyClient::CreateBranch(const CreateBranchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBranch", "Required field: AppId, is not set");
    return CreateBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/branches");
  return CreateBranchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBranchOutcomeCallable AmplifyClient::CreateBranchCallable(const CreateBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::CreateBranchAsync(const CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBranch(request), context);
    } );
}

CreateDeploymentOutcome AmplifyClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: AppId, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: BranchName, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  return CreateDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentOutcomeCallable AmplifyClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDeployment(request), context);
    } );
}

CreateDomainAssociationOutcome AmplifyClient::CreateDomainAssociation(const CreateDomainAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomainAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDomainAssociation", "Required field: AppId, is not set");
    return CreateDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomainAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  return CreateDomainAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainAssociationOutcomeCallable AmplifyClient::CreateDomainAssociationCallable(const CreateDomainAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomainAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::CreateDomainAssociationAsync(const CreateDomainAssociationRequest& request, const CreateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDomainAssociation(request), context);
    } );
}

CreateWebhookOutcome AmplifyClient::CreateWebhook(const CreateWebhookRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateWebhook", "Required field: AppId, is not set");
    return CreateWebhookOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/webhooks");
  return CreateWebhookOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWebhookOutcomeCallable AmplifyClient::CreateWebhookCallable(const CreateWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::CreateWebhookAsync(const CreateWebhookRequest& request, const CreateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateWebhook(request), context);
    } );
}

DeleteAppOutcome AmplifyClient::DeleteApp(const DeleteAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApp", "Required field: AppId, is not set");
    return DeleteAppOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  return DeleteAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppOutcomeCallable AmplifyClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApp(request), context);
    } );
}

DeleteBackendEnvironmentOutcome AmplifyClient::DeleteBackendEnvironment(const DeleteBackendEnvironmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackendEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendEnvironment", "Required field: AppId, is not set");
    return DeleteBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendEnvironment", "Required field: EnvironmentName, is not set");
    return DeleteBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackendEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backendenvironments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
  return DeleteBackendEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackendEnvironmentOutcomeCallable AmplifyClient::DeleteBackendEnvironmentCallable(const DeleteBackendEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackendEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackendEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::DeleteBackendEnvironmentAsync(const DeleteBackendEnvironmentRequest& request, const DeleteBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBackendEnvironment(request), context);
    } );
}

DeleteBranchOutcome AmplifyClient::DeleteBranch(const DeleteBranchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBranch", "Required field: AppId, is not set");
    return DeleteBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBranch", "Required field: BranchName, is not set");
    return DeleteBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  return DeleteBranchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBranchOutcomeCallable AmplifyClient::DeleteBranchCallable(const DeleteBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::DeleteBranchAsync(const DeleteBranchRequest& request, const DeleteBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBranch(request), context);
    } );
}

DeleteDomainAssociationOutcome AmplifyClient::DeleteDomainAssociation(const DeleteDomainAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomainAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomainAssociation", "Required field: AppId, is not set");
    return DeleteDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomainAssociation", "Required field: DomainName, is not set");
    return DeleteDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDomainAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return DeleteDomainAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainAssociationOutcomeCallable AmplifyClient::DeleteDomainAssociationCallable(const DeleteDomainAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomainAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::DeleteDomainAssociationAsync(const DeleteDomainAssociationRequest& request, const DeleteDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDomainAssociation(request), context);
    } );
}

DeleteJobOutcome AmplifyClient::DeleteJob(const DeleteJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: AppId, is not set");
    return DeleteJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: BranchName, is not set");
    return DeleteJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: JobId, is not set");
    return DeleteJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return DeleteJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteJobOutcomeCallable AmplifyClient::DeleteJobCallable(const DeleteJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteJob(request), context);
    } );
}

DeleteWebhookOutcome AmplifyClient::DeleteWebhook(const DeleteWebhookRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WebhookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWebhook", "Required field: WebhookId, is not set");
    return DeleteWebhookOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebhookId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/webhooks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWebhookId());
  return DeleteWebhookOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWebhookOutcomeCallable AmplifyClient::DeleteWebhookCallable(const DeleteWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::DeleteWebhookAsync(const DeleteWebhookRequest& request, const DeleteWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteWebhook(request), context);
    } );
}

GenerateAccessLogsOutcome AmplifyClient::GenerateAccessLogs(const GenerateAccessLogsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateAccessLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateAccessLogs", "Required field: AppId, is not set");
    return GenerateAccessLogsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateAccessLogs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accesslogs");
  return GenerateAccessLogsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateAccessLogsOutcomeCallable AmplifyClient::GenerateAccessLogsCallable(const GenerateAccessLogsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateAccessLogsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateAccessLogs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::GenerateAccessLogsAsync(const GenerateAccessLogsRequest& request, const GenerateAccessLogsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GenerateAccessLogs(request), context);
    } );
}

GetAppOutcome AmplifyClient::GetApp(const GetAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApp", "Required field: AppId, is not set");
    return GetAppOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  return GetAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAppOutcomeCallable AmplifyClient::GetAppCallable(const GetAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::GetAppAsync(const GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApp(request), context);
    } );
}

GetArtifactUrlOutcome AmplifyClient::GetArtifactUrl(const GetArtifactUrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetArtifactUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ArtifactIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetArtifactUrl", "Required field: ArtifactId, is not set");
    return GetArtifactUrlOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ArtifactId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetArtifactUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/artifacts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArtifactId());
  return GetArtifactUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetArtifactUrlOutcomeCallable AmplifyClient::GetArtifactUrlCallable(const GetArtifactUrlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetArtifactUrlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetArtifactUrl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::GetArtifactUrlAsync(const GetArtifactUrlRequest& request, const GetArtifactUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetArtifactUrl(request), context);
    } );
}

GetBackendEnvironmentOutcome AmplifyClient::GetBackendEnvironment(const GetBackendEnvironmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackendEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendEnvironment", "Required field: AppId, is not set");
    return GetBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendEnvironment", "Required field: EnvironmentName, is not set");
    return GetBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackendEnvironment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backendenvironments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
  return GetBackendEnvironmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBackendEnvironmentOutcomeCallable AmplifyClient::GetBackendEnvironmentCallable(const GetBackendEnvironmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackendEnvironmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackendEnvironment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::GetBackendEnvironmentAsync(const GetBackendEnvironmentRequest& request, const GetBackendEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBackendEnvironment(request), context);
    } );
}

GetBranchOutcome AmplifyClient::GetBranch(const GetBranchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBranch", "Required field: AppId, is not set");
    return GetBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBranch", "Required field: BranchName, is not set");
    return GetBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  return GetBranchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBranchOutcomeCallable AmplifyClient::GetBranchCallable(const GetBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::GetBranchAsync(const GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBranch(request), context);
    } );
}

GetDomainAssociationOutcome AmplifyClient::GetDomainAssociation(const GetDomainAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomainAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainAssociation", "Required field: AppId, is not set");
    return GetDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainAssociation", "Required field: DomainName, is not set");
    return GetDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomainAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return GetDomainAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainAssociationOutcomeCallable AmplifyClient::GetDomainAssociationCallable(const GetDomainAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::GetDomainAssociationAsync(const GetDomainAssociationRequest& request, const GetDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDomainAssociation(request), context);
    } );
}

GetJobOutcome AmplifyClient::GetJob(const GetJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: AppId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: BranchName, is not set");
    return GetJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: JobId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return GetJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetJobOutcomeCallable AmplifyClient::GetJobCallable(const GetJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::GetJobAsync(const GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetJob(request), context);
    } );
}

GetWebhookOutcome AmplifyClient::GetWebhook(const GetWebhookRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WebhookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWebhook", "Required field: WebhookId, is not set");
    return GetWebhookOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebhookId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/webhooks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWebhookId());
  return GetWebhookOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWebhookOutcomeCallable AmplifyClient::GetWebhookCallable(const GetWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::GetWebhookAsync(const GetWebhookRequest& request, const GetWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWebhook(request), context);
    } );
}

ListAppsOutcome AmplifyClient::ListApps(const ListAppsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps");
  return ListAppsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAppsOutcomeCallable AmplifyClient::ListAppsCallable(const ListAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::ListAppsAsync(const ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApps(request), context);
    } );
}

ListArtifactsOutcome AmplifyClient::ListArtifacts(const ListArtifactsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListArtifacts", "Required field: AppId, is not set");
    return ListArtifactsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListArtifacts", "Required field: BranchName, is not set");
    return ListArtifactsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListArtifacts", "Required field: JobId, is not set");
    return ListArtifactsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/artifacts");
  return ListArtifactsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListArtifactsOutcomeCallable AmplifyClient::ListArtifactsCallable(const ListArtifactsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListArtifactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListArtifacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::ListArtifactsAsync(const ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListArtifacts(request), context);
    } );
}

ListBackendEnvironmentsOutcome AmplifyClient::ListBackendEnvironments(const ListBackendEnvironmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackendEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBackendEnvironments", "Required field: AppId, is not set");
    return ListBackendEnvironmentsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBackendEnvironments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backendenvironments");
  return ListBackendEnvironmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBackendEnvironmentsOutcomeCallable AmplifyClient::ListBackendEnvironmentsCallable(const ListBackendEnvironmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBackendEnvironmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBackendEnvironments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::ListBackendEnvironmentsAsync(const ListBackendEnvironmentsRequest& request, const ListBackendEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBackendEnvironments(request), context);
    } );
}

ListBranchesOutcome AmplifyClient::ListBranches(const ListBranchesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBranches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBranches", "Required field: AppId, is not set");
    return ListBranchesOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBranches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/branches");
  return ListBranchesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBranchesOutcomeCallable AmplifyClient::ListBranchesCallable(const ListBranchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBranchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBranches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::ListBranchesAsync(const ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBranches(request), context);
    } );
}

ListDomainAssociationsOutcome AmplifyClient::ListDomainAssociations(const ListDomainAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainAssociations", "Required field: AppId, is not set");
    return ListDomainAssociationsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomainAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  return ListDomainAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainAssociationsOutcomeCallable AmplifyClient::ListDomainAssociationsCallable(const ListDomainAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::ListDomainAssociationsAsync(const ListDomainAssociationsRequest& request, const ListDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDomainAssociations(request), context);
    } );
}

ListJobsOutcome AmplifyClient::ListJobs(const ListJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AppId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: BranchName, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  return ListJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListJobsOutcomeCallable AmplifyClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListJobs(request), context);
    } );
}

ListTagsForResourceOutcome AmplifyClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AmplifyClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListWebhooksOutcome AmplifyClient::ListWebhooks(const ListWebhooksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWebhooks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWebhooks", "Required field: AppId, is not set");
    return ListWebhooksOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWebhooks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/webhooks");
  return ListWebhooksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWebhooksOutcomeCallable AmplifyClient::ListWebhooksCallable(const ListWebhooksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListWebhooksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListWebhooks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::ListWebhooksAsync(const ListWebhooksRequest& request, const ListWebhooksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListWebhooks(request), context);
    } );
}

StartDeploymentOutcome AmplifyClient::StartDeployment(const StartDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDeployment", "Required field: AppId, is not set");
    return StartDeploymentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDeployment", "Required field: BranchName, is not set");
    return StartDeploymentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/start");
  return StartDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDeploymentOutcomeCallable AmplifyClient::StartDeploymentCallable(const StartDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::StartDeploymentAsync(const StartDeploymentRequest& request, const StartDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartDeployment(request), context);
    } );
}

StartJobOutcome AmplifyClient::StartJob(const StartJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartJob", "Required field: AppId, is not set");
    return StartJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartJob", "Required field: BranchName, is not set");
    return StartJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  return StartJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartJobOutcomeCallable AmplifyClient::StartJobCallable(const StartJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::StartJobAsync(const StartJobRequest& request, const StartJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartJob(request), context);
    } );
}

StopJobOutcome AmplifyClient::StopJob(const StopJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopJob", "Required field: AppId, is not set");
    return StopJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopJob", "Required field: BranchName, is not set");
    return StopJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopJob", "Required field: JobId, is not set");
    return StopJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  return StopJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

StopJobOutcomeCallable AmplifyClient::StopJobCallable(const StopJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::StopJobAsync(const StopJobRequest& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopJob(request), context);
    } );
}

TagResourceOutcome AmplifyClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AmplifyClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome AmplifyClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AmplifyClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAppOutcome AmplifyClient::UpdateApp(const UpdateAppRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApp", "Required field: AppId, is not set");
    return UpdateAppOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  return UpdateAppOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppOutcomeCallable AmplifyClient::UpdateAppCallable(const UpdateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::UpdateAppAsync(const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApp(request), context);
    } );
}

UpdateBranchOutcome AmplifyClient::UpdateBranch(const UpdateBranchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBranch", "Required field: AppId, is not set");
    return UpdateBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBranch", "Required field: BranchName, is not set");
    return UpdateBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BranchName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBranch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  return UpdateBranchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBranchOutcomeCallable AmplifyClient::UpdateBranchCallable(const UpdateBranchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBranchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBranch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::UpdateBranchAsync(const UpdateBranchRequest& request, const UpdateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBranch(request), context);
    } );
}

UpdateDomainAssociationOutcome AmplifyClient::UpdateDomainAssociation(const UpdateDomainAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomainAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainAssociation", "Required field: AppId, is not set");
    return UpdateDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainAssociation", "Required field: DomainName, is not set");
    return UpdateDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomainAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  return UpdateDomainAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainAssociationOutcomeCallable AmplifyClient::UpdateDomainAssociationCallable(const UpdateDomainAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::UpdateDomainAssociationAsync(const UpdateDomainAssociationRequest& request, const UpdateDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDomainAssociation(request), context);
    } );
}

UpdateWebhookOutcome AmplifyClient::UpdateWebhook(const UpdateWebhookRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WebhookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWebhook", "Required field: WebhookId, is not set");
    return UpdateWebhookOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebhookId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWebhook, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/webhooks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWebhookId());
  return UpdateWebhookOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWebhookOutcomeCallable AmplifyClient::UpdateWebhookCallable(const UpdateWebhookRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateWebhookOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateWebhook(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyClient::UpdateWebhookAsync(const UpdateWebhookRequest& request, const UpdateWebhookResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateWebhook(request), context);
    } );
}

