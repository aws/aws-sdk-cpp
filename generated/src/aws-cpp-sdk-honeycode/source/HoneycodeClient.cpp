/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/honeycode/HoneycodeClient.h>
#include <aws/honeycode/HoneycodeErrorMarshaller.h>
#include <aws/honeycode/HoneycodeEndpointProvider.h>
#include <aws/honeycode/model/BatchCreateTableRowsRequest.h>
#include <aws/honeycode/model/BatchDeleteTableRowsRequest.h>
#include <aws/honeycode/model/BatchUpdateTableRowsRequest.h>
#include <aws/honeycode/model/BatchUpsertTableRowsRequest.h>
#include <aws/honeycode/model/DescribeTableDataImportJobRequest.h>
#include <aws/honeycode/model/GetScreenDataRequest.h>
#include <aws/honeycode/model/InvokeScreenAutomationRequest.h>
#include <aws/honeycode/model/ListTableColumnsRequest.h>
#include <aws/honeycode/model/ListTableRowsRequest.h>
#include <aws/honeycode/model/ListTablesRequest.h>
#include <aws/honeycode/model/ListTagsForResourceRequest.h>
#include <aws/honeycode/model/QueryTableRowsRequest.h>
#include <aws/honeycode/model/StartTableDataImportJobRequest.h>
#include <aws/honeycode/model/TagResourceRequest.h>
#include <aws/honeycode/model/UntagResourceRequest.h>

#include <smithy/tracing/TracingUtils.h>


using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Honeycode;
using namespace Aws::Honeycode::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace Honeycode
  {
    const char SERVICE_NAME[] = "honeycode";
    const char ALLOCATION_TAG[] = "HoneycodeClient";
  }
}
const char* HoneycodeClient::GetServiceName() {return SERVICE_NAME;}
const char* HoneycodeClient::GetAllocationTag() {return ALLOCATION_TAG;}

HoneycodeClient::HoneycodeClient(const Honeycode::HoneycodeClientConfiguration& clientConfiguration,
                                 std::shared_ptr<HoneycodeEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HoneycodeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<HoneycodeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

HoneycodeClient::HoneycodeClient(const AWSCredentials& credentials,
                                 std::shared_ptr<HoneycodeEndpointProviderBase> endpointProvider,
                                 const Honeycode::HoneycodeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HoneycodeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<HoneycodeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

HoneycodeClient::HoneycodeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<HoneycodeEndpointProviderBase> endpointProvider,
                                 const Honeycode::HoneycodeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HoneycodeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<HoneycodeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  HoneycodeClient::HoneycodeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HoneycodeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<HoneycodeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

HoneycodeClient::HoneycodeClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HoneycodeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<HoneycodeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

HoneycodeClient::HoneycodeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<HoneycodeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<HoneycodeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
HoneycodeClient::~HoneycodeClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<HoneycodeEndpointProviderBase>& HoneycodeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void HoneycodeClient::init(const Honeycode::HoneycodeClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Honeycode");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void HoneycodeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchCreateTableRowsOutcome HoneycodeClient::BatchCreateTableRows(const BatchCreateTableRowsRequest& request) const
{
  AWS_OPERATION_GUARD(BatchCreateTableRows);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchCreateTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkbookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateTableRows", "Required field: WorkbookId, is not set");
    return BatchCreateTableRowsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkbookId]", false));
  }
  if (!request.TableIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateTableRows", "Required field: TableId, is not set");
    return BatchCreateTableRowsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchCreateTableRows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchCreateTableRows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchCreateTableRows",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchCreateTableRowsOutcome>(
    [&]()-> BatchCreateTableRowsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCreateTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/rows/batchcreate");
      return BatchCreateTableRowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchDeleteTableRowsOutcome HoneycodeClient::BatchDeleteTableRows(const BatchDeleteTableRowsRequest& request) const
{
  AWS_OPERATION_GUARD(BatchDeleteTableRows);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeleteTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkbookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteTableRows", "Required field: WorkbookId, is not set");
    return BatchDeleteTableRowsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkbookId]", false));
  }
  if (!request.TableIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteTableRows", "Required field: TableId, is not set");
    return BatchDeleteTableRowsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchDeleteTableRows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchDeleteTableRows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchDeleteTableRows",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchDeleteTableRowsOutcome>(
    [&]()-> BatchDeleteTableRowsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeleteTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/rows/batchdelete");
      return BatchDeleteTableRowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchUpdateTableRowsOutcome HoneycodeClient::BatchUpdateTableRows(const BatchUpdateTableRowsRequest& request) const
{
  AWS_OPERATION_GUARD(BatchUpdateTableRows);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpdateTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkbookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateTableRows", "Required field: WorkbookId, is not set");
    return BatchUpdateTableRowsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkbookId]", false));
  }
  if (!request.TableIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateTableRows", "Required field: TableId, is not set");
    return BatchUpdateTableRowsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchUpdateTableRows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchUpdateTableRows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchUpdateTableRows",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchUpdateTableRowsOutcome>(
    [&]()-> BatchUpdateTableRowsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpdateTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/rows/batchupdate");
      return BatchUpdateTableRowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchUpsertTableRowsOutcome HoneycodeClient::BatchUpsertTableRows(const BatchUpsertTableRowsRequest& request) const
{
  AWS_OPERATION_GUARD(BatchUpsertTableRows);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpsertTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkbookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpsertTableRows", "Required field: WorkbookId, is not set");
    return BatchUpsertTableRowsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkbookId]", false));
  }
  if (!request.TableIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpsertTableRows", "Required field: TableId, is not set");
    return BatchUpsertTableRowsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, BatchUpsertTableRows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchUpsertTableRows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchUpsertTableRows",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchUpsertTableRowsOutcome>(
    [&]()-> BatchUpsertTableRowsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpsertTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/rows/batchupsert");
      return BatchUpsertTableRowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTableDataImportJobOutcome HoneycodeClient::DescribeTableDataImportJob(const DescribeTableDataImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTableDataImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTableDataImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkbookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTableDataImportJob", "Required field: WorkbookId, is not set");
    return DescribeTableDataImportJobOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkbookId]", false));
  }
  if (!request.TableIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTableDataImportJob", "Required field: TableId, is not set");
    return DescribeTableDataImportJobOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTableDataImportJob", "Required field: JobId, is not set");
    return DescribeTableDataImportJobOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTableDataImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTableDataImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTableDataImportJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTableDataImportJobOutcome>(
    [&]()-> DescribeTableDataImportJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTableDataImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/import/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
      return DescribeTableDataImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetScreenDataOutcome HoneycodeClient::GetScreenData(const GetScreenDataRequest& request) const
{
  AWS_OPERATION_GUARD(GetScreenData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetScreenData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetScreenData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetScreenData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetScreenData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetScreenDataOutcome>(
    [&]()-> GetScreenDataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetScreenData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/screendata");
      return GetScreenDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeScreenAutomationOutcome HoneycodeClient::InvokeScreenAutomation(const InvokeScreenAutomationRequest& request) const
{
  AWS_OPERATION_GUARD(InvokeScreenAutomation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeScreenAutomation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkbookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeScreenAutomation", "Required field: WorkbookId, is not set");
    return InvokeScreenAutomationOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkbookId]", false));
  }
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeScreenAutomation", "Required field: AppId, is not set");
    return InvokeScreenAutomationOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.ScreenIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeScreenAutomation", "Required field: ScreenId, is not set");
    return InvokeScreenAutomationOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScreenId]", false));
  }
  if (!request.ScreenAutomationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeScreenAutomation", "Required field: ScreenAutomationId, is not set");
    return InvokeScreenAutomationOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScreenAutomationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeScreenAutomation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeScreenAutomation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeScreenAutomation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeScreenAutomationOutcome>(
    [&]()-> InvokeScreenAutomationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeScreenAutomation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/screens/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScreenId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/automations/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScreenAutomationId());
      return InvokeScreenAutomationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTableColumnsOutcome HoneycodeClient::ListTableColumns(const ListTableColumnsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTableColumns);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTableColumns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkbookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTableColumns", "Required field: WorkbookId, is not set");
    return ListTableColumnsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkbookId]", false));
  }
  if (!request.TableIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTableColumns", "Required field: TableId, is not set");
    return ListTableColumnsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTableColumns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTableColumns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTableColumns",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTableColumnsOutcome>(
    [&]()-> ListTableColumnsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTableColumns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/columns");
      return ListTableColumnsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTableRowsOutcome HoneycodeClient::ListTableRows(const ListTableRowsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTableRows);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkbookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTableRows", "Required field: WorkbookId, is not set");
    return ListTableRowsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkbookId]", false));
  }
  if (!request.TableIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTableRows", "Required field: TableId, is not set");
    return ListTableRowsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTableRows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTableRows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTableRows",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTableRowsOutcome>(
    [&]()-> ListTableRowsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/rows/list");
      return ListTableRowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTablesOutcome HoneycodeClient::ListTables(const ListTablesRequest& request) const
{
  AWS_OPERATION_GUARD(ListTables);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkbookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTables", "Required field: WorkbookId, is not set");
    return ListTablesOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkbookId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTables, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTables",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTablesOutcome>(
    [&]()-> ListTablesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables");
      return ListTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome HoneycodeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

QueryTableRowsOutcome HoneycodeClient::QueryTableRows(const QueryTableRowsRequest& request) const
{
  AWS_OPERATION_GUARD(QueryTableRows);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, QueryTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkbookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("QueryTableRows", "Required field: WorkbookId, is not set");
    return QueryTableRowsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkbookId]", false));
  }
  if (!request.TableIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("QueryTableRows", "Required field: TableId, is not set");
    return QueryTableRowsOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, QueryTableRows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, QueryTableRows, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".QueryTableRows",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<QueryTableRowsOutcome>(
    [&]()-> QueryTableRowsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, QueryTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/rows/query");
      return QueryTableRowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartTableDataImportJobOutcome HoneycodeClient::StartTableDataImportJob(const StartTableDataImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartTableDataImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTableDataImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkbookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartTableDataImportJob", "Required field: WorkbookId, is not set");
    return StartTableDataImportJobOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkbookId]", false));
  }
  if (!request.DestinationTableIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartTableDataImportJob", "Required field: DestinationTableId, is not set");
    return StartTableDataImportJobOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DestinationTableId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartTableDataImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartTableDataImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartTableDataImportJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartTableDataImportJobOutcome>(
    [&]()-> StartTableDataImportJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTableDataImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDestinationTableId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/import");
      return StartTableDataImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome HoneycodeClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome HoneycodeClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

