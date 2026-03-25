/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/directory-service-data/DirectoryServiceDataClient.h>
#include <aws/directory-service-data/DirectoryServiceDataEndpointProvider.h>
#include <aws/directory-service-data/DirectoryServiceDataErrorMarshaller.h>
#include <aws/directory-service-data/model/AddGroupMemberRequest.h>
#include <aws/directory-service-data/model/CreateGroupRequest.h>
#include <aws/directory-service-data/model/CreateUserRequest.h>
#include <aws/directory-service-data/model/DeleteGroupRequest.h>
#include <aws/directory-service-data/model/DeleteUserRequest.h>
#include <aws/directory-service-data/model/DescribeGroupRequest.h>
#include <aws/directory-service-data/model/DescribeUserRequest.h>
#include <aws/directory-service-data/model/DisableUserRequest.h>
#include <aws/directory-service-data/model/ListGroupMembersRequest.h>
#include <aws/directory-service-data/model/ListGroupsForMemberRequest.h>
#include <aws/directory-service-data/model/ListGroupsRequest.h>
#include <aws/directory-service-data/model/ListUsersRequest.h>
#include <aws/directory-service-data/model/RemoveGroupMemberRequest.h>
#include <aws/directory-service-data/model/SearchGroupsRequest.h>
#include <aws/directory-service-data/model/SearchUsersRequest.h>
#include <aws/directory-service-data/model/UpdateGroupRequest.h>
#include <aws/directory-service-data/model/UpdateUserRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DirectoryServiceData;
using namespace Aws::DirectoryServiceData::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DirectoryServiceData {
const char SERVICE_NAME[] = "ds-data";
const char ALLOCATION_TAG[] = "DirectoryServiceDataClient";
}  // namespace DirectoryServiceData
}  // namespace Aws
const char* DirectoryServiceDataClient::GetServiceName() { return SERVICE_NAME; }
const char* DirectoryServiceDataClient::GetAllocationTag() { return ALLOCATION_TAG; }

DirectoryServiceDataClient::DirectoryServiceDataClient(
    const DirectoryServiceData::DirectoryServiceDataClientConfiguration& clientConfiguration,
    std::shared_ptr<DirectoryServiceDataEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectoryServiceDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<DirectoryServiceDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DirectoryServiceDataClient::DirectoryServiceDataClient(
    const AWSCredentials& credentials, std::shared_ptr<DirectoryServiceDataEndpointProviderBase> endpointProvider,
    const DirectoryServiceData::DirectoryServiceDataClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectoryServiceDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<DirectoryServiceDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DirectoryServiceDataClient::DirectoryServiceDataClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<DirectoryServiceDataEndpointProviderBase> endpointProvider,
    const DirectoryServiceData::DirectoryServiceDataClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectoryServiceDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<DirectoryServiceDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DirectoryServiceDataClient::DirectoryServiceDataClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectoryServiceDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DirectoryServiceDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DirectoryServiceDataClient::DirectoryServiceDataClient(const AWSCredentials& credentials,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectoryServiceDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DirectoryServiceDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DirectoryServiceDataClient::DirectoryServiceDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectoryServiceDataErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DirectoryServiceDataEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DirectoryServiceDataClient::~DirectoryServiceDataClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DirectoryServiceDataEndpointProviderBase>& DirectoryServiceDataClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void DirectoryServiceDataClient::init(const DirectoryServiceData::DirectoryServiceDataClientConfiguration& config) {
  AWSClient::SetServiceClientName("Directory Service Data");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ds-data");
}

void DirectoryServiceDataClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DirectoryServiceDataClient::InvokeOperationOutcome DirectoryServiceDataClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AddGroupMemberOutcome DirectoryServiceDataClient::AddGroupMember(const AddGroupMemberRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddGroupMember", "Required field: DirectoryId, is not set");
    return AddGroupMemberOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GroupMemberships/AddGroupMember");
  };

  return AddGroupMemberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGroupOutcome DirectoryServiceDataClient::CreateGroup(const CreateGroupRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGroup", "Required field: DirectoryId, is not set");
    return CreateGroupOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Groups/CreateGroup");
  };

  return CreateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserOutcome DirectoryServiceDataClient::CreateUser(const CreateUserRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: DirectoryId, is not set");
    return CreateUserOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Users/CreateUser");
  };

  return CreateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGroupOutcome DirectoryServiceDataClient::DeleteGroup(const DeleteGroupRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: DirectoryId, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Groups/DeleteGroup");
  };

  return DeleteGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserOutcome DirectoryServiceDataClient::DeleteUser(const DeleteUserRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: DirectoryId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Users/DeleteUser");
  };

  return DeleteUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGroupOutcome DirectoryServiceDataClient::DescribeGroup(const DescribeGroupRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGroup", "Required field: DirectoryId, is not set");
    return DescribeGroupOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Groups/DescribeGroup");
  };

  return DescribeGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUserOutcome DirectoryServiceDataClient::DescribeUser(const DescribeUserRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: DirectoryId, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Users/DescribeUser");
  };

  return DescribeUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableUserOutcome DirectoryServiceDataClient::DisableUser(const DisableUserRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisableUser", "Required field: DirectoryId, is not set");
    return DisableUserOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Users/DisableUser");
  };

  return DisableUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupMembersOutcome DirectoryServiceDataClient::ListGroupMembers(const ListGroupMembersRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGroupMembers", "Required field: DirectoryId, is not set");
    return ListGroupMembersOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GroupMemberships/ListGroupMembers");
  };

  return ListGroupMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupsOutcome DirectoryServiceDataClient::ListGroups(const ListGroupsRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGroups", "Required field: DirectoryId, is not set");
    return ListGroupsOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Groups/ListGroups");
  };

  return ListGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupsForMemberOutcome DirectoryServiceDataClient::ListGroupsForMember(const ListGroupsForMemberRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGroupsForMember", "Required field: DirectoryId, is not set");
    return ListGroupsForMemberOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GroupMemberships/ListGroupsForMember");
  };

  return ListGroupsForMemberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUsersOutcome DirectoryServiceDataClient::ListUsers(const ListUsersRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: DirectoryId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Users/ListUsers");
  };

  return ListUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveGroupMemberOutcome DirectoryServiceDataClient::RemoveGroupMember(const RemoveGroupMemberRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveGroupMember", "Required field: DirectoryId, is not set");
    return RemoveGroupMemberOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GroupMemberships/RemoveGroupMember");
  };

  return RemoveGroupMemberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchGroupsOutcome DirectoryServiceDataClient::SearchGroups(const SearchGroupsRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchGroups", "Required field: DirectoryId, is not set");
    return SearchGroupsOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Groups/SearchGroups");
  };

  return SearchGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchUsersOutcome DirectoryServiceDataClient::SearchUsers(const SearchUsersRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchUsers", "Required field: DirectoryId, is not set");
    return SearchUsersOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Users/SearchUsers");
  };

  return SearchUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGroupOutcome DirectoryServiceDataClient::UpdateGroup(const UpdateGroupRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: DirectoryId, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Groups/UpdateGroup");
  };

  return UpdateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUserOutcome DirectoryServiceDataClient::UpdateUser(const UpdateUserRequest& request) const {
  if (!request.DirectoryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: DirectoryId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<DirectoryServiceDataErrors>(
        DirectoryServiceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/Users/UpdateUser");
  };

  return UpdateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
