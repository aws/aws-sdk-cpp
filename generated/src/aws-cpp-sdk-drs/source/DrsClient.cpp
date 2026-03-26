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
#include <aws/drs/DrsClient.h>
#include <aws/drs/DrsEndpointProvider.h>
#include <aws/drs/DrsErrorMarshaller.h>
#include <aws/drs/model/AssociateSourceNetworkStackRequest.h>
#include <aws/drs/model/CreateExtendedSourceServerRequest.h>
#include <aws/drs/model/CreateLaunchConfigurationTemplateRequest.h>
#include <aws/drs/model/CreateReplicationConfigurationTemplateRequest.h>
#include <aws/drs/model/CreateSourceNetworkRequest.h>
#include <aws/drs/model/DeleteJobRequest.h>
#include <aws/drs/model/DeleteLaunchActionRequest.h>
#include <aws/drs/model/DeleteLaunchConfigurationTemplateRequest.h>
#include <aws/drs/model/DeleteRecoveryInstanceRequest.h>
#include <aws/drs/model/DeleteReplicationConfigurationTemplateRequest.h>
#include <aws/drs/model/DeleteSourceNetworkRequest.h>
#include <aws/drs/model/DeleteSourceServerRequest.h>
#include <aws/drs/model/DescribeJobLogItemsRequest.h>
#include <aws/drs/model/DescribeJobsRequest.h>
#include <aws/drs/model/DescribeLaunchConfigurationTemplatesRequest.h>
#include <aws/drs/model/DescribeRecoveryInstancesRequest.h>
#include <aws/drs/model/DescribeRecoverySnapshotsRequest.h>
#include <aws/drs/model/DescribeReplicationConfigurationTemplatesRequest.h>
#include <aws/drs/model/DescribeSourceNetworksRequest.h>
#include <aws/drs/model/DescribeSourceServersRequest.h>
#include <aws/drs/model/DisconnectRecoveryInstanceRequest.h>
#include <aws/drs/model/DisconnectSourceServerRequest.h>
#include <aws/drs/model/ExportSourceNetworkCfnTemplateRequest.h>
#include <aws/drs/model/GetFailbackReplicationConfigurationRequest.h>
#include <aws/drs/model/GetLaunchConfigurationRequest.h>
#include <aws/drs/model/GetReplicationConfigurationRequest.h>
#include <aws/drs/model/InitializeServiceRequest.h>
#include <aws/drs/model/ListExtensibleSourceServersRequest.h>
#include <aws/drs/model/ListLaunchActionsRequest.h>
#include <aws/drs/model/ListStagingAccountsRequest.h>
#include <aws/drs/model/ListTagsForResourceRequest.h>
#include <aws/drs/model/PutLaunchActionRequest.h>
#include <aws/drs/model/ReverseReplicationRequest.h>
#include <aws/drs/model/StartFailbackLaunchRequest.h>
#include <aws/drs/model/StartRecoveryRequest.h>
#include <aws/drs/model/StartReplicationRequest.h>
#include <aws/drs/model/StartSourceNetworkRecoveryRequest.h>
#include <aws/drs/model/StartSourceNetworkReplicationRequest.h>
#include <aws/drs/model/StopFailbackRequest.h>
#include <aws/drs/model/StopReplicationRequest.h>
#include <aws/drs/model/StopSourceNetworkReplicationRequest.h>
#include <aws/drs/model/TagResourceRequest.h>
#include <aws/drs/model/TerminateRecoveryInstancesRequest.h>
#include <aws/drs/model/UntagResourceRequest.h>
#include <aws/drs/model/UpdateFailbackReplicationConfigurationRequest.h>
#include <aws/drs/model/UpdateLaunchConfigurationRequest.h>
#include <aws/drs/model/UpdateLaunchConfigurationTemplateRequest.h>
#include <aws/drs/model/UpdateReplicationConfigurationRequest.h>
#include <aws/drs/model/UpdateReplicationConfigurationTemplateRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::drs;
using namespace Aws::drs::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace drs {
const char SERVICE_NAME[] = "drs";
const char ALLOCATION_TAG[] = "DrsClient";
}  // namespace drs
}  // namespace Aws
const char* DrsClient::GetServiceName() { return SERVICE_NAME; }
const char* DrsClient::GetAllocationTag() { return ALLOCATION_TAG; }

DrsClient::DrsClient(const drs::DrsClientConfiguration& clientConfiguration, std::shared_ptr<DrsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DrsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DrsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DrsClient::DrsClient(const AWSCredentials& credentials, std::shared_ptr<DrsEndpointProviderBase> endpointProvider,
                     const drs::DrsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DrsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DrsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DrsClient::DrsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<DrsEndpointProviderBase> endpointProvider, const drs::DrsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DrsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DrsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DrsClient::DrsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DrsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DrsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DrsClient::DrsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DrsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DrsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DrsClient::DrsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DrsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DrsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DrsClient::~DrsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DrsEndpointProviderBase>& DrsClient::accessEndpointProvider() { return m_endpointProvider; }

void DrsClient::init(const drs::DrsClientConfiguration& config) {
  AWSClient::SetServiceClientName("drs");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "drs");
}

void DrsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DrsClient::InvokeOperationOutcome DrsClient::InvokeServiceOperation(
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

AssociateSourceNetworkStackOutcome DrsClient::AssociateSourceNetworkStack(const AssociateSourceNetworkStackRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/AssociateSourceNetworkStack");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateSourceNetworkStackOutcome(result.GetResultWithOwnership())
                            : AssociateSourceNetworkStackOutcome(std::move(result.GetError()));
}

CreateExtendedSourceServerOutcome DrsClient::CreateExtendedSourceServer(const CreateExtendedSourceServerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateExtendedSourceServer");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateExtendedSourceServerOutcome(result.GetResultWithOwnership())
                            : CreateExtendedSourceServerOutcome(std::move(result.GetError()));
}

CreateLaunchConfigurationTemplateOutcome DrsClient::CreateLaunchConfigurationTemplate(
    const CreateLaunchConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateLaunchConfigurationTemplate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLaunchConfigurationTemplateOutcome(result.GetResultWithOwnership())
                            : CreateLaunchConfigurationTemplateOutcome(std::move(result.GetError()));
}

CreateReplicationConfigurationTemplateOutcome DrsClient::CreateReplicationConfigurationTemplate(
    const CreateReplicationConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateReplicationConfigurationTemplate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateReplicationConfigurationTemplateOutcome(result.GetResultWithOwnership())
                            : CreateReplicationConfigurationTemplateOutcome(std::move(result.GetError()));
}

CreateSourceNetworkOutcome DrsClient::CreateSourceNetwork(const CreateSourceNetworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateSourceNetwork");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSourceNetworkOutcome(result.GetResultWithOwnership())
                            : CreateSourceNetworkOutcome(std::move(result.GetError()));
}

DeleteJobOutcome DrsClient::DeleteJob(const DeleteJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteJob");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteJobOutcome(result.GetResultWithOwnership()) : DeleteJobOutcome(std::move(result.GetError()));
}

DeleteLaunchActionOutcome DrsClient::DeleteLaunchAction(const DeleteLaunchActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLaunchAction");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLaunchActionOutcome(result.GetResultWithOwnership())
                            : DeleteLaunchActionOutcome(std::move(result.GetError()));
}

DeleteLaunchConfigurationTemplateOutcome DrsClient::DeleteLaunchConfigurationTemplate(
    const DeleteLaunchConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLaunchConfigurationTemplate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLaunchConfigurationTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteLaunchConfigurationTemplateOutcome(std::move(result.GetError()));
}

DeleteRecoveryInstanceOutcome DrsClient::DeleteRecoveryInstance(const DeleteRecoveryInstanceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteRecoveryInstance");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRecoveryInstanceOutcome(result.GetResultWithOwnership())
                            : DeleteRecoveryInstanceOutcome(std::move(result.GetError()));
}

DeleteReplicationConfigurationTemplateOutcome DrsClient::DeleteReplicationConfigurationTemplate(
    const DeleteReplicationConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteReplicationConfigurationTemplate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteReplicationConfigurationTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteReplicationConfigurationTemplateOutcome(std::move(result.GetError()));
}

DeleteSourceNetworkOutcome DrsClient::DeleteSourceNetwork(const DeleteSourceNetworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteSourceNetwork");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSourceNetworkOutcome(result.GetResultWithOwnership())
                            : DeleteSourceNetworkOutcome(std::move(result.GetError()));
}

DeleteSourceServerOutcome DrsClient::DeleteSourceServer(const DeleteSourceServerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteSourceServer");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSourceServerOutcome(result.GetResultWithOwnership())
                            : DeleteSourceServerOutcome(std::move(result.GetError()));
}

DescribeJobLogItemsOutcome DrsClient::DescribeJobLogItems(const DescribeJobLogItemsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeJobLogItems");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeJobLogItemsOutcome(result.GetResultWithOwnership())
                            : DescribeJobLogItemsOutcome(std::move(result.GetError()));
}

DescribeJobsOutcome DrsClient::DescribeJobs(const DescribeJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeJobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeJobsOutcome(result.GetResultWithOwnership()) : DescribeJobsOutcome(std::move(result.GetError()));
}

DescribeLaunchConfigurationTemplatesOutcome DrsClient::DescribeLaunchConfigurationTemplates(
    const DescribeLaunchConfigurationTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeLaunchConfigurationTemplates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLaunchConfigurationTemplatesOutcome(result.GetResultWithOwnership())
                            : DescribeLaunchConfigurationTemplatesOutcome(std::move(result.GetError()));
}

DescribeRecoveryInstancesOutcome DrsClient::DescribeRecoveryInstances(const DescribeRecoveryInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeRecoveryInstances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRecoveryInstancesOutcome(result.GetResultWithOwnership())
                            : DescribeRecoveryInstancesOutcome(std::move(result.GetError()));
}

DescribeRecoverySnapshotsOutcome DrsClient::DescribeRecoverySnapshots(const DescribeRecoverySnapshotsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeRecoverySnapshots");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRecoverySnapshotsOutcome(result.GetResultWithOwnership())
                            : DescribeRecoverySnapshotsOutcome(std::move(result.GetError()));
}

DescribeReplicationConfigurationTemplatesOutcome DrsClient::DescribeReplicationConfigurationTemplates(
    const DescribeReplicationConfigurationTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeReplicationConfigurationTemplates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReplicationConfigurationTemplatesOutcome(result.GetResultWithOwnership())
                            : DescribeReplicationConfigurationTemplatesOutcome(std::move(result.GetError()));
}

DescribeSourceNetworksOutcome DrsClient::DescribeSourceNetworks(const DescribeSourceNetworksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeSourceNetworks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSourceNetworksOutcome(result.GetResultWithOwnership())
                            : DescribeSourceNetworksOutcome(std::move(result.GetError()));
}

DescribeSourceServersOutcome DrsClient::DescribeSourceServers(const DescribeSourceServersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeSourceServers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSourceServersOutcome(result.GetResultWithOwnership())
                            : DescribeSourceServersOutcome(std::move(result.GetError()));
}

DisconnectRecoveryInstanceOutcome DrsClient::DisconnectRecoveryInstance(const DisconnectRecoveryInstanceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DisconnectRecoveryInstance");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisconnectRecoveryInstanceOutcome(result.GetResultWithOwnership())
                            : DisconnectRecoveryInstanceOutcome(std::move(result.GetError()));
}

DisconnectSourceServerOutcome DrsClient::DisconnectSourceServer(const DisconnectSourceServerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DisconnectSourceServer");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisconnectSourceServerOutcome(result.GetResultWithOwnership())
                            : DisconnectSourceServerOutcome(std::move(result.GetError()));
}

ExportSourceNetworkCfnTemplateOutcome DrsClient::ExportSourceNetworkCfnTemplate(
    const ExportSourceNetworkCfnTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ExportSourceNetworkCfnTemplate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExportSourceNetworkCfnTemplateOutcome(result.GetResultWithOwnership())
                            : ExportSourceNetworkCfnTemplateOutcome(std::move(result.GetError()));
}

GetFailbackReplicationConfigurationOutcome DrsClient::GetFailbackReplicationConfiguration(
    const GetFailbackReplicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetFailbackReplicationConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetFailbackReplicationConfigurationOutcome(result.GetResultWithOwnership())
                            : GetFailbackReplicationConfigurationOutcome(std::move(result.GetError()));
}

GetLaunchConfigurationOutcome DrsClient::GetLaunchConfiguration(const GetLaunchConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetLaunchConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLaunchConfigurationOutcome(result.GetResultWithOwnership())
                            : GetLaunchConfigurationOutcome(std::move(result.GetError()));
}

GetReplicationConfigurationOutcome DrsClient::GetReplicationConfiguration(const GetReplicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetReplicationConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetReplicationConfigurationOutcome(result.GetResultWithOwnership())
                            : GetReplicationConfigurationOutcome(std::move(result.GetError()));
}

InitializeServiceOutcome DrsClient::InitializeService(const InitializeServiceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/InitializeService");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InitializeServiceOutcome(result.GetResultWithOwnership())
                            : InitializeServiceOutcome(std::move(result.GetError()));
}

ListExtensibleSourceServersOutcome DrsClient::ListExtensibleSourceServers(const ListExtensibleSourceServersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListExtensibleSourceServers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListExtensibleSourceServersOutcome(result.GetResultWithOwnership())
                            : ListExtensibleSourceServersOutcome(std::move(result.GetError()));
}

ListLaunchActionsOutcome DrsClient::ListLaunchActions(const ListLaunchActionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListLaunchActions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLaunchActionsOutcome(result.GetResultWithOwnership())
                            : ListLaunchActionsOutcome(std::move(result.GetError()));
}

ListStagingAccountsOutcome DrsClient::ListStagingAccounts(const ListStagingAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListStagingAccounts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListStagingAccountsOutcome(result.GetResultWithOwnership())
                            : ListStagingAccountsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome DrsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(
        Aws::Client::AWSError<DrsErrors>(DrsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutLaunchActionOutcome DrsClient::PutLaunchAction(const PutLaunchActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PutLaunchAction");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutLaunchActionOutcome(result.GetResultWithOwnership())
                            : PutLaunchActionOutcome(std::move(result.GetError()));
}

ReverseReplicationOutcome DrsClient::ReverseReplication(const ReverseReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ReverseReplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReverseReplicationOutcome(result.GetResultWithOwnership())
                            : ReverseReplicationOutcome(std::move(result.GetError()));
}

StartFailbackLaunchOutcome DrsClient::StartFailbackLaunch(const StartFailbackLaunchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartFailbackLaunch");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartFailbackLaunchOutcome(result.GetResultWithOwnership())
                            : StartFailbackLaunchOutcome(std::move(result.GetError()));
}

StartRecoveryOutcome DrsClient::StartRecovery(const StartRecoveryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartRecovery");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartRecoveryOutcome(result.GetResultWithOwnership()) : StartRecoveryOutcome(std::move(result.GetError()));
}

StartReplicationOutcome DrsClient::StartReplication(const StartReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartReplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartReplicationOutcome(result.GetResultWithOwnership())
                            : StartReplicationOutcome(std::move(result.GetError()));
}

StartSourceNetworkRecoveryOutcome DrsClient::StartSourceNetworkRecovery(const StartSourceNetworkRecoveryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartSourceNetworkRecovery");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartSourceNetworkRecoveryOutcome(result.GetResultWithOwnership())
                            : StartSourceNetworkRecoveryOutcome(std::move(result.GetError()));
}

StartSourceNetworkReplicationOutcome DrsClient::StartSourceNetworkReplication(const StartSourceNetworkReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartSourceNetworkReplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartSourceNetworkReplicationOutcome(result.GetResultWithOwnership())
                            : StartSourceNetworkReplicationOutcome(std::move(result.GetError()));
}

StopFailbackOutcome DrsClient::StopFailback(const StopFailbackRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopFailback");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopFailbackOutcome(result.GetResultWithOwnership()) : StopFailbackOutcome(std::move(result.GetError()));
}

StopReplicationOutcome DrsClient::StopReplication(const StopReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopReplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopReplicationOutcome(result.GetResultWithOwnership())
                            : StopReplicationOutcome(std::move(result.GetError()));
}

StopSourceNetworkReplicationOutcome DrsClient::StopSourceNetworkReplication(const StopSourceNetworkReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopSourceNetworkReplication");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopSourceNetworkReplicationOutcome(result.GetResultWithOwnership())
                            : StopSourceNetworkReplicationOutcome(std::move(result.GetError()));
}

TagResourceOutcome DrsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(
        Aws::Client::AWSError<DrsErrors>(DrsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

TerminateRecoveryInstancesOutcome DrsClient::TerminateRecoveryInstances(const TerminateRecoveryInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TerminateRecoveryInstances");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateRecoveryInstancesOutcome(result.GetResultWithOwnership())
                            : TerminateRecoveryInstancesOutcome(std::move(result.GetError()));
}

UntagResourceOutcome DrsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<DrsErrors>(DrsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<DrsErrors>(DrsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateFailbackReplicationConfigurationOutcome DrsClient::UpdateFailbackReplicationConfiguration(
    const UpdateFailbackReplicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateFailbackReplicationConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateFailbackReplicationConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateFailbackReplicationConfigurationOutcome(std::move(result.GetError()));
}

UpdateLaunchConfigurationOutcome DrsClient::UpdateLaunchConfiguration(const UpdateLaunchConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLaunchConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLaunchConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateLaunchConfigurationOutcome(std::move(result.GetError()));
}

UpdateLaunchConfigurationTemplateOutcome DrsClient::UpdateLaunchConfigurationTemplate(
    const UpdateLaunchConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLaunchConfigurationTemplate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLaunchConfigurationTemplateOutcome(result.GetResultWithOwnership())
                            : UpdateLaunchConfigurationTemplateOutcome(std::move(result.GetError()));
}

UpdateReplicationConfigurationOutcome DrsClient::UpdateReplicationConfiguration(
    const UpdateReplicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateReplicationConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateReplicationConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateReplicationConfigurationOutcome(std::move(result.GetError()));
}

UpdateReplicationConfigurationTemplateOutcome DrsClient::UpdateReplicationConfigurationTemplate(
    const UpdateReplicationConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateReplicationConfigurationTemplate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateReplicationConfigurationTemplateOutcome(result.GetResultWithOwnership())
                            : UpdateReplicationConfigurationTemplateOutcome(std::move(result.GetError()));
}
