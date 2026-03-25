/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/B2BIClient.h>
#include <aws/b2bi/B2BIEndpointProvider.h>
#include <aws/b2bi/B2BIErrorMarshaller.h>
#include <aws/b2bi/model/CreateCapabilityRequest.h>
#include <aws/b2bi/model/CreatePartnershipRequest.h>
#include <aws/b2bi/model/CreateProfileRequest.h>
#include <aws/b2bi/model/CreateStarterMappingTemplateRequest.h>
#include <aws/b2bi/model/CreateTransformerRequest.h>
#include <aws/b2bi/model/DeleteCapabilityRequest.h>
#include <aws/b2bi/model/DeletePartnershipRequest.h>
#include <aws/b2bi/model/DeleteProfileRequest.h>
#include <aws/b2bi/model/DeleteTransformerRequest.h>
#include <aws/b2bi/model/GenerateMappingRequest.h>
#include <aws/b2bi/model/GetCapabilityRequest.h>
#include <aws/b2bi/model/GetPartnershipRequest.h>
#include <aws/b2bi/model/GetProfileRequest.h>
#include <aws/b2bi/model/GetTransformerJobRequest.h>
#include <aws/b2bi/model/GetTransformerRequest.h>
#include <aws/b2bi/model/ListCapabilitiesRequest.h>
#include <aws/b2bi/model/ListPartnershipsRequest.h>
#include <aws/b2bi/model/ListProfilesRequest.h>
#include <aws/b2bi/model/ListTagsForResourceRequest.h>
#include <aws/b2bi/model/ListTransformersRequest.h>
#include <aws/b2bi/model/StartTransformerJobRequest.h>
#include <aws/b2bi/model/TagResourceRequest.h>
#include <aws/b2bi/model/TestConversionRequest.h>
#include <aws/b2bi/model/TestMappingRequest.h>
#include <aws/b2bi/model/TestParsingRequest.h>
#include <aws/b2bi/model/UntagResourceRequest.h>
#include <aws/b2bi/model/UpdateCapabilityRequest.h>
#include <aws/b2bi/model/UpdatePartnershipRequest.h>
#include <aws/b2bi/model/UpdateProfileRequest.h>
#include <aws/b2bi/model/UpdateTransformerRequest.h>
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
using namespace Aws::B2BI;
using namespace Aws::B2BI::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace B2BI {
const char SERVICE_NAME[] = "b2bi";
const char ALLOCATION_TAG[] = "B2BIClient";
}  // namespace B2BI
}  // namespace Aws
const char* B2BIClient::GetServiceName() { return SERVICE_NAME; }
const char* B2BIClient::GetAllocationTag() { return ALLOCATION_TAG; }

B2BIClient::B2BIClient(const B2BI::B2BIClientConfiguration& clientConfiguration, std::shared_ptr<B2BIEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<B2BIErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<B2BIEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

B2BIClient::B2BIClient(const AWSCredentials& credentials, std::shared_ptr<B2BIEndpointProviderBase> endpointProvider,
                       const B2BI::B2BIClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<B2BIErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<B2BIEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

B2BIClient::B2BIClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<B2BIEndpointProviderBase> endpointProvider, const B2BI::B2BIClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<B2BIErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<B2BIEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
B2BIClient::B2BIClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<B2BIErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<B2BIEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

B2BIClient::B2BIClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<B2BIErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<B2BIEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

B2BIClient::B2BIClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<B2BIErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<B2BIEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
B2BIClient::~B2BIClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<B2BIEndpointProviderBase>& B2BIClient::accessEndpointProvider() { return m_endpointProvider; }

void B2BIClient::init(const B2BI::B2BIClientConfiguration& config) {
  AWSClient::SetServiceClientName("b2bi");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "b2bi");
}

void B2BIClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
B2BIClient::InvokeOperationOutcome B2BIClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateCapabilityOutcome B2BIClient::CreateCapability(const CreateCapabilityRequest& request) const {
  return CreateCapabilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePartnershipOutcome B2BIClient::CreatePartnership(const CreatePartnershipRequest& request) const {
  return CreatePartnershipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProfileOutcome B2BIClient::CreateProfile(const CreateProfileRequest& request) const {
  return CreateProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateStarterMappingTemplateOutcome B2BIClient::CreateStarterMappingTemplate(const CreateStarterMappingTemplateRequest& request) const {
  return CreateStarterMappingTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTransformerOutcome B2BIClient::CreateTransformer(const CreateTransformerRequest& request) const {
  return CreateTransformerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCapabilityOutcome B2BIClient::DeleteCapability(const DeleteCapabilityRequest& request) const {
  return DeleteCapabilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePartnershipOutcome B2BIClient::DeletePartnership(const DeletePartnershipRequest& request) const {
  return DeletePartnershipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProfileOutcome B2BIClient::DeleteProfile(const DeleteProfileRequest& request) const {
  return DeleteProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTransformerOutcome B2BIClient::DeleteTransformer(const DeleteTransformerRequest& request) const {
  return DeleteTransformerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GenerateMappingOutcome B2BIClient::GenerateMapping(const GenerateMappingRequest& request) const {
  return GenerateMappingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCapabilityOutcome B2BIClient::GetCapability(const GetCapabilityRequest& request) const {
  return GetCapabilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPartnershipOutcome B2BIClient::GetPartnership(const GetPartnershipRequest& request) const {
  return GetPartnershipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetProfileOutcome B2BIClient::GetProfile(const GetProfileRequest& request) const {
  return GetProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTransformerOutcome B2BIClient::GetTransformer(const GetTransformerRequest& request) const {
  return GetTransformerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTransformerJobOutcome B2BIClient::GetTransformerJob(const GetTransformerJobRequest& request) const {
  return GetTransformerJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCapabilitiesOutcome B2BIClient::ListCapabilities(const ListCapabilitiesRequest& request) const {
  return ListCapabilitiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPartnershipsOutcome B2BIClient::ListPartnerships(const ListPartnershipsRequest& request) const {
  return ListPartnershipsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProfilesOutcome B2BIClient::ListProfiles(const ListProfilesRequest& request) const {
  return ListProfilesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome B2BIClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTransformersOutcome B2BIClient::ListTransformers(const ListTransformersRequest& request) const {
  return ListTransformersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTransformerJobOutcome B2BIClient::StartTransformerJob(const StartTransformerJobRequest& request) const {
  return StartTransformerJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome B2BIClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestConversionOutcome B2BIClient::TestConversion(const TestConversionRequest& request) const {
  return TestConversionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestMappingOutcome B2BIClient::TestMapping(const TestMappingRequest& request) const {
  return TestMappingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestParsingOutcome B2BIClient::TestParsing(const TestParsingRequest& request) const {
  return TestParsingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome B2BIClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCapabilityOutcome B2BIClient::UpdateCapability(const UpdateCapabilityRequest& request) const {
  return UpdateCapabilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePartnershipOutcome B2BIClient::UpdatePartnership(const UpdatePartnershipRequest& request) const {
  return UpdatePartnershipOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProfileOutcome B2BIClient::UpdateProfile(const UpdateProfileRequest& request) const {
  return UpdateProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTransformerOutcome B2BIClient::UpdateTransformer(const UpdateTransformerRequest& request) const {
  return UpdateTransformerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
