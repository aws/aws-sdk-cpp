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

#include <aws/finspace-data/FinSpaceDataClient.h>
#include <aws/finspace-data/FinSpaceDataEndpoint.h>
#include <aws/finspace-data/FinSpaceDataErrorMarshaller.h>
#include <aws/finspace-data/model/CreateChangesetRequest.h>
#include <aws/finspace-data/model/CreateDataViewRequest.h>
#include <aws/finspace-data/model/CreateDatasetRequest.h>
#include <aws/finspace-data/model/DeleteDatasetRequest.h>
#include <aws/finspace-data/model/GetChangesetRequest.h>
#include <aws/finspace-data/model/GetDataViewRequest.h>
#include <aws/finspace-data/model/GetDatasetRequest.h>
#include <aws/finspace-data/model/GetProgrammaticAccessCredentialsRequest.h>
#include <aws/finspace-data/model/GetWorkingLocationRequest.h>
#include <aws/finspace-data/model/ListChangesetsRequest.h>
#include <aws/finspace-data/model/ListDataViewsRequest.h>
#include <aws/finspace-data/model/ListDatasetsRequest.h>
#include <aws/finspace-data/model/UpdateChangesetRequest.h>
#include <aws/finspace-data/model/UpdateDatasetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FinSpaceData;
using namespace Aws::FinSpaceData::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "finspace-api";
static const char* ALLOCATION_TAG = "FinSpaceDataClient";


FinSpaceDataClient::FinSpaceDataClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FinSpaceDataClient::FinSpaceDataClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FinSpaceDataClient::FinSpaceDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FinSpaceDataClient::~FinSpaceDataClient()
{
}

void FinSpaceDataClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("finspace data");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + FinSpaceDataEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void FinSpaceDataClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateChangesetOutcome FinSpaceDataClient::CreateChangeset(const CreateChangesetRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChangeset", "Required field: DatasetId, is not set");
    return CreateChangesetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/changesetsv2");
  return CreateChangesetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateChangesetOutcomeCallable FinSpaceDataClient::CreateChangesetCallable(const CreateChangesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateChangesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateChangeset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::CreateChangesetAsync(const CreateChangesetRequest& request, const CreateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateChangesetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::CreateChangesetAsyncHelper(const CreateChangesetRequest& request, const CreateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateChangeset(request), context);
}

CreateDataViewOutcome FinSpaceDataClient::CreateDataView(const CreateDataViewRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataView", "Required field: DatasetId, is not set");
    return CreateDataViewOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/dataviewsv2");
  return CreateDataViewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataViewOutcomeCallable FinSpaceDataClient::CreateDataViewCallable(const CreateDataViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::CreateDataViewAsync(const CreateDataViewRequest& request, const CreateDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDataViewAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::CreateDataViewAsyncHelper(const CreateDataViewRequest& request, const CreateDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataView(request), context);
}

CreateDatasetOutcome FinSpaceDataClient::CreateDataset(const CreateDatasetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasetsv2");
  return CreateDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcomeCallable FinSpaceDataClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDatasetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::CreateDatasetAsyncHelper(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDataset(request), context);
}

DeleteDatasetOutcome FinSpaceDataClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: DatasetId, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasetsv2/");
  uri.AddPathSegment(request.GetDatasetId());
  return DeleteDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable FinSpaceDataClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDatasetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::DeleteDatasetAsyncHelper(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDataset(request), context);
}

GetChangesetOutcome FinSpaceDataClient::GetChangeset(const GetChangesetRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChangeset", "Required field: DatasetId, is not set");
    return GetChangesetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  if (!request.ChangesetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChangeset", "Required field: ChangesetId, is not set");
    return GetChangesetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangesetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/changesetsv2/");
  uri.AddPathSegment(request.GetChangesetId());
  return GetChangesetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetChangesetOutcomeCallable FinSpaceDataClient::GetChangesetCallable(const GetChangesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChangeset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetChangesetAsync(const GetChangesetRequest& request, const GetChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChangesetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetChangesetAsyncHelper(const GetChangesetRequest& request, const GetChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChangeset(request), context);
}

GetDataViewOutcome FinSpaceDataClient::GetDataView(const GetDataViewRequest& request) const
{
  if (!request.DataViewIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataView", "Required field: DataViewId, is not set");
    return GetDataViewOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataViewId]", false));
  }
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataView", "Required field: DatasetId, is not set");
    return GetDataViewOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/dataviewsv2/");
  uri.AddPathSegment(request.GetDataViewId());
  return GetDataViewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDataViewOutcomeCallable FinSpaceDataClient::GetDataViewCallable(const GetDataViewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataViewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataView(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetDataViewAsync(const GetDataViewRequest& request, const GetDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDataViewAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetDataViewAsyncHelper(const GetDataViewRequest& request, const GetDataViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDataView(request), context);
}

GetDatasetOutcome FinSpaceDataClient::GetDataset(const GetDatasetRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataset", "Required field: DatasetId, is not set");
    return GetDatasetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasetsv2/");
  uri.AddPathSegment(request.GetDatasetId());
  return GetDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDatasetOutcomeCallable FinSpaceDataClient::GetDatasetCallable(const GetDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetDatasetAsync(const GetDatasetRequest& request, const GetDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDatasetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetDatasetAsyncHelper(const GetDatasetRequest& request, const GetDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDataset(request), context);
}

GetProgrammaticAccessCredentialsOutcome FinSpaceDataClient::GetProgrammaticAccessCredentials(const GetProgrammaticAccessCredentialsRequest& request) const
{
  if (!request.EnvironmentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProgrammaticAccessCredentials", "Required field: EnvironmentId, is not set");
    return GetProgrammaticAccessCredentialsOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/credentials/programmatic");
  return GetProgrammaticAccessCredentialsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProgrammaticAccessCredentialsOutcomeCallable FinSpaceDataClient::GetProgrammaticAccessCredentialsCallable(const GetProgrammaticAccessCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProgrammaticAccessCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProgrammaticAccessCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetProgrammaticAccessCredentialsAsync(const GetProgrammaticAccessCredentialsRequest& request, const GetProgrammaticAccessCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProgrammaticAccessCredentialsAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetProgrammaticAccessCredentialsAsyncHelper(const GetProgrammaticAccessCredentialsRequest& request, const GetProgrammaticAccessCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProgrammaticAccessCredentials(request), context);
}

GetWorkingLocationOutcome FinSpaceDataClient::GetWorkingLocation(const GetWorkingLocationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/workingLocationV1");
  return GetWorkingLocationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorkingLocationOutcomeCallable FinSpaceDataClient::GetWorkingLocationCallable(const GetWorkingLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkingLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkingLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::GetWorkingLocationAsync(const GetWorkingLocationRequest& request, const GetWorkingLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetWorkingLocationAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::GetWorkingLocationAsyncHelper(const GetWorkingLocationRequest& request, const GetWorkingLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetWorkingLocation(request), context);
}

ListChangesetsOutcome FinSpaceDataClient::ListChangesets(const ListChangesetsRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChangesets", "Required field: DatasetId, is not set");
    return ListChangesetsOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/changesetsv2");
  return ListChangesetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListChangesetsOutcomeCallable FinSpaceDataClient::ListChangesetsCallable(const ListChangesetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChangesetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChangesets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::ListChangesetsAsync(const ListChangesetsRequest& request, const ListChangesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChangesetsAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::ListChangesetsAsyncHelper(const ListChangesetsRequest& request, const ListChangesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChangesets(request), context);
}

ListDataViewsOutcome FinSpaceDataClient::ListDataViews(const ListDataViewsRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataViews", "Required field: DatasetId, is not set");
    return ListDataViewsOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/dataviewsv2");
  return ListDataViewsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataViewsOutcomeCallable FinSpaceDataClient::ListDataViewsCallable(const ListDataViewsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataViewsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataViews(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::ListDataViewsAsync(const ListDataViewsRequest& request, const ListDataViewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDataViewsAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::ListDataViewsAsyncHelper(const ListDataViewsRequest& request, const ListDataViewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDataViews(request), context);
}

ListDatasetsOutcome FinSpaceDataClient::ListDatasets(const ListDatasetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasetsv2");
  return ListDatasetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetsOutcomeCallable FinSpaceDataClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDatasetsAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::ListDatasetsAsyncHelper(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDatasets(request), context);
}

UpdateChangesetOutcome FinSpaceDataClient::UpdateChangeset(const UpdateChangesetRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChangeset", "Required field: DatasetId, is not set");
    return UpdateChangesetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  if (!request.ChangesetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChangeset", "Required field: ChangesetId, is not set");
    return UpdateChangesetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangesetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasets/");
  uri.AddPathSegment(request.GetDatasetId());
  uri.AddPathSegments("/changesetsv2/");
  uri.AddPathSegment(request.GetChangesetId());
  return UpdateChangesetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateChangesetOutcomeCallable FinSpaceDataClient::UpdateChangesetCallable(const UpdateChangesetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateChangesetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateChangeset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::UpdateChangesetAsync(const UpdateChangesetRequest& request, const UpdateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateChangesetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::UpdateChangesetAsyncHelper(const UpdateChangesetRequest& request, const UpdateChangesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateChangeset(request), context);
}

UpdateDatasetOutcome FinSpaceDataClient::UpdateDataset(const UpdateDatasetRequest& request) const
{
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataset", "Required field: DatasetId, is not set");
    return UpdateDatasetOutcome(Aws::Client::AWSError<FinSpaceDataErrors>(FinSpaceDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasetsv2/");
  uri.AddPathSegment(request.GetDatasetId());
  return UpdateDatasetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatasetOutcomeCallable FinSpaceDataClient::UpdateDatasetCallable(const UpdateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FinSpaceDataClient::UpdateDatasetAsync(const UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDatasetAsyncHelper( request, handler, context ); } );
}

void FinSpaceDataClient::UpdateDatasetAsyncHelper(const UpdateDatasetRequest& request, const UpdateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDataset(request), context);
}

