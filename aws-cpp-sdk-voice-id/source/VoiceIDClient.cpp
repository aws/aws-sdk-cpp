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

#include <aws/voice-id/VoiceIDClient.h>
#include <aws/voice-id/VoiceIDErrorMarshaller.h>
#include <aws/voice-id/VoiceIDEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* VoiceIDClient::SERVICE_NAME = "voiceid";
const char* VoiceIDClient::ALLOCATION_TAG = "VoiceIDClient";

VoiceIDClient::VoiceIDClient(const VoiceID::VoiceIDClientConfiguration& clientConfiguration,
                             std::shared_ptr<VoiceIDEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

VoiceIDClient::VoiceIDClient(const AWSCredentials& credentials,
                             std::shared_ptr<VoiceIDEndpointProviderBase> endpointProvider,
                             const VoiceID::VoiceIDClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

VoiceIDClient::VoiceIDClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<VoiceIDEndpointProviderBase> endpointProvider,
                             const VoiceID::VoiceIDClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  VoiceIDClient::VoiceIDClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<VoiceIDEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

VoiceIDClient::VoiceIDClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<VoiceIDEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

VoiceIDClient::VoiceIDClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<VoiceIDEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
VoiceIDClient::~VoiceIDClient()
{
}

std::shared_ptr<VoiceIDEndpointProviderBase>& VoiceIDClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void VoiceIDClient::init(const VoiceID::VoiceIDClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Voice ID");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void VoiceIDClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateDomainOutcome VoiceIDClient::CreateDomain(const CreateDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDomain(request), context);
    } );
}

DeleteDomainOutcome VoiceIDClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDomain(request), context);
    } );
}

DeleteFraudsterOutcome VoiceIDClient::DeleteFraudster(const DeleteFraudsterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFraudster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFraudster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFraudsterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFraudster(request), context);
    } );
}

DeleteSpeakerOutcome VoiceIDClient::DeleteSpeaker(const DeleteSpeakerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSpeaker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSpeaker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSpeakerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSpeaker(request), context);
    } );
}

DescribeDomainOutcome VoiceIDClient::DescribeDomain(const DescribeDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDomain(request), context);
    } );
}

DescribeFraudsterOutcome VoiceIDClient::DescribeFraudster(const DescribeFraudsterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFraudster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFraudster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFraudsterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFraudster(request), context);
    } );
}

DescribeFraudsterRegistrationJobOutcome VoiceIDClient::DescribeFraudsterRegistrationJob(const DescribeFraudsterRegistrationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFraudsterRegistrationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFraudsterRegistrationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFraudsterRegistrationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFraudsterRegistrationJob(request), context);
    } );
}

DescribeSpeakerOutcome VoiceIDClient::DescribeSpeaker(const DescribeSpeakerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpeaker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpeaker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpeakerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSpeaker(request), context);
    } );
}

DescribeSpeakerEnrollmentJobOutcome VoiceIDClient::DescribeSpeakerEnrollmentJob(const DescribeSpeakerEnrollmentJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSpeakerEnrollmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSpeakerEnrollmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSpeakerEnrollmentJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSpeakerEnrollmentJob(request), context);
    } );
}

EvaluateSessionOutcome VoiceIDClient::EvaluateSession(const EvaluateSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EvaluateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EvaluateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EvaluateSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EvaluateSession(request), context);
    } );
}

ListDomainsOutcome VoiceIDClient::ListDomains(const ListDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDomains(request), context);
    } );
}

ListFraudsterRegistrationJobsOutcome VoiceIDClient::ListFraudsterRegistrationJobs(const ListFraudsterRegistrationJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFraudsterRegistrationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFraudsterRegistrationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListFraudsterRegistrationJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFraudsterRegistrationJobs(request), context);
    } );
}

ListSpeakerEnrollmentJobsOutcome VoiceIDClient::ListSpeakerEnrollmentJobs(const ListSpeakerEnrollmentJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSpeakerEnrollmentJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSpeakerEnrollmentJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSpeakerEnrollmentJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSpeakerEnrollmentJobs(request), context);
    } );
}

ListSpeakersOutcome VoiceIDClient::ListSpeakers(const ListSpeakersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSpeakers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSpeakers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSpeakersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSpeakers(request), context);
    } );
}

ListTagsForResourceOutcome VoiceIDClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

OptOutSpeakerOutcome VoiceIDClient::OptOutSpeaker(const OptOutSpeakerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, OptOutSpeaker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, OptOutSpeaker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return OptOutSpeakerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, OptOutSpeaker(request), context);
    } );
}

StartFraudsterRegistrationJobOutcome VoiceIDClient::StartFraudsterRegistrationJob(const StartFraudsterRegistrationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartFraudsterRegistrationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartFraudsterRegistrationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartFraudsterRegistrationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartFraudsterRegistrationJob(request), context);
    } );
}

StartSpeakerEnrollmentJobOutcome VoiceIDClient::StartSpeakerEnrollmentJob(const StartSpeakerEnrollmentJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSpeakerEnrollmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartSpeakerEnrollmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartSpeakerEnrollmentJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartSpeakerEnrollmentJob(request), context);
    } );
}

TagResourceOutcome VoiceIDClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome VoiceIDClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateDomainOutcome VoiceIDClient::UpdateDomain(const UpdateDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDomain(request), context);
    } );
}

