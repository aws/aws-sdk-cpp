/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/voice-id/VoiceIDServiceClientModel.h>
#include <aws/voice-id/VoiceIDLegacyAsyncMacros.h>

namespace Aws
{
namespace VoiceID
{
  /**
   * <p>Amazon Connect Voice ID provides real-time caller authentication and fraud
   * screening. This guide describes the APIs used for this service. </p>
   */
  class AWS_VOICEID_API VoiceIDClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VoiceIDClient(const Aws::VoiceID::VoiceIDClientConfiguration& clientConfiguration = Aws::VoiceID::VoiceIDClientConfiguration(),
                      std::shared_ptr<VoiceIDEndpointProviderBase> endpointProvider = Aws::MakeShared<VoiceIDEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VoiceIDClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<VoiceIDEndpointProviderBase> endpointProvider = Aws::MakeShared<VoiceIDEndpointProvider>(ALLOCATION_TAG),
                      const Aws::VoiceID::VoiceIDClientConfiguration& clientConfiguration = Aws::VoiceID::VoiceIDClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        VoiceIDClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<VoiceIDEndpointProviderBase> endpointProvider = Aws::MakeShared<VoiceIDEndpointProvider>(ALLOCATION_TAG),
                      const Aws::VoiceID::VoiceIDClientConfiguration& clientConfiguration = Aws::VoiceID::VoiceIDClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VoiceIDClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VoiceIDClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        VoiceIDClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~VoiceIDClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Creates a domain that contains all Amazon Connect Voice ID data, such as
         * speakers, fraudsters, customer audio, and voiceprints. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;


        /**
         * <p>Deletes the specified domain from Voice ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;


        /**
         * <p>Deletes the specified fraudster from Voice ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DeleteFraudster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFraudsterOutcome DeleteFraudster(const Model::DeleteFraudsterRequest& request) const;


        /**
         * <p>Deletes the specified speaker from Voice ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DeleteSpeaker">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSpeakerOutcome DeleteSpeaker(const Model::DeleteSpeakerRequest& request) const;


        /**
         * <p>Describes the specified domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest& request) const;


        /**
         * <p>Describes the specified fraudster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeFraudster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFraudsterOutcome DescribeFraudster(const Model::DescribeFraudsterRequest& request) const;


        /**
         * <p>Describes the specified fraudster registration job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeFraudsterRegistrationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFraudsterRegistrationJobOutcome DescribeFraudsterRegistrationJob(const Model::DescribeFraudsterRegistrationJobRequest& request) const;


        /**
         * <p>Describes the specified speaker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeSpeaker">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpeakerOutcome DescribeSpeaker(const Model::DescribeSpeakerRequest& request) const;


        /**
         * <p>Describes the specified speaker enrollment job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeSpeakerEnrollmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpeakerEnrollmentJobOutcome DescribeSpeakerEnrollmentJob(const Model::DescribeSpeakerEnrollmentJobRequest& request) const;


        /**
         * <p>Evaluates a specified session based on audio data accumulated during a
         * streaming Amazon Connect Voice ID call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/EvaluateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::EvaluateSessionOutcome EvaluateSession(const Model::EvaluateSessionRequest& request) const;


        /**
         * <p>Lists all the domains in the Amazon Web Services account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;


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
         * <p>Lists all the speaker enrollment jobs in the domain with the specified
         * <code>JobStatus</code>. If <code>JobStatus</code> is not provided, this lists
         * all jobs with all possible speaker enrollment job statuses.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListSpeakerEnrollmentJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSpeakerEnrollmentJobsOutcome ListSpeakerEnrollmentJobs(const Model::ListSpeakerEnrollmentJobsRequest& request) const;


        /**
         * <p>Lists all speakers in a specified domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListSpeakers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSpeakersOutcome ListSpeakers(const Model::ListSpeakersRequest& request) const;


        /**
         * <p>Lists all tags associated with a specified Voice ID resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Starts a new batch fraudster registration job using provided
         * details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/StartFraudsterRegistrationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFraudsterRegistrationJobOutcome StartFraudsterRegistrationJob(const Model::StartFraudsterRegistrationJobRequest& request) const;


        /**
         * <p>Starts a new batch speaker enrollment job using specified
         * details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/StartSpeakerEnrollmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSpeakerEnrollmentJobOutcome StartSpeakerEnrollmentJob(const Model::StartSpeakerEnrollmentJobRequest& request) const;


        /**
         * <p>Tags a Voice ID resource with the provided list of tags.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes specified tags from a specified Amazon Connect Voice ID
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the specified domain. This API has clobber behavior, and clears and
         * replaces all attributes. If an optional field, such as 'Description' is not
         * provided, it is removed from the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/UpdateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainOutcome UpdateDomain(const Model::UpdateDomainRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<VoiceIDEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const VoiceIDClientConfiguration& clientConfiguration);

      VoiceIDClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<VoiceIDEndpointProviderBase> m_endpointProvider;
  };

} // namespace VoiceID
} // namespace Aws
