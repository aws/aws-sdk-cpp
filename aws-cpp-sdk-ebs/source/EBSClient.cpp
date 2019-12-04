/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

#include <aws/ebs/EBSClient.h>
#include <aws/ebs/EBSEndpoint.h>
#include <aws/ebs/EBSErrorMarshaller.h>
#include <aws/ebs/model/GetSnapshotBlockRequest.h>
#include <aws/ebs/model/ListChangedBlocksRequest.h>
#include <aws/ebs/model/ListSnapshotBlocksRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::EBS;
using namespace Aws::EBS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ebs";
static const char* ALLOCATION_TAG = "EBSClient";


EBSClient::EBSClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EBSClient::EBSClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EBSClient::EBSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<EBSErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

EBSClient::~EBSClient()
{
}

void EBSClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + EBSEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void EBSClient::OverrideEndpoint(const Aws::String& endpoint)
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

GetSnapshotBlockOutcome EBSClient::GetSnapshotBlock(const GetSnapshotBlockRequest& request) const
{
  if (!request.SnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSnapshotBlock", "Required field: SnapshotId, is not set");
    return GetSnapshotBlockOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  if (!request.BlockIndexHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSnapshotBlock", "Required field: BlockIndex, is not set");
    return GetSnapshotBlockOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlockIndex]", false));
  }
  if (!request.BlockTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSnapshotBlock", "Required field: BlockToken, is not set");
    return GetSnapshotBlockOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlockToken]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/snapshots/";
  ss << request.GetSnapshotId();
  ss << "/blocks/";
  ss << request.GetBlockIndex();
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetSnapshotBlockOutcome(GetSnapshotBlockResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return GetSnapshotBlockOutcome(outcome.GetError());
  }
}

GetSnapshotBlockOutcomeCallable EBSClient::GetSnapshotBlockCallable(const GetSnapshotBlockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSnapshotBlockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSnapshotBlock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EBSClient::GetSnapshotBlockAsync(const GetSnapshotBlockRequest& request, const GetSnapshotBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSnapshotBlockAsyncHelper( request, handler, context ); } );
}

void EBSClient::GetSnapshotBlockAsyncHelper(const GetSnapshotBlockRequest& request, const GetSnapshotBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSnapshotBlock(request), context);
}

ListChangedBlocksOutcome EBSClient::ListChangedBlocks(const ListChangedBlocksRequest& request) const
{
  if (!request.SecondSnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChangedBlocks", "Required field: SecondSnapshotId, is not set");
    return ListChangedBlocksOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SecondSnapshotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/snapshots/";
  ss << request.GetSecondSnapshotId();
  ss << "/changedblocks";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListChangedBlocksOutcome(ListChangedBlocksResult(outcome.GetResult()));
  }
  else
  {
    return ListChangedBlocksOutcome(outcome.GetError());
  }
}

ListChangedBlocksOutcomeCallable EBSClient::ListChangedBlocksCallable(const ListChangedBlocksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListChangedBlocksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListChangedBlocks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EBSClient::ListChangedBlocksAsync(const ListChangedBlocksRequest& request, const ListChangedBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListChangedBlocksAsyncHelper( request, handler, context ); } );
}

void EBSClient::ListChangedBlocksAsyncHelper(const ListChangedBlocksRequest& request, const ListChangedBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListChangedBlocks(request), context);
}

ListSnapshotBlocksOutcome EBSClient::ListSnapshotBlocks(const ListSnapshotBlocksRequest& request) const
{
  if (!request.SnapshotIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSnapshotBlocks", "Required field: SnapshotId, is not set");
    return ListSnapshotBlocksOutcome(Aws::Client::AWSError<EBSErrors>(EBSErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/snapshots/";
  ss << request.GetSnapshotId();
  ss << "/blocks";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSnapshotBlocksOutcome(ListSnapshotBlocksResult(outcome.GetResult()));
  }
  else
  {
    return ListSnapshotBlocksOutcome(outcome.GetError());
  }
}

ListSnapshotBlocksOutcomeCallable EBSClient::ListSnapshotBlocksCallable(const ListSnapshotBlocksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSnapshotBlocksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSnapshotBlocks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void EBSClient::ListSnapshotBlocksAsync(const ListSnapshotBlocksRequest& request, const ListSnapshotBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSnapshotBlocksAsyncHelper( request, handler, context ); } );
}

void EBSClient::ListSnapshotBlocksAsyncHelper(const ListSnapshotBlocksRequest& request, const ListSnapshotBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSnapshotBlocks(request), context);
}

