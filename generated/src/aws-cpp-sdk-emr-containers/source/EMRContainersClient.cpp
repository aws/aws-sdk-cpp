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
#include <aws/emr-containers/EMRContainersClient.h>
#include <aws/emr-containers/EMRContainersEndpointProvider.h>
#include <aws/emr-containers/EMRContainersErrorMarshaller.h>
#include <aws/emr-containers/model/CancelJobRunRequest.h>
#include <aws/emr-containers/model/CreateJobTemplateRequest.h>
#include <aws/emr-containers/model/CreateManagedEndpointRequest.h>
#include <aws/emr-containers/model/CreateSecurityConfigurationRequest.h>
#include <aws/emr-containers/model/CreateVirtualClusterRequest.h>
#include <aws/emr-containers/model/DeleteJobTemplateRequest.h>
#include <aws/emr-containers/model/DeleteManagedEndpointRequest.h>
#include <aws/emr-containers/model/DeleteVirtualClusterRequest.h>
#include <aws/emr-containers/model/DescribeJobRunRequest.h>
#include <aws/emr-containers/model/DescribeJobTemplateRequest.h>
#include <aws/emr-containers/model/DescribeManagedEndpointRequest.h>
#include <aws/emr-containers/model/DescribeSecurityConfigurationRequest.h>
#include <aws/emr-containers/model/DescribeVirtualClusterRequest.h>
#include <aws/emr-containers/model/GetManagedEndpointSessionCredentialsRequest.h>
#include <aws/emr-containers/model/ListJobRunsRequest.h>
#include <aws/emr-containers/model/ListJobTemplatesRequest.h>
#include <aws/emr-containers/model/ListManagedEndpointsRequest.h>
#include <aws/emr-containers/model/ListSecurityConfigurationsRequest.h>
#include <aws/emr-containers/model/ListTagsForResourceRequest.h>
#include <aws/emr-containers/model/ListVirtualClustersRequest.h>
#include <aws/emr-containers/model/StartJobRunRequest.h>
#include <aws/emr-containers/model/TagResourceRequest.h>
#include <aws/emr-containers/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EMRContainers;
using namespace Aws::EMRContainers::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace EMRContainers {
const char SERVICE_NAME[] = "emr-containers";
const char ALLOCATION_TAG[] = "EMRContainersClient";
}  // namespace EMRContainers
}  // namespace Aws
const char* EMRContainersClient::GetServiceName() { return SERVICE_NAME; }
const char* EMRContainersClient::GetAllocationTag() { return ALLOCATION_TAG; }

EMRContainersClient::EMRContainersClient(const EMRContainers::EMRContainersClientConfiguration& clientConfiguration,
                                         std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EMRContainersClient::EMRContainersClient(const AWSCredentials& credentials,
                                         std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider,
                                         const EMRContainers::EMRContainersClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EMRContainersClient::EMRContainersClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<EMRContainersEndpointProviderBase> endpointProvider,
                                         const EMRContainers::EMRContainersClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
EMRContainersClient::EMRContainersClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EMRContainersClient::EMRContainersClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

EMRContainersClient::EMRContainersClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<EMRContainersErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<EMRContainersEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
EMRContainersClient::~EMRContainersClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<EMRContainersEndpointProviderBase>& EMRContainersClient::accessEndpointProvider() { return m_endpointProvider; }

void EMRContainersClient::init(const EMRContainers::EMRContainersClientConfiguration& config) {
  AWSClient::SetServiceClientName("EMR containers");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "emr-containers");
}

void EMRContainersClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
EMRContainersClient::InvokeOperationOutcome EMRContainersClient::InvokeServiceOperation(
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

CancelJobRunOutcome EMRContainersClient::CancelJobRun(const CancelJobRunRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelJobRun", "Required field: Id, is not set");
    return CancelJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Id]", false));
  }
  if (!request.VirtualClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelJobRun", "Required field: VirtualClusterId, is not set");
    return CancelJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [VirtualClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return CancelJobRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CreateJobTemplateOutcome EMRContainersClient::CreateJobTemplate(const CreateJobTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobtemplates");
  };

  return CreateJobTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateManagedEndpointOutcome EMRContainersClient::CreateManagedEndpoint(const CreateManagedEndpointRequest& request) const {
  if (!request.VirtualClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateManagedEndpoint", "Required field: VirtualClusterId, is not set");
    return CreateManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(
        EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints");
  };

  return CreateManagedEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSecurityConfigurationOutcome EMRContainersClient::CreateSecurityConfiguration(
    const CreateSecurityConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/securityconfigurations");
  };

  return CreateSecurityConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVirtualClusterOutcome EMRContainersClient::CreateVirtualCluster(const CreateVirtualClusterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters");
  };

  return CreateVirtualClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteJobTemplateOutcome EMRContainersClient::DeleteJobTemplate(const DeleteJobTemplateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJobTemplate", "Required field: Id, is not set");
    return DeleteJobTemplateOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobtemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteJobTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteManagedEndpointOutcome EMRContainersClient::DeleteManagedEndpoint(const DeleteManagedEndpointRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteManagedEndpoint", "Required field: Id, is not set");
    return DeleteManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(
        EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VirtualClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteManagedEndpoint", "Required field: VirtualClusterId, is not set");
    return DeleteManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(
        EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteManagedEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVirtualClusterOutcome EMRContainersClient::DeleteVirtualCluster(const DeleteVirtualClusterRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVirtualCluster", "Required field: Id, is not set");
    return DeleteVirtualClusterOutcome(Aws::Client::AWSError<EMRContainersErrors>(
        EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteVirtualClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeJobRunOutcome EMRContainersClient::DescribeJobRun(const DescribeJobRunRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJobRun", "Required field: Id, is not set");
    return DescribeJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Id]", false));
  }
  if (!request.VirtualClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJobRun", "Required field: VirtualClusterId, is not set");
    return DescribeJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [VirtualClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DescribeJobRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeJobTemplateOutcome EMRContainersClient::DescribeJobTemplate(const DescribeJobTemplateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJobTemplate", "Required field: Id, is not set");
    return DescribeJobTemplateOutcome(Aws::Client::AWSError<EMRContainersErrors>(
        EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobtemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DescribeJobTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeManagedEndpointOutcome EMRContainersClient::DescribeManagedEndpoint(const DescribeManagedEndpointRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeManagedEndpoint", "Required field: Id, is not set");
    return DescribeManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(
        EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.VirtualClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeManagedEndpoint", "Required field: VirtualClusterId, is not set");
    return DescribeManagedEndpointOutcome(Aws::Client::AWSError<EMRContainersErrors>(
        EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DescribeManagedEndpointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeSecurityConfigurationOutcome EMRContainersClient::DescribeSecurityConfiguration(
    const DescribeSecurityConfigurationRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSecurityConfiguration", "Required field: Id, is not set");
    return DescribeSecurityConfigurationOutcome(Aws::Client::AWSError<EMRContainersErrors>(
        EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/securityconfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DescribeSecurityConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeVirtualClusterOutcome EMRContainersClient::DescribeVirtualCluster(const DescribeVirtualClusterRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeVirtualCluster", "Required field: Id, is not set");
    return DescribeVirtualClusterOutcome(Aws::Client::AWSError<EMRContainersErrors>(
        EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DescribeVirtualClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetManagedEndpointSessionCredentialsOutcome EMRContainersClient::GetManagedEndpointSessionCredentials(
    const GetManagedEndpointSessionCredentialsRequest& request) const {
  if (!request.EndpointIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedEndpointSessionCredentials", "Required field: EndpointIdentifier, is not set");
    return GetManagedEndpointSessionCredentialsOutcome(Aws::Client::AWSError<EMRContainersErrors>(
        EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointIdentifier]", false));
  }
  if (!request.VirtualClusterIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedEndpointSessionCredentials", "Required field: VirtualClusterIdentifier, is not set");
    return GetManagedEndpointSessionCredentialsOutcome(Aws::Client::AWSError<EMRContainersErrors>(
        EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/credentials");
  };

  return GetManagedEndpointSessionCredentialsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListJobRunsOutcome EMRContainersClient::ListJobRuns(const ListJobRunsRequest& request) const {
  if (!request.VirtualClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobRuns", "Required field: VirtualClusterId, is not set");
    return ListJobRunsOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [VirtualClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns");
  };

  return ListJobRunsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListJobTemplatesOutcome EMRContainersClient::ListJobTemplates(const ListJobTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobtemplates");
  };

  return ListJobTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListManagedEndpointsOutcome EMRContainersClient::ListManagedEndpoints(const ListManagedEndpointsRequest& request) const {
  if (!request.VirtualClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListManagedEndpoints", "Required field: VirtualClusterId, is not set");
    return ListManagedEndpointsOutcome(Aws::Client::AWSError<EMRContainersErrors>(
        EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VirtualClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints");
  };

  return ListManagedEndpointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSecurityConfigurationsOutcome EMRContainersClient::ListSecurityConfigurations(const ListSecurityConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/securityconfigurations");
  };

  return ListSecurityConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome EMRContainersClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<EMRContainersErrors>(
        EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVirtualClustersOutcome EMRContainersClient::ListVirtualClusters(const ListVirtualClustersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters");
  };

  return ListVirtualClustersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

StartJobRunOutcome EMRContainersClient::StartJobRun(const StartJobRunRequest& request) const {
  if (!request.VirtualClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartJobRun", "Required field: VirtualClusterId, is not set");
    return StartJobRunOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [VirtualClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/virtualclusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVirtualClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobruns");
  };

  return StartJobRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome EMRContainersClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome EMRContainersClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<EMRContainersErrors>(EMRContainersErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}
