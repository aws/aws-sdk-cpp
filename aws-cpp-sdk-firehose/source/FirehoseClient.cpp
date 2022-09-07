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

#include <aws/firehose/FirehoseClient.h>
#include <aws/firehose/FirehoseEndpoint.h>
#include <aws/firehose/FirehoseErrorMarshaller.h>
#include <aws/firehose/model/CreateDeliveryStreamRequest.h>
#include <aws/firehose/model/DeleteDeliveryStreamRequest.h>
#include <aws/firehose/model/DescribeDeliveryStreamRequest.h>
#include <aws/firehose/model/ListDeliveryStreamsRequest.h>
#include <aws/firehose/model/ListTagsForDeliveryStreamRequest.h>
#include <aws/firehose/model/PutRecordRequest.h>
#include <aws/firehose/model/PutRecordBatchRequest.h>
#include <aws/firehose/model/StartDeliveryStreamEncryptionRequest.h>
#include <aws/firehose/model/StopDeliveryStreamEncryptionRequest.h>
#include <aws/firehose/model/TagDeliveryStreamRequest.h>
#include <aws/firehose/model/UntagDeliveryStreamRequest.h>
#include <aws/firehose/model/UpdateDestinationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Firehose;
using namespace Aws::Firehose::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "firehose";
static const char* ALLOCATION_TAG = "FirehoseClient";

FirehoseClient::FirehoseClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FirehoseClient::FirehoseClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FirehoseClient::FirehoseClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FirehoseErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FirehoseClient::~FirehoseClient()
{
}

void FirehoseClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Firehose");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + FirehoseEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void FirehoseClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateDeliveryStreamOutcome FirehoseClient::CreateDeliveryStream(const CreateDeliveryStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDeliveryStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeliveryStreamOutcomeCallable FirehoseClient::CreateDeliveryStreamCallable(const CreateDeliveryStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeliveryStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeliveryStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClientCreateDeliveryStreamAsyncHelper(FirehoseClient const * const clientThis, const CreateDeliveryStreamRequest& request, const CreateDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDeliveryStream(request), context);
}

void FirehoseClient::CreateDeliveryStreamAsync(const CreateDeliveryStreamRequest& request, const CreateDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FirehoseClientCreateDeliveryStreamAsyncHelper( this, request, handler, context ); } );
}

DeleteDeliveryStreamOutcome FirehoseClient::DeleteDeliveryStream(const DeleteDeliveryStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDeliveryStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeliveryStreamOutcomeCallable FirehoseClient::DeleteDeliveryStreamCallable(const DeleteDeliveryStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeliveryStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeliveryStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClientDeleteDeliveryStreamAsyncHelper(FirehoseClient const * const clientThis, const DeleteDeliveryStreamRequest& request, const DeleteDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDeliveryStream(request), context);
}

void FirehoseClient::DeleteDeliveryStreamAsync(const DeleteDeliveryStreamRequest& request, const DeleteDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FirehoseClientDeleteDeliveryStreamAsyncHelper( this, request, handler, context ); } );
}

DescribeDeliveryStreamOutcome FirehoseClient::DescribeDeliveryStream(const DescribeDeliveryStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDeliveryStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDeliveryStreamOutcomeCallable FirehoseClient::DescribeDeliveryStreamCallable(const DescribeDeliveryStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDeliveryStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDeliveryStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClientDescribeDeliveryStreamAsyncHelper(FirehoseClient const * const clientThis, const DescribeDeliveryStreamRequest& request, const DescribeDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDeliveryStream(request), context);
}

void FirehoseClient::DescribeDeliveryStreamAsync(const DescribeDeliveryStreamRequest& request, const DescribeDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FirehoseClientDescribeDeliveryStreamAsyncHelper( this, request, handler, context ); } );
}

ListDeliveryStreamsOutcome FirehoseClient::ListDeliveryStreams(const ListDeliveryStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDeliveryStreamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeliveryStreamsOutcomeCallable FirehoseClient::ListDeliveryStreamsCallable(const ListDeliveryStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDeliveryStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDeliveryStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClientListDeliveryStreamsAsyncHelper(FirehoseClient const * const clientThis, const ListDeliveryStreamsRequest& request, const ListDeliveryStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDeliveryStreams(request), context);
}

void FirehoseClient::ListDeliveryStreamsAsync(const ListDeliveryStreamsRequest& request, const ListDeliveryStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FirehoseClientListDeliveryStreamsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForDeliveryStreamOutcome FirehoseClient::ListTagsForDeliveryStream(const ListTagsForDeliveryStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForDeliveryStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForDeliveryStreamOutcomeCallable FirehoseClient::ListTagsForDeliveryStreamCallable(const ListTagsForDeliveryStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForDeliveryStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForDeliveryStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClientListTagsForDeliveryStreamAsyncHelper(FirehoseClient const * const clientThis, const ListTagsForDeliveryStreamRequest& request, const ListTagsForDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForDeliveryStream(request), context);
}

void FirehoseClient::ListTagsForDeliveryStreamAsync(const ListTagsForDeliveryStreamRequest& request, const ListTagsForDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FirehoseClientListTagsForDeliveryStreamAsyncHelper( this, request, handler, context ); } );
}

PutRecordOutcome FirehoseClient::PutRecord(const PutRecordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRecordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRecordOutcomeCallable FirehoseClient::PutRecordCallable(const PutRecordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRecordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRecord(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClientPutRecordAsyncHelper(FirehoseClient const * const clientThis, const PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRecord(request), context);
}

void FirehoseClient::PutRecordAsync(const PutRecordRequest& request, const PutRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FirehoseClientPutRecordAsyncHelper( this, request, handler, context ); } );
}

PutRecordBatchOutcome FirehoseClient::PutRecordBatch(const PutRecordBatchRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRecordBatchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRecordBatchOutcomeCallable FirehoseClient::PutRecordBatchCallable(const PutRecordBatchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRecordBatchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRecordBatch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClientPutRecordBatchAsyncHelper(FirehoseClient const * const clientThis, const PutRecordBatchRequest& request, const PutRecordBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRecordBatch(request), context);
}

void FirehoseClient::PutRecordBatchAsync(const PutRecordBatchRequest& request, const PutRecordBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FirehoseClientPutRecordBatchAsyncHelper( this, request, handler, context ); } );
}

StartDeliveryStreamEncryptionOutcome FirehoseClient::StartDeliveryStreamEncryption(const StartDeliveryStreamEncryptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDeliveryStreamEncryptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDeliveryStreamEncryptionOutcomeCallable FirehoseClient::StartDeliveryStreamEncryptionCallable(const StartDeliveryStreamEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDeliveryStreamEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDeliveryStreamEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClientStartDeliveryStreamEncryptionAsyncHelper(FirehoseClient const * const clientThis, const StartDeliveryStreamEncryptionRequest& request, const StartDeliveryStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartDeliveryStreamEncryption(request), context);
}

void FirehoseClient::StartDeliveryStreamEncryptionAsync(const StartDeliveryStreamEncryptionRequest& request, const StartDeliveryStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FirehoseClientStartDeliveryStreamEncryptionAsyncHelper( this, request, handler, context ); } );
}

StopDeliveryStreamEncryptionOutcome FirehoseClient::StopDeliveryStreamEncryption(const StopDeliveryStreamEncryptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopDeliveryStreamEncryptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopDeliveryStreamEncryptionOutcomeCallable FirehoseClient::StopDeliveryStreamEncryptionCallable(const StopDeliveryStreamEncryptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDeliveryStreamEncryptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDeliveryStreamEncryption(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClientStopDeliveryStreamEncryptionAsyncHelper(FirehoseClient const * const clientThis, const StopDeliveryStreamEncryptionRequest& request, const StopDeliveryStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopDeliveryStreamEncryption(request), context);
}

void FirehoseClient::StopDeliveryStreamEncryptionAsync(const StopDeliveryStreamEncryptionRequest& request, const StopDeliveryStreamEncryptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FirehoseClientStopDeliveryStreamEncryptionAsyncHelper( this, request, handler, context ); } );
}

TagDeliveryStreamOutcome FirehoseClient::TagDeliveryStream(const TagDeliveryStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagDeliveryStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagDeliveryStreamOutcomeCallable FirehoseClient::TagDeliveryStreamCallable(const TagDeliveryStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagDeliveryStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagDeliveryStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClientTagDeliveryStreamAsyncHelper(FirehoseClient const * const clientThis, const TagDeliveryStreamRequest& request, const TagDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagDeliveryStream(request), context);
}

void FirehoseClient::TagDeliveryStreamAsync(const TagDeliveryStreamRequest& request, const TagDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FirehoseClientTagDeliveryStreamAsyncHelper( this, request, handler, context ); } );
}

UntagDeliveryStreamOutcome FirehoseClient::UntagDeliveryStream(const UntagDeliveryStreamRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagDeliveryStreamOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagDeliveryStreamOutcomeCallable FirehoseClient::UntagDeliveryStreamCallable(const UntagDeliveryStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagDeliveryStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagDeliveryStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClientUntagDeliveryStreamAsyncHelper(FirehoseClient const * const clientThis, const UntagDeliveryStreamRequest& request, const UntagDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagDeliveryStream(request), context);
}

void FirehoseClient::UntagDeliveryStreamAsync(const UntagDeliveryStreamRequest& request, const UntagDeliveryStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FirehoseClientUntagDeliveryStreamAsyncHelper( this, request, handler, context ); } );
}

UpdateDestinationOutcome FirehoseClient::UpdateDestination(const UpdateDestinationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDestinationOutcomeCallable FirehoseClient::UpdateDestinationCallable(const UpdateDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FirehoseClientUpdateDestinationAsyncHelper(FirehoseClient const * const clientThis, const UpdateDestinationRequest& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDestination(request), context);
}

void FirehoseClient::UpdateDestinationAsync(const UpdateDestinationRequest& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FirehoseClientUpdateDestinationAsyncHelper( this, request, handler, context ); } );
}

