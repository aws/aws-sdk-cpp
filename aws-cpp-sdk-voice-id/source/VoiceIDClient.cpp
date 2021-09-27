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

#include <aws/voice-id/VoiceIDClient.h>
#include <aws/voice-id/VoiceIDEndpoint.h>
#include <aws/voice-id/VoiceIDErrorMarshaller.h>
#include <aws/voice-id/model/CreateDomainRequest.h>
#include <aws/voice-id/model/DeleteDomainRequest.h>
#include <aws/voice-id/model/DeleteFraudsterRequest.h>
#include <aws/voice-id/model/DeleteSpeakerRequest.h>
#include <aws/voice-id/model/DescribeDomainRequest.h>
#include <aws/voice-id/model/DescribeFraudsterRequest.h>
#include <aws/voice-id/model/DescribeFraudsterRegistrationJobRequest.h>
#include <aws/voice-id/model/DescribeSpeakerRequest.h>
#include <aws/voice-id/model/DescribeSpeakerEnrollmentJobRequest.h>
#include <aws/voice-id/model/EvaluateSessionRequest.h>
#include <aws/voice-id/model/ListDomainsRequest.h>
#include <aws/voice-id/model/ListFraudsterRegistrationJobsRequest.h>
#include <aws/voice-id/model/ListSpeakerEnrollmentJobsRequest.h>
#include <aws/voice-id/model/ListSpeakersRequest.h>
#include <aws/voice-id/model/ListTagsForResourceRequest.h>
#include <aws/voice-id/model/OptOutSpeakerRequest.h>
#include <aws/voice-id/model/StartFraudsterRegistrationJobRequest.h>
#include <aws/voice-id/model/StartSpeakerEnrollmentJobRequest.h>
#include <aws/voice-id/model/TagResourceRequest.h>
#include <aws/voice-id/model/UntagResourceRequest.h>
#include <aws/voice-id/model/UpdateDomainRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::VoiceID;
using namespace Aws::VoiceID::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "voiceid";
static const char* ALLOCATION_TAG = "VoiceIDClient";


VoiceIDClient::VoiceIDClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

VoiceIDClient::VoiceIDClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

VoiceIDClient::VoiceIDClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

VoiceIDClient::~VoiceIDClient()
{
}

void VoiceIDClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Voice ID");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + VoiceIDEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void VoiceIDClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateDomainOutcome VoiceIDClient::CreateDomain(const CreateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainOutcomeCallable VoiceIDClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDomainAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::CreateDomainAsyncHelper(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDomain(request), context);
}

DeleteDomainOutcome VoiceIDClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainOutcomeCallable VoiceIDClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDomainAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::DeleteDomainAsyncHelper(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDomain(request), context);
}

DeleteFraudsterOutcome VoiceIDClient::DeleteFraudster(const DeleteFraudsterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFraudsterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFraudsterOutcomeCallable VoiceIDClient::DeleteFraudsterCallable(const DeleteFraudsterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFraudsterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFraudster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::DeleteFraudsterAsync(const DeleteFraudsterRequest& request, const DeleteFraudsterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFraudsterAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::DeleteFraudsterAsyncHelper(const DeleteFraudsterRequest& request, const DeleteFraudsterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFraudster(request), context);
}

DeleteSpeakerOutcome VoiceIDClient::DeleteSpeaker(const DeleteSpeakerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSpeakerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSpeakerOutcomeCallable VoiceIDClient::DeleteSpeakerCallable(const DeleteSpeakerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSpeakerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSpeaker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::DeleteSpeakerAsync(const DeleteSpeakerRequest& request, const DeleteSpeakerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSpeakerAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::DeleteSpeakerAsyncHelper(const DeleteSpeakerRequest& request, const DeleteSpeakerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSpeaker(request), context);
}

DescribeDomainOutcome VoiceIDClient::DescribeDomain(const DescribeDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainOutcomeCallable VoiceIDClient::DescribeDomainCallable(const DescribeDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDomainAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::DescribeDomainAsyncHelper(const DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDomain(request), context);
}

DescribeFraudsterOutcome VoiceIDClient::DescribeFraudster(const DescribeFraudsterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFraudsterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFraudsterOutcomeCallable VoiceIDClient::DescribeFraudsterCallable(const DescribeFraudsterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFraudsterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFraudster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::DescribeFraudsterAsync(const DescribeFraudsterRequest& request, const DescribeFraudsterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFraudsterAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::DescribeFraudsterAsyncHelper(const DescribeFraudsterRequest& request, const DescribeFraudsterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFraudster(request), context);
}

DescribeFraudsterRegistrationJobOutcome VoiceIDClient::DescribeFraudsterRegistrationJob(const DescribeFraudsterRegistrationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFraudsterRegistrationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFraudsterRegistrationJobOutcomeCallable VoiceIDClient::DescribeFraudsterRegistrationJobCallable(const DescribeFraudsterRegistrationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFraudsterRegistrationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFraudsterRegistrationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::DescribeFraudsterRegistrationJobAsync(const DescribeFraudsterRegistrationJobRequest& request, const DescribeFraudsterRegistrationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFraudsterRegistrationJobAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::DescribeFraudsterRegistrationJobAsyncHelper(const DescribeFraudsterRegistrationJobRequest& request, const DescribeFraudsterRegistrationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFraudsterRegistrationJob(request), context);
}

DescribeSpeakerOutcome VoiceIDClient::DescribeSpeaker(const DescribeSpeakerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSpeakerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSpeakerOutcomeCallable VoiceIDClient::DescribeSpeakerCallable(const DescribeSpeakerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpeakerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSpeaker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::DescribeSpeakerAsync(const DescribeSpeakerRequest& request, const DescribeSpeakerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSpeakerAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::DescribeSpeakerAsyncHelper(const DescribeSpeakerRequest& request, const DescribeSpeakerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpeaker(request), context);
}

DescribeSpeakerEnrollmentJobOutcome VoiceIDClient::DescribeSpeakerEnrollmentJob(const DescribeSpeakerEnrollmentJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSpeakerEnrollmentJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSpeakerEnrollmentJobOutcomeCallable VoiceIDClient::DescribeSpeakerEnrollmentJobCallable(const DescribeSpeakerEnrollmentJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSpeakerEnrollmentJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSpeakerEnrollmentJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::DescribeSpeakerEnrollmentJobAsync(const DescribeSpeakerEnrollmentJobRequest& request, const DescribeSpeakerEnrollmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSpeakerEnrollmentJobAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::DescribeSpeakerEnrollmentJobAsyncHelper(const DescribeSpeakerEnrollmentJobRequest& request, const DescribeSpeakerEnrollmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSpeakerEnrollmentJob(request), context);
}

EvaluateSessionOutcome VoiceIDClient::EvaluateSession(const EvaluateSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EvaluateSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EvaluateSessionOutcomeCallable VoiceIDClient::EvaluateSessionCallable(const EvaluateSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EvaluateSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EvaluateSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::EvaluateSessionAsync(const EvaluateSessionRequest& request, const EvaluateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EvaluateSessionAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::EvaluateSessionAsyncHelper(const EvaluateSessionRequest& request, const EvaluateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EvaluateSession(request), context);
}

ListDomainsOutcome VoiceIDClient::ListDomains(const ListDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDomainsOutcomeCallable VoiceIDClient::ListDomainsCallable(const ListDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::ListDomainsAsync(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDomainsAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::ListDomainsAsyncHelper(const ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomains(request), context);
}

ListFraudsterRegistrationJobsOutcome VoiceIDClient::ListFraudsterRegistrationJobs(const ListFraudsterRegistrationJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFraudsterRegistrationJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFraudsterRegistrationJobsOutcomeCallable VoiceIDClient::ListFraudsterRegistrationJobsCallable(const ListFraudsterRegistrationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFraudsterRegistrationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFraudsterRegistrationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::ListFraudsterRegistrationJobsAsync(const ListFraudsterRegistrationJobsRequest& request, const ListFraudsterRegistrationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFraudsterRegistrationJobsAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::ListFraudsterRegistrationJobsAsyncHelper(const ListFraudsterRegistrationJobsRequest& request, const ListFraudsterRegistrationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFraudsterRegistrationJobs(request), context);
}

ListSpeakerEnrollmentJobsOutcome VoiceIDClient::ListSpeakerEnrollmentJobs(const ListSpeakerEnrollmentJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSpeakerEnrollmentJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSpeakerEnrollmentJobsOutcomeCallable VoiceIDClient::ListSpeakerEnrollmentJobsCallable(const ListSpeakerEnrollmentJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSpeakerEnrollmentJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSpeakerEnrollmentJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::ListSpeakerEnrollmentJobsAsync(const ListSpeakerEnrollmentJobsRequest& request, const ListSpeakerEnrollmentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSpeakerEnrollmentJobsAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::ListSpeakerEnrollmentJobsAsyncHelper(const ListSpeakerEnrollmentJobsRequest& request, const ListSpeakerEnrollmentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSpeakerEnrollmentJobs(request), context);
}

ListSpeakersOutcome VoiceIDClient::ListSpeakers(const ListSpeakersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSpeakersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSpeakersOutcomeCallable VoiceIDClient::ListSpeakersCallable(const ListSpeakersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSpeakersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSpeakers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::ListSpeakersAsync(const ListSpeakersRequest& request, const ListSpeakersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSpeakersAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::ListSpeakersAsyncHelper(const ListSpeakersRequest& request, const ListSpeakersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSpeakers(request), context);
}

ListTagsForResourceOutcome VoiceIDClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable VoiceIDClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

OptOutSpeakerOutcome VoiceIDClient::OptOutSpeaker(const OptOutSpeakerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return OptOutSpeakerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

OptOutSpeakerOutcomeCallable VoiceIDClient::OptOutSpeakerCallable(const OptOutSpeakerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< OptOutSpeakerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->OptOutSpeaker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::OptOutSpeakerAsync(const OptOutSpeakerRequest& request, const OptOutSpeakerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->OptOutSpeakerAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::OptOutSpeakerAsyncHelper(const OptOutSpeakerRequest& request, const OptOutSpeakerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, OptOutSpeaker(request), context);
}

StartFraudsterRegistrationJobOutcome VoiceIDClient::StartFraudsterRegistrationJob(const StartFraudsterRegistrationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartFraudsterRegistrationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFraudsterRegistrationJobOutcomeCallable VoiceIDClient::StartFraudsterRegistrationJobCallable(const StartFraudsterRegistrationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFraudsterRegistrationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFraudsterRegistrationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::StartFraudsterRegistrationJobAsync(const StartFraudsterRegistrationJobRequest& request, const StartFraudsterRegistrationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartFraudsterRegistrationJobAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::StartFraudsterRegistrationJobAsyncHelper(const StartFraudsterRegistrationJobRequest& request, const StartFraudsterRegistrationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartFraudsterRegistrationJob(request), context);
}

StartSpeakerEnrollmentJobOutcome VoiceIDClient::StartSpeakerEnrollmentJob(const StartSpeakerEnrollmentJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartSpeakerEnrollmentJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSpeakerEnrollmentJobOutcomeCallable VoiceIDClient::StartSpeakerEnrollmentJobCallable(const StartSpeakerEnrollmentJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSpeakerEnrollmentJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSpeakerEnrollmentJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::StartSpeakerEnrollmentJobAsync(const StartSpeakerEnrollmentJobRequest& request, const StartSpeakerEnrollmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartSpeakerEnrollmentJobAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::StartSpeakerEnrollmentJobAsyncHelper(const StartSpeakerEnrollmentJobRequest& request, const StartSpeakerEnrollmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartSpeakerEnrollmentJob(request), context);
}

TagResourceOutcome VoiceIDClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable VoiceIDClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome VoiceIDClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable VoiceIDClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateDomainOutcome VoiceIDClient::UpdateDomain(const UpdateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainOutcomeCallable VoiceIDClient::UpdateDomainCallable(const UpdateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void VoiceIDClient::UpdateDomainAsync(const UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDomainAsyncHelper( request, handler, context ); } );
}

void VoiceIDClient::UpdateDomainAsyncHelper(const UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDomain(request), context);
}

