/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/CloudHSMV2Client.h>
#include <aws/cloudhsmv2/CloudHSMV2EndpointProvider.h>
#include <aws/cloudhsmv2/CloudHSMV2ErrorMarshaller.h>
#include <aws/cloudhsmv2/model/CopyBackupToRegionRequest.h>
#include <aws/cloudhsmv2/model/CreateClusterRequest.h>
#include <aws/cloudhsmv2/model/CreateHsmRequest.h>
#include <aws/cloudhsmv2/model/DeleteBackupRequest.h>
#include <aws/cloudhsmv2/model/DeleteClusterRequest.h>
#include <aws/cloudhsmv2/model/DeleteHsmRequest.h>
#include <aws/cloudhsmv2/model/DeleteResourcePolicyRequest.h>
#include <aws/cloudhsmv2/model/DescribeBackupsRequest.h>
#include <aws/cloudhsmv2/model/DescribeClustersRequest.h>
#include <aws/cloudhsmv2/model/GetResourcePolicyRequest.h>
#include <aws/cloudhsmv2/model/InitializeClusterRequest.h>
#include <aws/cloudhsmv2/model/ListTagsRequest.h>
#include <aws/cloudhsmv2/model/ModifyBackupAttributesRequest.h>
#include <aws/cloudhsmv2/model/ModifyClusterRequest.h>
#include <aws/cloudhsmv2/model/PutResourcePolicyRequest.h>
#include <aws/cloudhsmv2/model/RestoreBackupRequest.h>
#include <aws/cloudhsmv2/model/TagResourceRequest.h>
#include <aws/cloudhsmv2/model/UntagResourceRequest.h>
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
using namespace Aws::CloudHSMV2;
using namespace Aws::CloudHSMV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudHSMV2 {
const char SERVICE_NAME[] = "cloudhsm";
const char ALLOCATION_TAG[] = "CloudHSMV2Client";
}  // namespace CloudHSMV2
}  // namespace Aws
const char* CloudHSMV2Client::GetServiceName() { return SERVICE_NAME; }
const char* CloudHSMV2Client::GetAllocationTag() { return ALLOCATION_TAG; }

CloudHSMV2Client::CloudHSMV2Client(const CloudHSMV2::CloudHSMV2ClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CloudHSMV2EndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudHSMV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudHSMV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudHSMV2Client::CloudHSMV2Client(const AWSCredentials& credentials, std::shared_ptr<CloudHSMV2EndpointProviderBase> endpointProvider,
                                   const CloudHSMV2::CloudHSMV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudHSMV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudHSMV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudHSMV2Client::CloudHSMV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CloudHSMV2EndpointProviderBase> endpointProvider,
                                   const CloudHSMV2::CloudHSMV2ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudHSMV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudHSMV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudHSMV2Client::CloudHSMV2Client(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudHSMV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudHSMV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudHSMV2Client::CloudHSMV2Client(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudHSMV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudHSMV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudHSMV2Client::CloudHSMV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudHSMV2ErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudHSMV2EndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudHSMV2Client::~CloudHSMV2Client() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudHSMV2EndpointProviderBase>& CloudHSMV2Client::accessEndpointProvider() { return m_endpointProvider; }

void CloudHSMV2Client::init(const CloudHSMV2::CloudHSMV2ClientConfiguration& config) {
  AWSClient::SetServiceClientName("CloudHSM V2");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cloudhsm");
}

void CloudHSMV2Client::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CloudHSMV2Client::InvokeOperationOutcome CloudHSMV2Client::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CopyBackupToRegionOutcome CloudHSMV2Client::CopyBackupToRegion(const CopyBackupToRegionRequest& request) const {
  return CopyBackupToRegionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateClusterOutcome CloudHSMV2Client::CreateCluster(const CreateClusterRequest& request) const {
  return CreateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHsmOutcome CloudHSMV2Client::CreateHsm(const CreateHsmRequest& request) const {
  return CreateHsmOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBackupOutcome CloudHSMV2Client::DeleteBackup(const DeleteBackupRequest& request) const {
  return DeleteBackupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteClusterOutcome CloudHSMV2Client::DeleteCluster(const DeleteClusterRequest& request) const {
  return DeleteClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteHsmOutcome CloudHSMV2Client::DeleteHsm(const DeleteHsmRequest& request) const {
  return DeleteHsmOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome CloudHSMV2Client::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBackupsOutcome CloudHSMV2Client::DescribeBackups(const DescribeBackupsRequest& request) const {
  return DescribeBackupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeClustersOutcome CloudHSMV2Client::DescribeClusters(const DescribeClustersRequest& request) const {
  return DescribeClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcePolicyOutcome CloudHSMV2Client::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  return GetResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

InitializeClusterOutcome CloudHSMV2Client::InitializeCluster(const InitializeClusterRequest& request) const {
  return InitializeClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsOutcome CloudHSMV2Client::ListTags(const ListTagsRequest& request) const {
  return ListTagsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyBackupAttributesOutcome CloudHSMV2Client::ModifyBackupAttributes(const ModifyBackupAttributesRequest& request) const {
  return ModifyBackupAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyClusterOutcome CloudHSMV2Client::ModifyCluster(const ModifyClusterRequest& request) const {
  return ModifyClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome CloudHSMV2Client::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreBackupOutcome CloudHSMV2Client::RestoreBackup(const RestoreBackupRequest& request) const {
  return RestoreBackupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome CloudHSMV2Client::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CloudHSMV2Client::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
