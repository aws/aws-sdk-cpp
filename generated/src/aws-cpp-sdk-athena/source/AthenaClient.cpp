/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/AthenaClient.h>
#include <aws/athena/AthenaEndpointProvider.h>
#include <aws/athena/AthenaErrorMarshaller.h>
#include <aws/athena/model/BatchGetNamedQueryRequest.h>
#include <aws/athena/model/BatchGetPreparedStatementRequest.h>
#include <aws/athena/model/BatchGetQueryExecutionRequest.h>
#include <aws/athena/model/CancelCapacityReservationRequest.h>
#include <aws/athena/model/CreateCapacityReservationRequest.h>
#include <aws/athena/model/CreateDataCatalogRequest.h>
#include <aws/athena/model/CreateNamedQueryRequest.h>
#include <aws/athena/model/CreateNotebookRequest.h>
#include <aws/athena/model/CreatePreparedStatementRequest.h>
#include <aws/athena/model/CreatePresignedNotebookUrlRequest.h>
#include <aws/athena/model/CreateWorkGroupRequest.h>
#include <aws/athena/model/DeleteCapacityReservationRequest.h>
#include <aws/athena/model/DeleteDataCatalogRequest.h>
#include <aws/athena/model/DeleteNamedQueryRequest.h>
#include <aws/athena/model/DeleteNotebookRequest.h>
#include <aws/athena/model/DeletePreparedStatementRequest.h>
#include <aws/athena/model/DeleteWorkGroupRequest.h>
#include <aws/athena/model/ExportNotebookRequest.h>
#include <aws/athena/model/GetCalculationExecutionCodeRequest.h>
#include <aws/athena/model/GetCalculationExecutionRequest.h>
#include <aws/athena/model/GetCalculationExecutionStatusRequest.h>
#include <aws/athena/model/GetCapacityAssignmentConfigurationRequest.h>
#include <aws/athena/model/GetCapacityReservationRequest.h>
#include <aws/athena/model/GetDataCatalogRequest.h>
#include <aws/athena/model/GetDatabaseRequest.h>
#include <aws/athena/model/GetNamedQueryRequest.h>
#include <aws/athena/model/GetNotebookMetadataRequest.h>
#include <aws/athena/model/GetPreparedStatementRequest.h>
#include <aws/athena/model/GetQueryExecutionRequest.h>
#include <aws/athena/model/GetQueryResultsRequest.h>
#include <aws/athena/model/GetQueryRuntimeStatisticsRequest.h>
#include <aws/athena/model/GetResourceDashboardRequest.h>
#include <aws/athena/model/GetSessionEndpointRequest.h>
#include <aws/athena/model/GetSessionRequest.h>
#include <aws/athena/model/GetSessionStatusRequest.h>
#include <aws/athena/model/GetTableMetadataRequest.h>
#include <aws/athena/model/GetWorkGroupRequest.h>
#include <aws/athena/model/ImportNotebookRequest.h>
#include <aws/athena/model/ListApplicationDPUSizesRequest.h>
#include <aws/athena/model/ListCalculationExecutionsRequest.h>
#include <aws/athena/model/ListCapacityReservationsRequest.h>
#include <aws/athena/model/ListDataCatalogsRequest.h>
#include <aws/athena/model/ListDatabasesRequest.h>
#include <aws/athena/model/ListEngineVersionsRequest.h>
#include <aws/athena/model/ListExecutorsRequest.h>
#include <aws/athena/model/ListNamedQueriesRequest.h>
#include <aws/athena/model/ListNotebookMetadataRequest.h>
#include <aws/athena/model/ListNotebookSessionsRequest.h>
#include <aws/athena/model/ListPreparedStatementsRequest.h>
#include <aws/athena/model/ListQueryExecutionsRequest.h>
#include <aws/athena/model/ListSessionsRequest.h>
#include <aws/athena/model/ListTableMetadataRequest.h>
#include <aws/athena/model/ListTagsForResourceRequest.h>
#include <aws/athena/model/ListWorkGroupsRequest.h>
#include <aws/athena/model/PutCapacityAssignmentConfigurationRequest.h>
#include <aws/athena/model/StartCalculationExecutionRequest.h>
#include <aws/athena/model/StartQueryExecutionRequest.h>
#include <aws/athena/model/StartSessionRequest.h>
#include <aws/athena/model/StopCalculationExecutionRequest.h>
#include <aws/athena/model/StopQueryExecutionRequest.h>
#include <aws/athena/model/TagResourceRequest.h>
#include <aws/athena/model/TerminateSessionRequest.h>
#include <aws/athena/model/UntagResourceRequest.h>
#include <aws/athena/model/UpdateCapacityReservationRequest.h>
#include <aws/athena/model/UpdateDataCatalogRequest.h>
#include <aws/athena/model/UpdateNamedQueryRequest.h>
#include <aws/athena/model/UpdateNotebookMetadataRequest.h>
#include <aws/athena/model/UpdateNotebookRequest.h>
#include <aws/athena/model/UpdatePreparedStatementRequest.h>
#include <aws/athena/model/UpdateWorkGroupRequest.h>
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
using namespace Aws::Athena;
using namespace Aws::Athena::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Athena {
const char SERVICE_NAME[] = "athena";
const char ALLOCATION_TAG[] = "AthenaClient";
}  // namespace Athena
}  // namespace Aws
const char* AthenaClient::GetServiceName() { return SERVICE_NAME; }
const char* AthenaClient::GetAllocationTag() { return ALLOCATION_TAG; }

AthenaClient::AthenaClient(const Athena::AthenaClientConfiguration& clientConfiguration,
                           std::shared_ptr<AthenaEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AthenaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AthenaClient::AthenaClient(const AWSCredentials& credentials, std::shared_ptr<AthenaEndpointProviderBase> endpointProvider,
                           const Athena::AthenaClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AthenaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AthenaClient::AthenaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<AthenaEndpointProviderBase> endpointProvider,
                           const Athena::AthenaClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AthenaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AthenaClient::AthenaClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AthenaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AthenaClient::AthenaClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AthenaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AthenaClient::AthenaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AthenaErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AthenaEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AthenaClient::~AthenaClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AthenaEndpointProviderBase>& AthenaClient::accessEndpointProvider() { return m_endpointProvider; }

void AthenaClient::init(const Athena::AthenaClientConfiguration& config) {
  AWSClient::SetServiceClientName("Athena");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "athena");
}

void AthenaClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AthenaClient::InvokeOperationOutcome AthenaClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

BatchGetNamedQueryOutcome AthenaClient::BatchGetNamedQuery(const BatchGetNamedQueryRequest& request) const {
  return BatchGetNamedQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetPreparedStatementOutcome AthenaClient::BatchGetPreparedStatement(const BatchGetPreparedStatementRequest& request) const {
  return BatchGetPreparedStatementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetQueryExecutionOutcome AthenaClient::BatchGetQueryExecution(const BatchGetQueryExecutionRequest& request) const {
  return BatchGetQueryExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelCapacityReservationOutcome AthenaClient::CancelCapacityReservation(const CancelCapacityReservationRequest& request) const {
  return CancelCapacityReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCapacityReservationOutcome AthenaClient::CreateCapacityReservation(const CreateCapacityReservationRequest& request) const {
  return CreateCapacityReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataCatalogOutcome AthenaClient::CreateDataCatalog(const CreateDataCatalogRequest& request) const {
  return CreateDataCatalogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNamedQueryOutcome AthenaClient::CreateNamedQuery(const CreateNamedQueryRequest& request) const {
  return CreateNamedQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNotebookOutcome AthenaClient::CreateNotebook(const CreateNotebookRequest& request) const {
  return CreateNotebookOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePreparedStatementOutcome AthenaClient::CreatePreparedStatement(const CreatePreparedStatementRequest& request) const {
  return CreatePreparedStatementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePresignedNotebookUrlOutcome AthenaClient::CreatePresignedNotebookUrl(const CreatePresignedNotebookUrlRequest& request) const {
  return CreatePresignedNotebookUrlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkGroupOutcome AthenaClient::CreateWorkGroup(const CreateWorkGroupRequest& request) const {
  return CreateWorkGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCapacityReservationOutcome AthenaClient::DeleteCapacityReservation(const DeleteCapacityReservationRequest& request) const {
  return DeleteCapacityReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDataCatalogOutcome AthenaClient::DeleteDataCatalog(const DeleteDataCatalogRequest& request) const {
  return DeleteDataCatalogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteNamedQueryOutcome AthenaClient::DeleteNamedQuery(const DeleteNamedQueryRequest& request) const {
  return DeleteNamedQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteNotebookOutcome AthenaClient::DeleteNotebook(const DeleteNotebookRequest& request) const {
  return DeleteNotebookOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePreparedStatementOutcome AthenaClient::DeletePreparedStatement(const DeletePreparedStatementRequest& request) const {
  return DeletePreparedStatementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWorkGroupOutcome AthenaClient::DeleteWorkGroup(const DeleteWorkGroupRequest& request) const {
  return DeleteWorkGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportNotebookOutcome AthenaClient::ExportNotebook(const ExportNotebookRequest& request) const {
  return ExportNotebookOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCalculationExecutionOutcome AthenaClient::GetCalculationExecution(const GetCalculationExecutionRequest& request) const {
  return GetCalculationExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCalculationExecutionCodeOutcome AthenaClient::GetCalculationExecutionCode(const GetCalculationExecutionCodeRequest& request) const {
  return GetCalculationExecutionCodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCalculationExecutionStatusOutcome AthenaClient::GetCalculationExecutionStatus(
    const GetCalculationExecutionStatusRequest& request) const {
  return GetCalculationExecutionStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCapacityAssignmentConfigurationOutcome AthenaClient::GetCapacityAssignmentConfiguration(
    const GetCapacityAssignmentConfigurationRequest& request) const {
  return GetCapacityAssignmentConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCapacityReservationOutcome AthenaClient::GetCapacityReservation(const GetCapacityReservationRequest& request) const {
  return GetCapacityReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataCatalogOutcome AthenaClient::GetDataCatalog(const GetDataCatalogRequest& request) const {
  return GetDataCatalogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDatabaseOutcome AthenaClient::GetDatabase(const GetDatabaseRequest& request) const {
  return GetDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetNamedQueryOutcome AthenaClient::GetNamedQuery(const GetNamedQueryRequest& request) const {
  return GetNamedQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetNotebookMetadataOutcome AthenaClient::GetNotebookMetadata(const GetNotebookMetadataRequest& request) const {
  return GetNotebookMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPreparedStatementOutcome AthenaClient::GetPreparedStatement(const GetPreparedStatementRequest& request) const {
  return GetPreparedStatementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetQueryExecutionOutcome AthenaClient::GetQueryExecution(const GetQueryExecutionRequest& request) const {
  return GetQueryExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetQueryResultsOutcome AthenaClient::GetQueryResults(const GetQueryResultsRequest& request) const {
  return GetQueryResultsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetQueryRuntimeStatisticsOutcome AthenaClient::GetQueryRuntimeStatistics(const GetQueryRuntimeStatisticsRequest& request) const {
  return GetQueryRuntimeStatisticsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourceDashboardOutcome AthenaClient::GetResourceDashboard(const GetResourceDashboardRequest& request) const {
  return GetResourceDashboardOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSessionOutcome AthenaClient::GetSession(const GetSessionRequest& request) const {
  return GetSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSessionEndpointOutcome AthenaClient::GetSessionEndpoint(const GetSessionEndpointRequest& request) const {
  return GetSessionEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSessionStatusOutcome AthenaClient::GetSessionStatus(const GetSessionStatusRequest& request) const {
  return GetSessionStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTableMetadataOutcome AthenaClient::GetTableMetadata(const GetTableMetadataRequest& request) const {
  return GetTableMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWorkGroupOutcome AthenaClient::GetWorkGroup(const GetWorkGroupRequest& request) const {
  return GetWorkGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportNotebookOutcome AthenaClient::ImportNotebook(const ImportNotebookRequest& request) const {
  return ImportNotebookOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListApplicationDPUSizesOutcome AthenaClient::ListApplicationDPUSizes(const ListApplicationDPUSizesRequest& request) const {
  return ListApplicationDPUSizesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCalculationExecutionsOutcome AthenaClient::ListCalculationExecutions(const ListCalculationExecutionsRequest& request) const {
  return ListCalculationExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCapacityReservationsOutcome AthenaClient::ListCapacityReservations(const ListCapacityReservationsRequest& request) const {
  return ListCapacityReservationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataCatalogsOutcome AthenaClient::ListDataCatalogs(const ListDataCatalogsRequest& request) const {
  return ListDataCatalogsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDatabasesOutcome AthenaClient::ListDatabases(const ListDatabasesRequest& request) const {
  return ListDatabasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEngineVersionsOutcome AthenaClient::ListEngineVersions(const ListEngineVersionsRequest& request) const {
  return ListEngineVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListExecutorsOutcome AthenaClient::ListExecutors(const ListExecutorsRequest& request) const {
  return ListExecutorsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNamedQueriesOutcome AthenaClient::ListNamedQueries(const ListNamedQueriesRequest& request) const {
  return ListNamedQueriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNotebookMetadataOutcome AthenaClient::ListNotebookMetadata(const ListNotebookMetadataRequest& request) const {
  return ListNotebookMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNotebookSessionsOutcome AthenaClient::ListNotebookSessions(const ListNotebookSessionsRequest& request) const {
  return ListNotebookSessionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPreparedStatementsOutcome AthenaClient::ListPreparedStatements(const ListPreparedStatementsRequest& request) const {
  return ListPreparedStatementsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListQueryExecutionsOutcome AthenaClient::ListQueryExecutions(const ListQueryExecutionsRequest& request) const {
  return ListQueryExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSessionsOutcome AthenaClient::ListSessions(const ListSessionsRequest& request) const {
  return ListSessionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTableMetadataOutcome AthenaClient::ListTableMetadata(const ListTableMetadataRequest& request) const {
  return ListTableMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome AthenaClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkGroupsOutcome AthenaClient::ListWorkGroups(const ListWorkGroupsRequest& request) const {
  return ListWorkGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutCapacityAssignmentConfigurationOutcome AthenaClient::PutCapacityAssignmentConfiguration(
    const PutCapacityAssignmentConfigurationRequest& request) const {
  return PutCapacityAssignmentConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartCalculationExecutionOutcome AthenaClient::StartCalculationExecution(const StartCalculationExecutionRequest& request) const {
  return StartCalculationExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartQueryExecutionOutcome AthenaClient::StartQueryExecution(const StartQueryExecutionRequest& request) const {
  return StartQueryExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSessionOutcome AthenaClient::StartSession(const StartSessionRequest& request) const {
  return StartSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopCalculationExecutionOutcome AthenaClient::StopCalculationExecution(const StopCalculationExecutionRequest& request) const {
  return StopCalculationExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopQueryExecutionOutcome AthenaClient::StopQueryExecution(const StopQueryExecutionRequest& request) const {
  return StopQueryExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome AthenaClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateSessionOutcome AthenaClient::TerminateSession(const TerminateSessionRequest& request) const {
  return TerminateSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome AthenaClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateCapacityReservationOutcome AthenaClient::UpdateCapacityReservation(const UpdateCapacityReservationRequest& request) const {
  return UpdateCapacityReservationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDataCatalogOutcome AthenaClient::UpdateDataCatalog(const UpdateDataCatalogRequest& request) const {
  return UpdateDataCatalogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNamedQueryOutcome AthenaClient::UpdateNamedQuery(const UpdateNamedQueryRequest& request) const {
  return UpdateNamedQueryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNotebookOutcome AthenaClient::UpdateNotebook(const UpdateNotebookRequest& request) const {
  return UpdateNotebookOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNotebookMetadataOutcome AthenaClient::UpdateNotebookMetadata(const UpdateNotebookMetadataRequest& request) const {
  return UpdateNotebookMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePreparedStatementOutcome AthenaClient::UpdatePreparedStatement(const UpdatePreparedStatementRequest& request) const {
  return UpdatePreparedStatementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkGroupOutcome AthenaClient::UpdateWorkGroup(const UpdateWorkGroupRequest& request) const {
  return UpdateWorkGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
