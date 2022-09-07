/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/VoiceIDErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/voice-id/model/CreateDomainResult.h>
#include <aws/voice-id/model/DescribeDomainResult.h>
#include <aws/voice-id/model/DescribeFraudsterResult.h>
#include <aws/voice-id/model/DescribeFraudsterRegistrationJobResult.h>
#include <aws/voice-id/model/DescribeSpeakerResult.h>
#include <aws/voice-id/model/DescribeSpeakerEnrollmentJobResult.h>
#include <aws/voice-id/model/EvaluateSessionResult.h>
#include <aws/voice-id/model/ListDomainsResult.h>
#include <aws/voice-id/model/ListFraudsterRegistrationJobsResult.h>
#include <aws/voice-id/model/ListSpeakerEnrollmentJobsResult.h>
#include <aws/voice-id/model/ListSpeakersResult.h>
#include <aws/voice-id/model/ListTagsForResourceResult.h>
#include <aws/voice-id/model/OptOutSpeakerResult.h>
#include <aws/voice-id/model/StartFraudsterRegistrationJobResult.h>
#include <aws/voice-id/model/StartSpeakerEnrollmentJobResult.h>
#include <aws/voice-id/model/TagResourceResult.h>
#include <aws/voice-id/model/UntagResourceResult.h>
#include <aws/voice-id/model/UpdateDomainResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace VoiceID
{

namespace Model
{
        class CreateDomainRequest;
        class DeleteDomainRequest;
        class DeleteFraudsterRequest;
        class DeleteSpeakerRequest;
        class DescribeDomainRequest;
        class DescribeFraudsterRequest;
        class DescribeFraudsterRegistrationJobRequest;
        class DescribeSpeakerRequest;
        class DescribeSpeakerEnrollmentJobRequest;
        class EvaluateSessionRequest;
        class ListDomainsRequest;
        class ListFraudsterRegistrationJobsRequest;
        class ListSpeakerEnrollmentJobsRequest;
        class ListSpeakersRequest;
        class ListTagsForResourceRequest;
        class OptOutSpeakerRequest;
        class StartFraudsterRegistrationJobRequest;
        class StartSpeakerEnrollmentJobRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDomainRequest;

        typedef Aws::Utils::Outcome<CreateDomainResult, VoiceIDError> CreateDomainOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, VoiceIDError> DeleteDomainOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, VoiceIDError> DeleteFraudsterOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, VoiceIDError> DeleteSpeakerOutcome;
        typedef Aws::Utils::Outcome<DescribeDomainResult, VoiceIDError> DescribeDomainOutcome;
        typedef Aws::Utils::Outcome<DescribeFraudsterResult, VoiceIDError> DescribeFraudsterOutcome;
        typedef Aws::Utils::Outcome<DescribeFraudsterRegistrationJobResult, VoiceIDError> DescribeFraudsterRegistrationJobOutcome;
        typedef Aws::Utils::Outcome<DescribeSpeakerResult, VoiceIDError> DescribeSpeakerOutcome;
        typedef Aws::Utils::Outcome<DescribeSpeakerEnrollmentJobResult, VoiceIDError> DescribeSpeakerEnrollmentJobOutcome;
        typedef Aws::Utils::Outcome<EvaluateSessionResult, VoiceIDError> EvaluateSessionOutcome;
        typedef Aws::Utils::Outcome<ListDomainsResult, VoiceIDError> ListDomainsOutcome;
        typedef Aws::Utils::Outcome<ListFraudsterRegistrationJobsResult, VoiceIDError> ListFraudsterRegistrationJobsOutcome;
        typedef Aws::Utils::Outcome<ListSpeakerEnrollmentJobsResult, VoiceIDError> ListSpeakerEnrollmentJobsOutcome;
        typedef Aws::Utils::Outcome<ListSpeakersResult, VoiceIDError> ListSpeakersOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, VoiceIDError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<OptOutSpeakerResult, VoiceIDError> OptOutSpeakerOutcome;
        typedef Aws::Utils::Outcome<StartFraudsterRegistrationJobResult, VoiceIDError> StartFraudsterRegistrationJobOutcome;
        typedef Aws::Utils::Outcome<StartSpeakerEnrollmentJobResult, VoiceIDError> StartSpeakerEnrollmentJobOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, VoiceIDError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, VoiceIDError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainResult, VoiceIDError> UpdateDomainOutcome;

        typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
        typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
        typedef std::future<DeleteFraudsterOutcome> DeleteFraudsterOutcomeCallable;
        typedef std::future<DeleteSpeakerOutcome> DeleteSpeakerOutcomeCallable;
        typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
        typedef std::future<DescribeFraudsterOutcome> DescribeFraudsterOutcomeCallable;
        typedef std::future<DescribeFraudsterRegistrationJobOutcome> DescribeFraudsterRegistrationJobOutcomeCallable;
        typedef std::future<DescribeSpeakerOutcome> DescribeSpeakerOutcomeCallable;
        typedef std::future<DescribeSpeakerEnrollmentJobOutcome> DescribeSpeakerEnrollmentJobOutcomeCallable;
        typedef std::future<EvaluateSessionOutcome> EvaluateSessionOutcomeCallable;
        typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
        typedef std::future<ListFraudsterRegistrationJobsOutcome> ListFraudsterRegistrationJobsOutcomeCallable;
        typedef std::future<ListSpeakerEnrollmentJobsOutcome> ListSpeakerEnrollmentJobsOutcomeCallable;
        typedef std::future<ListSpeakersOutcome> ListSpeakersOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<OptOutSpeakerOutcome> OptOutSpeakerOutcomeCallable;
        typedef std::future<StartFraudsterRegistrationJobOutcome> StartFraudsterRegistrationJobOutcomeCallable;
        typedef std::future<StartSpeakerEnrollmentJobOutcome> StartSpeakerEnrollmentJobOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDomainOutcome> UpdateDomainOutcomeCallable;
} // namespace Model

  class VoiceIDClient;

    typedef std::function<void(const VoiceIDClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DeleteFraudsterRequest&, const Model::DeleteFraudsterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFraudsterResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DeleteSpeakerRequest&, const Model::DeleteSpeakerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSpeakerResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DescribeDomainRequest&, const Model::DescribeDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DescribeFraudsterRequest&, const Model::DescribeFraudsterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFraudsterResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DescribeFraudsterRegistrationJobRequest&, const Model::DescribeFraudsterRegistrationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFraudsterRegistrationJobResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DescribeSpeakerRequest&, const Model::DescribeSpeakerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpeakerResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DescribeSpeakerEnrollmentJobRequest&, const Model::DescribeSpeakerEnrollmentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpeakerEnrollmentJobResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::EvaluateSessionRequest&, const Model::EvaluateSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EvaluateSessionResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::ListFraudsterRegistrationJobsRequest&, const Model::ListFraudsterRegistrationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFraudsterRegistrationJobsResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::ListSpeakerEnrollmentJobsRequest&, const Model::ListSpeakerEnrollmentJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSpeakerEnrollmentJobsResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::ListSpeakersRequest&, const Model::ListSpeakersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSpeakersResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::OptOutSpeakerRequest&, const Model::OptOutSpeakerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > OptOutSpeakerResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::StartFraudsterRegistrationJobRequest&, const Model::StartFraudsterRegistrationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFraudsterRegistrationJobResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::StartSpeakerEnrollmentJobRequest&, const Model::StartSpeakerEnrollmentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSpeakerEnrollmentJobResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::UpdateDomainRequest&, const Model::UpdateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainResponseReceivedHandler;

  /**
   * <p>Amazon Connect Voice ID provides real-time caller authentication and fraud
   * screening. This guide describes the APIs used for this service. </p>
   */
  class AWS_VOICEID_API VoiceIDClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VoiceIDClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VoiceIDClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        VoiceIDClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~VoiceIDClient();


        /**
         * <p>Creates a domain that contains all Amazon Connect Voice ID data, such as
         * speakers, fraudsters, customer audio, and voiceprints. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request) const;

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified domain from Voice ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request) const;

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified fraudster from Voice ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DeleteFraudster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFraudsterOutcome DeleteFraudster(const Model::DeleteFraudsterRequest& request) const;

        /**
         * A Callable wrapper for DeleteFraudster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFraudsterOutcomeCallable DeleteFraudsterCallable(const Model::DeleteFraudsterRequest& request) const;

        /**
         * An Async wrapper for DeleteFraudster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFraudsterAsync(const Model::DeleteFraudsterRequest& request, const DeleteFraudsterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified speaker from Voice ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DeleteSpeaker">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSpeakerOutcome DeleteSpeaker(const Model::DeleteSpeakerRequest& request) const;

        /**
         * A Callable wrapper for DeleteSpeaker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSpeakerOutcomeCallable DeleteSpeakerCallable(const Model::DeleteSpeakerRequest& request) const;

        /**
         * An Async wrapper for DeleteSpeaker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSpeakerAsync(const Model::DeleteSpeakerRequest& request, const DeleteSpeakerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainOutcomeCallable DescribeDomainCallable(const Model::DescribeDomainRequest& request) const;

        /**
         * An Async wrapper for DescribeDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainAsync(const Model::DescribeDomainRequest& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified fraudster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeFraudster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFraudsterOutcome DescribeFraudster(const Model::DescribeFraudsterRequest& request) const;

        /**
         * A Callable wrapper for DescribeFraudster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFraudsterOutcomeCallable DescribeFraudsterCallable(const Model::DescribeFraudsterRequest& request) const;

        /**
         * An Async wrapper for DescribeFraudster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFraudsterAsync(const Model::DescribeFraudsterRequest& request, const DescribeFraudsterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified fraudster registration job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeFraudsterRegistrationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFraudsterRegistrationJobOutcome DescribeFraudsterRegistrationJob(const Model::DescribeFraudsterRegistrationJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeFraudsterRegistrationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFraudsterRegistrationJobOutcomeCallable DescribeFraudsterRegistrationJobCallable(const Model::DescribeFraudsterRegistrationJobRequest& request) const;

        /**
         * An Async wrapper for DescribeFraudsterRegistrationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFraudsterRegistrationJobAsync(const Model::DescribeFraudsterRegistrationJobRequest& request, const DescribeFraudsterRegistrationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified speaker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeSpeaker">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpeakerOutcome DescribeSpeaker(const Model::DescribeSpeakerRequest& request) const;

        /**
         * A Callable wrapper for DescribeSpeaker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpeakerOutcomeCallable DescribeSpeakerCallable(const Model::DescribeSpeakerRequest& request) const;

        /**
         * An Async wrapper for DescribeSpeaker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpeakerAsync(const Model::DescribeSpeakerRequest& request, const DescribeSpeakerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified speaker enrollment job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeSpeakerEnrollmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpeakerEnrollmentJobOutcome DescribeSpeakerEnrollmentJob(const Model::DescribeSpeakerEnrollmentJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeSpeakerEnrollmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSpeakerEnrollmentJobOutcomeCallable DescribeSpeakerEnrollmentJobCallable(const Model::DescribeSpeakerEnrollmentJobRequest& request) const;

        /**
         * An Async wrapper for DescribeSpeakerEnrollmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSpeakerEnrollmentJobAsync(const Model::DescribeSpeakerEnrollmentJobRequest& request, const DescribeSpeakerEnrollmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Evaluates a specified session based on audio data accumulated during a
         * streaming Amazon Connect Voice ID call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/EvaluateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::EvaluateSessionOutcome EvaluateSession(const Model::EvaluateSessionRequest& request) const;

        /**
         * A Callable wrapper for EvaluateSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EvaluateSessionOutcomeCallable EvaluateSessionCallable(const Model::EvaluateSessionRequest& request) const;

        /**
         * An Async wrapper for EvaluateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EvaluateSessionAsync(const Model::EvaluateSessionRequest& request, const EvaluateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the domains in the Amazon Web Services account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainsOutcomeCallable ListDomainsCallable(const Model::ListDomainsRequest& request) const;

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainsAsync(const Model::ListDomainsRequest& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the fraudster registration jobs in the domain with the given
         * <code>JobStatus</code>. If <code>JobStatus</code> is not provided, this lists
         * all fraudster registration jobs in the given domain. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListFraudsterRegistrationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFraudsterRegistrationJobsOutcome ListFraudsterRegistrationJobs(const Model::ListFraudsterRegistrationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListFraudsterRegistrationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFraudsterRegistrationJobsOutcomeCallable ListFraudsterRegistrationJobsCallable(const Model::ListFraudsterRegistrationJobsRequest& request) const;

        /**
         * An Async wrapper for ListFraudsterRegistrationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFraudsterRegistrationJobsAsync(const Model::ListFraudsterRegistrationJobsRequest& request, const ListFraudsterRegistrationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the speaker enrollment jobs in the domain with the specified
         * <code>JobStatus</code>. If <code>JobStatus</code> is not provided, this lists
         * all jobs with all possible speaker enrollment job statuses.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListSpeakerEnrollmentJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSpeakerEnrollmentJobsOutcome ListSpeakerEnrollmentJobs(const Model::ListSpeakerEnrollmentJobsRequest& request) const;

        /**
         * A Callable wrapper for ListSpeakerEnrollmentJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSpeakerEnrollmentJobsOutcomeCallable ListSpeakerEnrollmentJobsCallable(const Model::ListSpeakerEnrollmentJobsRequest& request) const;

        /**
         * An Async wrapper for ListSpeakerEnrollmentJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSpeakerEnrollmentJobsAsync(const Model::ListSpeakerEnrollmentJobsRequest& request, const ListSpeakerEnrollmentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all speakers in a specified domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListSpeakers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSpeakersOutcome ListSpeakers(const Model::ListSpeakersRequest& request) const;

        /**
         * A Callable wrapper for ListSpeakers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSpeakersOutcomeCallable ListSpeakersCallable(const Model::ListSpeakersRequest& request) const;

        /**
         * An Async wrapper for ListSpeakers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSpeakersAsync(const Model::ListSpeakersRequest& request, const ListSpeakersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags associated with a specified Voice ID resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Opts out a speaker from Voice ID. A speaker can be opted out regardless of
         * whether or not they already exist in Voice ID. If they don't yet exist, a new
         * speaker is created in an opted out state. If they already exist, their existing
         * status is overridden and they are opted out. Enrollment and evaluation
         * authentication requests are rejected for opted out speakers, and opted out
         * speakers have no voice embeddings stored in Voice ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/OptOutSpeaker">AWS
         * API Reference</a></p>
         */
        virtual Model::OptOutSpeakerOutcome OptOutSpeaker(const Model::OptOutSpeakerRequest& request) const;

        /**
         * A Callable wrapper for OptOutSpeaker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::OptOutSpeakerOutcomeCallable OptOutSpeakerCallable(const Model::OptOutSpeakerRequest& request) const;

        /**
         * An Async wrapper for OptOutSpeaker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void OptOutSpeakerAsync(const Model::OptOutSpeakerRequest& request, const OptOutSpeakerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a new batch fraudster registration job using provided
         * details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/StartFraudsterRegistrationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFraudsterRegistrationJobOutcome StartFraudsterRegistrationJob(const Model::StartFraudsterRegistrationJobRequest& request) const;

        /**
         * A Callable wrapper for StartFraudsterRegistrationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFraudsterRegistrationJobOutcomeCallable StartFraudsterRegistrationJobCallable(const Model::StartFraudsterRegistrationJobRequest& request) const;

        /**
         * An Async wrapper for StartFraudsterRegistrationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFraudsterRegistrationJobAsync(const Model::StartFraudsterRegistrationJobRequest& request, const StartFraudsterRegistrationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a new batch speaker enrollment job using specified
         * details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/StartSpeakerEnrollmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSpeakerEnrollmentJobOutcome StartSpeakerEnrollmentJob(const Model::StartSpeakerEnrollmentJobRequest& request) const;

        /**
         * A Callable wrapper for StartSpeakerEnrollmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSpeakerEnrollmentJobOutcomeCallable StartSpeakerEnrollmentJobCallable(const Model::StartSpeakerEnrollmentJobRequest& request) const;

        /**
         * An Async wrapper for StartSpeakerEnrollmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSpeakerEnrollmentJobAsync(const Model::StartSpeakerEnrollmentJobRequest& request, const StartSpeakerEnrollmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tags a Voice ID resource with the provided list of tags.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes specified tags from a specified Amazon Connect Voice ID
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified domain. This API has clobber behavior, and clears and
         * replaces all attributes. If an optional field, such as 'Description' is not
         * provided, it is removed from the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/UpdateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainOutcome UpdateDomain(const Model::UpdateDomainRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainOutcomeCallable UpdateDomainCallable(const Model::UpdateDomainRequest& request) const;

        /**
         * An Async wrapper for UpdateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainAsync(const Model::UpdateDomainRequest& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace VoiceID
} // namespace Aws
