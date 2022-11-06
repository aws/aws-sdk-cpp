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

#include <aws/serverlessrepo/ServerlessApplicationRepositoryClient.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryErrorMarshaller.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryEndpointProvider.h>
#include <aws/serverlessrepo/model/CreateApplicationRequest.h>
#include <aws/serverlessrepo/model/CreateApplicationVersionRequest.h>
#include <aws/serverlessrepo/model/CreateCloudFormationChangeSetRequest.h>
#include <aws/serverlessrepo/model/CreateCloudFormationTemplateRequest.h>
#include <aws/serverlessrepo/model/DeleteApplicationRequest.h>
#include <aws/serverlessrepo/model/GetApplicationRequest.h>
#include <aws/serverlessrepo/model/GetApplicationPolicyRequest.h>
#include <aws/serverlessrepo/model/GetCloudFormationTemplateRequest.h>
#include <aws/serverlessrepo/model/ListApplicationDependenciesRequest.h>
#include <aws/serverlessrepo/model/ListApplicationVersionsRequest.h>
#include <aws/serverlessrepo/model/ListApplicationsRequest.h>
#include <aws/serverlessrepo/model/PutApplicationPolicyRequest.h>
#include <aws/serverlessrepo/model/UnshareApplicationRequest.h>
#include <aws/serverlessrepo/model/UpdateApplicationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ServerlessApplicationRepository;
using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ServerlessApplicationRepositoryClient::SERVICE_NAME = "serverlessrepo";
const char* ServerlessApplicationRepositoryClient::ALLOCATION_TAG = "ServerlessApplicationRepositoryClient";

ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(const ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration& clientConfiguration,
                                                                             std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServerlessApplicationRepositoryErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(const AWSCredentials& credentials,
                                                                             std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase> endpointProvider,
                                                                             const ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServerlessApplicationRepositoryErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                             std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase> endpointProvider,
                                                                             const ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServerlessApplicationRepositoryErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServerlessApplicationRepositoryErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ServerlessApplicationRepositoryEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(const AWSCredentials& credentials,
                                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServerlessApplicationRepositoryErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ServerlessApplicationRepositoryEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ServerlessApplicationRepositoryClient::ServerlessApplicationRepositoryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServerlessApplicationRepositoryErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ServerlessApplicationRepositoryEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ServerlessApplicationRepositoryClient::~ServerlessApplicationRepositoryClient()
{
}

std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase>& ServerlessApplicationRepositoryClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ServerlessApplicationRepositoryClient::init(const ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ServerlessApplicationRepository");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ServerlessApplicationRepositoryClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateApplicationOutcome ServerlessApplicationRepositoryClient::CreateApplication(const CreateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  return CreateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable ServerlessApplicationRepositoryClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApplication(request), context);
    } );
}

CreateApplicationVersionOutcome ServerlessApplicationRepositoryClient::CreateApplicationVersion(const CreateApplicationVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateApplicationVersion", "Required field: ApplicationId, is not set");
    return CreateApplicationVersionOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.SemanticVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateApplicationVersion", "Required field: SemanticVersion, is not set");
    return CreateApplicationVersionOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SemanticVersion]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApplicationVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSemanticVersion());
  return CreateApplicationVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationVersionOutcomeCallable ServerlessApplicationRepositoryClient::CreateApplicationVersionCallable(const CreateApplicationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplicationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::CreateApplicationVersionAsync(const CreateApplicationVersionRequest& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApplicationVersion(request), context);
    } );
}

CreateCloudFormationChangeSetOutcome ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSet(const CreateCloudFormationChangeSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCloudFormationChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCloudFormationChangeSet", "Required field: ApplicationId, is not set");
    return CreateCloudFormationChangeSetOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCloudFormationChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/changesets");
  return CreateCloudFormationChangeSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCloudFormationChangeSetOutcomeCallable ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSetCallable(const CreateCloudFormationChangeSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFormationChangeSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFormationChangeSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSetAsync(const CreateCloudFormationChangeSetRequest& request, const CreateCloudFormationChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCloudFormationChangeSet(request), context);
    } );
}

CreateCloudFormationTemplateOutcome ServerlessApplicationRepositoryClient::CreateCloudFormationTemplate(const CreateCloudFormationTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCloudFormationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateCloudFormationTemplate", "Required field: ApplicationId, is not set");
    return CreateCloudFormationTemplateOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCloudFormationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates");
  return CreateCloudFormationTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCloudFormationTemplateOutcomeCallable ServerlessApplicationRepositoryClient::CreateCloudFormationTemplateCallable(const CreateCloudFormationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFormationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFormationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::CreateCloudFormationTemplateAsync(const CreateCloudFormationTemplateRequest& request, const CreateCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCloudFormationTemplate(request), context);
    } );
}

DeleteApplicationOutcome ServerlessApplicationRepositoryClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: ApplicationId, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  return DeleteApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable ServerlessApplicationRepositoryClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApplication(request), context);
    } );
}

GetApplicationOutcome ServerlessApplicationRepositoryClient::GetApplication(const GetApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: ApplicationId, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  return GetApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationOutcomeCallable ServerlessApplicationRepositoryClient::GetApplicationCallable(const GetApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::GetApplicationAsync(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApplication(request), context);
    } );
}

GetApplicationPolicyOutcome ServerlessApplicationRepositoryClient::GetApplicationPolicy(const GetApplicationPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApplicationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplicationPolicy", "Required field: ApplicationId, is not set");
    return GetApplicationPolicyOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApplicationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return GetApplicationPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationPolicyOutcomeCallable ServerlessApplicationRepositoryClient::GetApplicationPolicyCallable(const GetApplicationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::GetApplicationPolicyAsync(const GetApplicationPolicyRequest& request, const GetApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApplicationPolicy(request), context);
    } );
}

GetCloudFormationTemplateOutcome ServerlessApplicationRepositoryClient::GetCloudFormationTemplate(const GetCloudFormationTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCloudFormationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCloudFormationTemplate", "Required field: ApplicationId, is not set");
    return GetCloudFormationTemplateOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCloudFormationTemplate", "Required field: TemplateId, is not set");
    return GetCloudFormationTemplateOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCloudFormationTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return GetCloudFormationTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCloudFormationTemplateOutcomeCallable ServerlessApplicationRepositoryClient::GetCloudFormationTemplateCallable(const GetCloudFormationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFormationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFormationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::GetCloudFormationTemplateAsync(const GetCloudFormationTemplateRequest& request, const GetCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCloudFormationTemplate(request), context);
    } );
}

ListApplicationDependenciesOutcome ServerlessApplicationRepositoryClient::ListApplicationDependencies(const ListApplicationDependenciesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplicationDependencies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApplicationDependencies", "Required field: ApplicationId, is not set");
    return ListApplicationDependenciesOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplicationDependencies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dependencies");
  return ListApplicationDependenciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationDependenciesOutcomeCallable ServerlessApplicationRepositoryClient::ListApplicationDependenciesCallable(const ListApplicationDependenciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationDependenciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationDependencies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::ListApplicationDependenciesAsync(const ListApplicationDependenciesRequest& request, const ListApplicationDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApplicationDependencies(request), context);
    } );
}

ListApplicationVersionsOutcome ServerlessApplicationRepositoryClient::ListApplicationVersions(const ListApplicationVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplicationVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApplicationVersions", "Required field: ApplicationId, is not set");
    return ListApplicationVersionsOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplicationVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListApplicationVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationVersionsOutcomeCallable ServerlessApplicationRepositoryClient::ListApplicationVersionsCallable(const ListApplicationVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::ListApplicationVersionsAsync(const ListApplicationVersionsRequest& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApplicationVersions(request), context);
    } );
}

ListApplicationsOutcome ServerlessApplicationRepositoryClient::ListApplications(const ListApplicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  return ListApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationsOutcomeCallable ServerlessApplicationRepositoryClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApplications(request), context);
    } );
}

PutApplicationPolicyOutcome ServerlessApplicationRepositoryClient::PutApplicationPolicy(const PutApplicationPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutApplicationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutApplicationPolicy", "Required field: ApplicationId, is not set");
    return PutApplicationPolicyOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutApplicationPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return PutApplicationPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutApplicationPolicyOutcomeCallable ServerlessApplicationRepositoryClient::PutApplicationPolicyCallable(const PutApplicationPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutApplicationPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutApplicationPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::PutApplicationPolicyAsync(const PutApplicationPolicyRequest& request, const PutApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutApplicationPolicy(request), context);
    } );
}

UnshareApplicationOutcome ServerlessApplicationRepositoryClient::UnshareApplication(const UnshareApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnshareApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnshareApplication", "Required field: ApplicationId, is not set");
    return UnshareApplicationOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnshareApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/unshare");
  return UnshareApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnshareApplicationOutcomeCallable ServerlessApplicationRepositoryClient::UnshareApplicationCallable(const UnshareApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnshareApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnshareApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::UnshareApplicationAsync(const UnshareApplicationRequest& request, const UnshareApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UnshareApplication(request), context);
    } );
}

UpdateApplicationOutcome ServerlessApplicationRepositoryClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: ApplicationId, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<ServerlessApplicationRepositoryErrors>(ServerlessApplicationRepositoryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  return UpdateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable ServerlessApplicationRepositoryClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServerlessApplicationRepositoryClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApplication(request), context);
    } );
}

