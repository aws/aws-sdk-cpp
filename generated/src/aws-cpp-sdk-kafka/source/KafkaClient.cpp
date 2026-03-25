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
#include <aws/kafka/KafkaClient.h>
#include <aws/kafka/KafkaEndpointProvider.h>
#include <aws/kafka/KafkaErrorMarshaller.h>
#include <aws/kafka/model/BatchAssociateScramSecretRequest.h>
#include <aws/kafka/model/BatchDisassociateScramSecretRequest.h>
#include <aws/kafka/model/CreateClusterRequest.h>
#include <aws/kafka/model/CreateClusterV2Request.h>
#include <aws/kafka/model/CreateConfigurationRequest.h>
#include <aws/kafka/model/CreateReplicatorRequest.h>
#include <aws/kafka/model/CreateTopicRequest.h>
#include <aws/kafka/model/CreateVpcConnectionRequest.h>
#include <aws/kafka/model/DeleteClusterPolicyRequest.h>
#include <aws/kafka/model/DeleteClusterRequest.h>
#include <aws/kafka/model/DeleteConfigurationRequest.h>
#include <aws/kafka/model/DeleteReplicatorRequest.h>
#include <aws/kafka/model/DeleteTopicRequest.h>
#include <aws/kafka/model/DeleteVpcConnectionRequest.h>
#include <aws/kafka/model/DescribeClusterOperationRequest.h>
#include <aws/kafka/model/DescribeClusterOperationV2Request.h>
#include <aws/kafka/model/DescribeClusterRequest.h>
#include <aws/kafka/model/DescribeClusterV2Request.h>
#include <aws/kafka/model/DescribeConfigurationRequest.h>
#include <aws/kafka/model/DescribeConfigurationRevisionRequest.h>
#include <aws/kafka/model/DescribeReplicatorRequest.h>
#include <aws/kafka/model/DescribeTopicPartitionsRequest.h>
#include <aws/kafka/model/DescribeTopicRequest.h>
#include <aws/kafka/model/DescribeVpcConnectionRequest.h>
#include <aws/kafka/model/GetBootstrapBrokersRequest.h>
#include <aws/kafka/model/GetClusterPolicyRequest.h>
#include <aws/kafka/model/GetCompatibleKafkaVersionsRequest.h>
#include <aws/kafka/model/ListClientVpcConnectionsRequest.h>
#include <aws/kafka/model/ListClusterOperationsRequest.h>
#include <aws/kafka/model/ListClusterOperationsV2Request.h>
#include <aws/kafka/model/ListClustersRequest.h>
#include <aws/kafka/model/ListClustersV2Request.h>
#include <aws/kafka/model/ListConfigurationRevisionsRequest.h>
#include <aws/kafka/model/ListConfigurationsRequest.h>
#include <aws/kafka/model/ListKafkaVersionsRequest.h>
#include <aws/kafka/model/ListNodesRequest.h>
#include <aws/kafka/model/ListReplicatorsRequest.h>
#include <aws/kafka/model/ListScramSecretsRequest.h>
#include <aws/kafka/model/ListTagsForResourceRequest.h>
#include <aws/kafka/model/ListTopicsRequest.h>
#include <aws/kafka/model/ListVpcConnectionsRequest.h>
#include <aws/kafka/model/PutClusterPolicyRequest.h>
#include <aws/kafka/model/RebootBrokerRequest.h>
#include <aws/kafka/model/RejectClientVpcConnectionRequest.h>
#include <aws/kafka/model/TagResourceRequest.h>
#include <aws/kafka/model/UntagResourceRequest.h>
#include <aws/kafka/model/UpdateBrokerCountRequest.h>
#include <aws/kafka/model/UpdateBrokerStorageRequest.h>
#include <aws/kafka/model/UpdateBrokerTypeRequest.h>
#include <aws/kafka/model/UpdateClusterConfigurationRequest.h>
#include <aws/kafka/model/UpdateClusterKafkaVersionRequest.h>
#include <aws/kafka/model/UpdateConfigurationRequest.h>
#include <aws/kafka/model/UpdateConnectivityRequest.h>
#include <aws/kafka/model/UpdateMonitoringRequest.h>
#include <aws/kafka/model/UpdateRebalancingRequest.h>
#include <aws/kafka/model/UpdateReplicationInfoRequest.h>
#include <aws/kafka/model/UpdateSecurityRequest.h>
#include <aws/kafka/model/UpdateStorageRequest.h>
#include <aws/kafka/model/UpdateTopicRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Kafka;
using namespace Aws::Kafka::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Kafka {
const char SERVICE_NAME[] = "kafka";
const char ALLOCATION_TAG[] = "KafkaClient";
}  // namespace Kafka
}  // namespace Aws
const char* KafkaClient::GetServiceName() { return SERVICE_NAME; }
const char* KafkaClient::GetAllocationTag() { return ALLOCATION_TAG; }

KafkaClient::KafkaClient(const Kafka::KafkaClientConfiguration& clientConfiguration,
                         std::shared_ptr<KafkaEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KafkaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KafkaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KafkaClient::KafkaClient(const AWSCredentials& credentials, std::shared_ptr<KafkaEndpointProviderBase> endpointProvider,
                         const Kafka::KafkaClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KafkaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KafkaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KafkaClient::KafkaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<KafkaEndpointProviderBase> endpointProvider,
                         const Kafka::KafkaClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KafkaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<KafkaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
KafkaClient::KafkaClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KafkaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KafkaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KafkaClient::KafkaClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KafkaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KafkaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

KafkaClient::KafkaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<KafkaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<KafkaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
KafkaClient::~KafkaClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<KafkaEndpointProviderBase>& KafkaClient::accessEndpointProvider() { return m_endpointProvider; }

void KafkaClient::init(const Kafka::KafkaClientConfiguration& config) {
  AWSClient::SetServiceClientName("Kafka");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "kafka");
}

void KafkaClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
KafkaClient::InvokeOperationOutcome KafkaClient::InvokeServiceOperation(
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

BatchAssociateScramSecretOutcome KafkaClient::BatchAssociateScramSecret(const BatchAssociateScramSecretRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchAssociateScramSecret", "Required field: ClusterArn, is not set");
    return BatchAssociateScramSecretOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scram-secrets");
  };

  return BatchAssociateScramSecretOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDisassociateScramSecretOutcome KafkaClient::BatchDisassociateScramSecret(const BatchDisassociateScramSecretRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDisassociateScramSecret", "Required field: ClusterArn, is not set");
    return BatchDisassociateScramSecretOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scram-secrets");
  };

  return BatchDisassociateScramSecretOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

CreateClusterOutcome KafkaClient::CreateCluster(const CreateClusterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters");
  };

  return CreateClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateClusterV2Outcome KafkaClient::CreateClusterV2(const CreateClusterV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v2/clusters");
  };

  return CreateClusterV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfigurationOutcome KafkaClient::CreateConfiguration(const CreateConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations");
  };

  return CreateConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReplicatorOutcome KafkaClient::CreateReplicator(const CreateReplicatorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/replication/v1/replicators");
  };

  return CreateReplicatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTopicOutcome KafkaClient::CreateTopic(const CreateTopicRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTopic", "Required field: ClusterArn, is not set");
    return CreateTopicOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics");
  };

  return CreateTopicOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVpcConnectionOutcome KafkaClient::CreateVpcConnection(const CreateVpcConnectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/vpc-connection");
  };

  return CreateVpcConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteClusterOutcome KafkaClient::DeleteCluster(const DeleteClusterRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCluster", "Required field: ClusterArn, is not set");
    return DeleteClusterOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
  };

  return DeleteClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteClusterPolicyOutcome KafkaClient::DeleteClusterPolicy(const DeleteClusterPolicyRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteClusterPolicy", "Required field: ClusterArn, is not set");
    return DeleteClusterPolicyOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return DeleteClusterPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConfigurationOutcome KafkaClient::DeleteConfiguration(const DeleteConfigurationRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguration", "Required field: Arn, is not set");
    return DeleteConfigurationOutcome(
        Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return DeleteConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteReplicatorOutcome KafkaClient::DeleteReplicator(const DeleteReplicatorRequest& request) const {
  if (!request.ReplicatorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteReplicator", "Required field: ReplicatorArn, is not set");
    return DeleteReplicatorOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ReplicatorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/replication/v1/replicators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReplicatorArn());
  };

  return DeleteReplicatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTopicOutcome KafkaClient::DeleteTopic(const DeleteTopicRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTopic", "Required field: ClusterArn, is not set");
    return DeleteTopicOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [ClusterArn]", false));
  }
  if (!request.TopicNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTopic", "Required field: TopicName, is not set");
    return DeleteTopicOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [TopicName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicName());
  };

  return DeleteTopicOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVpcConnectionOutcome KafkaClient::DeleteVpcConnection(const DeleteVpcConnectionRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVpcConnection", "Required field: Arn, is not set");
    return DeleteVpcConnectionOutcome(
        Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/vpc-connection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return DeleteVpcConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeClusterOutcome KafkaClient::DescribeCluster(const DescribeClusterRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCluster", "Required field: ClusterArn, is not set");
    return DescribeClusterOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
  };

  return DescribeClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeClusterOperationOutcome KafkaClient::DescribeClusterOperation(const DescribeClusterOperationRequest& request) const {
  if (!request.ClusterOperationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeClusterOperation", "Required field: ClusterOperationArn, is not set");
    return DescribeClusterOperationOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ClusterOperationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterOperationArn());
  };

  return DescribeClusterOperationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeClusterOperationV2Outcome KafkaClient::DescribeClusterOperationV2(const DescribeClusterOperationV2Request& request) const {
  if (!request.ClusterOperationArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeClusterOperationV2", "Required field: ClusterOperationArn, is not set");
    return DescribeClusterOperationV2Outcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ClusterOperationArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v2/operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterOperationArn());
  };

  return DescribeClusterOperationV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeClusterV2Outcome KafkaClient::DescribeClusterV2(const DescribeClusterV2Request& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeClusterV2", "Required field: ClusterArn, is not set");
    return DescribeClusterV2Outcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v2/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
  };

  return DescribeClusterV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeConfigurationOutcome KafkaClient::DescribeConfiguration(const DescribeConfigurationRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeConfiguration", "Required field: Arn, is not set");
    return DescribeConfigurationOutcome(
        Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return DescribeConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeConfigurationRevisionOutcome KafkaClient::DescribeConfigurationRevision(const DescribeConfigurationRevisionRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeConfigurationRevision", "Required field: Arn, is not set");
    return DescribeConfigurationRevisionOutcome(
        Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  if (!request.RevisionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeConfigurationRevision", "Required field: Revision, is not set");
    return DescribeConfigurationRevisionOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [Revision]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevision());
  };

  return DescribeConfigurationRevisionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeReplicatorOutcome KafkaClient::DescribeReplicator(const DescribeReplicatorRequest& request) const {
  if (!request.ReplicatorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeReplicator", "Required field: ReplicatorArn, is not set");
    return DescribeReplicatorOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ReplicatorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/replication/v1/replicators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReplicatorArn());
  };

  return DescribeReplicatorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeTopicOutcome KafkaClient::DescribeTopic(const DescribeTopicRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeTopic", "Required field: ClusterArn, is not set");
    return DescribeTopicOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ClusterArn]", false));
  }
  if (!request.TopicNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeTopic", "Required field: TopicName, is not set");
    return DescribeTopicOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [TopicName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicName());
  };

  return DescribeTopicOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeTopicPartitionsOutcome KafkaClient::DescribeTopicPartitions(const DescribeTopicPartitionsRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeTopicPartitions", "Required field: ClusterArn, is not set");
    return DescribeTopicPartitionsOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ClusterArn]", false));
  }
  if (!request.TopicNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeTopicPartitions", "Required field: TopicName, is not set");
    return DescribeTopicPartitionsOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TopicName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/partitions");
  };

  return DescribeTopicPartitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeVpcConnectionOutcome KafkaClient::DescribeVpcConnection(const DescribeVpcConnectionRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVpcConnection", "Required field: Arn, is not set");
    return DescribeVpcConnectionOutcome(
        Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/vpc-connection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return DescribeVpcConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBootstrapBrokersOutcome KafkaClient::GetBootstrapBrokers(const GetBootstrapBrokersRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBootstrapBrokers", "Required field: ClusterArn, is not set");
    return GetBootstrapBrokersOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bootstrap-brokers");
  };

  return GetBootstrapBrokersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetClusterPolicyOutcome KafkaClient::GetClusterPolicy(const GetClusterPolicyRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetClusterPolicy", "Required field: ClusterArn, is not set");
    return GetClusterPolicyOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return GetClusterPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCompatibleKafkaVersionsOutcome KafkaClient::GetCompatibleKafkaVersions(const GetCompatibleKafkaVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/compatible-kafka-versions");
  };

  return GetCompatibleKafkaVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListClientVpcConnectionsOutcome KafkaClient::ListClientVpcConnections(const ListClientVpcConnectionsRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListClientVpcConnections", "Required field: ClusterArn, is not set");
    return ListClientVpcConnectionsOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/client-vpc-connections");
  };

  return ListClientVpcConnectionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListClusterOperationsOutcome KafkaClient::ListClusterOperations(const ListClusterOperationsRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListClusterOperations", "Required field: ClusterArn, is not set");
    return ListClusterOperationsOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/operations");
  };

  return ListClusterOperationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListClusterOperationsV2Outcome KafkaClient::ListClusterOperationsV2(const ListClusterOperationsV2Request& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListClusterOperationsV2", "Required field: ClusterArn, is not set");
    return ListClusterOperationsV2Outcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v2/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/operations");
  };

  return ListClusterOperationsV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListClustersOutcome KafkaClient::ListClusters(const ListClustersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters");
  };

  return ListClustersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListClustersV2Outcome KafkaClient::ListClustersV2(const ListClustersV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v2/clusters");
  };

  return ListClustersV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConfigurationRevisionsOutcome KafkaClient::ListConfigurationRevisions(const ListConfigurationRevisionsRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConfigurationRevisions", "Required field: Arn, is not set");
    return ListConfigurationRevisionsOutcome(
        Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
  };

  return ListConfigurationRevisionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConfigurationsOutcome KafkaClient::ListConfigurations(const ListConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations");
  };

  return ListConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListKafkaVersionsOutcome KafkaClient::ListKafkaVersions(const ListKafkaVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/kafka-versions");
  };

  return ListKafkaVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListNodesOutcome KafkaClient::ListNodes(const ListNodesRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListNodes", "Required field: ClusterArn, is not set");
    return ListNodesOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes");
  };

  return ListNodesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListReplicatorsOutcome KafkaClient::ListReplicators(const ListReplicatorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/replication/v1/replicators");
  };

  return ListReplicatorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListScramSecretsOutcome KafkaClient::ListScramSecrets(const ListScramSecretsRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListScramSecrets", "Required field: ClusterArn, is not set");
    return ListScramSecretsOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/scram-secrets");
  };

  return ListScramSecretsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome KafkaClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTopicsOutcome KafkaClient::ListTopics(const ListTopicsRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTopics", "Required field: ClusterArn, is not set");
    return ListTopicsOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics");
  };

  return ListTopicsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVpcConnectionsOutcome KafkaClient::ListVpcConnections(const ListVpcConnectionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/vpc-connections");
  };

  return ListVpcConnectionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutClusterPolicyOutcome KafkaClient::PutClusterPolicy(const PutClusterPolicyRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutClusterPolicy", "Required field: ClusterArn, is not set");
    return PutClusterPolicyOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return PutClusterPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RebootBrokerOutcome KafkaClient::RebootBroker(const RebootBrokerRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RebootBroker", "Required field: ClusterArn, is not set");
    return RebootBrokerOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reboot-broker");
  };

  return RebootBrokerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RejectClientVpcConnectionOutcome KafkaClient::RejectClientVpcConnection(const RejectClientVpcConnectionRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectClientVpcConnection", "Required field: ClusterArn, is not set");
    return RejectClientVpcConnectionOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/client-vpc-connection");
  };

  return RejectClientVpcConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome KafkaClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome KafkaClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateBrokerCountOutcome KafkaClient::UpdateBrokerCount(const UpdateBrokerCountRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrokerCount", "Required field: ClusterArn, is not set");
    return UpdateBrokerCountOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/count");
  };

  return UpdateBrokerCountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateBrokerStorageOutcome KafkaClient::UpdateBrokerStorage(const UpdateBrokerStorageRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrokerStorage", "Required field: ClusterArn, is not set");
    return UpdateBrokerStorageOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/storage");
  };

  return UpdateBrokerStorageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateBrokerTypeOutcome KafkaClient::UpdateBrokerType(const UpdateBrokerTypeRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrokerType", "Required field: ClusterArn, is not set");
    return UpdateBrokerTypeOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/type");
  };

  return UpdateBrokerTypeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateClusterConfigurationOutcome KafkaClient::UpdateClusterConfiguration(const UpdateClusterConfigurationRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateClusterConfiguration", "Required field: ClusterArn, is not set");
    return UpdateClusterConfigurationOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  return UpdateClusterConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateClusterKafkaVersionOutcome KafkaClient::UpdateClusterKafkaVersion(const UpdateClusterKafkaVersionRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateClusterKafkaVersion", "Required field: ClusterArn, is not set");
    return UpdateClusterKafkaVersionOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version");
  };

  return UpdateClusterKafkaVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateConfigurationOutcome KafkaClient::UpdateConfiguration(const UpdateConfigurationRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfiguration", "Required field: Arn, is not set");
    return UpdateConfigurationOutcome(
        Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return UpdateConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateConnectivityOutcome KafkaClient::UpdateConnectivity(const UpdateConnectivityRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConnectivity", "Required field: ClusterArn, is not set");
    return UpdateConnectivityOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectivity");
  };

  return UpdateConnectivityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateMonitoringOutcome KafkaClient::UpdateMonitoring(const UpdateMonitoringRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMonitoring", "Required field: ClusterArn, is not set");
    return UpdateMonitoringOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitoring");
  };

  return UpdateMonitoringOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRebalancingOutcome KafkaClient::UpdateRebalancing(const UpdateRebalancingRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRebalancing", "Required field: ClusterArn, is not set");
    return UpdateRebalancingOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rebalancing");
  };

  return UpdateRebalancingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateReplicationInfoOutcome KafkaClient::UpdateReplicationInfo(const UpdateReplicationInfoRequest& request) const {
  if (!request.ReplicatorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReplicationInfo", "Required field: ReplicatorArn, is not set");
    return UpdateReplicationInfoOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ReplicatorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/replication/v1/replicators/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReplicatorArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/replication-info");
  };

  return UpdateReplicationInfoOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateSecurityOutcome KafkaClient::UpdateSecurity(const UpdateSecurityRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSecurity", "Required field: ClusterArn, is not set");
    return UpdateSecurityOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/security");
  };

  return UpdateSecurityOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateStorageOutcome KafkaClient::UpdateStorage(const UpdateStorageRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateStorage", "Required field: ClusterArn, is not set");
    return UpdateStorageOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ClusterArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/storage");
  };

  return UpdateStorageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateTopicOutcome KafkaClient::UpdateTopic(const UpdateTopicRequest& request) const {
  if (!request.ClusterArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTopic", "Required field: ClusterArn, is not set");
    return UpdateTopicOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [ClusterArn]", false));
  }
  if (!request.TopicNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTopic", "Required field: TopicName, is not set");
    return UpdateTopicOutcome(Aws::Client::AWSError<KafkaErrors>(KafkaErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [TopicName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicName());
  };

  return UpdateTopicOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
