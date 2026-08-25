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
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2-protocol/EC2ProtocolClient.h>
#include <aws/ec2-protocol/EC2ProtocolEndpointProvider.h>
#include <aws/ec2-protocol/EC2ProtocolErrorMarshaller.h>
#include <aws/ec2-protocol/model/DatetimeOffsetsRequest.h>
#include <aws/ec2-protocol/model/EmptyInputAndEmptyOutputRequest.h>
#include <aws/ec2-protocol/model/EndpointOperationRequest.h>
#include <aws/ec2-protocol/model/EndpointWithHostLabelOperationRequest.h>
#include <aws/ec2-protocol/model/FractionalSecondsRequest.h>
#include <aws/ec2-protocol/model/GreetingWithErrorsRequest.h>
#include <aws/ec2-protocol/model/HostWithPathOperationRequest.h>
#include <aws/ec2-protocol/model/IgnoresWrappingXmlNameRequest.h>
#include <aws/ec2-protocol/model/NestedStructuresRequest.h>
#include <aws/ec2-protocol/model/NoInputAndOutputRequest.h>
#include <aws/ec2-protocol/model/PutWithContentEncodingRequest.h>
#include <aws/ec2-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
#include <aws/ec2-protocol/model/QueryListsRequest.h>
#include <aws/ec2-protocol/model/QueryTimestampsRequest.h>
#include <aws/ec2-protocol/model/RecursiveXmlShapesRequest.h>
#include <aws/ec2-protocol/model/SimpleInputParamsRequest.h>
#include <aws/ec2-protocol/model/SimpleScalarXmlPropertiesRequest.h>
#include <aws/ec2-protocol/model/XmlBlobsRequest.h>
#include <aws/ec2-protocol/model/XmlEmptyBlobsRequest.h>
#include <aws/ec2-protocol/model/XmlEmptyListsRequest.h>
#include <aws/ec2-protocol/model/XmlEnumsRequest.h>
#include <aws/ec2-protocol/model/XmlIntEnumsRequest.h>
#include <aws/ec2-protocol/model/XmlListsRequest.h>
#include <aws/ec2-protocol/model/XmlNamespacesRequest.h>
#include <aws/ec2-protocol/model/XmlTimestampsRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EC2Protocol;
using namespace Aws::EC2Protocol::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace EC2Protocol {
const char SERVICE_NAME[] = "ec2query";
const char ALLOCATION_TAG[] = "EC2ProtocolClient";
}  // namespace EC2Protocol
}  // namespace Aws
const char* EC2ProtocolClient::GetServiceName() { return SERVICE_NAME; }
const char* EC2ProtocolClient::GetAllocationTag() { return ALLOCATION_TAG; }

EC2ProtocolClient::EC2ProtocolClient(const EC2Protocol::EC2ProtocolClientConfiguration& clientConfiguration,
                                     std::shared_ptr<EC2ProtocolEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EC2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EC2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EC2ProtocolClient::EC2ProtocolClient(const AWSCredentials& credentials, std::shared_ptr<EC2ProtocolEndpointProviderBase> endpointProvider,
                                     const EC2Protocol::EC2ProtocolClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EC2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EC2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EC2ProtocolClient::EC2ProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<EC2ProtocolEndpointProviderBase> endpointProvider,
                                     const EC2Protocol::EC2ProtocolClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EC2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EC2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
EC2ProtocolClient::EC2ProtocolClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EC2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EC2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EC2ProtocolClient::EC2ProtocolClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EC2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EC2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EC2ProtocolClient::EC2ProtocolClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EC2ProtocolErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EC2ProtocolEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
EC2ProtocolClient::~EC2ProtocolClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<EC2ProtocolEndpointProviderBase>& EC2ProtocolClient::accessEndpointProvider() { return m_endpointProvider; }

void EC2ProtocolClient::init(const EC2Protocol::EC2ProtocolClientConfiguration& config) {
  AWSClient::SetServiceClientName("EC2 Protocol");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ec2query");
}

void EC2ProtocolClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

EC2ProtocolClient::InvokeOperationOutcome EC2ProtocolClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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
DatetimeOffsetsOutcome EC2ProtocolClient::DatetimeOffsets(const DatetimeOffsetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DatetimeOffsetsOutcome(result.GetResultWithOwnership())
                            : DatetimeOffsetsOutcome(std::move(result.GetError()));
}

EmptyInputAndEmptyOutputOutcome EC2ProtocolClient::EmptyInputAndEmptyOutput(const EmptyInputAndEmptyOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EmptyInputAndEmptyOutputOutcome(result.GetResultWithOwnership())
                            : EmptyInputAndEmptyOutputOutcome(std::move(result.GetError()));
}

EndpointOperationOutcome EC2ProtocolClient::EndpointOperation(const EndpointOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EndpointOperationOutcome(result.GetResultWithOwnership())
                            : EndpointOperationOutcome(std::move(result.GetError()));
}

EndpointWithHostLabelOperationOutcome EC2ProtocolClient::EndpointWithHostLabelOperation(
    const EndpointWithHostLabelOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EndpointWithHostLabelOperationOutcome(result.GetResultWithOwnership())
                            : EndpointWithHostLabelOperationOutcome(std::move(result.GetError()));
}

FractionalSecondsOutcome EC2ProtocolClient::FractionalSeconds(const FractionalSecondsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FractionalSecondsOutcome(result.GetResultWithOwnership())
                            : FractionalSecondsOutcome(std::move(result.GetError()));
}

GreetingWithErrorsOutcome EC2ProtocolClient::GreetingWithErrors(const GreetingWithErrorsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GreetingWithErrorsOutcome(result.GetResultWithOwnership())
                            : GreetingWithErrorsOutcome(std::move(result.GetError()));
}

HostWithPathOperationOutcome EC2ProtocolClient::HostWithPathOperation(const HostWithPathOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? HostWithPathOperationOutcome(result.GetResultWithOwnership())
                            : HostWithPathOperationOutcome(std::move(result.GetError()));
}

IgnoresWrappingXmlNameOutcome EC2ProtocolClient::IgnoresWrappingXmlName(const IgnoresWrappingXmlNameRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? IgnoresWrappingXmlNameOutcome(result.GetResultWithOwnership())
                            : IgnoresWrappingXmlNameOutcome(std::move(result.GetError()));
}

NestedStructuresOutcome EC2ProtocolClient::NestedStructures(const NestedStructuresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NestedStructuresOutcome(result.GetResultWithOwnership())
                            : NestedStructuresOutcome(std::move(result.GetError()));
}

NoInputAndOutputOutcome EC2ProtocolClient::NoInputAndOutput(const NoInputAndOutputRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? NoInputAndOutputOutcome(result.GetResultWithOwnership())
                            : NoInputAndOutputOutcome(std::move(result.GetError()));
}

PutWithContentEncodingOutcome EC2ProtocolClient::PutWithContentEncoding(const PutWithContentEncodingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutWithContentEncodingOutcome(result.GetResultWithOwnership())
                            : PutWithContentEncodingOutcome(std::move(result.GetError()));
}

QueryIdempotencyTokenAutoFillOutcome EC2ProtocolClient::QueryIdempotencyTokenAutoFill(
    const QueryIdempotencyTokenAutoFillRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryIdempotencyTokenAutoFillOutcome(result.GetResultWithOwnership())
                            : QueryIdempotencyTokenAutoFillOutcome(std::move(result.GetError()));
}

QueryListsOutcome EC2ProtocolClient::QueryLists(const QueryListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryListsOutcome(result.GetResultWithOwnership()) : QueryListsOutcome(std::move(result.GetError()));
}

QueryTimestampsOutcome EC2ProtocolClient::QueryTimestamps(const QueryTimestampsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? QueryTimestampsOutcome(result.GetResultWithOwnership())
                            : QueryTimestampsOutcome(std::move(result.GetError()));
}

RecursiveXmlShapesOutcome EC2ProtocolClient::RecursiveXmlShapes(const RecursiveXmlShapesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RecursiveXmlShapesOutcome(result.GetResultWithOwnership())
                            : RecursiveXmlShapesOutcome(std::move(result.GetError()));
}

SimpleInputParamsOutcome EC2ProtocolClient::SimpleInputParams(const SimpleInputParamsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SimpleInputParamsOutcome(result.GetResultWithOwnership())
                            : SimpleInputParamsOutcome(std::move(result.GetError()));
}

SimpleScalarXmlPropertiesOutcome EC2ProtocolClient::SimpleScalarXmlProperties(const SimpleScalarXmlPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SimpleScalarXmlPropertiesOutcome(result.GetResultWithOwnership())
                            : SimpleScalarXmlPropertiesOutcome(std::move(result.GetError()));
}

XmlBlobsOutcome EC2ProtocolClient::XmlBlobs(const XmlBlobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlBlobsOutcome(result.GetResultWithOwnership()) : XmlBlobsOutcome(std::move(result.GetError()));
}

XmlEmptyBlobsOutcome EC2ProtocolClient::XmlEmptyBlobs(const XmlEmptyBlobsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlEmptyBlobsOutcome(result.GetResultWithOwnership()) : XmlEmptyBlobsOutcome(std::move(result.GetError()));
}

XmlEmptyListsOutcome EC2ProtocolClient::XmlEmptyLists(const XmlEmptyListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlEmptyListsOutcome(result.GetResultWithOwnership()) : XmlEmptyListsOutcome(std::move(result.GetError()));
}

XmlEnumsOutcome EC2ProtocolClient::XmlEnums(const XmlEnumsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlEnumsOutcome(result.GetResultWithOwnership()) : XmlEnumsOutcome(std::move(result.GetError()));
}

XmlIntEnumsOutcome EC2ProtocolClient::XmlIntEnums(const XmlIntEnumsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlIntEnumsOutcome(result.GetResultWithOwnership()) : XmlIntEnumsOutcome(std::move(result.GetError()));
}

XmlListsOutcome EC2ProtocolClient::XmlLists(const XmlListsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlListsOutcome(result.GetResultWithOwnership()) : XmlListsOutcome(std::move(result.GetError()));
}

XmlNamespacesOutcome EC2ProtocolClient::XmlNamespaces(const XmlNamespacesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlNamespacesOutcome(result.GetResultWithOwnership()) : XmlNamespacesOutcome(std::move(result.GetError()));
}

XmlTimestampsOutcome EC2ProtocolClient::XmlTimestamps(const XmlTimestampsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? XmlTimestampsOutcome(result.GetResultWithOwnership()) : XmlTimestampsOutcome(std::move(result.GetError()));
}
