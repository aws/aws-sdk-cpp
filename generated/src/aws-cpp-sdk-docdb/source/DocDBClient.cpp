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
#include <aws/docdb/DocDBClient.h>
#include <aws/docdb/DocDBEndpointProvider.h>
#include <aws/docdb/DocDBErrorMarshaller.h>
#include <aws/docdb/model/AddSourceIdentifierToSubscriptionRequest.h>
#include <aws/docdb/model/AddTagsToResourceRequest.h>
#include <aws/docdb/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/docdb/model/CopyDBClusterParameterGroupRequest.h>
#include <aws/docdb/model/CopyDBClusterSnapshotRequest.h>
#include <aws/docdb/model/CreateDBClusterParameterGroupRequest.h>
#include <aws/docdb/model/CreateDBClusterRequest.h>
#include <aws/docdb/model/CreateDBClusterSnapshotRequest.h>
#include <aws/docdb/model/CreateDBInstanceRequest.h>
#include <aws/docdb/model/CreateDBSubnetGroupRequest.h>
#include <aws/docdb/model/CreateEventSubscriptionRequest.h>
#include <aws/docdb/model/CreateGlobalClusterRequest.h>
#include <aws/docdb/model/DeleteDBClusterParameterGroupRequest.h>
#include <aws/docdb/model/DeleteDBClusterRequest.h>
#include <aws/docdb/model/DeleteDBClusterSnapshotRequest.h>
#include <aws/docdb/model/DeleteDBInstanceRequest.h>
#include <aws/docdb/model/DeleteDBSubnetGroupRequest.h>
#include <aws/docdb/model/DeleteEventSubscriptionRequest.h>
#include <aws/docdb/model/DeleteGlobalClusterRequest.h>
#include <aws/docdb/model/DescribeCertificatesRequest.h>
#include <aws/docdb/model/DescribeDBClusterParameterGroupsRequest.h>
#include <aws/docdb/model/DescribeDBClusterParametersRequest.h>
#include <aws/docdb/model/DescribeDBClusterSnapshotAttributesRequest.h>
#include <aws/docdb/model/DescribeDBClusterSnapshotsRequest.h>
#include <aws/docdb/model/DescribeDBClustersRequest.h>
#include <aws/docdb/model/DescribeDBEngineVersionsRequest.h>
#include <aws/docdb/model/DescribeDBInstancesRequest.h>
#include <aws/docdb/model/DescribeDBSubnetGroupsRequest.h>
#include <aws/docdb/model/DescribeEngineDefaultClusterParametersRequest.h>
#include <aws/docdb/model/DescribeEventCategoriesRequest.h>
#include <aws/docdb/model/DescribeEventSubscriptionsRequest.h>
#include <aws/docdb/model/DescribeEventsRequest.h>
#include <aws/docdb/model/DescribeGlobalClustersRequest.h>
#include <aws/docdb/model/DescribeOrderableDBInstanceOptionsRequest.h>
#include <aws/docdb/model/DescribePendingMaintenanceActionsRequest.h>
#include <aws/docdb/model/FailoverDBClusterRequest.h>
#include <aws/docdb/model/FailoverGlobalClusterRequest.h>
#include <aws/docdb/model/ListTagsForResourceRequest.h>
#include <aws/docdb/model/ModifyDBClusterParameterGroupRequest.h>
#include <aws/docdb/model/ModifyDBClusterRequest.h>
#include <aws/docdb/model/ModifyDBClusterSnapshotAttributeRequest.h>
#include <aws/docdb/model/ModifyDBInstanceRequest.h>
#include <aws/docdb/model/ModifyDBSubnetGroupRequest.h>
#include <aws/docdb/model/ModifyEventSubscriptionRequest.h>
#include <aws/docdb/model/ModifyGlobalClusterRequest.h>
#include <aws/docdb/model/RebootDBInstanceRequest.h>
#include <aws/docdb/model/RemoveFromGlobalClusterRequest.h>
#include <aws/docdb/model/RemoveSourceIdentifierFromSubscriptionRequest.h>
#include <aws/docdb/model/RemoveTagsFromResourceRequest.h>
#include <aws/docdb/model/ResetDBClusterParameterGroupRequest.h>
#include <aws/docdb/model/RestoreDBClusterFromSnapshotRequest.h>
#include <aws/docdb/model/RestoreDBClusterToPointInTimeRequest.h>
#include <aws/docdb/model/StartDBClusterRequest.h>
#include <aws/docdb/model/StopDBClusterRequest.h>
#include <aws/docdb/model/SwitchoverGlobalClusterRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DocDB;
using namespace Aws::DocDB::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DocDB {
const char SERVICE_NAME[] = "rds";
const char ALLOCATION_TAG[] = "DocDBClient";
}  // namespace DocDB
}  // namespace Aws
const char* DocDBClient::GetServiceName() { return SERVICE_NAME; }
const char* DocDBClient::GetAllocationTag() { return ALLOCATION_TAG; }

DocDBClient::DocDBClient(const DocDB::DocDBClientConfiguration& clientConfiguration,
                         std::shared_ptr<DocDBEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DocDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DocDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DocDBClient::DocDBClient(const AWSCredentials& credentials, std::shared_ptr<DocDBEndpointProviderBase> endpointProvider,
                         const DocDB::DocDBClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DocDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DocDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DocDBClient::DocDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<DocDBEndpointProviderBase> endpointProvider,
                         const DocDB::DocDBClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DocDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DocDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DocDBClient::DocDBClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DocDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DocDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DocDBClient::DocDBClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DocDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DocDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DocDBClient::DocDBClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DocDBErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DocDBEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DocDBClient::~DocDBClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DocDBEndpointProviderBase>& DocDBClient::accessEndpointProvider() { return m_endpointProvider; }

void DocDBClient::init(const DocDB::DocDBClientConfiguration& config) {
  AWSClient::SetServiceClientName("DocDB");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "rds");
}

void DocDBClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String DocDBClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert,
                                                      const char* region) const {
  if (!m_endpointProvider) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess()) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

DocDBClient::InvokeOperationOutcome DocDBClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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
AddSourceIdentifierToSubscriptionOutcome DocDBClient::AddSourceIdentifierToSubscription(
    const AddSourceIdentifierToSubscriptionRequest& request) const {
  return AddSourceIdentifierToSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddTagsToResourceOutcome DocDBClient::AddTagsToResource(const AddTagsToResourceRequest& request) const {
  return AddTagsToResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ApplyPendingMaintenanceActionOutcome DocDBClient::ApplyPendingMaintenanceAction(const ApplyPendingMaintenanceActionRequest& request) const {
  return ApplyPendingMaintenanceActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopyDBClusterParameterGroupOutcome DocDBClient::CopyDBClusterParameterGroup(const CopyDBClusterParameterGroupRequest& request) const {
  return CopyDBClusterParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopyDBClusterSnapshotOutcome DocDBClient::CopyDBClusterSnapshot(const CopyDBClusterSnapshotRequest& request) const {
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet()) {
    CopyDBClusterSnapshotRequest newRequest = request;
    Aws::Endpoint::EndpointParameters endpointParameters;
    endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", request.GetSourceRegion()));
    ResolveEndpointOutcome presignedEndpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
    AWS_OPERATION_CHECK_SUCCESS(presignedEndpointResolutionOutcome, CopyDBClusterSnapshot, CoreErrors,
                                CoreErrors::ENDPOINT_RESOLUTION_FAILURE, presignedEndpointResolutionOutcome.GetError().GetMessage());
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, presignedEndpointResolutionOutcome.GetResult().GetURI(),
                                                    Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(),
                                                    {{"DestinationRegion", m_region}}, 3600));

    return CopyDBClusterSnapshotOutcome{InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST)};
  }

  return CopyDBClusterSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBClusterOutcome DocDBClient::CreateDBCluster(const CreateDBClusterRequest& request) const {
  if (request.SourceRegionHasBeenSet() && !request.PreSignedUrlHasBeenSet()) {
    CreateDBClusterRequest newRequest = request;
    Aws::Endpoint::EndpointParameters endpointParameters;
    endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", request.GetSourceRegion()));
    ResolveEndpointOutcome presignedEndpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
    AWS_OPERATION_CHECK_SUCCESS(presignedEndpointResolutionOutcome, CreateDBCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                presignedEndpointResolutionOutcome.GetError().GetMessage());
    newRequest.SetPreSignedUrl(GeneratePresignedUrl(request, presignedEndpointResolutionOutcome.GetResult().GetURI(),
                                                    Aws::Http::HttpMethod::HTTP_GET, request.GetSourceRegion().c_str(),
                                                    {{"DestinationRegion", m_region}}, 3600));

    return CreateDBClusterOutcome{InvokeServiceOperation(newRequest, Aws::Http::HttpMethod::HTTP_POST)};
  }

  return CreateDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBClusterParameterGroupOutcome DocDBClient::CreateDBClusterParameterGroup(const CreateDBClusterParameterGroupRequest& request) const {
  return CreateDBClusterParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBClusterSnapshotOutcome DocDBClient::CreateDBClusterSnapshot(const CreateDBClusterSnapshotRequest& request) const {
  return CreateDBClusterSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBInstanceOutcome DocDBClient::CreateDBInstance(const CreateDBInstanceRequest& request) const {
  return CreateDBInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDBSubnetGroupOutcome DocDBClient::CreateDBSubnetGroup(const CreateDBSubnetGroupRequest& request) const {
  return CreateDBSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventSubscriptionOutcome DocDBClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const {
  return CreateEventSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGlobalClusterOutcome DocDBClient::CreateGlobalCluster(const CreateGlobalClusterRequest& request) const {
  return CreateGlobalClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBClusterOutcome DocDBClient::DeleteDBCluster(const DeleteDBClusterRequest& request) const {
  return DeleteDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBClusterParameterGroupOutcome DocDBClient::DeleteDBClusterParameterGroup(const DeleteDBClusterParameterGroupRequest& request) const {
  return DeleteDBClusterParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBClusterSnapshotOutcome DocDBClient::DeleteDBClusterSnapshot(const DeleteDBClusterSnapshotRequest& request) const {
  return DeleteDBClusterSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBInstanceOutcome DocDBClient::DeleteDBInstance(const DeleteDBInstanceRequest& request) const {
  return DeleteDBInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDBSubnetGroupOutcome DocDBClient::DeleteDBSubnetGroup(const DeleteDBSubnetGroupRequest& request) const {
  return DeleteDBSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteEventSubscriptionOutcome DocDBClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const {
  return DeleteEventSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGlobalClusterOutcome DocDBClient::DeleteGlobalCluster(const DeleteGlobalClusterRequest& request) const {
  return DeleteGlobalClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCertificatesOutcome DocDBClient::DescribeCertificates(const DescribeCertificatesRequest& request) const {
  return DescribeCertificatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBClusterParameterGroupsOutcome DocDBClient::DescribeDBClusterParameterGroups(
    const DescribeDBClusterParameterGroupsRequest& request) const {
  return DescribeDBClusterParameterGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBClusterParametersOutcome DocDBClient::DescribeDBClusterParameters(const DescribeDBClusterParametersRequest& request) const {
  return DescribeDBClusterParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBClusterSnapshotAttributesOutcome DocDBClient::DescribeDBClusterSnapshotAttributes(
    const DescribeDBClusterSnapshotAttributesRequest& request) const {
  return DescribeDBClusterSnapshotAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBClusterSnapshotsOutcome DocDBClient::DescribeDBClusterSnapshots(const DescribeDBClusterSnapshotsRequest& request) const {
  return DescribeDBClusterSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBClustersOutcome DocDBClient::DescribeDBClusters(const DescribeDBClustersRequest& request) const {
  return DescribeDBClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBEngineVersionsOutcome DocDBClient::DescribeDBEngineVersions(const DescribeDBEngineVersionsRequest& request) const {
  return DescribeDBEngineVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBInstancesOutcome DocDBClient::DescribeDBInstances(const DescribeDBInstancesRequest& request) const {
  return DescribeDBInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDBSubnetGroupsOutcome DocDBClient::DescribeDBSubnetGroups(const DescribeDBSubnetGroupsRequest& request) const {
  return DescribeDBSubnetGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEngineDefaultClusterParametersOutcome DocDBClient::DescribeEngineDefaultClusterParameters(
    const DescribeEngineDefaultClusterParametersRequest& request) const {
  return DescribeEngineDefaultClusterParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventCategoriesOutcome DocDBClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const {
  return DescribeEventCategoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventSubscriptionsOutcome DocDBClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const {
  return DescribeEventSubscriptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventsOutcome DocDBClient::DescribeEvents(const DescribeEventsRequest& request) const {
  return DescribeEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeGlobalClustersOutcome DocDBClient::DescribeGlobalClusters(const DescribeGlobalClustersRequest& request) const {
  return DescribeGlobalClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrderableDBInstanceOptionsOutcome DocDBClient::DescribeOrderableDBInstanceOptions(
    const DescribeOrderableDBInstanceOptionsRequest& request) const {
  return DescribeOrderableDBInstanceOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePendingMaintenanceActionsOutcome DocDBClient::DescribePendingMaintenanceActions(
    const DescribePendingMaintenanceActionsRequest& request) const {
  return DescribePendingMaintenanceActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

FailoverDBClusterOutcome DocDBClient::FailoverDBCluster(const FailoverDBClusterRequest& request) const {
  return FailoverDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

FailoverGlobalClusterOutcome DocDBClient::FailoverGlobalCluster(const FailoverGlobalClusterRequest& request) const {
  return FailoverGlobalClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome DocDBClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBClusterOutcome DocDBClient::ModifyDBCluster(const ModifyDBClusterRequest& request) const {
  return ModifyDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBClusterParameterGroupOutcome DocDBClient::ModifyDBClusterParameterGroup(const ModifyDBClusterParameterGroupRequest& request) const {
  return ModifyDBClusterParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBClusterSnapshotAttributeOutcome DocDBClient::ModifyDBClusterSnapshotAttribute(
    const ModifyDBClusterSnapshotAttributeRequest& request) const {
  return ModifyDBClusterSnapshotAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBInstanceOutcome DocDBClient::ModifyDBInstance(const ModifyDBInstanceRequest& request) const {
  return ModifyDBInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDBSubnetGroupOutcome DocDBClient::ModifyDBSubnetGroup(const ModifyDBSubnetGroupRequest& request) const {
  return ModifyDBSubnetGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyEventSubscriptionOutcome DocDBClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const {
  return ModifyEventSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyGlobalClusterOutcome DocDBClient::ModifyGlobalCluster(const ModifyGlobalClusterRequest& request) const {
  return ModifyGlobalClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RebootDBInstanceOutcome DocDBClient::RebootDBInstance(const RebootDBInstanceRequest& request) const {
  return RebootDBInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveFromGlobalClusterOutcome DocDBClient::RemoveFromGlobalCluster(const RemoveFromGlobalClusterRequest& request) const {
  return RemoveFromGlobalClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveSourceIdentifierFromSubscriptionOutcome DocDBClient::RemoveSourceIdentifierFromSubscription(
    const RemoveSourceIdentifierFromSubscriptionRequest& request) const {
  return RemoveSourceIdentifierFromSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsFromResourceOutcome DocDBClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const {
  return RemoveTagsFromResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetDBClusterParameterGroupOutcome DocDBClient::ResetDBClusterParameterGroup(const ResetDBClusterParameterGroupRequest& request) const {
  return ResetDBClusterParameterGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreDBClusterFromSnapshotOutcome DocDBClient::RestoreDBClusterFromSnapshot(const RestoreDBClusterFromSnapshotRequest& request) const {
  return RestoreDBClusterFromSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreDBClusterToPointInTimeOutcome DocDBClient::RestoreDBClusterToPointInTime(const RestoreDBClusterToPointInTimeRequest& request) const {
  return RestoreDBClusterToPointInTimeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDBClusterOutcome DocDBClient::StartDBCluster(const StartDBClusterRequest& request) const {
  return StartDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopDBClusterOutcome DocDBClient::StopDBCluster(const StopDBClusterRequest& request) const {
  return StopDBClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SwitchoverGlobalClusterOutcome DocDBClient::SwitchoverGlobalCluster(const SwitchoverGlobalClusterRequest& request) const {
  return SwitchoverGlobalClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
