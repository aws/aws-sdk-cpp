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
#include <aws/dax/DAXClient.h>
#include <aws/dax/DAXEndpointProvider.h>
#include <aws/dax/DAXErrorMarshaller.h>
#include <aws/dax/model/CreateClusterRequest.h>
#include <aws/dax/model/CreateParameterGroupRequest.h>
#include <aws/dax/model/CreateSubnetGroupRequest.h>
#include <aws/dax/model/DecreaseReplicationFactorRequest.h>
#include <aws/dax/model/DeleteClusterRequest.h>
#include <aws/dax/model/DeleteParameterGroupRequest.h>
#include <aws/dax/model/DeleteSubnetGroupRequest.h>
#include <aws/dax/model/DescribeClustersRequest.h>
#include <aws/dax/model/DescribeDefaultParametersRequest.h>
#include <aws/dax/model/DescribeEventsRequest.h>
#include <aws/dax/model/DescribeParameterGroupsRequest.h>
#include <aws/dax/model/DescribeParametersRequest.h>
#include <aws/dax/model/DescribeSubnetGroupsRequest.h>
#include <aws/dax/model/IncreaseReplicationFactorRequest.h>
#include <aws/dax/model/ListTagsRequest.h>
#include <aws/dax/model/RebootNodeRequest.h>
#include <aws/dax/model/TagResourceRequest.h>
#include <aws/dax/model/UntagResourceRequest.h>
#include <aws/dax/model/UpdateClusterRequest.h>
#include <aws/dax/model/UpdateParameterGroupRequest.h>
#include <aws/dax/model/UpdateSubnetGroupRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DAX;
using namespace Aws::DAX::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DAX {
const char SERVICE_NAME[] = "dax";
const char ALLOCATION_TAG[] = "DAXClient";
}  // namespace DAX
}  // namespace Aws
const char* DAXClient::GetServiceName() { return SERVICE_NAME; }
const char* DAXClient::GetAllocationTag() { return ALLOCATION_TAG; }

DAXClient::DAXClient(const DAX::DAXClientConfiguration& clientConfiguration, std::shared_ptr<DAXEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DAXErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DAXEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DAXClient::DAXClient(const AWSCredentials& credentials, std::shared_ptr<DAXEndpointProviderBase> endpointProvider,
                     const DAX::DAXClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DAXErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DAXEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DAXClient::DAXClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<DAXEndpointProviderBase> endpointProvider, const DAX::DAXClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DAXErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DAXEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DAXClient::DAXClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DAXErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DAXEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DAXClient::DAXClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DAXErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DAXEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DAXClient::DAXClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DAXErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DAXEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DAXClient::~DAXClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DAXEndpointProviderBase>& DAXClient::accessEndpointProvider() { return m_endpointProvider; }

void DAXClient::init(const DAX::DAXClientConfiguration& config) {
  AWSClient::SetServiceClientName("DAX");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "dax");
}

void DAXClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DAXClient::InvokeOperationOutcome DAXClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateClusterOutcome DAXClient::CreateCluster(const CreateClusterRequest& request) const {
  return CreateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateParameterGroupOutcome DAXClient::CreateParameterGroup(const CreateParameterGroupRequest& request) const {
  return CreateParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSubnetGroupOutcome DAXClient::CreateSubnetGroup(const CreateSubnetGroupRequest& request) const {
  return CreateSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DecreaseReplicationFactorOutcome DAXClient::DecreaseReplicationFactor(const DecreaseReplicationFactorRequest& request) const {
  return DecreaseReplicationFactorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteClusterOutcome DAXClient::DeleteCluster(const DeleteClusterRequest& request) const {
  return DeleteClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteParameterGroupOutcome DAXClient::DeleteParameterGroup(const DeleteParameterGroupRequest& request) const {
  return DeleteParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSubnetGroupOutcome DAXClient::DeleteSubnetGroup(const DeleteSubnetGroupRequest& request) const {
  return DeleteSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeClustersOutcome DAXClient::DescribeClusters(const DescribeClustersRequest& request) const {
  return DescribeClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDefaultParametersOutcome DAXClient::DescribeDefaultParameters(const DescribeDefaultParametersRequest& request) const {
  return DescribeDefaultParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventsOutcome DAXClient::DescribeEvents(const DescribeEventsRequest& request) const {
  return DescribeEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeParameterGroupsOutcome DAXClient::DescribeParameterGroups(const DescribeParameterGroupsRequest& request) const {
  return DescribeParameterGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeParametersOutcome DAXClient::DescribeParameters(const DescribeParametersRequest& request) const {
  return DescribeParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSubnetGroupsOutcome DAXClient::DescribeSubnetGroups(const DescribeSubnetGroupsRequest& request) const {
  return DescribeSubnetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

IncreaseReplicationFactorOutcome DAXClient::IncreaseReplicationFactor(const IncreaseReplicationFactorRequest& request) const {
  return IncreaseReplicationFactorOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsOutcome DAXClient::ListTags(const ListTagsRequest& request) const {
  return ListTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RebootNodeOutcome DAXClient::RebootNode(const RebootNodeRequest& request) const {
  return RebootNodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome DAXClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome DAXClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateClusterOutcome DAXClient::UpdateCluster(const UpdateClusterRequest& request) const {
  return UpdateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateParameterGroupOutcome DAXClient::UpdateParameterGroup(const UpdateParameterGroupRequest& request) const {
  return UpdateParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSubnetGroupOutcome DAXClient::UpdateSubnetGroup(const UpdateSubnetGroupRequest& request) const {
  return UpdateSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
