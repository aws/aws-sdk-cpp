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
#include <aws/identitystore/IdentityStoreClient.h>
#include <aws/identitystore/IdentityStoreEndpointProvider.h>
#include <aws/identitystore/IdentityStoreErrorMarshaller.h>
#include <aws/identitystore/model/CreateGroupMembershipRequest.h>
#include <aws/identitystore/model/CreateGroupRequest.h>
#include <aws/identitystore/model/CreateUserRequest.h>
#include <aws/identitystore/model/DeleteGroupMembershipRequest.h>
#include <aws/identitystore/model/DeleteGroupRequest.h>
#include <aws/identitystore/model/DeleteUserRequest.h>
#include <aws/identitystore/model/DescribeGroupMembershipRequest.h>
#include <aws/identitystore/model/DescribeGroupRequest.h>
#include <aws/identitystore/model/DescribeUserRequest.h>
#include <aws/identitystore/model/GetGroupIdRequest.h>
#include <aws/identitystore/model/GetGroupMembershipIdRequest.h>
#include <aws/identitystore/model/GetUserIdRequest.h>
#include <aws/identitystore/model/IsMemberInGroupsRequest.h>
#include <aws/identitystore/model/ListGroupMembershipsForMemberRequest.h>
#include <aws/identitystore/model/ListGroupMembershipsRequest.h>
#include <aws/identitystore/model/ListGroupsRequest.h>
#include <aws/identitystore/model/ListUsersRequest.h>
#include <aws/identitystore/model/UpdateGroupRequest.h>
#include <aws/identitystore/model/UpdateUserRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IdentityStore;
using namespace Aws::IdentityStore::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace IdentityStore {
const char SERVICE_NAME[] = "identitystore";
const char ALLOCATION_TAG[] = "IdentityStoreClient";
}  // namespace IdentityStore
}  // namespace Aws
const char* IdentityStoreClient::GetServiceName() { return SERVICE_NAME; }
const char* IdentityStoreClient::GetAllocationTag() { return ALLOCATION_TAG; }

IdentityStoreClient::IdentityStoreClient(const IdentityStore::IdentityStoreClientConfiguration& clientConfiguration,
                                         std::shared_ptr<IdentityStoreEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IdentityStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IdentityStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IdentityStoreClient::IdentityStoreClient(const AWSCredentials& credentials,
                                         std::shared_ptr<IdentityStoreEndpointProviderBase> endpointProvider,
                                         const IdentityStore::IdentityStoreClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IdentityStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IdentityStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IdentityStoreClient::IdentityStoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<IdentityStoreEndpointProviderBase> endpointProvider,
                                         const IdentityStore::IdentityStoreClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IdentityStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IdentityStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
IdentityStoreClient::IdentityStoreClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IdentityStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IdentityStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IdentityStoreClient::IdentityStoreClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IdentityStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IdentityStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IdentityStoreClient::IdentityStoreClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IdentityStoreErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IdentityStoreEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
IdentityStoreClient::~IdentityStoreClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<IdentityStoreEndpointProviderBase>& IdentityStoreClient::accessEndpointProvider() { return m_endpointProvider; }

void IdentityStoreClient::init(const IdentityStore::IdentityStoreClientConfiguration& config) {
  AWSClient::SetServiceClientName("identitystore");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "identitystore");
}

void IdentityStoreClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
IdentityStoreClient::InvokeOperationOutcome IdentityStoreClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateGroupOutcome IdentityStoreClient::CreateGroup(const CreateGroupRequest& request) const {
  return CreateGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGroupMembershipOutcome IdentityStoreClient::CreateGroupMembership(const CreateGroupMembershipRequest& request) const {
  return CreateGroupMembershipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserOutcome IdentityStoreClient::CreateUser(const CreateUserRequest& request) const {
  return CreateUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGroupOutcome IdentityStoreClient::DeleteGroup(const DeleteGroupRequest& request) const {
  return DeleteGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGroupMembershipOutcome IdentityStoreClient::DeleteGroupMembership(const DeleteGroupMembershipRequest& request) const {
  return DeleteGroupMembershipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUserOutcome IdentityStoreClient::DeleteUser(const DeleteUserRequest& request) const {
  return DeleteUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGroupOutcome IdentityStoreClient::DescribeGroup(const DescribeGroupRequest& request) const {
  return DescribeGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGroupMembershipOutcome IdentityStoreClient::DescribeGroupMembership(const DescribeGroupMembershipRequest& request) const {
  return DescribeGroupMembershipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUserOutcome IdentityStoreClient::DescribeUser(const DescribeUserRequest& request) const {
  return DescribeUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGroupIdOutcome IdentityStoreClient::GetGroupId(const GetGroupIdRequest& request) const {
  return GetGroupIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetGroupMembershipIdOutcome IdentityStoreClient::GetGroupMembershipId(const GetGroupMembershipIdRequest& request) const {
  return GetGroupMembershipIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUserIdOutcome IdentityStoreClient::GetUserId(const GetUserIdRequest& request) const {
  return GetUserIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

IsMemberInGroupsOutcome IdentityStoreClient::IsMemberInGroups(const IsMemberInGroupsRequest& request) const {
  return IsMemberInGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupMembershipsOutcome IdentityStoreClient::ListGroupMemberships(const ListGroupMembershipsRequest& request) const {
  return ListGroupMembershipsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupMembershipsForMemberOutcome IdentityStoreClient::ListGroupMembershipsForMember(
    const ListGroupMembershipsForMemberRequest& request) const {
  return ListGroupMembershipsForMemberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupsOutcome IdentityStoreClient::ListGroups(const ListGroupsRequest& request) const {
  return ListGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUsersOutcome IdentityStoreClient::ListUsers(const ListUsersRequest& request) const {
  return ListUsersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateGroupOutcome IdentityStoreClient::UpdateGroup(const UpdateGroupRequest& request) const {
  return UpdateGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUserOutcome IdentityStoreClient::UpdateUser(const UpdateUserRequest& request) const {
  return UpdateUserOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
