﻿/**
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

#include <aws/mediastore-data/MediaStoreDataClient.h>
#include <aws/mediastore-data/MediaStoreDataEndpoint.h>
#include <aws/mediastore-data/MediaStoreDataErrorMarshaller.h>
#include <aws/mediastore-data/model/DeleteObjectRequest.h>
#include <aws/mediastore-data/model/DescribeObjectRequest.h>
#include <aws/mediastore-data/model/GetObjectRequest.h>
#include <aws/mediastore-data/model/ListItemsRequest.h>
#include <aws/mediastore-data/model/PutObjectRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaStoreData;
using namespace Aws::MediaStoreData::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mediastore";
static const char* ALLOCATION_TAG = "MediaStoreDataClient";


MediaStoreDataClient::MediaStoreDataClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaStoreDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaStoreDataClient::MediaStoreDataClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaStoreDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaStoreDataClient::MediaStoreDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<MediaStoreDataErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaStoreDataClient::~MediaStoreDataClient()
{
}

void MediaStoreDataClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("MediaStore Data");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MediaStoreDataEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MediaStoreDataClient::OverrideEndpoint(const Aws::String& endpoint)
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

DeleteObjectOutcome MediaStoreDataClient::DeleteObject(const DeleteObjectRequest& request) const
{
  if (!request.PathHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteObject", "Required field: Path, is not set");
    return DeleteObjectOutcome(Aws::Client::AWSError<MediaStoreDataErrors>(MediaStoreDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Path]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments(request.GetPath());
  return DeleteObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteObjectOutcomeCallable MediaStoreDataClient::DeleteObjectCallable(const DeleteObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreDataClient::DeleteObjectAsync(const DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteObjectAsyncHelper( request, handler, context ); } );
}

void MediaStoreDataClient::DeleteObjectAsyncHelper(const DeleteObjectRequest& request, const DeleteObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteObject(request), context);
}

DescribeObjectOutcome MediaStoreDataClient::DescribeObject(const DescribeObjectRequest& request) const
{
  if (!request.PathHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeObject", "Required field: Path, is not set");
    return DescribeObjectOutcome(Aws::Client::AWSError<MediaStoreDataErrors>(MediaStoreDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Path]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments(request.GetPath());
  return DescribeObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_HEAD, Aws::Auth::SIGV4_SIGNER));
}

DescribeObjectOutcomeCallable MediaStoreDataClient::DescribeObjectCallable(const DescribeObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreDataClient::DescribeObjectAsync(const DescribeObjectRequest& request, const DescribeObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeObjectAsyncHelper( request, handler, context ); } );
}

void MediaStoreDataClient::DescribeObjectAsyncHelper(const DescribeObjectRequest& request, const DescribeObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeObject(request), context);
}

GetObjectOutcome MediaStoreDataClient::GetObject(const GetObjectRequest& request) const
{
  if (!request.PathHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetObject", "Required field: Path, is not set");
    return GetObjectOutcome(Aws::Client::AWSError<MediaStoreDataErrors>(MediaStoreDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Path]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments(request.GetPath());
  return GetObjectOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetObjectOutcomeCallable MediaStoreDataClient::GetObjectCallable(const GetObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreDataClient::GetObjectAsync(const GetObjectRequest& request, const GetObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetObjectAsyncHelper( request, handler, context ); } );
}

void MediaStoreDataClient::GetObjectAsyncHelper(const GetObjectRequest& request, const GetObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetObject(request), context);
}

ListItemsOutcome MediaStoreDataClient::ListItems(const ListItemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListItemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListItemsOutcomeCallable MediaStoreDataClient::ListItemsCallable(const ListItemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListItemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListItems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreDataClient::ListItemsAsync(const ListItemsRequest& request, const ListItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListItemsAsyncHelper( request, handler, context ); } );
}

void MediaStoreDataClient::ListItemsAsyncHelper(const ListItemsRequest& request, const ListItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListItems(request), context);
}

PutObjectOutcome MediaStoreDataClient::PutObject(const PutObjectRequest& request) const
{
  if (!request.PathHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutObject", "Required field: Path, is not set");
    return PutObjectOutcome(Aws::Client::AWSError<MediaStoreDataErrors>(MediaStoreDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Path]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments(request.GetPath());
  return PutObjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutObjectOutcomeCallable MediaStoreDataClient::PutObjectCallable(const PutObjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutObjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutObject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaStoreDataClient::PutObjectAsync(const PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutObjectAsyncHelper( request, handler, context ); } );
}

void MediaStoreDataClient::PutObjectAsyncHelper(const PutObjectRequest& request, const PutObjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutObject(request), context);
}

