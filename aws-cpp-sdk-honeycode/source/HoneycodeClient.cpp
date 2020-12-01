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

#include <aws/honeycode/HoneycodeClient.h>
#include <aws/honeycode/HoneycodeEndpoint.h>
#include <aws/honeycode/HoneycodeErrorMarshaller.h>
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
#include <aws/honeycode/model/QueryTableRowsRequest.h>
#include <aws/honeycode/model/StartTableDataImportJobRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Honeycode;
using namespace Aws::Honeycode::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "honeycode";
static const char* ALLOCATION_TAG = "HoneycodeClient";


HoneycodeClient::HoneycodeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<HoneycodeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

HoneycodeClient::HoneycodeClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<HoneycodeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

HoneycodeClient::HoneycodeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<HoneycodeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

HoneycodeClient::~HoneycodeClient()
{
}

void HoneycodeClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("Honeycode");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + HoneycodeEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void HoneycodeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

BatchCreateTableRowsOutcome HoneycodeClient::BatchCreateTableRows(const BatchCreateTableRowsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/workbooks/";
  ss << request.GetWorkbookId();
  ss << "/tables/";
  ss << request.GetTableId();
  ss << "/rows/batchcreate";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchCreateTableRowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCreateTableRowsOutcomeCallable HoneycodeClient::BatchCreateTableRowsCallable(const BatchCreateTableRowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCreateTableRowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCreateTableRows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HoneycodeClient::BatchCreateTableRowsAsync(const BatchCreateTableRowsRequest& request, const BatchCreateTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchCreateTableRowsAsyncHelper( request, handler, context ); } );
}

void HoneycodeClient::BatchCreateTableRowsAsyncHelper(const BatchCreateTableRowsRequest& request, const BatchCreateTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchCreateTableRows(request), context);
}

BatchDeleteTableRowsOutcome HoneycodeClient::BatchDeleteTableRows(const BatchDeleteTableRowsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/workbooks/";
  ss << request.GetWorkbookId();
  ss << "/tables/";
  ss << request.GetTableId();
  ss << "/rows/batchdelete";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchDeleteTableRowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteTableRowsOutcomeCallable HoneycodeClient::BatchDeleteTableRowsCallable(const BatchDeleteTableRowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteTableRowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteTableRows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HoneycodeClient::BatchDeleteTableRowsAsync(const BatchDeleteTableRowsRequest& request, const BatchDeleteTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDeleteTableRowsAsyncHelper( request, handler, context ); } );
}

void HoneycodeClient::BatchDeleteTableRowsAsyncHelper(const BatchDeleteTableRowsRequest& request, const BatchDeleteTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDeleteTableRows(request), context);
}

BatchUpdateTableRowsOutcome HoneycodeClient::BatchUpdateTableRows(const BatchUpdateTableRowsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/workbooks/";
  ss << request.GetWorkbookId();
  ss << "/tables/";
  ss << request.GetTableId();
  ss << "/rows/batchupdate";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchUpdateTableRowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdateTableRowsOutcomeCallable HoneycodeClient::BatchUpdateTableRowsCallable(const BatchUpdateTableRowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdateTableRowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdateTableRows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HoneycodeClient::BatchUpdateTableRowsAsync(const BatchUpdateTableRowsRequest& request, const BatchUpdateTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchUpdateTableRowsAsyncHelper( request, handler, context ); } );
}

void HoneycodeClient::BatchUpdateTableRowsAsyncHelper(const BatchUpdateTableRowsRequest& request, const BatchUpdateTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchUpdateTableRows(request), context);
}

BatchUpsertTableRowsOutcome HoneycodeClient::BatchUpsertTableRows(const BatchUpsertTableRowsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/workbooks/";
  ss << request.GetWorkbookId();
  ss << "/tables/";
  ss << request.GetTableId();
  ss << "/rows/batchupsert";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchUpsertTableRowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchUpsertTableRowsOutcomeCallable HoneycodeClient::BatchUpsertTableRowsCallable(const BatchUpsertTableRowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpsertTableRowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpsertTableRows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HoneycodeClient::BatchUpsertTableRowsAsync(const BatchUpsertTableRowsRequest& request, const BatchUpsertTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchUpsertTableRowsAsyncHelper( request, handler, context ); } );
}

void HoneycodeClient::BatchUpsertTableRowsAsyncHelper(const BatchUpsertTableRowsRequest& request, const BatchUpsertTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchUpsertTableRows(request), context);
}

DescribeTableDataImportJobOutcome HoneycodeClient::DescribeTableDataImportJob(const DescribeTableDataImportJobRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/workbooks/";
  ss << request.GetWorkbookId();
  ss << "/tables/";
  ss << request.GetTableId();
  ss << "/import/";
  ss << request.GetJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeTableDataImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTableDataImportJobOutcomeCallable HoneycodeClient::DescribeTableDataImportJobCallable(const DescribeTableDataImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTableDataImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTableDataImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HoneycodeClient::DescribeTableDataImportJobAsync(const DescribeTableDataImportJobRequest& request, const DescribeTableDataImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTableDataImportJobAsyncHelper( request, handler, context ); } );
}

void HoneycodeClient::DescribeTableDataImportJobAsyncHelper(const DescribeTableDataImportJobRequest& request, const DescribeTableDataImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTableDataImportJob(request), context);
}

GetScreenDataOutcome HoneycodeClient::GetScreenData(const GetScreenDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/screendata";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetScreenDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetScreenDataOutcomeCallable HoneycodeClient::GetScreenDataCallable(const GetScreenDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetScreenDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetScreenData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HoneycodeClient::GetScreenDataAsync(const GetScreenDataRequest& request, const GetScreenDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetScreenDataAsyncHelper( request, handler, context ); } );
}

void HoneycodeClient::GetScreenDataAsyncHelper(const GetScreenDataRequest& request, const GetScreenDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetScreenData(request), context);
}

InvokeScreenAutomationOutcome HoneycodeClient::InvokeScreenAutomation(const InvokeScreenAutomationRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/workbooks/";
  ss << request.GetWorkbookId();
  ss << "/apps/";
  ss << request.GetAppId();
  ss << "/screens/";
  ss << request.GetScreenId();
  ss << "/automations/";
  ss << request.GetScreenAutomationId();
  uri.SetPath(uri.GetPath() + ss.str());
  return InvokeScreenAutomationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InvokeScreenAutomationOutcomeCallable HoneycodeClient::InvokeScreenAutomationCallable(const InvokeScreenAutomationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InvokeScreenAutomationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InvokeScreenAutomation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HoneycodeClient::InvokeScreenAutomationAsync(const InvokeScreenAutomationRequest& request, const InvokeScreenAutomationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InvokeScreenAutomationAsyncHelper( request, handler, context ); } );
}

void HoneycodeClient::InvokeScreenAutomationAsyncHelper(const InvokeScreenAutomationRequest& request, const InvokeScreenAutomationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InvokeScreenAutomation(request), context);
}

ListTableColumnsOutcome HoneycodeClient::ListTableColumns(const ListTableColumnsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/workbooks/";
  ss << request.GetWorkbookId();
  ss << "/tables/";
  ss << request.GetTableId();
  ss << "/columns";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTableColumnsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTableColumnsOutcomeCallable HoneycodeClient::ListTableColumnsCallable(const ListTableColumnsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTableColumnsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTableColumns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HoneycodeClient::ListTableColumnsAsync(const ListTableColumnsRequest& request, const ListTableColumnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTableColumnsAsyncHelper( request, handler, context ); } );
}

void HoneycodeClient::ListTableColumnsAsyncHelper(const ListTableColumnsRequest& request, const ListTableColumnsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTableColumns(request), context);
}

ListTableRowsOutcome HoneycodeClient::ListTableRows(const ListTableRowsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/workbooks/";
  ss << request.GetWorkbookId();
  ss << "/tables/";
  ss << request.GetTableId();
  ss << "/rows/list";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTableRowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTableRowsOutcomeCallable HoneycodeClient::ListTableRowsCallable(const ListTableRowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTableRowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTableRows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HoneycodeClient::ListTableRowsAsync(const ListTableRowsRequest& request, const ListTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTableRowsAsyncHelper( request, handler, context ); } );
}

void HoneycodeClient::ListTableRowsAsyncHelper(const ListTableRowsRequest& request, const ListTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTableRows(request), context);
}

ListTablesOutcome HoneycodeClient::ListTables(const ListTablesRequest& request) const
{
  if (!request.WorkbookIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTables", "Required field: WorkbookId, is not set");
    return ListTablesOutcome(Aws::Client::AWSError<HoneycodeErrors>(HoneycodeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkbookId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/workbooks/";
  ss << request.GetWorkbookId();
  ss << "/tables";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTablesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTablesOutcomeCallable HoneycodeClient::ListTablesCallable(const ListTablesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTablesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTables(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HoneycodeClient::ListTablesAsync(const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTablesAsyncHelper( request, handler, context ); } );
}

void HoneycodeClient::ListTablesAsyncHelper(const ListTablesRequest& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTables(request), context);
}

QueryTableRowsOutcome HoneycodeClient::QueryTableRows(const QueryTableRowsRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/workbooks/";
  ss << request.GetWorkbookId();
  ss << "/tables/";
  ss << request.GetTableId();
  ss << "/rows/query";
  uri.SetPath(uri.GetPath() + ss.str());
  return QueryTableRowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QueryTableRowsOutcomeCallable HoneycodeClient::QueryTableRowsCallable(const QueryTableRowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< QueryTableRowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->QueryTableRows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HoneycodeClient::QueryTableRowsAsync(const QueryTableRowsRequest& request, const QueryTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->QueryTableRowsAsyncHelper( request, handler, context ); } );
}

void HoneycodeClient::QueryTableRowsAsyncHelper(const QueryTableRowsRequest& request, const QueryTableRowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, QueryTableRows(request), context);
}

StartTableDataImportJobOutcome HoneycodeClient::StartTableDataImportJob(const StartTableDataImportJobRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/workbooks/";
  ss << request.GetWorkbookId();
  ss << "/tables/";
  ss << request.GetDestinationTableId();
  ss << "/import";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartTableDataImportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTableDataImportJobOutcomeCallable HoneycodeClient::StartTableDataImportJobCallable(const StartTableDataImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTableDataImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTableDataImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HoneycodeClient::StartTableDataImportJobAsync(const StartTableDataImportJobRequest& request, const StartTableDataImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartTableDataImportJobAsyncHelper( request, handler, context ); } );
}

void HoneycodeClient::StartTableDataImportJobAsyncHelper(const StartTableDataImportJobRequest& request, const StartTableDataImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartTableDataImportJob(request), context);
}

