/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/cognito-identity/CognitoIdentityEndpointProvider.h>
#include <aws/cognito-identity/CognitoIdentityErrorMarshaller.h>
#include <aws/cognito-identity/model/CreateIdentityPoolRequest.h>
#include <aws/cognito-identity/model/DeleteIdentitiesRequest.h>
#include <aws/cognito-identity/model/DeleteIdentityPoolRequest.h>
#include <aws/cognito-identity/model/DescribeIdentityPoolRequest.h>
#include <aws/cognito-identity/model/DescribeIdentityRequest.h>
#include <aws/cognito-identity/model/GetCredentialsForIdentityRequest.h>
#include <aws/cognito-identity/model/GetIdRequest.h>
#include <aws/cognito-identity/model/GetIdentityPoolRolesRequest.h>
#include <aws/cognito-identity/model/GetOpenIdTokenForDeveloperIdentityRequest.h>
#include <aws/cognito-identity/model/GetOpenIdTokenRequest.h>
#include <aws/cognito-identity/model/GetPrincipalTagAttributeMapRequest.h>
#include <aws/cognito-identity/model/ListIdentitiesRequest.h>
#include <aws/cognito-identity/model/ListIdentityPoolsRequest.h>
#include <aws/cognito-identity/model/ListTagsForResourceRequest.h>
#include <aws/cognito-identity/model/LookupDeveloperIdentityRequest.h>
#include <aws/cognito-identity/model/MergeDeveloperIdentitiesRequest.h>
#include <aws/cognito-identity/model/SetIdentityPoolRolesRequest.h>
#include <aws/cognito-identity/model/SetPrincipalTagAttributeMapRequest.h>
#include <aws/cognito-identity/model/TagResourceRequest.h>
#include <aws/cognito-identity/model/UnlinkDeveloperIdentityRequest.h>
#include <aws/cognito-identity/model/UnlinkIdentityRequest.h>
#include <aws/cognito-identity/model/UntagResourceRequest.h>
#include <aws/cognito-identity/model/UpdateIdentityPoolRequest.h>
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
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CognitoIdentity;
using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CognitoIdentity {
const char SERVICE_NAME[] = "cognito-identity";
const char ALLOCATION_TAG[] = "CognitoIdentityClient";
}  // namespace CognitoIdentity
}  // namespace Aws
const char* CognitoIdentityClient::GetServiceName() { return SERVICE_NAME; }
const char* CognitoIdentityClient::GetAllocationTag() { return ALLOCATION_TAG; }

CognitoIdentityClient::CognitoIdentityClient(const CognitoIdentity::CognitoIdentityClientConfiguration& clientConfiguration,
                                             std::shared_ptr<CognitoIdentityEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const AWSCredentials& credentials,
                                             std::shared_ptr<CognitoIdentityEndpointProviderBase> endpointProvider,
                                             const CognitoIdentity::CognitoIdentityClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<CognitoIdentityEndpointProviderBase> endpointProvider,
                                             const CognitoIdentity::CognitoIdentityClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CognitoIdentityClient::CognitoIdentityClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoIdentityClient::CognitoIdentityClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoIdentityErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CognitoIdentityEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CognitoIdentityClient::~CognitoIdentityClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CognitoIdentityEndpointProviderBase>& CognitoIdentityClient::accessEndpointProvider() { return m_endpointProvider; }

void CognitoIdentityClient::init(const CognitoIdentity::CognitoIdentityClientConfiguration& config) {
  AWSClient::SetServiceClientName("Cognito Identity");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cognito-identity");
}

void CognitoIdentityClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CognitoIdentityClient::InvokeOperationOutcome CognitoIdentityClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateIdentityPoolOutcome CognitoIdentityClient::CreateIdentityPool(const CreateIdentityPoolRequest& request) const {
  return CreateIdentityPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIdentitiesOutcome CognitoIdentityClient::DeleteIdentities(const DeleteIdentitiesRequest& request) const {
  return DeleteIdentitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIdentityPoolOutcome CognitoIdentityClient::DeleteIdentityPool(const DeleteIdentityPoolRequest& request) const {
  return DeleteIdentityPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIdentityOutcome CognitoIdentityClient::DescribeIdentity(const DescribeIdentityRequest& request) const {
  return DescribeIdentityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeIdentityPoolOutcome CognitoIdentityClient::DescribeIdentityPool(const DescribeIdentityPoolRequest& request) const {
  return DescribeIdentityPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCredentialsForIdentityOutcome CognitoIdentityClient::GetCredentialsForIdentity(const GetCredentialsForIdentityRequest& request) const {
  return GetCredentialsForIdentityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIdOutcome CognitoIdentityClient::GetId(const GetIdRequest& request) const {
  return GetIdOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIdentityPoolRolesOutcome CognitoIdentityClient::GetIdentityPoolRoles(const GetIdentityPoolRolesRequest& request) const {
  return GetIdentityPoolRolesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOpenIdTokenOutcome CognitoIdentityClient::GetOpenIdToken(const GetOpenIdTokenRequest& request) const {
  return GetOpenIdTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOpenIdTokenForDeveloperIdentityOutcome CognitoIdentityClient::GetOpenIdTokenForDeveloperIdentity(
    const GetOpenIdTokenForDeveloperIdentityRequest& request) const {
  return GetOpenIdTokenForDeveloperIdentityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPrincipalTagAttributeMapOutcome CognitoIdentityClient::GetPrincipalTagAttributeMap(
    const GetPrincipalTagAttributeMapRequest& request) const {
  return GetPrincipalTagAttributeMapOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIdentitiesOutcome CognitoIdentityClient::ListIdentities(const ListIdentitiesRequest& request) const {
  return ListIdentitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIdentityPoolsOutcome CognitoIdentityClient::ListIdentityPools(const ListIdentityPoolsRequest& request) const {
  return ListIdentityPoolsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome CognitoIdentityClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

LookupDeveloperIdentityOutcome CognitoIdentityClient::LookupDeveloperIdentity(const LookupDeveloperIdentityRequest& request) const {
  return LookupDeveloperIdentityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

MergeDeveloperIdentitiesOutcome CognitoIdentityClient::MergeDeveloperIdentities(const MergeDeveloperIdentitiesRequest& request) const {
  return MergeDeveloperIdentitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetIdentityPoolRolesOutcome CognitoIdentityClient::SetIdentityPoolRoles(const SetIdentityPoolRolesRequest& request) const {
  return SetIdentityPoolRolesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetPrincipalTagAttributeMapOutcome CognitoIdentityClient::SetPrincipalTagAttributeMap(
    const SetPrincipalTagAttributeMapRequest& request) const {
  return SetPrincipalTagAttributeMapOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome CognitoIdentityClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UnlinkDeveloperIdentityOutcome CognitoIdentityClient::UnlinkDeveloperIdentity(const UnlinkDeveloperIdentityRequest& request) const {
  return UnlinkDeveloperIdentityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UnlinkIdentityOutcome CognitoIdentityClient::UnlinkIdentity(const UnlinkIdentityRequest& request) const {
  return UnlinkIdentityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CognitoIdentityClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIdentityPoolOutcome CognitoIdentityClient::UpdateIdentityPool(const UpdateIdentityPoolRequest& request) const {
  return UpdateIdentityPoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
