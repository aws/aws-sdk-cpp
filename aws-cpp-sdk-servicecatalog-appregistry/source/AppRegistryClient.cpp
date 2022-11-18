/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
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

#include <aws/servicecatalog-appregistry/AppRegistryClient.h>
#include <aws/servicecatalog-appregistry/AppRegistryErrorMarshaller.h>
#include <aws/servicecatalog-appregistry/AppRegistryEndpointProvider.h>
#include <aws/servicecatalog-appregistry/model/AssociateAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/AssociateResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/CreateApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/CreateAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/DeleteApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/DeleteAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/DisassociateAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/DisassociateResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/GetApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/GetAssociatedResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/GetAttributeGroupRequest.h>
#include <aws/servicecatalog-appregistry/model/ListApplicationsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedAttributeGroupsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedResourcesRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsRequest.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsForApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/ListTagsForResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/PutConfigurationRequest.h>
#include <aws/servicecatalog-appregistry/model/SyncResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/TagResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/UntagResourceRequest.h>
#include <aws/servicecatalog-appregistry/model/UpdateApplicationRequest.h>
#include <aws/servicecatalog-appregistry/model/UpdateAttributeGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppRegistry;
using namespace Aws::AppRegistry::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AppRegistryClient::SERVICE_NAME = "servicecatalog";
const char* AppRegistryClient::ALLOCATION_TAG = "AppRegistryClient";

AppRegistryClient::AppRegistryClient(const AppRegistry::AppRegistryClientConfiguration& clientConfiguration,
                                     std::shared_ptr<AppRegistryEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppRegistryClient::AppRegistryClient(const AWSCredentials& credentials,
                                     std::shared_ptr<AppRegistryEndpointProviderBase> endpointProvider,
                                     const AppRegistry::AppRegistryClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppRegistryClient::AppRegistryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<AppRegistryEndpointProviderBase> endpointProvider,
                                     const AppRegistry::AppRegistryClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AppRegistryClient::AppRegistryClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AppRegistryEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppRegistryClient::AppRegistryClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppRegistryEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppRegistryClient::AppRegistryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppRegistryErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppRegistryEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AppRegistryClient::~AppRegistryClient()
{
}

std::shared_ptr<AppRegistryEndpointProviderBase>& AppRegistryClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AppRegistryClient::init(const AppRegistry::AppRegistryClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Service Catalog AppRegistry");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AppRegistryClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateAttributeGroupOutcome AppRegistryClient::AssociateAttributeGroup(const AssociateAttributeGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateAttributeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateAttributeGroup", "Required field: Application, is not set");
    return AssociateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  if (!request.AttributeGroupHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateAttributeGroup", "Required field: AttributeGroup, is not set");
    return AssociateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeGroup]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateAttributeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeGroup());
  return AssociateAttributeGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateAttributeGroupOutcomeCallable AppRegistryClient::AssociateAttributeGroupCallable(const AssociateAttributeGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(AssociateAttributeGroup, request, m_executor.get());
}

void AppRegistryClient::AssociateAttributeGroupAsync(const AssociateAttributeGroupRequest& request, const AssociateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(AssociateAttributeGroup, request, handler, context, m_executor.get());
}

AssociateResourceOutcome AppRegistryClient::AssociateResource(const AssociateResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateResource", "Required field: Application, is not set");
    return AssociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateResource", "Required field: ResourceType, is not set");
    return AssociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateResource", "Required field: Resource, is not set");
    return AssociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(ResourceTypeMapper::GetNameForResourceType(request.GetResourceType()));
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  return AssociateResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateResourceOutcomeCallable AppRegistryClient::AssociateResourceCallable(const AssociateResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(AssociateResource, request, m_executor.get());
}

void AppRegistryClient::AssociateResourceAsync(const AssociateResourceRequest& request, const AssociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(AssociateResource, request, handler, context, m_executor.get());
}

CreateApplicationOutcome AppRegistryClient::CreateApplication(const CreateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  return CreateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable AppRegistryClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateApplication, request, m_executor.get());
}

void AppRegistryClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateApplication, request, handler, context, m_executor.get());
}

CreateAttributeGroupOutcome AppRegistryClient::CreateAttributeGroup(const CreateAttributeGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAttributeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAttributeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups");
  return CreateAttributeGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAttributeGroupOutcomeCallable AppRegistryClient::CreateAttributeGroupCallable(const CreateAttributeGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateAttributeGroup, request, m_executor.get());
}

void AppRegistryClient::CreateAttributeGroupAsync(const CreateAttributeGroupRequest& request, const CreateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateAttributeGroup, request, handler, context, m_executor.get());
}

DeleteApplicationOutcome AppRegistryClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: Application, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  return DeleteApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable AppRegistryClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteApplication, request, m_executor.get());
}

void AppRegistryClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteApplication, request, handler, context, m_executor.get());
}

DeleteAttributeGroupOutcome AppRegistryClient::DeleteAttributeGroup(const DeleteAttributeGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAttributeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AttributeGroupHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAttributeGroup", "Required field: AttributeGroup, is not set");
    return DeleteAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeGroup]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAttributeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeGroup());
  return DeleteAttributeGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAttributeGroupOutcomeCallable AppRegistryClient::DeleteAttributeGroupCallable(const DeleteAttributeGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteAttributeGroup, request, m_executor.get());
}

void AppRegistryClient::DeleteAttributeGroupAsync(const DeleteAttributeGroupRequest& request, const DeleteAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteAttributeGroup, request, handler, context, m_executor.get());
}

DisassociateAttributeGroupOutcome AppRegistryClient::DisassociateAttributeGroup(const DisassociateAttributeGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateAttributeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAttributeGroup", "Required field: Application, is not set");
    return DisassociateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  if (!request.AttributeGroupHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateAttributeGroup", "Required field: AttributeGroup, is not set");
    return DisassociateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeGroup]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateAttributeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeGroup());
  return DisassociateAttributeGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateAttributeGroupOutcomeCallable AppRegistryClient::DisassociateAttributeGroupCallable(const DisassociateAttributeGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DisassociateAttributeGroup, request, m_executor.get());
}

void AppRegistryClient::DisassociateAttributeGroupAsync(const DisassociateAttributeGroupRequest& request, const DisassociateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DisassociateAttributeGroup, request, handler, context, m_executor.get());
}

DisassociateResourceOutcome AppRegistryClient::DisassociateResource(const DisassociateResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateResource", "Required field: Application, is not set");
    return DisassociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateResource", "Required field: ResourceType, is not set");
    return DisassociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateResource", "Required field: Resource, is not set");
    return DisassociateResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(ResourceTypeMapper::GetNameForResourceType(request.GetResourceType()));
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  return DisassociateResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateResourceOutcomeCallable AppRegistryClient::DisassociateResourceCallable(const DisassociateResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DisassociateResource, request, m_executor.get());
}

void AppRegistryClient::DisassociateResourceAsync(const DisassociateResourceRequest& request, const DisassociateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DisassociateResource, request, handler, context, m_executor.get());
}

GetApplicationOutcome AppRegistryClient::GetApplication(const GetApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: Application, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  return GetApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationOutcomeCallable AppRegistryClient::GetApplicationCallable(const GetApplicationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetApplication, request, m_executor.get());
}

void AppRegistryClient::GetApplicationAsync(const GetApplicationRequest& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetApplication, request, handler, context, m_executor.get());
}

GetAssociatedResourceOutcome AppRegistryClient::GetAssociatedResource(const GetAssociatedResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAssociatedResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssociatedResource", "Required field: Application, is not set");
    return GetAssociatedResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssociatedResource", "Required field: ResourceType, is not set");
    return GetAssociatedResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssociatedResource", "Required field: Resource, is not set");
    return GetAssociatedResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAssociatedResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(ResourceTypeMapper::GetNameForResourceType(request.GetResourceType()));
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  return GetAssociatedResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssociatedResourceOutcomeCallable AppRegistryClient::GetAssociatedResourceCallable(const GetAssociatedResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetAssociatedResource, request, m_executor.get());
}

void AppRegistryClient::GetAssociatedResourceAsync(const GetAssociatedResourceRequest& request, const GetAssociatedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetAssociatedResource, request, handler, context, m_executor.get());
}

GetAttributeGroupOutcome AppRegistryClient::GetAttributeGroup(const GetAttributeGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAttributeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AttributeGroupHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAttributeGroup", "Required field: AttributeGroup, is not set");
    return GetAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeGroup]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAttributeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeGroup());
  return GetAttributeGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAttributeGroupOutcomeCallable AppRegistryClient::GetAttributeGroupCallable(const GetAttributeGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetAttributeGroup, request, m_executor.get());
}

void AppRegistryClient::GetAttributeGroupAsync(const GetAttributeGroupRequest& request, const GetAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetAttributeGroup, request, handler, context, m_executor.get());
}

GetConfigurationOutcome AppRegistryClient::GetConfiguration() const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  static const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return GetConfigurationOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetConfiguration"));
}

GetConfigurationOutcomeCallable AppRegistryClient::GetConfigurationCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< GetConfigurationOutcome() > >(ALLOCATION_TAG, [this](){ return this->GetConfiguration(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppRegistryClient::GetConfigurationAsync(const GetConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context]()
    {
      handler(this, GetConfiguration(), context);
    } );
}

ListApplicationsOutcome AppRegistryClient::ListApplications(const ListApplicationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListApplications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  return ListApplicationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationsOutcomeCallable AppRegistryClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListApplications, request, m_executor.get());
}

void AppRegistryClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListApplications, request, handler, context, m_executor.get());
}

ListAssociatedAttributeGroupsOutcome AppRegistryClient::ListAssociatedAttributeGroups(const ListAssociatedAttributeGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssociatedAttributeGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssociatedAttributeGroups", "Required field: Application, is not set");
    return ListAssociatedAttributeGroupsOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssociatedAttributeGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups");
  return ListAssociatedAttributeGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedAttributeGroupsOutcomeCallable AppRegistryClient::ListAssociatedAttributeGroupsCallable(const ListAssociatedAttributeGroupsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListAssociatedAttributeGroups, request, m_executor.get());
}

void AppRegistryClient::ListAssociatedAttributeGroupsAsync(const ListAssociatedAttributeGroupsRequest& request, const ListAssociatedAttributeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListAssociatedAttributeGroups, request, handler, context, m_executor.get());
}

ListAssociatedResourcesOutcome AppRegistryClient::ListAssociatedResources(const ListAssociatedResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssociatedResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssociatedResources", "Required field: Application, is not set");
    return ListAssociatedResourcesOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssociatedResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources");
  return ListAssociatedResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssociatedResourcesOutcomeCallable AppRegistryClient::ListAssociatedResourcesCallable(const ListAssociatedResourcesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListAssociatedResources, request, m_executor.get());
}

void AppRegistryClient::ListAssociatedResourcesAsync(const ListAssociatedResourcesRequest& request, const ListAssociatedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListAssociatedResources, request, handler, context, m_executor.get());
}

ListAttributeGroupsOutcome AppRegistryClient::ListAttributeGroups(const ListAttributeGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAttributeGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAttributeGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups");
  return ListAttributeGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAttributeGroupsOutcomeCallable AppRegistryClient::ListAttributeGroupsCallable(const ListAttributeGroupsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListAttributeGroups, request, m_executor.get());
}

void AppRegistryClient::ListAttributeGroupsAsync(const ListAttributeGroupsRequest& request, const ListAttributeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListAttributeGroups, request, handler, context, m_executor.get());
}

ListAttributeGroupsForApplicationOutcome AppRegistryClient::ListAttributeGroupsForApplication(const ListAttributeGroupsForApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAttributeGroupsForApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAttributeGroupsForApplication", "Required field: Application, is not set");
    return ListAttributeGroupsForApplicationOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAttributeGroupsForApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-group-details");
  return ListAttributeGroupsForApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAttributeGroupsForApplicationOutcomeCallable AppRegistryClient::ListAttributeGroupsForApplicationCallable(const ListAttributeGroupsForApplicationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListAttributeGroupsForApplication, request, m_executor.get());
}

void AppRegistryClient::ListAttributeGroupsForApplicationAsync(const ListAttributeGroupsForApplicationRequest& request, const ListAttributeGroupsForApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListAttributeGroupsForApplication, request, handler, context, m_executor.get());
}

ListTagsForResourceOutcome AppRegistryClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppRegistryClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTagsForResource, request, m_executor.get());
}

void AppRegistryClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTagsForResource, request, handler, context, m_executor.get());
}

PutConfigurationOutcome AppRegistryClient::PutConfiguration(const PutConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return PutConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationOutcomeCallable AppRegistryClient::PutConfigurationCallable(const PutConfigurationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(PutConfiguration, request, m_executor.get());
}

void AppRegistryClient::PutConfigurationAsync(const PutConfigurationRequest& request, const PutConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(PutConfiguration, request, handler, context, m_executor.get());
}

SyncResourceOutcome AppRegistryClient::SyncResource(const SyncResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SyncResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SyncResource", "Required field: ResourceType, is not set");
    return SyncResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SyncResource", "Required field: Resource, is not set");
    return SyncResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SyncResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sync/");
  endpointResolutionOutcome.GetResult().AddPathSegment(ResourceTypeMapper::GetNameForResourceType(request.GetResourceType()));
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResource());
  return SyncResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SyncResourceOutcomeCallable AppRegistryClient::SyncResourceCallable(const SyncResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(SyncResource, request, m_executor.get());
}

void AppRegistryClient::SyncResourceAsync(const SyncResourceRequest& request, const SyncResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(SyncResource, request, handler, context, m_executor.get());
}

TagResourceOutcome AppRegistryClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppRegistryClient::TagResourceCallable(const TagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TagResource, request, m_executor.get());
}

void AppRegistryClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TagResource, request, handler, context, m_executor.get());
}

UntagResourceOutcome AppRegistryClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppRegistryClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UntagResource, request, m_executor.get());
}

void AppRegistryClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UntagResource, request, handler, context, m_executor.get());
}

UpdateApplicationOutcome AppRegistryClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ApplicationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: Application, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Application]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplication());
  return UpdateApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable AppRegistryClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateApplication, request, m_executor.get());
}

void AppRegistryClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateApplication, request, handler, context, m_executor.get());
}

UpdateAttributeGroupOutcome AppRegistryClient::UpdateAttributeGroup(const UpdateAttributeGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAttributeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AttributeGroupHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAttributeGroup", "Required field: AttributeGroup, is not set");
    return UpdateAttributeGroupOutcome(Aws::Client::AWSError<AppRegistryErrors>(AppRegistryErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AttributeGroup]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAttributeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/attribute-groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAttributeGroup());
  return UpdateAttributeGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateAttributeGroupOutcomeCallable AppRegistryClient::UpdateAttributeGroupCallable(const UpdateAttributeGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateAttributeGroup, request, m_executor.get());
}

void AppRegistryClient::UpdateAttributeGroupAsync(const UpdateAttributeGroupRequest& request, const UpdateAttributeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateAttributeGroup, request, handler, context, m_executor.get());
}

