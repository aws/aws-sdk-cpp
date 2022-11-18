/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
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

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Honeycode;
using namespace Aws::Honeycode::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* HoneycodeClient::SERVICE_NAME = "honeycode";
const char* HoneycodeClient::ALLOCATION_TAG = "HoneycodeClient";

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
  m_endpointProvider(std::move(endpointProvider))
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
    m_endpointProvider(std::move(endpointProvider))
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
    m_endpointProvider(std::move(endpointProvider))
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCreateTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rows/batchcreate");
  return BatchCreateTableRowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCreateTableRowsOutcomeCallable HoneycodeClient::BatchCreateTableRowsCallable(const BatchCreateTableRowsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(BatchCreateTableRows, request, m_executor.get());
}

void HoneycodeClient::BatchCreateTableRowsAsync(const BatchCreateTableRowsRequest& request, const BatchCreateTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(BatchCreateTableRows, request, handler, context, m_executor.get());
}

BatchDeleteTableRowsOutcome HoneycodeClient::BatchDeleteTableRows(const BatchDeleteTableRowsRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeleteTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rows/batchdelete");
  return BatchDeleteTableRowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteTableRowsOutcomeCallable HoneycodeClient::BatchDeleteTableRowsCallable(const BatchDeleteTableRowsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(BatchDeleteTableRows, request, m_executor.get());
}

void HoneycodeClient::BatchDeleteTableRowsAsync(const BatchDeleteTableRowsRequest& request, const BatchDeleteTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(BatchDeleteTableRows, request, handler, context, m_executor.get());
}

BatchUpdateTableRowsOutcome HoneycodeClient::BatchUpdateTableRows(const BatchUpdateTableRowsRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpdateTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rows/batchupdate");
  return BatchUpdateTableRowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdateTableRowsOutcomeCallable HoneycodeClient::BatchUpdateTableRowsCallable(const BatchUpdateTableRowsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(BatchUpdateTableRows, request, m_executor.get());
}

void HoneycodeClient::BatchUpdateTableRowsAsync(const BatchUpdateTableRowsRequest& request, const BatchUpdateTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(BatchUpdateTableRows, request, handler, context, m_executor.get());
}

BatchUpsertTableRowsOutcome HoneycodeClient::BatchUpsertTableRows(const BatchUpsertTableRowsRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchUpsertTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rows/batchupsert");
  return BatchUpsertTableRowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchUpsertTableRowsOutcomeCallable HoneycodeClient::BatchUpsertTableRowsCallable(const BatchUpsertTableRowsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(BatchUpsertTableRows, request, m_executor.get());
}

void HoneycodeClient::BatchUpsertTableRowsAsync(const BatchUpsertTableRowsRequest& request, const BatchUpsertTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(BatchUpsertTableRows, request, handler, context, m_executor.get());
}

DescribeTableDataImportJobOutcome HoneycodeClient::DescribeTableDataImportJob(const DescribeTableDataImportJobRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTableDataImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/import/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return DescribeTableDataImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTableDataImportJobOutcomeCallable HoneycodeClient::DescribeTableDataImportJobCallable(const DescribeTableDataImportJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeTableDataImportJob, request, m_executor.get());
}

void HoneycodeClient::DescribeTableDataImportJobAsync(const DescribeTableDataImportJobRequest& request, const DescribeTableDataImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeTableDataImportJob, request, handler, context, m_executor.get());
}

GetScreenDataOutcome HoneycodeClient::GetScreenData(const GetScreenDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetScreenData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetScreenData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/screendata");
  return GetScreenDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetScreenDataOutcomeCallable HoneycodeClient::GetScreenDataCallable(const GetScreenDataRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetScreenData, request, m_executor.get());
}

void HoneycodeClient::GetScreenDataAsync(const GetScreenDataRequest& request, const GetScreenDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetScreenData, request, handler, context, m_executor.get());
}

InvokeScreenAutomationOutcome HoneycodeClient::InvokeScreenAutomation(const InvokeScreenAutomationRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
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
}

InvokeScreenAutomationOutcomeCallable HoneycodeClient::InvokeScreenAutomationCallable(const InvokeScreenAutomationRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(InvokeScreenAutomation, request, m_executor.get());
}

void HoneycodeClient::InvokeScreenAutomationAsync(const InvokeScreenAutomationRequest& request, const InvokeScreenAutomationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(InvokeScreenAutomation, request, handler, context, m_executor.get());
}

ListTableColumnsOutcome HoneycodeClient::ListTableColumns(const ListTableColumnsRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTableColumns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/columns");
  return ListTableColumnsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTableColumnsOutcomeCallable HoneycodeClient::ListTableColumnsCallable(const ListTableColumnsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTableColumns, request, m_executor.get());
}

void HoneycodeClient::ListTableColumnsAsync(const ListTableColumnsRequest& request, const ListTableColumnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTableColumns, request, handler, context, m_executor.get());
}

ListTableRowsOutcome HoneycodeClient::ListTableRows(const ListTableRowsRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rows/list");
  return ListTableRowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTableRowsOutcomeCallable HoneycodeClient::ListTableRowsCallable(const ListTableRowsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTableRows, request, m_executor.get());
}

void HoneycodeClient::ListTableRowsAsync(const ListTableRowsRequest& request, const ListTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTableRows, request, handler, context, m_executor.get());
}

ListTablesOutcome HoneycodeClient::ListTables(const ListTablesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkbookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTables", "Required field: WorkbookId, is not set");
    return ListTablesOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkbookId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTables, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tables");
  return ListTablesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTablesOutcomeCallable HoneycodeClient::ListTablesCallable(const ListTablesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTables, request, m_executor.get());
}

void HoneycodeClient::ListTablesAsync(const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTables, request, handler, context, m_executor.get());
}

ListTagsForResourceOutcome HoneycodeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable HoneycodeClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTagsForResource, request, m_executor.get());
}

void HoneycodeClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTagsForResource, request, handler, context, m_executor.get());
}

QueryTableRowsOutcome HoneycodeClient::QueryTableRows(const QueryTableRowsRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, QueryTableRows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTableId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rows/query");
  return QueryTableRowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QueryTableRowsOutcomeCallable HoneycodeClient::QueryTableRowsCallable(const QueryTableRowsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(QueryTableRows, request, m_executor.get());
}

void HoneycodeClient::QueryTableRowsAsync(const QueryTableRowsRequest& request, const QueryTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(QueryTableRows, request, handler, context, m_executor.get());
}

StartTableDataImportJobOutcome HoneycodeClient::StartTableDataImportJob(const StartTableDataImportJobRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTableDataImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workbooks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkbookId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tables/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDestinationTableId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/import");
  return StartTableDataImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTableDataImportJobOutcomeCallable HoneycodeClient::StartTableDataImportJobCallable(const StartTableDataImportJobRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(StartTableDataImportJob, request, m_executor.get());
}

void HoneycodeClient::StartTableDataImportJobAsync(const StartTableDataImportJobRequest& request, const StartTableDataImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(StartTableDataImportJob, request, handler, context, m_executor.get());
}

TagResourceOutcome HoneycodeClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable HoneycodeClient::TagResourceCallable(const TagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TagResource, request, m_executor.get());
}

void HoneycodeClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TagResource, request, handler, context, m_executor.get());
}

UntagResourceOutcome HoneycodeClient::UntagResource(const UntagResourceRequest& request) const
{
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable HoneycodeClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UntagResource, request, m_executor.get());
}

void HoneycodeClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UntagResource, request, handler, context, m_executor.get());
}

