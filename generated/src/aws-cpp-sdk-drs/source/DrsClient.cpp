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

  return AssociateSourceNetworkStackOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateExtendedSourceServerOutcome DrsClient::CreateExtendedSourceServer(const CreateExtendedSourceServerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateExtendedSourceServer");
  };

  return CreateExtendedSourceServerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLaunchConfigurationTemplateOutcome DrsClient::CreateLaunchConfigurationTemplate(
    const CreateLaunchConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateLaunchConfigurationTemplate");
  };

  return CreateLaunchConfigurationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReplicationConfigurationTemplateOutcome DrsClient::CreateReplicationConfigurationTemplate(
    const CreateReplicationConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateReplicationConfigurationTemplate");
  };

  return CreateReplicationConfigurationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSourceNetworkOutcome DrsClient::CreateSourceNetwork(const CreateSourceNetworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateSourceNetwork");
  };

  return CreateSourceNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteJobOutcome DrsClient::DeleteJob(const DeleteJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteJob");
  };

  return DeleteJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLaunchActionOutcome DrsClient::DeleteLaunchAction(const DeleteLaunchActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLaunchAction");
  };

  return DeleteLaunchActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLaunchConfigurationTemplateOutcome DrsClient::DeleteLaunchConfigurationTemplate(
    const DeleteLaunchConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLaunchConfigurationTemplate");
  };

  return DeleteLaunchConfigurationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRecoveryInstanceOutcome DrsClient::DeleteRecoveryInstance(const DeleteRecoveryInstanceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteRecoveryInstance");
  };

  return DeleteRecoveryInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteReplicationConfigurationTemplateOutcome DrsClient::DeleteReplicationConfigurationTemplate(
    const DeleteReplicationConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteReplicationConfigurationTemplate");
  };

  return DeleteReplicationConfigurationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSourceNetworkOutcome DrsClient::DeleteSourceNetwork(const DeleteSourceNetworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteSourceNetwork");
  };

  return DeleteSourceNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSourceServerOutcome DrsClient::DeleteSourceServer(const DeleteSourceServerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteSourceServer");
  };

  return DeleteSourceServerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeJobLogItemsOutcome DrsClient::DescribeJobLogItems(const DescribeJobLogItemsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeJobLogItems");
  };

  return DescribeJobLogItemsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeJobsOutcome DrsClient::DescribeJobs(const DescribeJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeJobs");
  };

  return DescribeJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLaunchConfigurationTemplatesOutcome DrsClient::DescribeLaunchConfigurationTemplates(
    const DescribeLaunchConfigurationTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeLaunchConfigurationTemplates");
  };

  return DescribeLaunchConfigurationTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRecoveryInstancesOutcome DrsClient::DescribeRecoveryInstances(const DescribeRecoveryInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeRecoveryInstances");
  };

  return DescribeRecoveryInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRecoverySnapshotsOutcome DrsClient::DescribeRecoverySnapshots(const DescribeRecoverySnapshotsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeRecoverySnapshots");
  };

  return DescribeRecoverySnapshotsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReplicationConfigurationTemplatesOutcome DrsClient::DescribeReplicationConfigurationTemplates(
    const DescribeReplicationConfigurationTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeReplicationConfigurationTemplates");
  };

  return DescribeReplicationConfigurationTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSourceNetworksOutcome DrsClient::DescribeSourceNetworks(const DescribeSourceNetworksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeSourceNetworks");
  };

  return DescribeSourceNetworksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSourceServersOutcome DrsClient::DescribeSourceServers(const DescribeSourceServersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeSourceServers");
  };

  return DescribeSourceServersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisconnectRecoveryInstanceOutcome DrsClient::DisconnectRecoveryInstance(const DisconnectRecoveryInstanceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DisconnectRecoveryInstance");
  };

  return DisconnectRecoveryInstanceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisconnectSourceServerOutcome DrsClient::DisconnectSourceServer(const DisconnectSourceServerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DisconnectSourceServer");
  };

  return DisconnectSourceServerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportSourceNetworkCfnTemplateOutcome DrsClient::ExportSourceNetworkCfnTemplate(
    const ExportSourceNetworkCfnTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ExportSourceNetworkCfnTemplate");
  };

  return ExportSourceNetworkCfnTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFailbackReplicationConfigurationOutcome DrsClient::GetFailbackReplicationConfiguration(
    const GetFailbackReplicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetFailbackReplicationConfiguration");
  };

  return GetFailbackReplicationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLaunchConfigurationOutcome DrsClient::GetLaunchConfiguration(const GetLaunchConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetLaunchConfiguration");
  };

  return GetLaunchConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetReplicationConfigurationOutcome DrsClient::GetReplicationConfiguration(const GetReplicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetReplicationConfiguration");
  };

  return GetReplicationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

InitializeServiceOutcome DrsClient::InitializeService(const InitializeServiceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/InitializeService");
  };

  return InitializeServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExtensibleSourceServersOutcome DrsClient::ListExtensibleSourceServers(const ListExtensibleSourceServersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListExtensibleSourceServers");
  };

  return ListExtensibleSourceServersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLaunchActionsOutcome DrsClient::ListLaunchActions(const ListLaunchActionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListLaunchActions");
  };

  return ListLaunchActionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListStagingAccountsOutcome DrsClient::ListStagingAccounts(const ListStagingAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListStagingAccounts");
  };

  return ListStagingAccountsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutLaunchActionOutcome DrsClient::PutLaunchAction(const PutLaunchActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PutLaunchAction");
  };

  return PutLaunchActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ReverseReplicationOutcome DrsClient::ReverseReplication(const ReverseReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ReverseReplication");
  };

  return ReverseReplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartFailbackLaunchOutcome DrsClient::StartFailbackLaunch(const StartFailbackLaunchRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartFailbackLaunch");
  };

  return StartFailbackLaunchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRecoveryOutcome DrsClient::StartRecovery(const StartRecoveryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartRecovery");
  };

  return StartRecoveryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartReplicationOutcome DrsClient::StartReplication(const StartReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartReplication");
  };

  return StartReplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSourceNetworkRecoveryOutcome DrsClient::StartSourceNetworkRecovery(const StartSourceNetworkRecoveryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartSourceNetworkRecovery");
  };

  return StartSourceNetworkRecoveryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSourceNetworkReplicationOutcome DrsClient::StartSourceNetworkReplication(const StartSourceNetworkReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartSourceNetworkReplication");
  };

  return StartSourceNetworkReplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopFailbackOutcome DrsClient::StopFailback(const StopFailbackRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopFailback");
  };

  return StopFailbackOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopReplicationOutcome DrsClient::StopReplication(const StopReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopReplication");
  };

  return StopReplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopSourceNetworkReplicationOutcome DrsClient::StopSourceNetworkReplication(const StopSourceNetworkReplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StopSourceNetworkReplication");
  };

  return StopSourceNetworkReplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateRecoveryInstancesOutcome DrsClient::TerminateRecoveryInstances(const TerminateRecoveryInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/TerminateRecoveryInstances");
  };

  return TerminateRecoveryInstancesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateFailbackReplicationConfigurationOutcome DrsClient::UpdateFailbackReplicationConfiguration(
    const UpdateFailbackReplicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateFailbackReplicationConfiguration");
  };

  return UpdateFailbackReplicationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLaunchConfigurationOutcome DrsClient::UpdateLaunchConfiguration(const UpdateLaunchConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLaunchConfiguration");
  };

  return UpdateLaunchConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLaunchConfigurationTemplateOutcome DrsClient::UpdateLaunchConfigurationTemplate(
    const UpdateLaunchConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLaunchConfigurationTemplate");
  };

  return UpdateLaunchConfigurationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateReplicationConfigurationOutcome DrsClient::UpdateReplicationConfiguration(
    const UpdateReplicationConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateReplicationConfiguration");
  };

  return UpdateReplicationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateReplicationConfigurationTemplateOutcome DrsClient::UpdateReplicationConfigurationTemplate(
    const UpdateReplicationConfigurationTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateReplicationConfigurationTemplate");
  };

  return UpdateReplicationConfigurationTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
