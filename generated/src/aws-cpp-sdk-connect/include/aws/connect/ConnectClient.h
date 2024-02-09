/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connect/ConnectServiceClientModel.h>

namespace Aws
{
namespace Connect
{
  /**
   * <p>Amazon Connect is a cloud-based contact center solution that you use to set
   * up and manage a customer contact center and provide reliable customer engagement
   * at any scale.</p> <p>Amazon Connect provides metrics and real-time reporting
   * that enable you to optimize contact routing. You can also resolve customer
   * issues more efficiently by getting customers in touch with the appropriate
   * agents.</p> <p>There are limits to the number of Amazon Connect resources that
   * you can create. There are also limits to the number of requests that you can
   * make per second. For more information, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon
   * Connect Service Quotas</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
   * <p>You can connect programmatically to an Amazon Web Services service by using
   * an endpoint. For a list of Amazon Connect endpoints, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon
   * Connect Endpoints</a>.</p>
   */
  class AWS_CONNECT_API ConnectClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ConnectClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ConnectClientConfiguration ClientConfigurationType;
      typedef ConnectEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Connect::ConnectClientConfiguration& clientConfiguration = Aws::Connect::ConnectClientConfiguration(),
                      std::shared_ptr<ConnectEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<ConnectEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Connect::ConnectClientConfiguration& clientConfiguration = Aws::Connect::ConnectClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<ConnectEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Connect::ConnectClientConfiguration& clientConfiguration = Aws::Connect::ConnectClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ConnectClient();

        /**
         * <p>Activates an evaluation form in the specified Amazon Connect instance. After
         * the evaluation form is activated, it is available to start new evaluations based
         * on the form. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ActivateEvaluationForm">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateEvaluationFormOutcome ActivateEvaluationForm(const Model::ActivateEvaluationFormRequest& request) const;

        /**
         * A Callable wrapper for ActivateEvaluationForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ActivateEvaluationFormRequestT = Model::ActivateEvaluationFormRequest>
        Model::ActivateEvaluationFormOutcomeCallable ActivateEvaluationFormCallable(const ActivateEvaluationFormRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ActivateEvaluationForm, request);
        }

        /**
         * An Async wrapper for ActivateEvaluationForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ActivateEvaluationFormRequestT = Model::ActivateEvaluationFormRequest>
        void ActivateEvaluationFormAsync(const ActivateEvaluationFormRequestT& request, const ActivateEvaluationFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ActivateEvaluationForm, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates the specified dataset for a Amazon Connect instance
         * with the target account. You can associate only one dataset in a single
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateAnalyticsDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAnalyticsDataSetOutcome AssociateAnalyticsDataSet(const Model::AssociateAnalyticsDataSetRequest& request) const;

        /**
         * A Callable wrapper for AssociateAnalyticsDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateAnalyticsDataSetRequestT = Model::AssociateAnalyticsDataSetRequest>
        Model::AssociateAnalyticsDataSetOutcomeCallable AssociateAnalyticsDataSetCallable(const AssociateAnalyticsDataSetRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociateAnalyticsDataSet, request);
        }

        /**
         * An Async wrapper for AssociateAnalyticsDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateAnalyticsDataSetRequestT = Model::AssociateAnalyticsDataSetRequest>
        void AssociateAnalyticsDataSetAsync(const AssociateAnalyticsDataSetRequestT& request, const AssociateAnalyticsDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociateAnalyticsDataSet, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates an approved origin to an Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateApprovedOrigin">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApprovedOriginOutcome AssociateApprovedOrigin(const Model::AssociateApprovedOriginRequest& request) const;

        /**
         * A Callable wrapper for AssociateApprovedOrigin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateApprovedOriginRequestT = Model::AssociateApprovedOriginRequest>
        Model::AssociateApprovedOriginOutcomeCallable AssociateApprovedOriginCallable(const AssociateApprovedOriginRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociateApprovedOrigin, request);
        }

        /**
         * An Async wrapper for AssociateApprovedOrigin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateApprovedOriginRequestT = Model::AssociateApprovedOriginRequest>
        void AssociateApprovedOriginAsync(const AssociateApprovedOriginRequestT& request, const AssociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociateApprovedOrigin, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Allows the specified Amazon Connect instance to access the
         * specified Amazon Lex or Amazon Lex V2 bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateBotOutcome AssociateBot(const Model::AssociateBotRequest& request) const;

        /**
         * A Callable wrapper for AssociateBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateBotRequestT = Model::AssociateBotRequest>
        Model::AssociateBotOutcomeCallable AssociateBotCallable(const AssociateBotRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociateBot, request);
        }

        /**
         * An Async wrapper for AssociateBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateBotRequestT = Model::AssociateBotRequest>
        void AssociateBotAsync(const AssociateBotRequestT& request, const AssociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociateBot, request, handler, context);
        }

        /**
         * <p>Associates an existing vocabulary as the default. Contact Lens for Amazon
         * Connect uses the vocabulary in post-call and real-time analysis sessions for the
         * given language.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateDefaultVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDefaultVocabularyOutcome AssociateDefaultVocabulary(const Model::AssociateDefaultVocabularyRequest& request) const;

        /**
         * A Callable wrapper for AssociateDefaultVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateDefaultVocabularyRequestT = Model::AssociateDefaultVocabularyRequest>
        Model::AssociateDefaultVocabularyOutcomeCallable AssociateDefaultVocabularyCallable(const AssociateDefaultVocabularyRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociateDefaultVocabulary, request);
        }

        /**
         * An Async wrapper for AssociateDefaultVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateDefaultVocabularyRequestT = Model::AssociateDefaultVocabularyRequest>
        void AssociateDefaultVocabularyAsync(const AssociateDefaultVocabularyRequestT& request, const AssociateDefaultVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociateDefaultVocabulary, request, handler, context);
        }

        /**
         * <p>Associates a connect resource to a flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFlowOutcome AssociateFlow(const Model::AssociateFlowRequest& request) const;

        /**
         * A Callable wrapper for AssociateFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateFlowRequestT = Model::AssociateFlowRequest>
        Model::AssociateFlowOutcomeCallable AssociateFlowCallable(const AssociateFlowRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociateFlow, request);
        }

        /**
         * An Async wrapper for AssociateFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateFlowRequestT = Model::AssociateFlowRequest>
        void AssociateFlowAsync(const AssociateFlowRequestT& request, const AssociateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociateFlow, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates a storage resource type for the first time. You can
         * only associate one type of storage configuration in a single call. This means,
         * for example, that you can't define an instance with multiple S3 buckets for
         * storing chat transcripts.</p> <p>This API does not create a resource that
         * doesn't exist. It only associates it to the instance. Ensure that the resource
         * being specified in the storage configuration, like an S3 bucket, exists when
         * being used for association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateInstanceStorageConfigOutcome AssociateInstanceStorageConfig(const Model::AssociateInstanceStorageConfigRequest& request) const;

        /**
         * A Callable wrapper for AssociateInstanceStorageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateInstanceStorageConfigRequestT = Model::AssociateInstanceStorageConfigRequest>
        Model::AssociateInstanceStorageConfigOutcomeCallable AssociateInstanceStorageConfigCallable(const AssociateInstanceStorageConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociateInstanceStorageConfig, request);
        }

        /**
         * An Async wrapper for AssociateInstanceStorageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateInstanceStorageConfigRequestT = Model::AssociateInstanceStorageConfigRequest>
        void AssociateInstanceStorageConfigAsync(const AssociateInstanceStorageConfigRequestT& request, const AssociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociateInstanceStorageConfig, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Allows the specified Amazon Connect instance to access the
         * specified Lambda function.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateLambdaFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLambdaFunctionOutcome AssociateLambdaFunction(const Model::AssociateLambdaFunctionRequest& request) const;

        /**
         * A Callable wrapper for AssociateLambdaFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateLambdaFunctionRequestT = Model::AssociateLambdaFunctionRequest>
        Model::AssociateLambdaFunctionOutcomeCallable AssociateLambdaFunctionCallable(const AssociateLambdaFunctionRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociateLambdaFunction, request);
        }

        /**
         * An Async wrapper for AssociateLambdaFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateLambdaFunctionRequestT = Model::AssociateLambdaFunctionRequest>
        void AssociateLambdaFunctionAsync(const AssociateLambdaFunctionRequestT& request, const AssociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociateLambdaFunction, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Allows the specified Amazon Connect instance to access the
         * specified Amazon Lex V1 bot. This API only supports the association of Amazon
         * Lex V1 bots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateLexBot">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLexBotOutcome AssociateLexBot(const Model::AssociateLexBotRequest& request) const;

        /**
         * A Callable wrapper for AssociateLexBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateLexBotRequestT = Model::AssociateLexBotRequest>
        Model::AssociateLexBotOutcomeCallable AssociateLexBotCallable(const AssociateLexBotRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociateLexBot, request);
        }

        /**
         * An Async wrapper for AssociateLexBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateLexBotRequestT = Model::AssociateLexBotRequest>
        void AssociateLexBotAsync(const AssociateLexBotRequestT& request, const AssociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociateLexBot, request, handler, context);
        }

        /**
         * <p>Associates a flow with a phone number claimed to your Amazon Connect
         * instance.</p>  <p>If the number is claimed to a traffic distribution
         * group, and you are calling this API using an instance in the Amazon Web Services
         * Region where the traffic distribution group was created, you can use either a
         * full phone number ARN or UUID value for the <code>PhoneNumberId</code> URI
         * request parameter. However, if the number is claimed to a traffic distribution
         * group and you are calling this API using an instance in the alternate Amazon Web
         * Services Region associated with the traffic distribution group, you must provide
         * a full phone number ARN. If a UUID is provided in this scenario, you will
         * receive a <code>ResourceNotFoundException</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociatePhoneNumberContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePhoneNumberContactFlowOutcome AssociatePhoneNumberContactFlow(const Model::AssociatePhoneNumberContactFlowRequest& request) const;

        /**
         * A Callable wrapper for AssociatePhoneNumberContactFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociatePhoneNumberContactFlowRequestT = Model::AssociatePhoneNumberContactFlowRequest>
        Model::AssociatePhoneNumberContactFlowOutcomeCallable AssociatePhoneNumberContactFlowCallable(const AssociatePhoneNumberContactFlowRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociatePhoneNumberContactFlow, request);
        }

        /**
         * An Async wrapper for AssociatePhoneNumberContactFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociatePhoneNumberContactFlowRequestT = Model::AssociatePhoneNumberContactFlowRequest>
        void AssociatePhoneNumberContactFlowAsync(const AssociatePhoneNumberContactFlowRequestT& request, const AssociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociatePhoneNumberContactFlow, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates a set of quick connects with a queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateQueueQuickConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateQueueQuickConnectsOutcome AssociateQueueQuickConnects(const Model::AssociateQueueQuickConnectsRequest& request) const;

        /**
         * A Callable wrapper for AssociateQueueQuickConnects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateQueueQuickConnectsRequestT = Model::AssociateQueueQuickConnectsRequest>
        Model::AssociateQueueQuickConnectsOutcomeCallable AssociateQueueQuickConnectsCallable(const AssociateQueueQuickConnectsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociateQueueQuickConnects, request);
        }

        /**
         * An Async wrapper for AssociateQueueQuickConnects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateQueueQuickConnectsRequestT = Model::AssociateQueueQuickConnectsRequest>
        void AssociateQueueQuickConnectsAsync(const AssociateQueueQuickConnectsRequestT& request, const AssociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociateQueueQuickConnects, request, handler, context);
        }

        /**
         * <p>Associates a set of queues with a routing profile.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateRoutingProfileQueuesOutcome AssociateRoutingProfileQueues(const Model::AssociateRoutingProfileQueuesRequest& request) const;

        /**
         * A Callable wrapper for AssociateRoutingProfileQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateRoutingProfileQueuesRequestT = Model::AssociateRoutingProfileQueuesRequest>
        Model::AssociateRoutingProfileQueuesOutcomeCallable AssociateRoutingProfileQueuesCallable(const AssociateRoutingProfileQueuesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociateRoutingProfileQueues, request);
        }

        /**
         * An Async wrapper for AssociateRoutingProfileQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateRoutingProfileQueuesRequestT = Model::AssociateRoutingProfileQueuesRequest>
        void AssociateRoutingProfileQueuesAsync(const AssociateRoutingProfileQueuesRequestT& request, const AssociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociateRoutingProfileQueues, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates a security key to the instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateSecurityKey">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSecurityKeyOutcome AssociateSecurityKey(const Model::AssociateSecurityKeyRequest& request) const;

        /**
         * A Callable wrapper for AssociateSecurityKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateSecurityKeyRequestT = Model::AssociateSecurityKeyRequest>
        Model::AssociateSecurityKeyOutcomeCallable AssociateSecurityKeyCallable(const AssociateSecurityKeyRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociateSecurityKey, request);
        }

        /**
         * An Async wrapper for AssociateSecurityKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateSecurityKeyRequestT = Model::AssociateSecurityKeyRequest>
        void AssociateSecurityKeyAsync(const AssociateSecurityKeyRequestT& request, const AssociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociateSecurityKey, request, handler, context);
        }

        /**
         * <p>Associates an agent with a traffic distribution group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateTrafficDistributionGroupUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTrafficDistributionGroupUserOutcome AssociateTrafficDistributionGroupUser(const Model::AssociateTrafficDistributionGroupUserRequest& request) const;

        /**
         * A Callable wrapper for AssociateTrafficDistributionGroupUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateTrafficDistributionGroupUserRequestT = Model::AssociateTrafficDistributionGroupUserRequest>
        Model::AssociateTrafficDistributionGroupUserOutcomeCallable AssociateTrafficDistributionGroupUserCallable(const AssociateTrafficDistributionGroupUserRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociateTrafficDistributionGroupUser, request);
        }

        /**
         * An Async wrapper for AssociateTrafficDistributionGroupUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateTrafficDistributionGroupUserRequestT = Model::AssociateTrafficDistributionGroupUserRequest>
        void AssociateTrafficDistributionGroupUserAsync(const AssociateTrafficDistributionGroupUserRequestT& request, const AssociateTrafficDistributionGroupUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociateTrafficDistributionGroupUser, request, handler, context);
        }

        /**
         * <p>&gt;Associates a set of proficiencies with a user.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AssociateUserProficiencies">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateUserProficienciesOutcome AssociateUserProficiencies(const Model::AssociateUserProficienciesRequest& request) const;

        /**
         * A Callable wrapper for AssociateUserProficiencies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateUserProficienciesRequestT = Model::AssociateUserProficienciesRequest>
        Model::AssociateUserProficienciesOutcomeCallable AssociateUserProficienciesCallable(const AssociateUserProficienciesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::AssociateUserProficiencies, request);
        }

        /**
         * An Async wrapper for AssociateUserProficiencies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateUserProficienciesRequestT = Model::AssociateUserProficienciesRequest>
        void AssociateUserProficienciesAsync(const AssociateUserProficienciesRequestT& request, const AssociateUserProficienciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::AssociateUserProficiencies, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Associates a list of analytics datasets for a given Amazon
         * Connect instance to a target account. You can associate multiple datasets in a
         * single call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/BatchAssociateAnalyticsDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateAnalyticsDataSetOutcome BatchAssociateAnalyticsDataSet(const Model::BatchAssociateAnalyticsDataSetRequest& request) const;

        /**
         * A Callable wrapper for BatchAssociateAnalyticsDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchAssociateAnalyticsDataSetRequestT = Model::BatchAssociateAnalyticsDataSetRequest>
        Model::BatchAssociateAnalyticsDataSetOutcomeCallable BatchAssociateAnalyticsDataSetCallable(const BatchAssociateAnalyticsDataSetRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::BatchAssociateAnalyticsDataSet, request);
        }

        /**
         * An Async wrapper for BatchAssociateAnalyticsDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchAssociateAnalyticsDataSetRequestT = Model::BatchAssociateAnalyticsDataSetRequest>
        void BatchAssociateAnalyticsDataSetAsync(const BatchAssociateAnalyticsDataSetRequestT& request, const BatchAssociateAnalyticsDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::BatchAssociateAnalyticsDataSet, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Removes a list of analytics datasets associated with a given
         * Amazon Connect instance. You can disassociate multiple datasets in a single
         * call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/BatchDisassociateAnalyticsDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateAnalyticsDataSetOutcome BatchDisassociateAnalyticsDataSet(const Model::BatchDisassociateAnalyticsDataSetRequest& request) const;

        /**
         * A Callable wrapper for BatchDisassociateAnalyticsDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDisassociateAnalyticsDataSetRequestT = Model::BatchDisassociateAnalyticsDataSetRequest>
        Model::BatchDisassociateAnalyticsDataSetOutcomeCallable BatchDisassociateAnalyticsDataSetCallable(const BatchDisassociateAnalyticsDataSetRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::BatchDisassociateAnalyticsDataSet, request);
        }

        /**
         * An Async wrapper for BatchDisassociateAnalyticsDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDisassociateAnalyticsDataSetRequestT = Model::BatchDisassociateAnalyticsDataSetRequest>
        void BatchDisassociateAnalyticsDataSetAsync(const BatchDisassociateAnalyticsDataSetRequestT& request, const BatchDisassociateAnalyticsDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::BatchDisassociateAnalyticsDataSet, request, handler, context);
        }

        /**
         * <p>Retrieve the flow associations for the given resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/BatchGetFlowAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetFlowAssociationOutcome BatchGetFlowAssociation(const Model::BatchGetFlowAssociationRequest& request) const;

        /**
         * A Callable wrapper for BatchGetFlowAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetFlowAssociationRequestT = Model::BatchGetFlowAssociationRequest>
        Model::BatchGetFlowAssociationOutcomeCallable BatchGetFlowAssociationCallable(const BatchGetFlowAssociationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::BatchGetFlowAssociation, request);
        }

        /**
         * An Async wrapper for BatchGetFlowAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetFlowAssociationRequestT = Model::BatchGetFlowAssociationRequest>
        void BatchGetFlowAssociationAsync(const BatchGetFlowAssociationRequestT& request, const BatchGetFlowAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::BatchGetFlowAssociation, request, handler, context);
        }

        /**
         *  <p>Only the Amazon Connect outbound campaigns service principal is
         * allowed to assume a role in your account and call this API.</p> 
         * <p>Allows you to create a batch of contacts in Amazon Connect. The outbound
         * campaigns capability ingests dial requests via the <a
         * href="https://docs.aws.amazon.com/connect-outbound/latest/APIReference/API_PutDialRequestBatch.html">PutDialRequestBatch</a>
         * API. It then uses BatchPutContact to create contacts corresponding to those dial
         * requests. If agents are available, the dial requests are dialed out, which
         * results in a voice call. The resulting voice call uses the same contactId that
         * was created by BatchPutContact. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/BatchPutContact">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutContactOutcome BatchPutContact(const Model::BatchPutContactRequest& request) const;

        /**
         * A Callable wrapper for BatchPutContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchPutContactRequestT = Model::BatchPutContactRequest>
        Model::BatchPutContactOutcomeCallable BatchPutContactCallable(const BatchPutContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::BatchPutContact, request);
        }

        /**
         * An Async wrapper for BatchPutContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchPutContactRequestT = Model::BatchPutContactRequest>
        void BatchPutContactAsync(const BatchPutContactRequestT& request, const BatchPutContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::BatchPutContact, request, handler, context);
        }

        /**
         * <p>Claims an available phone number to your Amazon Connect instance or traffic
         * distribution group. You can call this API only in the same Amazon Web Services
         * Region where the Amazon Connect instance or traffic distribution group was
         * created.</p> <p>For more information about how to use this operation, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/claim-phone-number.html">Claim
         * a phone number in your country</a> and <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/claim-phone-numbers-traffic-distribution-groups.html">Claim
         * phone numbers to traffic distribution groups</a> in the <i>Amazon Connect
         * Administrator Guide</i>. </p>  <p>You can call the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_SearchAvailablePhoneNumbers.html">SearchAvailablePhoneNumbers</a>
         * API for available phone numbers that you can claim. Call the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribePhoneNumber.html">DescribePhoneNumber</a>
         * API to verify the status of a previous <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ClaimPhoneNumber.html">ClaimPhoneNumber</a>
         * operation.</p>  <p>If you plan to claim and release numbers
         * frequently during a 30 day period, contact us for a service quota exception.
         * Otherwise, it is possible you will be blocked from claiming and releasing any
         * more numbers until 30 days past the oldest number released has expired.</p>
         * <p>By default you can claim and release up to 200% of your maximum number of
         * active phone numbers during any 30 day period. If you claim and release phone
         * numbers using the UI or API during a rolling 30 day cycle that exceeds 200% of
         * your phone number service level quota, you will be blocked from claiming any
         * more numbers until 30 days past the oldest number released has expired. </p>
         * <p>For example, if you already have 99 claimed numbers and a service level quota
         * of 99 phone numbers, and in any 30 day period you release 99, claim 99, and then
         * release 99, you will have exceeded the 200% limit. At that point you are blocked
         * from claiming any more numbers until you open an Amazon Web Services support
         * ticket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ClaimPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::ClaimPhoneNumberOutcome ClaimPhoneNumber(const Model::ClaimPhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for ClaimPhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ClaimPhoneNumberRequestT = Model::ClaimPhoneNumberRequest>
        Model::ClaimPhoneNumberOutcomeCallable ClaimPhoneNumberCallable(const ClaimPhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ClaimPhoneNumber, request);
        }

        /**
         * An Async wrapper for ClaimPhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ClaimPhoneNumberRequestT = Model::ClaimPhoneNumberRequest>
        void ClaimPhoneNumberAsync(const ClaimPhoneNumberRequestT& request, const ClaimPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ClaimPhoneNumber, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Creates an agent status for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateAgentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgentStatusOutcome CreateAgentStatus(const Model::CreateAgentStatusRequest& request) const;

        /**
         * A Callable wrapper for CreateAgentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAgentStatusRequestT = Model::CreateAgentStatusRequest>
        Model::CreateAgentStatusOutcomeCallable CreateAgentStatusCallable(const CreateAgentStatusRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateAgentStatus, request);
        }

        /**
         * An Async wrapper for CreateAgentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAgentStatusRequestT = Model::CreateAgentStatusRequest>
        void CreateAgentStatusAsync(const CreateAgentStatusRequestT& request, const CreateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateAgentStatus, request, handler, context);
        }

        /**
         * <p>Creates a flow for the specified Amazon Connect instance.</p> <p>You can also
         * create and update flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactFlowOutcome CreateContactFlow(const Model::CreateContactFlowRequest& request) const;

        /**
         * A Callable wrapper for CreateContactFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContactFlowRequestT = Model::CreateContactFlowRequest>
        Model::CreateContactFlowOutcomeCallable CreateContactFlowCallable(const CreateContactFlowRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateContactFlow, request);
        }

        /**
         * An Async wrapper for CreateContactFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContactFlowRequestT = Model::CreateContactFlowRequest>
        void CreateContactFlowAsync(const CreateContactFlowRequestT& request, const CreateContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateContactFlow, request, handler, context);
        }

        /**
         * <p>Creates a flow module for the specified Amazon Connect instance.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateContactFlowModule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactFlowModuleOutcome CreateContactFlowModule(const Model::CreateContactFlowModuleRequest& request) const;

        /**
         * A Callable wrapper for CreateContactFlowModule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContactFlowModuleRequestT = Model::CreateContactFlowModuleRequest>
        Model::CreateContactFlowModuleOutcomeCallable CreateContactFlowModuleCallable(const CreateContactFlowModuleRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateContactFlowModule, request);
        }

        /**
         * An Async wrapper for CreateContactFlowModule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContactFlowModuleRequestT = Model::CreateContactFlowModuleRequest>
        void CreateContactFlowModuleAsync(const CreateContactFlowModuleRequestT& request, const CreateContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateContactFlowModule, request, handler, context);
        }

        /**
         * <p>Creates an evaluation form in the specified Amazon Connect instance. The form
         * can be used to define questions related to agent performance, and create
         * sections to organize such questions. Question and section identifiers cannot be
         * duplicated within the same evaluation form.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateEvaluationForm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEvaluationFormOutcome CreateEvaluationForm(const Model::CreateEvaluationFormRequest& request) const;

        /**
         * A Callable wrapper for CreateEvaluationForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEvaluationFormRequestT = Model::CreateEvaluationFormRequest>
        Model::CreateEvaluationFormOutcomeCallable CreateEvaluationFormCallable(const CreateEvaluationFormRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateEvaluationForm, request);
        }

        /**
         * An Async wrapper for CreateEvaluationForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEvaluationFormRequestT = Model::CreateEvaluationFormRequest>
        void CreateEvaluationFormAsync(const CreateEvaluationFormRequestT& request, const CreateEvaluationFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateEvaluationForm, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Creates hours of operation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHoursOfOperationOutcome CreateHoursOfOperation(const Model::CreateHoursOfOperationRequest& request) const;

        /**
         * A Callable wrapper for CreateHoursOfOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateHoursOfOperationRequestT = Model::CreateHoursOfOperationRequest>
        Model::CreateHoursOfOperationOutcomeCallable CreateHoursOfOperationCallable(const CreateHoursOfOperationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateHoursOfOperation, request);
        }

        /**
         * An Async wrapper for CreateHoursOfOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHoursOfOperationRequestT = Model::CreateHoursOfOperationRequest>
        void CreateHoursOfOperationAsync(const CreateHoursOfOperationRequestT& request, const CreateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateHoursOfOperation, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Initiates an Amazon Connect instance with all the supported
         * channels enabled. It does not attach any storage, such as Amazon Simple Storage
         * Service (Amazon S3) or Amazon Kinesis. It also does not allow for any
         * configurations on features, such as Contact Lens for Amazon Connect. </p>
         * <p>Amazon Connect enforces a limit on the total number of instances that you can
         * create or delete in 30 days. If you exceed this limit, you will get an error
         * message indicating there has been an excessive number of attempts at creating or
         * deleting instances. You must wait 30 days before you can restart creating and
         * deleting instances in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInstanceRequestT = Model::CreateInstanceRequest>
        Model::CreateInstanceOutcomeCallable CreateInstanceCallable(const CreateInstanceRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateInstance, request);
        }

        /**
         * An Async wrapper for CreateInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInstanceRequestT = Model::CreateInstanceRequest>
        void CreateInstanceAsync(const CreateInstanceRequestT& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateInstance, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Web Services resource association with an Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateIntegrationAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIntegrationAssociationOutcome CreateIntegrationAssociation(const Model::CreateIntegrationAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateIntegrationAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIntegrationAssociationRequestT = Model::CreateIntegrationAssociationRequest>
        Model::CreateIntegrationAssociationOutcomeCallable CreateIntegrationAssociationCallable(const CreateIntegrationAssociationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateIntegrationAssociation, request);
        }

        /**
         * An Async wrapper for CreateIntegrationAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIntegrationAssociationRequestT = Model::CreateIntegrationAssociationRequest>
        void CreateIntegrationAssociationAsync(const CreateIntegrationAssociationRequestT& request, const CreateIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateIntegrationAssociation, request, handler, context);
        }

        /**
         * <p>Adds a new participant into an on-going chat contact. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-customize-flow.html">Customize
         * chat flow experiences by integrating custom participants</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateParticipant">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateParticipantOutcome CreateParticipant(const Model::CreateParticipantRequest& request) const;

        /**
         * A Callable wrapper for CreateParticipant that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateParticipantRequestT = Model::CreateParticipantRequest>
        Model::CreateParticipantOutcomeCallable CreateParticipantCallable(const CreateParticipantRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateParticipant, request);
        }

        /**
         * An Async wrapper for CreateParticipant that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateParticipantRequestT = Model::CreateParticipantRequest>
        void CreateParticipantAsync(const CreateParticipantRequestT& request, const CreateParticipantResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateParticipant, request, handler, context);
        }

        /**
         * <p>Enables rehydration of chats for the lifespan of a contact. For more
         * information about chat rehydration, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html">Enable
         * persistent chat</a> in the <i>Amazon Connect Administrator Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreatePersistentContactAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePersistentContactAssociationOutcome CreatePersistentContactAssociation(const Model::CreatePersistentContactAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreatePersistentContactAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePersistentContactAssociationRequestT = Model::CreatePersistentContactAssociationRequest>
        Model::CreatePersistentContactAssociationOutcomeCallable CreatePersistentContactAssociationCallable(const CreatePersistentContactAssociationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreatePersistentContactAssociation, request);
        }

        /**
         * An Async wrapper for CreatePersistentContactAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePersistentContactAssociationRequestT = Model::CreatePersistentContactAssociationRequest>
        void CreatePersistentContactAssociationAsync(const CreatePersistentContactAssociationRequestT& request, const CreatePersistentContactAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreatePersistentContactAssociation, request, handler, context);
        }

        /**
         * <p>Creates a new predefined attribute for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreatePredefinedAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePredefinedAttributeOutcome CreatePredefinedAttribute(const Model::CreatePredefinedAttributeRequest& request) const;

        /**
         * A Callable wrapper for CreatePredefinedAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePredefinedAttributeRequestT = Model::CreatePredefinedAttributeRequest>
        Model::CreatePredefinedAttributeOutcomeCallable CreatePredefinedAttributeCallable(const CreatePredefinedAttributeRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreatePredefinedAttribute, request);
        }

        /**
         * An Async wrapper for CreatePredefinedAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePredefinedAttributeRequestT = Model::CreatePredefinedAttributeRequest>
        void CreatePredefinedAttributeAsync(const CreatePredefinedAttributeRequestT& request, const CreatePredefinedAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreatePredefinedAttribute, request, handler, context);
        }

        /**
         * <p>Creates a prompt. For more information about prompts, such as supported file
         * types and maximum length, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/prompts.html">Create
         * prompts</a> in the <i>Amazon Connect Administrator's Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreatePrompt">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePromptOutcome CreatePrompt(const Model::CreatePromptRequest& request) const;

        /**
         * A Callable wrapper for CreatePrompt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePromptRequestT = Model::CreatePromptRequest>
        Model::CreatePromptOutcomeCallable CreatePromptCallable(const CreatePromptRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreatePrompt, request);
        }

        /**
         * An Async wrapper for CreatePrompt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePromptRequestT = Model::CreatePromptRequest>
        void CreatePromptAsync(const CreatePromptRequestT& request, const CreatePromptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreatePrompt, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Creates a new queue for the specified Amazon Connect
         * instance.</p>  <ul> <li> <p>If the phone number is claimed to a
         * traffic distribution group that was created in the same Region as the Amazon
         * Connect instance where you are calling this API, then you can use a full phone
         * number ARN or a UUID for <code>OutboundCallerIdNumberId</code>. However, if the
         * phone number is claimed to a traffic distribution group that is in one Region,
         * and you are calling this API from an instance in another Amazon Web Services
         * Region that is associated with the traffic distribution group, you must provide
         * a full phone number ARN. If a UUID is provided in this scenario, you will
         * receive a <code>ResourceNotFoundException</code>.</p> </li> <li> <p>Only use the
         * phone number ARN format that doesn't contain <code>instance</code> in the path,
         * for example,
         * <code>arn:aws:connect:us-east-1:1234567890:phone-number/uuid</code>. This is the
         * same ARN format that is returned when you call the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ListPhoneNumbersV2.html">ListPhoneNumbersV2</a>
         * API.</p> </li> <li> <p>If you plan to use IAM policies to allow/deny access to
         * this API for phone number resources claimed to a traffic distribution group, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_resource-level-policy-examples.html#allow-deny-queue-actions-replica-region">Allow
         * or Deny queue API actions for phone numbers in a replica Region</a>.</p> </li>
         * </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQueueOutcome CreateQueue(const Model::CreateQueueRequest& request) const;

        /**
         * A Callable wrapper for CreateQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQueueRequestT = Model::CreateQueueRequest>
        Model::CreateQueueOutcomeCallable CreateQueueCallable(const CreateQueueRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateQueue, request);
        }

        /**
         * An Async wrapper for CreateQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQueueRequestT = Model::CreateQueueRequest>
        void CreateQueueAsync(const CreateQueueRequestT& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateQueue, request, handler, context);
        }

        /**
         * <p>Creates a quick connect for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateQuickConnect">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQuickConnectOutcome CreateQuickConnect(const Model::CreateQuickConnectRequest& request) const;

        /**
         * A Callable wrapper for CreateQuickConnect that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQuickConnectRequestT = Model::CreateQuickConnectRequest>
        Model::CreateQuickConnectOutcomeCallable CreateQuickConnectCallable(const CreateQuickConnectRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateQuickConnect, request);
        }

        /**
         * An Async wrapper for CreateQuickConnect that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQuickConnectRequestT = Model::CreateQuickConnectRequest>
        void CreateQuickConnectAsync(const CreateQuickConnectRequestT& request, const CreateQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateQuickConnect, request, handler, context);
        }

        /**
         * <p>Creates a new routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoutingProfileOutcome CreateRoutingProfile(const Model::CreateRoutingProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateRoutingProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRoutingProfileRequestT = Model::CreateRoutingProfileRequest>
        Model::CreateRoutingProfileOutcomeCallable CreateRoutingProfileCallable(const CreateRoutingProfileRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateRoutingProfile, request);
        }

        /**
         * An Async wrapper for CreateRoutingProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRoutingProfileRequestT = Model::CreateRoutingProfileRequest>
        void CreateRoutingProfileAsync(const CreateRoutingProfileRequestT& request, const CreateRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateRoutingProfile, request, handler, context);
        }

        /**
         * <p>Creates a rule for the specified Amazon Connect instance.</p> <p>Use the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/connect-rules-language.html">Rules
         * Function language</a> to code conditions for the rule. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleOutcome CreateRule(const Model::CreateRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        Model::CreateRuleOutcomeCallable CreateRuleCallable(const CreateRuleRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateRule, request);
        }

        /**
         * An Async wrapper for CreateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        void CreateRuleAsync(const CreateRuleRequestT& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateRule, request, handler, context);
        }

        /**
         * <p>Creates a security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityProfileOutcome CreateSecurityProfile(const Model::CreateSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSecurityProfileRequestT = Model::CreateSecurityProfileRequest>
        Model::CreateSecurityProfileOutcomeCallable CreateSecurityProfileCallable(const CreateSecurityProfileRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateSecurityProfile, request);
        }

        /**
         * An Async wrapper for CreateSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSecurityProfileRequestT = Model::CreateSecurityProfileRequest>
        void CreateSecurityProfileAsync(const CreateSecurityProfileRequestT& request, const CreateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateSecurityProfile, request, handler, context);
        }

        /**
         * <p>Creates a new task template in the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateTaskTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTaskTemplateOutcome CreateTaskTemplate(const Model::CreateTaskTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateTaskTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTaskTemplateRequestT = Model::CreateTaskTemplateRequest>
        Model::CreateTaskTemplateOutcomeCallable CreateTaskTemplateCallable(const CreateTaskTemplateRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateTaskTemplate, request);
        }

        /**
         * An Async wrapper for CreateTaskTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTaskTemplateRequestT = Model::CreateTaskTemplateRequest>
        void CreateTaskTemplateAsync(const CreateTaskTemplateRequestT& request, const CreateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateTaskTemplate, request, handler, context);
        }

        /**
         * <p>Creates a traffic distribution group given an Amazon Connect instance that
         * has been replicated. </p>  <p>The <code>SignInConfig</code> distribution
         * is available only on a default <code>TrafficDistributionGroup</code> (see the
         * <code>IsDefault</code> parameter in the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_TrafficDistributionGroup.html">TrafficDistributionGroup</a>
         * data type). If you call <code>UpdateTrafficDistribution</code> with a modified
         * <code>SignInConfig</code> and a non-default
         * <code>TrafficDistributionGroup</code>, an <code>InvalidRequestException</code>
         * is returned.</p>  <p>For more information about creating traffic
         * distribution groups, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/setup-traffic-distribution-groups.html">Set
         * up traffic distribution groups</a> in the <i>Amazon Connect Administrator
         * Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateTrafficDistributionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrafficDistributionGroupOutcome CreateTrafficDistributionGroup(const Model::CreateTrafficDistributionGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateTrafficDistributionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTrafficDistributionGroupRequestT = Model::CreateTrafficDistributionGroupRequest>
        Model::CreateTrafficDistributionGroupOutcomeCallable CreateTrafficDistributionGroupCallable(const CreateTrafficDistributionGroupRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateTrafficDistributionGroup, request);
        }

        /**
         * An Async wrapper for CreateTrafficDistributionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTrafficDistributionGroupRequestT = Model::CreateTrafficDistributionGroupRequest>
        void CreateTrafficDistributionGroupAsync(const CreateTrafficDistributionGroupRequestT& request, const CreateTrafficDistributionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateTrafficDistributionGroup, request, handler, context);
        }

        /**
         * <p>Creates a use case for an integration association.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUseCase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUseCaseOutcome CreateUseCase(const Model::CreateUseCaseRequest& request) const;

        /**
         * A Callable wrapper for CreateUseCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUseCaseRequestT = Model::CreateUseCaseRequest>
        Model::CreateUseCaseOutcomeCallable CreateUseCaseCallable(const CreateUseCaseRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateUseCase, request);
        }

        /**
         * An Async wrapper for CreateUseCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUseCaseRequestT = Model::CreateUseCaseRequest>
        void CreateUseCaseAsync(const CreateUseCaseRequestT& request, const CreateUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateUseCase, request, handler, context);
        }

        /**
         * <p>Creates a user account for the specified Amazon Connect instance.</p>
         *  <p>Certain <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UserIdentityInfo.html">UserIdentityInfo</a>
         * parameters are required in some situations. For example, <code>Email</code> is
         * required if you are using SAML for identity management. <code>FirstName</code>
         * and <code>LastName</code> are required if you are using Amazon Connect or SAML
         * for identity management.</p>  <p>For information about how to create
         * users using the Amazon Connect admin website, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/user-management.html">Add
         * Users</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUser">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateUser, request, handler, context);
        }

        /**
         * <p>Creates a new user hierarchy group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateUserHierarchyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserHierarchyGroupOutcome CreateUserHierarchyGroup(const Model::CreateUserHierarchyGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateUserHierarchyGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserHierarchyGroupRequestT = Model::CreateUserHierarchyGroupRequest>
        Model::CreateUserHierarchyGroupOutcomeCallable CreateUserHierarchyGroupCallable(const CreateUserHierarchyGroupRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateUserHierarchyGroup, request);
        }

        /**
         * An Async wrapper for CreateUserHierarchyGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserHierarchyGroupRequestT = Model::CreateUserHierarchyGroupRequest>
        void CreateUserHierarchyGroupAsync(const CreateUserHierarchyGroupRequestT& request, const CreateUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateUserHierarchyGroup, request, handler, context);
        }

        /**
         * <p>Creates a new view with the possible status of <code>SAVED</code> or
         * <code>PUBLISHED</code>.</p> <p>The views will have a unique name for each
         * connect instance.</p> <p>It performs basic content validation if the status is
         * <code>SAVED</code> or full content validation if the status is set to
         * <code>PUBLISHED</code>. An error is returned if validation fails. It associates
         * either the <code>$SAVED</code> qualifier or both of the <code>$SAVED</code> and
         * <code>$LATEST</code> qualifiers with the provided view content based on the
         * status. The view is idempotent if ClientToken is provided.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateView">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateViewOutcome CreateView(const Model::CreateViewRequest& request) const;

        /**
         * A Callable wrapper for CreateView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateViewRequestT = Model::CreateViewRequest>
        Model::CreateViewOutcomeCallable CreateViewCallable(const CreateViewRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateView, request);
        }

        /**
         * An Async wrapper for CreateView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateViewRequestT = Model::CreateViewRequest>
        void CreateViewAsync(const CreateViewRequestT& request, const CreateViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateView, request, handler, context);
        }

        /**
         * <p>Publishes a new version of the view identifier.</p> <p>Versions are immutable
         * and monotonically increasing.</p> <p>It returns the highest version if there is
         * no change in content compared to that version. An error is displayed if the
         * supplied ViewContentSha256 is different from the ViewContentSha256 of the
         * <code>$LATEST</code> alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateViewVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateViewVersionOutcome CreateViewVersion(const Model::CreateViewVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateViewVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateViewVersionRequestT = Model::CreateViewVersionRequest>
        Model::CreateViewVersionOutcomeCallable CreateViewVersionCallable(const CreateViewVersionRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateViewVersion, request);
        }

        /**
         * An Async wrapper for CreateViewVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateViewVersionRequestT = Model::CreateViewVersionRequest>
        void CreateViewVersionAsync(const CreateViewVersionRequestT& request, const CreateViewVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateViewVersion, request, handler, context);
        }

        /**
         * <p>Creates a custom vocabulary associated with your Amazon Connect instance. You
         * can set a custom vocabulary to be your default vocabulary for a given language.
         * Contact Lens for Amazon Connect uses the default vocabulary in post-call and
         * real-time contact analysis sessions for that language.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/CreateVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVocabularyOutcome CreateVocabulary(const Model::CreateVocabularyRequest& request) const;

        /**
         * A Callable wrapper for CreateVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVocabularyRequestT = Model::CreateVocabularyRequest>
        Model::CreateVocabularyOutcomeCallable CreateVocabularyCallable(const CreateVocabularyRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::CreateVocabulary, request);
        }

        /**
         * An Async wrapper for CreateVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVocabularyRequestT = Model::CreateVocabularyRequest>
        void CreateVocabularyAsync(const CreateVocabularyRequestT& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::CreateVocabulary, request, handler, context);
        }

        /**
         * <p>Deactivates an evaluation form in the specified Amazon Connect instance.
         * After a form is deactivated, it is no longer available for users to start new
         * evaluations based on the form. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeactivateEvaluationForm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateEvaluationFormOutcome DeactivateEvaluationForm(const Model::DeactivateEvaluationFormRequest& request) const;

        /**
         * A Callable wrapper for DeactivateEvaluationForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeactivateEvaluationFormRequestT = Model::DeactivateEvaluationFormRequest>
        Model::DeactivateEvaluationFormOutcomeCallable DeactivateEvaluationFormCallable(const DeactivateEvaluationFormRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeactivateEvaluationForm, request);
        }

        /**
         * An Async wrapper for DeactivateEvaluationForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeactivateEvaluationFormRequestT = Model::DeactivateEvaluationFormRequest>
        void DeactivateEvaluationFormAsync(const DeactivateEvaluationFormRequestT& request, const DeactivateEvaluationFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeactivateEvaluationForm, request, handler, context);
        }

        /**
         * <p>Deletes a contact evaluation in the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteContactEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactEvaluationOutcome DeleteContactEvaluation(const Model::DeleteContactEvaluationRequest& request) const;

        /**
         * A Callable wrapper for DeleteContactEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContactEvaluationRequestT = Model::DeleteContactEvaluationRequest>
        Model::DeleteContactEvaluationOutcomeCallable DeleteContactEvaluationCallable(const DeleteContactEvaluationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteContactEvaluation, request);
        }

        /**
         * An Async wrapper for DeleteContactEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContactEvaluationRequestT = Model::DeleteContactEvaluationRequest>
        void DeleteContactEvaluationAsync(const DeleteContactEvaluationRequestT& request, const DeleteContactEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteContactEvaluation, request, handler, context);
        }

        /**
         * <p>Deletes a flow for the specified Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactFlowOutcome DeleteContactFlow(const Model::DeleteContactFlowRequest& request) const;

        /**
         * A Callable wrapper for DeleteContactFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContactFlowRequestT = Model::DeleteContactFlowRequest>
        Model::DeleteContactFlowOutcomeCallable DeleteContactFlowCallable(const DeleteContactFlowRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteContactFlow, request);
        }

        /**
         * An Async wrapper for DeleteContactFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContactFlowRequestT = Model::DeleteContactFlowRequest>
        void DeleteContactFlowAsync(const DeleteContactFlowRequestT& request, const DeleteContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteContactFlow, request, handler, context);
        }

        /**
         * <p>Deletes the specified flow module.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteContactFlowModule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactFlowModuleOutcome DeleteContactFlowModule(const Model::DeleteContactFlowModuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteContactFlowModule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContactFlowModuleRequestT = Model::DeleteContactFlowModuleRequest>
        Model::DeleteContactFlowModuleOutcomeCallable DeleteContactFlowModuleCallable(const DeleteContactFlowModuleRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteContactFlowModule, request);
        }

        /**
         * An Async wrapper for DeleteContactFlowModule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContactFlowModuleRequestT = Model::DeleteContactFlowModuleRequest>
        void DeleteContactFlowModuleAsync(const DeleteContactFlowModuleRequestT& request, const DeleteContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteContactFlowModule, request, handler, context);
        }

        /**
         * <p>Deletes an evaluation form in the specified Amazon Connect instance. </p>
         * <ul> <li> <p>If the version property is provided, only the specified version of
         * the evaluation form is deleted.</p> </li> <li> <p>If no version is provided,
         * then the full form (all versions) is deleted.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteEvaluationForm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEvaluationFormOutcome DeleteEvaluationForm(const Model::DeleteEvaluationFormRequest& request) const;

        /**
         * A Callable wrapper for DeleteEvaluationForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEvaluationFormRequestT = Model::DeleteEvaluationFormRequest>
        Model::DeleteEvaluationFormOutcomeCallable DeleteEvaluationFormCallable(const DeleteEvaluationFormRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteEvaluationForm, request);
        }

        /**
         * An Async wrapper for DeleteEvaluationForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEvaluationFormRequestT = Model::DeleteEvaluationFormRequest>
        void DeleteEvaluationFormAsync(const DeleteEvaluationFormRequestT& request, const DeleteEvaluationFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteEvaluationForm, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Deletes an hours of operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHoursOfOperationOutcome DeleteHoursOfOperation(const Model::DeleteHoursOfOperationRequest& request) const;

        /**
         * A Callable wrapper for DeleteHoursOfOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteHoursOfOperationRequestT = Model::DeleteHoursOfOperationRequest>
        Model::DeleteHoursOfOperationOutcomeCallable DeleteHoursOfOperationCallable(const DeleteHoursOfOperationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteHoursOfOperation, request);
        }

        /**
         * An Async wrapper for DeleteHoursOfOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHoursOfOperationRequestT = Model::DeleteHoursOfOperationRequest>
        void DeleteHoursOfOperationAsync(const DeleteHoursOfOperationRequestT& request, const DeleteHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteHoursOfOperation, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Deletes the Amazon Connect instance.</p> <p>Amazon Connect
         * enforces a limit on the total number of instances that you can create or delete
         * in 30 days. If you exceed this limit, you will get an error message indicating
         * there has been an excessive number of attempts at creating or deleting
         * instances. You must wait 30 days before you can restart creating and deleting
         * instances in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInstanceRequestT = Model::DeleteInstanceRequest>
        Model::DeleteInstanceOutcomeCallable DeleteInstanceCallable(const DeleteInstanceRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteInstance, request);
        }

        /**
         * An Async wrapper for DeleteInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInstanceRequestT = Model::DeleteInstanceRequest>
        void DeleteInstanceAsync(const DeleteInstanceRequestT& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteInstance, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Web Services resource association from an Amazon Connect
         * instance. The association must not have any use cases associated with
         * it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteIntegrationAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationAssociationOutcome DeleteIntegrationAssociation(const Model::DeleteIntegrationAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteIntegrationAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIntegrationAssociationRequestT = Model::DeleteIntegrationAssociationRequest>
        Model::DeleteIntegrationAssociationOutcomeCallable DeleteIntegrationAssociationCallable(const DeleteIntegrationAssociationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteIntegrationAssociation, request);
        }

        /**
         * An Async wrapper for DeleteIntegrationAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIntegrationAssociationRequestT = Model::DeleteIntegrationAssociationRequest>
        void DeleteIntegrationAssociationAsync(const DeleteIntegrationAssociationRequestT& request, const DeleteIntegrationAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteIntegrationAssociation, request, handler, context);
        }

        /**
         * <p>Deletes a predefined attribute from the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeletePredefinedAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePredefinedAttributeOutcome DeletePredefinedAttribute(const Model::DeletePredefinedAttributeRequest& request) const;

        /**
         * A Callable wrapper for DeletePredefinedAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePredefinedAttributeRequestT = Model::DeletePredefinedAttributeRequest>
        Model::DeletePredefinedAttributeOutcomeCallable DeletePredefinedAttributeCallable(const DeletePredefinedAttributeRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeletePredefinedAttribute, request);
        }

        /**
         * An Async wrapper for DeletePredefinedAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePredefinedAttributeRequestT = Model::DeletePredefinedAttributeRequest>
        void DeletePredefinedAttributeAsync(const DeletePredefinedAttributeRequestT& request, const DeletePredefinedAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeletePredefinedAttribute, request, handler, context);
        }

        /**
         * <p>Deletes a prompt.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeletePrompt">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePromptOutcome DeletePrompt(const Model::DeletePromptRequest& request) const;

        /**
         * A Callable wrapper for DeletePrompt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePromptRequestT = Model::DeletePromptRequest>
        Model::DeletePromptOutcomeCallable DeletePromptCallable(const DeletePromptRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeletePrompt, request);
        }

        /**
         * An Async wrapper for DeletePrompt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePromptRequestT = Model::DeletePromptRequest>
        void DeletePromptAsync(const DeletePromptRequestT& request, const DeletePromptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeletePrompt, request, handler, context);
        }

        /**
         * <p>Deletes a queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueueOutcome DeleteQueue(const Model::DeleteQueueRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQueueRequestT = Model::DeleteQueueRequest>
        Model::DeleteQueueOutcomeCallable DeleteQueueCallable(const DeleteQueueRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteQueue, request);
        }

        /**
         * An Async wrapper for DeleteQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQueueRequestT = Model::DeleteQueueRequest>
        void DeleteQueueAsync(const DeleteQueueRequestT& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteQueue, request, handler, context);
        }

        /**
         * <p>Deletes a quick connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteQuickConnect">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQuickConnectOutcome DeleteQuickConnect(const Model::DeleteQuickConnectRequest& request) const;

        /**
         * A Callable wrapper for DeleteQuickConnect that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQuickConnectRequestT = Model::DeleteQuickConnectRequest>
        Model::DeleteQuickConnectOutcomeCallable DeleteQuickConnectCallable(const DeleteQuickConnectRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteQuickConnect, request);
        }

        /**
         * An Async wrapper for DeleteQuickConnect that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQuickConnectRequestT = Model::DeleteQuickConnectRequest>
        void DeleteQuickConnectAsync(const DeleteQuickConnectRequestT& request, const DeleteQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteQuickConnect, request, handler, context);
        }

        /**
         * <p>Deletes a routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoutingProfileOutcome DeleteRoutingProfile(const Model::DeleteRoutingProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoutingProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRoutingProfileRequestT = Model::DeleteRoutingProfileRequest>
        Model::DeleteRoutingProfileOutcomeCallable DeleteRoutingProfileCallable(const DeleteRoutingProfileRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteRoutingProfile, request);
        }

        /**
         * An Async wrapper for DeleteRoutingProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRoutingProfileRequestT = Model::DeleteRoutingProfileRequest>
        void DeleteRoutingProfileAsync(const DeleteRoutingProfileRequestT& request, const DeleteRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteRoutingProfile, request, handler, context);
        }

        /**
         * <p>Deletes a rule for the specified Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const DeleteRuleRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteRule, request);
        }

        /**
         * An Async wrapper for DeleteRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        void DeleteRuleAsync(const DeleteRuleRequestT& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteRule, request, handler, context);
        }

        /**
         * <p>Deletes a security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityProfileOutcome DeleteSecurityProfile(const Model::DeleteSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSecurityProfileRequestT = Model::DeleteSecurityProfileRequest>
        Model::DeleteSecurityProfileOutcomeCallable DeleteSecurityProfileCallable(const DeleteSecurityProfileRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteSecurityProfile, request);
        }

        /**
         * An Async wrapper for DeleteSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSecurityProfileRequestT = Model::DeleteSecurityProfileRequest>
        void DeleteSecurityProfileAsync(const DeleteSecurityProfileRequestT& request, const DeleteSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteSecurityProfile, request, handler, context);
        }

        /**
         * <p>Deletes the task template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteTaskTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTaskTemplateOutcome DeleteTaskTemplate(const Model::DeleteTaskTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteTaskTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTaskTemplateRequestT = Model::DeleteTaskTemplateRequest>
        Model::DeleteTaskTemplateOutcomeCallable DeleteTaskTemplateCallable(const DeleteTaskTemplateRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteTaskTemplate, request);
        }

        /**
         * An Async wrapper for DeleteTaskTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTaskTemplateRequestT = Model::DeleteTaskTemplateRequest>
        void DeleteTaskTemplateAsync(const DeleteTaskTemplateRequestT& request, const DeleteTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteTaskTemplate, request, handler, context);
        }

        /**
         * <p>Deletes a traffic distribution group. This API can be called only in the
         * Region where the traffic distribution group is created.</p> <p>For more
         * information about deleting traffic distribution groups, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/delete-traffic-distribution-groups.html">Delete
         * traffic distribution groups</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteTrafficDistributionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrafficDistributionGroupOutcome DeleteTrafficDistributionGroup(const Model::DeleteTrafficDistributionGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrafficDistributionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTrafficDistributionGroupRequestT = Model::DeleteTrafficDistributionGroupRequest>
        Model::DeleteTrafficDistributionGroupOutcomeCallable DeleteTrafficDistributionGroupCallable(const DeleteTrafficDistributionGroupRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteTrafficDistributionGroup, request);
        }

        /**
         * An Async wrapper for DeleteTrafficDistributionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTrafficDistributionGroupRequestT = Model::DeleteTrafficDistributionGroupRequest>
        void DeleteTrafficDistributionGroupAsync(const DeleteTrafficDistributionGroupRequestT& request, const DeleteTrafficDistributionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteTrafficDistributionGroup, request, handler, context);
        }

        /**
         * <p>Deletes a use case from an integration association.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUseCase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUseCaseOutcome DeleteUseCase(const Model::DeleteUseCaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteUseCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUseCaseRequestT = Model::DeleteUseCaseRequest>
        Model::DeleteUseCaseOutcomeCallable DeleteUseCaseCallable(const DeleteUseCaseRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteUseCase, request);
        }

        /**
         * An Async wrapper for DeleteUseCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUseCaseRequestT = Model::DeleteUseCaseRequest>
        void DeleteUseCaseAsync(const DeleteUseCaseRequestT& request, const DeleteUseCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteUseCase, request, handler, context);
        }

        /**
         * <p>Deletes a user account from the specified Amazon Connect instance.</p> <p>For
         * information about what happens to a user's data when their account is deleted,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/delete-users.html">Delete
         * Users from Your Amazon Connect Instance</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteUser, request, handler, context);
        }

        /**
         * <p>Deletes an existing user hierarchy group. It must not be associated with any
         * agents or have any active child groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteUserHierarchyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserHierarchyGroupOutcome DeleteUserHierarchyGroup(const Model::DeleteUserHierarchyGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserHierarchyGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserHierarchyGroupRequestT = Model::DeleteUserHierarchyGroupRequest>
        Model::DeleteUserHierarchyGroupOutcomeCallable DeleteUserHierarchyGroupCallable(const DeleteUserHierarchyGroupRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteUserHierarchyGroup, request);
        }

        /**
         * An Async wrapper for DeleteUserHierarchyGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserHierarchyGroupRequestT = Model::DeleteUserHierarchyGroupRequest>
        void DeleteUserHierarchyGroupAsync(const DeleteUserHierarchyGroupRequestT& request, const DeleteUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteUserHierarchyGroup, request, handler, context);
        }

        /**
         * <p>Deletes the view entirely. It deletes the view and all associated qualifiers
         * (versions and aliases).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteView">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteViewOutcome DeleteView(const Model::DeleteViewRequest& request) const;

        /**
         * A Callable wrapper for DeleteView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteViewRequestT = Model::DeleteViewRequest>
        Model::DeleteViewOutcomeCallable DeleteViewCallable(const DeleteViewRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteView, request);
        }

        /**
         * An Async wrapper for DeleteView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteViewRequestT = Model::DeleteViewRequest>
        void DeleteViewAsync(const DeleteViewRequestT& request, const DeleteViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteView, request, handler, context);
        }

        /**
         * <p>Deletes the particular version specified in <code>ViewVersion</code>
         * identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteViewVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteViewVersionOutcome DeleteViewVersion(const Model::DeleteViewVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteViewVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteViewVersionRequestT = Model::DeleteViewVersionRequest>
        Model::DeleteViewVersionOutcomeCallable DeleteViewVersionCallable(const DeleteViewVersionRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteViewVersion, request);
        }

        /**
         * An Async wrapper for DeleteViewVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteViewVersionRequestT = Model::DeleteViewVersionRequest>
        void DeleteViewVersionAsync(const DeleteViewVersionRequestT& request, const DeleteViewVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteViewVersion, request, handler, context);
        }

        /**
         * <p>Deletes the vocabulary that has the given identifier.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DeleteVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVocabularyOutcome DeleteVocabulary(const Model::DeleteVocabularyRequest& request) const;

        /**
         * A Callable wrapper for DeleteVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVocabularyRequestT = Model::DeleteVocabularyRequest>
        Model::DeleteVocabularyOutcomeCallable DeleteVocabularyCallable(const DeleteVocabularyRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DeleteVocabulary, request);
        }

        /**
         * An Async wrapper for DeleteVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVocabularyRequestT = Model::DeleteVocabularyRequest>
        void DeleteVocabularyAsync(const DeleteVocabularyRequestT& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DeleteVocabulary, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes an agent status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeAgentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAgentStatusOutcome DescribeAgentStatus(const Model::DescribeAgentStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeAgentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAgentStatusRequestT = Model::DescribeAgentStatusRequest>
        Model::DescribeAgentStatusOutcomeCallable DescribeAgentStatusCallable(const DescribeAgentStatusRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeAgentStatus, request);
        }

        /**
         * An Async wrapper for DescribeAgentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAgentStatusRequestT = Model::DescribeAgentStatusRequest>
        void DescribeAgentStatusAsync(const DescribeAgentStatusRequestT& request, const DescribeAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeAgentStatus, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes the specified contact. </p>  <p>Contact
         * information remains available in Amazon Connect for 24 months, and then it is
         * deleted.</p> <p>Only data from November 12, 2021, and later is returned by this
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactOutcome DescribeContact(const Model::DescribeContactRequest& request) const;

        /**
         * A Callable wrapper for DescribeContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeContactRequestT = Model::DescribeContactRequest>
        Model::DescribeContactOutcomeCallable DescribeContactCallable(const DescribeContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeContact, request);
        }

        /**
         * An Async wrapper for DescribeContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeContactRequestT = Model::DescribeContactRequest>
        void DescribeContactAsync(const DescribeContactRequestT& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeContact, request, handler, context);
        }

        /**
         * <p>Describes a contact evaluation in the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeContactEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactEvaluationOutcome DescribeContactEvaluation(const Model::DescribeContactEvaluationRequest& request) const;

        /**
         * A Callable wrapper for DescribeContactEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeContactEvaluationRequestT = Model::DescribeContactEvaluationRequest>
        Model::DescribeContactEvaluationOutcomeCallable DescribeContactEvaluationCallable(const DescribeContactEvaluationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeContactEvaluation, request);
        }

        /**
         * An Async wrapper for DescribeContactEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeContactEvaluationRequestT = Model::DescribeContactEvaluationRequest>
        void DescribeContactEvaluationAsync(const DescribeContactEvaluationRequestT& request, const DescribeContactEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeContactEvaluation, request, handler, context);
        }

        /**
         * <p>Describes the specified flow.</p> <p>You can also create and update flows
         * using the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactFlowOutcome DescribeContactFlow(const Model::DescribeContactFlowRequest& request) const;

        /**
         * A Callable wrapper for DescribeContactFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeContactFlowRequestT = Model::DescribeContactFlowRequest>
        Model::DescribeContactFlowOutcomeCallable DescribeContactFlowCallable(const DescribeContactFlowRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeContactFlow, request);
        }

        /**
         * An Async wrapper for DescribeContactFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeContactFlowRequestT = Model::DescribeContactFlowRequest>
        void DescribeContactFlowAsync(const DescribeContactFlowRequestT& request, const DescribeContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeContactFlow, request, handler, context);
        }

        /**
         * <p>Describes the specified flow module.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeContactFlowModule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactFlowModuleOutcome DescribeContactFlowModule(const Model::DescribeContactFlowModuleRequest& request) const;

        /**
         * A Callable wrapper for DescribeContactFlowModule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeContactFlowModuleRequestT = Model::DescribeContactFlowModuleRequest>
        Model::DescribeContactFlowModuleOutcomeCallable DescribeContactFlowModuleCallable(const DescribeContactFlowModuleRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeContactFlowModule, request);
        }

        /**
         * An Async wrapper for DescribeContactFlowModule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeContactFlowModuleRequestT = Model::DescribeContactFlowModuleRequest>
        void DescribeContactFlowModuleAsync(const DescribeContactFlowModuleRequestT& request, const DescribeContactFlowModuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeContactFlowModule, request, handler, context);
        }

        /**
         * <p>Describes an evaluation form in the specified Amazon Connect instance. If the
         * version property is not provided, the latest version of the evaluation form is
         * described.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeEvaluationForm">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEvaluationFormOutcome DescribeEvaluationForm(const Model::DescribeEvaluationFormRequest& request) const;

        /**
         * A Callable wrapper for DescribeEvaluationForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEvaluationFormRequestT = Model::DescribeEvaluationFormRequest>
        Model::DescribeEvaluationFormOutcomeCallable DescribeEvaluationFormCallable(const DescribeEvaluationFormRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeEvaluationForm, request);
        }

        /**
         * An Async wrapper for DescribeEvaluationForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEvaluationFormRequestT = Model::DescribeEvaluationFormRequest>
        void DescribeEvaluationFormAsync(const DescribeEvaluationFormRequestT& request, const DescribeEvaluationFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeEvaluationForm, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes the hours of operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHoursOfOperationOutcome DescribeHoursOfOperation(const Model::DescribeHoursOfOperationRequest& request) const;

        /**
         * A Callable wrapper for DescribeHoursOfOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeHoursOfOperationRequestT = Model::DescribeHoursOfOperationRequest>
        Model::DescribeHoursOfOperationOutcomeCallable DescribeHoursOfOperationCallable(const DescribeHoursOfOperationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeHoursOfOperation, request);
        }

        /**
         * An Async wrapper for DescribeHoursOfOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeHoursOfOperationRequestT = Model::DescribeHoursOfOperationRequest>
        void DescribeHoursOfOperationAsync(const DescribeHoursOfOperationRequestT& request, const DescribeHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeHoursOfOperation, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns the current state of the specified instance identifier.
         * It tracks the instance while it is being created and returns an error status, if
         * applicable. </p> <p>If an instance is not created successfully, the instance
         * status reason field returns details relevant to the reason. The instance in a
         * failed state is returned only for 24 hours after the CreateInstance API was
         * invoked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstanceRequestT = Model::DescribeInstanceRequest>
        Model::DescribeInstanceOutcomeCallable DescribeInstanceCallable(const DescribeInstanceRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeInstance, request);
        }

        /**
         * An Async wrapper for DescribeInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstanceRequestT = Model::DescribeInstanceRequest>
        void DescribeInstanceAsync(const DescribeInstanceRequestT& request, const DescribeInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeInstance, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes the specified instance attribute.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceAttributeOutcome DescribeInstanceAttribute(const Model::DescribeInstanceAttributeRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstanceAttributeRequestT = Model::DescribeInstanceAttributeRequest>
        Model::DescribeInstanceAttributeOutcomeCallable DescribeInstanceAttributeCallable(const DescribeInstanceAttributeRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeInstanceAttribute, request);
        }

        /**
         * An Async wrapper for DescribeInstanceAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstanceAttributeRequestT = Model::DescribeInstanceAttributeRequest>
        void DescribeInstanceAttributeAsync(const DescribeInstanceAttributeRequestT& request, const DescribeInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeInstanceAttribute, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Retrieves the current storage configurations for the specified
         * resource type, association ID, and instance ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstanceStorageConfigOutcome DescribeInstanceStorageConfig(const Model::DescribeInstanceStorageConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstanceStorageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInstanceStorageConfigRequestT = Model::DescribeInstanceStorageConfigRequest>
        Model::DescribeInstanceStorageConfigOutcomeCallable DescribeInstanceStorageConfigCallable(const DescribeInstanceStorageConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeInstanceStorageConfig, request);
        }

        /**
         * An Async wrapper for DescribeInstanceStorageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInstanceStorageConfigRequestT = Model::DescribeInstanceStorageConfigRequest>
        void DescribeInstanceStorageConfigAsync(const DescribeInstanceStorageConfigRequestT& request, const DescribeInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeInstanceStorageConfig, request, handler, context);
        }

        /**
         * <p>Gets details and status of a phone number that’s claimed to your Amazon
         * Connect instance or traffic distribution group.</p>  <p>If the number
         * is claimed to a traffic distribution group, and you are calling in the Amazon
         * Web Services Region where the traffic distribution group was created, you can
         * use either a phone number ARN or UUID value for the <code>PhoneNumberId</code>
         * URI request parameter. However, if the number is claimed to a traffic
         * distribution group and you are calling this API in the alternate Amazon Web
         * Services Region associated with the traffic distribution group, you must provide
         * a full phone number ARN. If a UUID is provided in this scenario, you will
         * receive a <code>ResourceNotFoundException</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePhoneNumberOutcome DescribePhoneNumber(const Model::DescribePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for DescribePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePhoneNumberRequestT = Model::DescribePhoneNumberRequest>
        Model::DescribePhoneNumberOutcomeCallable DescribePhoneNumberCallable(const DescribePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribePhoneNumber, request);
        }

        /**
         * An Async wrapper for DescribePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePhoneNumberRequestT = Model::DescribePhoneNumberRequest>
        void DescribePhoneNumberAsync(const DescribePhoneNumberRequestT& request, const DescribePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribePhoneNumber, request, handler, context);
        }

        /**
         * <p>Describes a predefined attribute for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribePredefinedAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePredefinedAttributeOutcome DescribePredefinedAttribute(const Model::DescribePredefinedAttributeRequest& request) const;

        /**
         * A Callable wrapper for DescribePredefinedAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePredefinedAttributeRequestT = Model::DescribePredefinedAttributeRequest>
        Model::DescribePredefinedAttributeOutcomeCallable DescribePredefinedAttributeCallable(const DescribePredefinedAttributeRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribePredefinedAttribute, request);
        }

        /**
         * An Async wrapper for DescribePredefinedAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePredefinedAttributeRequestT = Model::DescribePredefinedAttributeRequest>
        void DescribePredefinedAttributeAsync(const DescribePredefinedAttributeRequestT& request, const DescribePredefinedAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribePredefinedAttribute, request, handler, context);
        }

        /**
         * <p>Describes the prompt.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribePrompt">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePromptOutcome DescribePrompt(const Model::DescribePromptRequest& request) const;

        /**
         * A Callable wrapper for DescribePrompt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePromptRequestT = Model::DescribePromptRequest>
        Model::DescribePromptOutcomeCallable DescribePromptCallable(const DescribePromptRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribePrompt, request);
        }

        /**
         * An Async wrapper for DescribePrompt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePromptRequestT = Model::DescribePromptRequest>
        void DescribePromptAsync(const DescribePromptRequestT& request, const DescribePromptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribePrompt, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Describes the specified queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQueueOutcome DescribeQueue(const Model::DescribeQueueRequest& request) const;

        /**
         * A Callable wrapper for DescribeQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeQueueRequestT = Model::DescribeQueueRequest>
        Model::DescribeQueueOutcomeCallable DescribeQueueCallable(const DescribeQueueRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeQueue, request);
        }

        /**
         * An Async wrapper for DescribeQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeQueueRequestT = Model::DescribeQueueRequest>
        void DescribeQueueAsync(const DescribeQueueRequestT& request, const DescribeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeQueue, request, handler, context);
        }

        /**
         * <p>Describes the quick connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeQuickConnect">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQuickConnectOutcome DescribeQuickConnect(const Model::DescribeQuickConnectRequest& request) const;

        /**
         * A Callable wrapper for DescribeQuickConnect that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeQuickConnectRequestT = Model::DescribeQuickConnectRequest>
        Model::DescribeQuickConnectOutcomeCallable DescribeQuickConnectCallable(const DescribeQuickConnectRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeQuickConnect, request);
        }

        /**
         * An Async wrapper for DescribeQuickConnect that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeQuickConnectRequestT = Model::DescribeQuickConnectRequest>
        void DescribeQuickConnectAsync(const DescribeQuickConnectRequestT& request, const DescribeQuickConnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeQuickConnect, request, handler, context);
        }

        /**
         * <p>Describes the specified routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRoutingProfileOutcome DescribeRoutingProfile(const Model::DescribeRoutingProfileRequest& request) const;

        /**
         * A Callable wrapper for DescribeRoutingProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRoutingProfileRequestT = Model::DescribeRoutingProfileRequest>
        Model::DescribeRoutingProfileOutcomeCallable DescribeRoutingProfileCallable(const DescribeRoutingProfileRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeRoutingProfile, request);
        }

        /**
         * An Async wrapper for DescribeRoutingProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRoutingProfileRequestT = Model::DescribeRoutingProfileRequest>
        void DescribeRoutingProfileAsync(const DescribeRoutingProfileRequestT& request, const DescribeRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeRoutingProfile, request, handler, context);
        }

        /**
         * <p>Describes a rule for the specified Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleOutcome DescribeRule(const Model::DescribeRuleRequest& request) const;

        /**
         * A Callable wrapper for DescribeRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRuleRequestT = Model::DescribeRuleRequest>
        Model::DescribeRuleOutcomeCallable DescribeRuleCallable(const DescribeRuleRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeRule, request);
        }

        /**
         * An Async wrapper for DescribeRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRuleRequestT = Model::DescribeRuleRequest>
        void DescribeRuleAsync(const DescribeRuleRequestT& request, const DescribeRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeRule, request, handler, context);
        }

        /**
         * <p>Gets basic information about the security profle.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityProfileOutcome DescribeSecurityProfile(const Model::DescribeSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for DescribeSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSecurityProfileRequestT = Model::DescribeSecurityProfileRequest>
        Model::DescribeSecurityProfileOutcomeCallable DescribeSecurityProfileCallable(const DescribeSecurityProfileRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeSecurityProfile, request);
        }

        /**
         * An Async wrapper for DescribeSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSecurityProfileRequestT = Model::DescribeSecurityProfileRequest>
        void DescribeSecurityProfileAsync(const DescribeSecurityProfileRequestT& request, const DescribeSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeSecurityProfile, request, handler, context);
        }

        /**
         * <p>Gets details and status of a traffic distribution group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeTrafficDistributionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTrafficDistributionGroupOutcome DescribeTrafficDistributionGroup(const Model::DescribeTrafficDistributionGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeTrafficDistributionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTrafficDistributionGroupRequestT = Model::DescribeTrafficDistributionGroupRequest>
        Model::DescribeTrafficDistributionGroupOutcomeCallable DescribeTrafficDistributionGroupCallable(const DescribeTrafficDistributionGroupRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeTrafficDistributionGroup, request);
        }

        /**
         * An Async wrapper for DescribeTrafficDistributionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTrafficDistributionGroupRequestT = Model::DescribeTrafficDistributionGroupRequest>
        void DescribeTrafficDistributionGroupAsync(const DescribeTrafficDistributionGroupRequestT& request, const DescribeTrafficDistributionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeTrafficDistributionGroup, request, handler, context);
        }

        /**
         * <p>Describes the specified user. You can <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
         * the instance ID in the Amazon Connect console</a> (it’s the final part of the
         * ARN). The console does not display the user IDs. Instead, list the users and
         * note the IDs provided in the output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        Model::DescribeUserOutcomeCallable DescribeUserCallable(const DescribeUserRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeUser, request);
        }

        /**
         * An Async wrapper for DescribeUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        void DescribeUserAsync(const DescribeUserRequestT& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeUser, request, handler, context);
        }

        /**
         * <p>Describes the specified hierarchy group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserHierarchyGroupOutcome DescribeUserHierarchyGroup(const Model::DescribeUserHierarchyGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserHierarchyGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserHierarchyGroupRequestT = Model::DescribeUserHierarchyGroupRequest>
        Model::DescribeUserHierarchyGroupOutcomeCallable DescribeUserHierarchyGroupCallable(const DescribeUserHierarchyGroupRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeUserHierarchyGroup, request);
        }

        /**
         * An Async wrapper for DescribeUserHierarchyGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserHierarchyGroupRequestT = Model::DescribeUserHierarchyGroupRequest>
        void DescribeUserHierarchyGroupAsync(const DescribeUserHierarchyGroupRequestT& request, const DescribeUserHierarchyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeUserHierarchyGroup, request, handler, context);
        }

        /**
         * <p>Describes the hierarchy structure of the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeUserHierarchyStructure">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserHierarchyStructureOutcome DescribeUserHierarchyStructure(const Model::DescribeUserHierarchyStructureRequest& request) const;

        /**
         * A Callable wrapper for DescribeUserHierarchyStructure that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserHierarchyStructureRequestT = Model::DescribeUserHierarchyStructureRequest>
        Model::DescribeUserHierarchyStructureOutcomeCallable DescribeUserHierarchyStructureCallable(const DescribeUserHierarchyStructureRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeUserHierarchyStructure, request);
        }

        /**
         * An Async wrapper for DescribeUserHierarchyStructure that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserHierarchyStructureRequestT = Model::DescribeUserHierarchyStructureRequest>
        void DescribeUserHierarchyStructureAsync(const DescribeUserHierarchyStructureRequestT& request, const DescribeUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeUserHierarchyStructure, request, handler, context);
        }

        /**
         * <p>Retrieves the view for the specified Amazon Connect instance and view
         * identifier.</p> <p>The view identifier can be supplied as a ViewId or ARN.</p>
         * <p> <code>$SAVED</code> needs to be supplied if a view is unpublished.</p>
         * <p>The view identifier can contain an optional qualifier, for example,
         * <code>&lt;view-id&gt;:$SAVED</code>, which is either an actual version number or
         * an Amazon Connect managed qualifier <code>$SAVED | $LATEST</code>. If it is not
         * supplied, then <code>$LATEST</code> is assumed for customer managed views and an
         * error is returned if there is no published content available. Version 1 is
         * assumed for Amazon Web Services managed views.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeView">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeViewOutcome DescribeView(const Model::DescribeViewRequest& request) const;

        /**
         * A Callable wrapper for DescribeView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeViewRequestT = Model::DescribeViewRequest>
        Model::DescribeViewOutcomeCallable DescribeViewCallable(const DescribeViewRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeView, request);
        }

        /**
         * An Async wrapper for DescribeView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeViewRequestT = Model::DescribeViewRequest>
        void DescribeViewAsync(const DescribeViewRequestT& request, const DescribeViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeView, request, handler, context);
        }

        /**
         * <p>Describes the specified vocabulary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DescribeVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVocabularyOutcome DescribeVocabulary(const Model::DescribeVocabularyRequest& request) const;

        /**
         * A Callable wrapper for DescribeVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVocabularyRequestT = Model::DescribeVocabularyRequest>
        Model::DescribeVocabularyOutcomeCallable DescribeVocabularyCallable(const DescribeVocabularyRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DescribeVocabulary, request);
        }

        /**
         * An Async wrapper for DescribeVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVocabularyRequestT = Model::DescribeVocabularyRequest>
        void DescribeVocabularyAsync(const DescribeVocabularyRequestT& request, const DescribeVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DescribeVocabulary, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Removes the dataset ID associated with a given Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateAnalyticsDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAnalyticsDataSetOutcome DisassociateAnalyticsDataSet(const Model::DisassociateAnalyticsDataSetRequest& request) const;

        /**
         * A Callable wrapper for DisassociateAnalyticsDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateAnalyticsDataSetRequestT = Model::DisassociateAnalyticsDataSetRequest>
        Model::DisassociateAnalyticsDataSetOutcomeCallable DisassociateAnalyticsDataSetCallable(const DisassociateAnalyticsDataSetRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DisassociateAnalyticsDataSet, request);
        }

        /**
         * An Async wrapper for DisassociateAnalyticsDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateAnalyticsDataSetRequestT = Model::DisassociateAnalyticsDataSetRequest>
        void DisassociateAnalyticsDataSetAsync(const DisassociateAnalyticsDataSetRequestT& request, const DisassociateAnalyticsDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DisassociateAnalyticsDataSet, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Revokes access to integrated applications from Amazon
         * Connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateApprovedOrigin">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateApprovedOriginOutcome DisassociateApprovedOrigin(const Model::DisassociateApprovedOriginRequest& request) const;

        /**
         * A Callable wrapper for DisassociateApprovedOrigin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateApprovedOriginRequestT = Model::DisassociateApprovedOriginRequest>
        Model::DisassociateApprovedOriginOutcomeCallable DisassociateApprovedOriginCallable(const DisassociateApprovedOriginRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DisassociateApprovedOrigin, request);
        }

        /**
         * An Async wrapper for DisassociateApprovedOrigin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateApprovedOriginRequestT = Model::DisassociateApprovedOriginRequest>
        void DisassociateApprovedOriginAsync(const DisassociateApprovedOriginRequestT& request, const DisassociateApprovedOriginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DisassociateApprovedOrigin, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Revokes authorization from the specified instance to access the
         * specified Amazon Lex or Amazon Lex V2 bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateBotOutcome DisassociateBot(const Model::DisassociateBotRequest& request) const;

        /**
         * A Callable wrapper for DisassociateBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateBotRequestT = Model::DisassociateBotRequest>
        Model::DisassociateBotOutcomeCallable DisassociateBotCallable(const DisassociateBotRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DisassociateBot, request);
        }

        /**
         * An Async wrapper for DisassociateBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateBotRequestT = Model::DisassociateBotRequest>
        void DisassociateBotAsync(const DisassociateBotRequestT& request, const DisassociateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DisassociateBot, request, handler, context);
        }

        /**
         * <p>Disassociates a connect resource from a flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFlowOutcome DisassociateFlow(const Model::DisassociateFlowRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateFlowRequestT = Model::DisassociateFlowRequest>
        Model::DisassociateFlowOutcomeCallable DisassociateFlowCallable(const DisassociateFlowRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DisassociateFlow, request);
        }

        /**
         * An Async wrapper for DisassociateFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateFlowRequestT = Model::DisassociateFlowRequest>
        void DisassociateFlowAsync(const DisassociateFlowRequestT& request, const DisassociateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DisassociateFlow, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Removes the storage type configurations for the specified
         * resource type and association ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateInstanceStorageConfigOutcome DisassociateInstanceStorageConfig(const Model::DisassociateInstanceStorageConfigRequest& request) const;

        /**
         * A Callable wrapper for DisassociateInstanceStorageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateInstanceStorageConfigRequestT = Model::DisassociateInstanceStorageConfigRequest>
        Model::DisassociateInstanceStorageConfigOutcomeCallable DisassociateInstanceStorageConfigCallable(const DisassociateInstanceStorageConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DisassociateInstanceStorageConfig, request);
        }

        /**
         * An Async wrapper for DisassociateInstanceStorageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateInstanceStorageConfigRequestT = Model::DisassociateInstanceStorageConfigRequest>
        void DisassociateInstanceStorageConfigAsync(const DisassociateInstanceStorageConfigRequestT& request, const DisassociateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DisassociateInstanceStorageConfig, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Remove the Lambda function from the dropdown options available in
         * the relevant flow blocks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateLambdaFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLambdaFunctionOutcome DisassociateLambdaFunction(const Model::DisassociateLambdaFunctionRequest& request) const;

        /**
         * A Callable wrapper for DisassociateLambdaFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateLambdaFunctionRequestT = Model::DisassociateLambdaFunctionRequest>
        Model::DisassociateLambdaFunctionOutcomeCallable DisassociateLambdaFunctionCallable(const DisassociateLambdaFunctionRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DisassociateLambdaFunction, request);
        }

        /**
         * An Async wrapper for DisassociateLambdaFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateLambdaFunctionRequestT = Model::DisassociateLambdaFunctionRequest>
        void DisassociateLambdaFunctionAsync(const DisassociateLambdaFunctionRequestT& request, const DisassociateLambdaFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DisassociateLambdaFunction, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Revokes authorization from the specified instance to access the
         * specified Amazon Lex bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateLexBot">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLexBotOutcome DisassociateLexBot(const Model::DisassociateLexBotRequest& request) const;

        /**
         * A Callable wrapper for DisassociateLexBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateLexBotRequestT = Model::DisassociateLexBotRequest>
        Model::DisassociateLexBotOutcomeCallable DisassociateLexBotCallable(const DisassociateLexBotRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DisassociateLexBot, request);
        }

        /**
         * An Async wrapper for DisassociateLexBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateLexBotRequestT = Model::DisassociateLexBotRequest>
        void DisassociateLexBotAsync(const DisassociateLexBotRequestT& request, const DisassociateLexBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DisassociateLexBot, request, handler, context);
        }

        /**
         * <p>Removes the flow association from a phone number claimed to your Amazon
         * Connect instance.</p>  <p>If the number is claimed to a traffic
         * distribution group, and you are calling this API using an instance in the Amazon
         * Web Services Region where the traffic distribution group was created, you can
         * use either a full phone number ARN or UUID value for the
         * <code>PhoneNumberId</code> URI request parameter. However, if the number is
         * claimed to a traffic distribution group and you are calling this API using an
         * instance in the alternate Amazon Web Services Region associated with the traffic
         * distribution group, you must provide a full phone number ARN. If a UUID is
         * provided in this scenario, you will receive a
         * <code>ResourceNotFoundException</code>.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociatePhoneNumberContactFlow">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePhoneNumberContactFlowOutcome DisassociatePhoneNumberContactFlow(const Model::DisassociatePhoneNumberContactFlowRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePhoneNumberContactFlow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociatePhoneNumberContactFlowRequestT = Model::DisassociatePhoneNumberContactFlowRequest>
        Model::DisassociatePhoneNumberContactFlowOutcomeCallable DisassociatePhoneNumberContactFlowCallable(const DisassociatePhoneNumberContactFlowRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DisassociatePhoneNumberContactFlow, request);
        }

        /**
         * An Async wrapper for DisassociatePhoneNumberContactFlow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociatePhoneNumberContactFlowRequestT = Model::DisassociatePhoneNumberContactFlowRequest>
        void DisassociatePhoneNumberContactFlowAsync(const DisassociatePhoneNumberContactFlowRequestT& request, const DisassociatePhoneNumberContactFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DisassociatePhoneNumberContactFlow, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Disassociates a set of quick connects from a queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateQueueQuickConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateQueueQuickConnectsOutcome DisassociateQueueQuickConnects(const Model::DisassociateQueueQuickConnectsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateQueueQuickConnects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateQueueQuickConnectsRequestT = Model::DisassociateQueueQuickConnectsRequest>
        Model::DisassociateQueueQuickConnectsOutcomeCallable DisassociateQueueQuickConnectsCallable(const DisassociateQueueQuickConnectsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DisassociateQueueQuickConnects, request);
        }

        /**
         * An Async wrapper for DisassociateQueueQuickConnects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateQueueQuickConnectsRequestT = Model::DisassociateQueueQuickConnectsRequest>
        void DisassociateQueueQuickConnectsAsync(const DisassociateQueueQuickConnectsRequestT& request, const DisassociateQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DisassociateQueueQuickConnects, request, handler, context);
        }

        /**
         * <p>Disassociates a set of queues from a routing profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRoutingProfileQueuesOutcome DisassociateRoutingProfileQueues(const Model::DisassociateRoutingProfileQueuesRequest& request) const;

        /**
         * A Callable wrapper for DisassociateRoutingProfileQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateRoutingProfileQueuesRequestT = Model::DisassociateRoutingProfileQueuesRequest>
        Model::DisassociateRoutingProfileQueuesOutcomeCallable DisassociateRoutingProfileQueuesCallable(const DisassociateRoutingProfileQueuesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DisassociateRoutingProfileQueues, request);
        }

        /**
         * An Async wrapper for DisassociateRoutingProfileQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateRoutingProfileQueuesRequestT = Model::DisassociateRoutingProfileQueuesRequest>
        void DisassociateRoutingProfileQueuesAsync(const DisassociateRoutingProfileQueuesRequestT& request, const DisassociateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DisassociateRoutingProfileQueues, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Deletes the specified security key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateSecurityKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSecurityKeyOutcome DisassociateSecurityKey(const Model::DisassociateSecurityKeyRequest& request) const;

        /**
         * A Callable wrapper for DisassociateSecurityKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateSecurityKeyRequestT = Model::DisassociateSecurityKeyRequest>
        Model::DisassociateSecurityKeyOutcomeCallable DisassociateSecurityKeyCallable(const DisassociateSecurityKeyRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DisassociateSecurityKey, request);
        }

        /**
         * An Async wrapper for DisassociateSecurityKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateSecurityKeyRequestT = Model::DisassociateSecurityKeyRequest>
        void DisassociateSecurityKeyAsync(const DisassociateSecurityKeyRequestT& request, const DisassociateSecurityKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DisassociateSecurityKey, request, handler, context);
        }

        /**
         * <p>Disassociates an agent from a traffic distribution group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateTrafficDistributionGroupUser">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTrafficDistributionGroupUserOutcome DisassociateTrafficDistributionGroupUser(const Model::DisassociateTrafficDistributionGroupUserRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTrafficDistributionGroupUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateTrafficDistributionGroupUserRequestT = Model::DisassociateTrafficDistributionGroupUserRequest>
        Model::DisassociateTrafficDistributionGroupUserOutcomeCallable DisassociateTrafficDistributionGroupUserCallable(const DisassociateTrafficDistributionGroupUserRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DisassociateTrafficDistributionGroupUser, request);
        }

        /**
         * An Async wrapper for DisassociateTrafficDistributionGroupUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateTrafficDistributionGroupUserRequestT = Model::DisassociateTrafficDistributionGroupUserRequest>
        void DisassociateTrafficDistributionGroupUserAsync(const DisassociateTrafficDistributionGroupUserRequestT& request, const DisassociateTrafficDistributionGroupUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DisassociateTrafficDistributionGroupUser, request, handler, context);
        }

        /**
         * <p>Disassociates a set of proficiencies from a user.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DisassociateUserProficiencies">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateUserProficienciesOutcome DisassociateUserProficiencies(const Model::DisassociateUserProficienciesRequest& request) const;

        /**
         * A Callable wrapper for DisassociateUserProficiencies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateUserProficienciesRequestT = Model::DisassociateUserProficienciesRequest>
        Model::DisassociateUserProficienciesOutcomeCallable DisassociateUserProficienciesCallable(const DisassociateUserProficienciesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DisassociateUserProficiencies, request);
        }

        /**
         * An Async wrapper for DisassociateUserProficiencies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateUserProficienciesRequestT = Model::DisassociateUserProficienciesRequest>
        void DisassociateUserProficienciesAsync(const DisassociateUserProficienciesRequestT& request, const DisassociateUserProficienciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DisassociateUserProficiencies, request, handler, context);
        }

        /**
         * <p>Dismisses contacts from an agent’s CCP and returns the agent to an available
         * state, which allows the agent to receive a new routed contact. Contacts can only
         * be dismissed if they are in a <code>MISSED</code>, <code>ERROR</code>,
         * <code>ENDED</code>, or <code>REJECTED</code> state in the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/about-contact-states.html">Agent
         * Event Stream</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DismissUserContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DismissUserContactOutcome DismissUserContact(const Model::DismissUserContactRequest& request) const;

        /**
         * A Callable wrapper for DismissUserContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DismissUserContactRequestT = Model::DismissUserContactRequest>
        Model::DismissUserContactOutcomeCallable DismissUserContactCallable(const DismissUserContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::DismissUserContact, request);
        }

        /**
         * An Async wrapper for DismissUserContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DismissUserContactRequestT = Model::DismissUserContactRequest>
        void DismissUserContactAsync(const DismissUserContactRequestT& request, const DismissUserContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::DismissUserContact, request, handler, context);
        }

        /**
         * <p>Retrieves the contact attributes for the specified contact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetContactAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactAttributesOutcome GetContactAttributes(const Model::GetContactAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetContactAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContactAttributesRequestT = Model::GetContactAttributesRequest>
        Model::GetContactAttributesOutcomeCallable GetContactAttributesCallable(const GetContactAttributesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::GetContactAttributes, request);
        }

        /**
         * An Async wrapper for GetContactAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContactAttributesRequestT = Model::GetContactAttributesRequest>
        void GetContactAttributesAsync(const GetContactAttributesRequestT& request, const GetContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::GetContactAttributes, request, handler, context);
        }

        /**
         * <p>Gets the real-time metric data from the specified Amazon Connect
         * instance.</p> <p>For a description of each metric, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
         * Metrics Definitions</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetCurrentMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCurrentMetricDataOutcome GetCurrentMetricData(const Model::GetCurrentMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetCurrentMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCurrentMetricDataRequestT = Model::GetCurrentMetricDataRequest>
        Model::GetCurrentMetricDataOutcomeCallable GetCurrentMetricDataCallable(const GetCurrentMetricDataRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::GetCurrentMetricData, request);
        }

        /**
         * An Async wrapper for GetCurrentMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCurrentMetricDataRequestT = Model::GetCurrentMetricDataRequest>
        void GetCurrentMetricDataAsync(const GetCurrentMetricDataRequestT& request, const GetCurrentMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::GetCurrentMetricData, request, handler, context);
        }

        /**
         * <p>Gets the real-time active user data from the specified Amazon Connect
         * instance. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetCurrentUserData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCurrentUserDataOutcome GetCurrentUserData(const Model::GetCurrentUserDataRequest& request) const;

        /**
         * A Callable wrapper for GetCurrentUserData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCurrentUserDataRequestT = Model::GetCurrentUserDataRequest>
        Model::GetCurrentUserDataOutcomeCallable GetCurrentUserDataCallable(const GetCurrentUserDataRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::GetCurrentUserData, request);
        }

        /**
         * An Async wrapper for GetCurrentUserData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCurrentUserDataRequestT = Model::GetCurrentUserDataRequest>
        void GetCurrentUserDataAsync(const GetCurrentUserDataRequestT& request, const GetCurrentUserDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::GetCurrentUserData, request, handler, context);
        }

        /**
         * <p>Supports SAML sign-in for Amazon Connect. Retrieves a token for federation.
         * The token is for the Amazon Connect user which corresponds to the IAM
         * credentials that were used to invoke this action. </p> <p>For more information
         * about how SAML sign-in works in Amazon Connect, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/configure-saml.html
         * ">Configure SAML with IAM for Amazon Connect in the <i>Amazon Connect
         * Administrator Guide</i>.</a> </p>  <p>This API doesn't support root users.
         * If you try to invoke GetFederationToken with root credentials, an error message
         * similar to the following one appears: </p> <p> <code>Provided identity:
         * Principal: .... User: .... cannot be used for federation with Amazon
         * Connect</code> </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetFederationToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFederationTokenOutcome GetFederationToken(const Model::GetFederationTokenRequest& request) const;

        /**
         * A Callable wrapper for GetFederationToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFederationTokenRequestT = Model::GetFederationTokenRequest>
        Model::GetFederationTokenOutcomeCallable GetFederationTokenCallable(const GetFederationTokenRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::GetFederationToken, request);
        }

        /**
         * An Async wrapper for GetFederationToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFederationTokenRequestT = Model::GetFederationTokenRequest>
        void GetFederationTokenAsync(const GetFederationTokenRequestT& request, const GetFederationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::GetFederationToken, request, handler, context);
        }

        /**
         * <p>Retrieves the flow associated for a given resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetFlowAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFlowAssociationOutcome GetFlowAssociation(const Model::GetFlowAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetFlowAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFlowAssociationRequestT = Model::GetFlowAssociationRequest>
        Model::GetFlowAssociationOutcomeCallable GetFlowAssociationCallable(const GetFlowAssociationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::GetFlowAssociation, request);
        }

        /**
         * An Async wrapper for GetFlowAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFlowAssociationRequestT = Model::GetFlowAssociationRequest>
        void GetFlowAssociationAsync(const GetFlowAssociationRequestT& request, const GetFlowAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::GetFlowAssociation, request, handler, context);
        }

        /**
         * <p>Gets historical metric data from the specified Amazon Connect instance.</p>
         * <p>For a description of each historical metric, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
         * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
         *  <p>We recommend using the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_GetMetricDataV2.html">GetMetricDataV2</a>
         * API. It provides more flexibility, features, and the ability to query longer
         * time ranges than <code>GetMetricData</code>. Use it to retrieve historical agent
         * and contact metrics for the last 3 months, at varying intervals. You can also
         * use it to build custom dashboards to measure historical queue and agent
         * performance. For example, you can track the number of incoming contacts for the
         * last 7 days, with data split by day, to see how contact volume changed per day
         * of the week.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricDataOutcome GetMetricData(const Model::GetMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMetricDataRequestT = Model::GetMetricDataRequest>
        Model::GetMetricDataOutcomeCallable GetMetricDataCallable(const GetMetricDataRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::GetMetricData, request);
        }

        /**
         * An Async wrapper for GetMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMetricDataRequestT = Model::GetMetricDataRequest>
        void GetMetricDataAsync(const GetMetricDataRequestT& request, const GetMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::GetMetricData, request, handler, context);
        }

        /**
         * <p>Gets metric data from the specified Amazon Connect instance. </p> <p>
         * <code>GetMetricDataV2</code> offers more features than <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_GetMetricData.html">GetMetricData</a>,
         * the previous version of this API. It has new metrics, offers filtering at a
         * metric level, and offers the ability to filter and group data by channels,
         * queues, routing profiles, agents, and agent hierarchy levels. It can retrieve
         * historical data for the last 3 months, at varying intervals. </p> <p>For a
         * description of the historical metrics that are supported by
         * <code>GetMetricDataV2</code> and <code>GetMetricData</code>, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
         * metrics definitions</a> in the <i>Amazon Connect Administrator's
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetMetricDataV2">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMetricDataV2Outcome GetMetricDataV2(const Model::GetMetricDataV2Request& request) const;

        /**
         * A Callable wrapper for GetMetricDataV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMetricDataV2RequestT = Model::GetMetricDataV2Request>
        Model::GetMetricDataV2OutcomeCallable GetMetricDataV2Callable(const GetMetricDataV2RequestT& request) const
        {
            return SubmitCallable(&ConnectClient::GetMetricDataV2, request);
        }

        /**
         * An Async wrapper for GetMetricDataV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMetricDataV2RequestT = Model::GetMetricDataV2Request>
        void GetMetricDataV2Async(const GetMetricDataV2RequestT& request, const GetMetricDataV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::GetMetricDataV2, request, handler, context);
        }

        /**
         * <p>Gets the prompt file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetPromptFile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPromptFileOutcome GetPromptFile(const Model::GetPromptFileRequest& request) const;

        /**
         * A Callable wrapper for GetPromptFile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPromptFileRequestT = Model::GetPromptFileRequest>
        Model::GetPromptFileOutcomeCallable GetPromptFileCallable(const GetPromptFileRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::GetPromptFile, request);
        }

        /**
         * An Async wrapper for GetPromptFile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPromptFileRequestT = Model::GetPromptFileRequest>
        void GetPromptFileAsync(const GetPromptFileRequestT& request, const GetPromptFileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::GetPromptFile, request, handler, context);
        }

        /**
         * <p>Gets details about a specific task template in the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetTaskTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTaskTemplateOutcome GetTaskTemplate(const Model::GetTaskTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetTaskTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTaskTemplateRequestT = Model::GetTaskTemplateRequest>
        Model::GetTaskTemplateOutcomeCallable GetTaskTemplateCallable(const GetTaskTemplateRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::GetTaskTemplate, request);
        }

        /**
         * An Async wrapper for GetTaskTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTaskTemplateRequestT = Model::GetTaskTemplateRequest>
        void GetTaskTemplateAsync(const GetTaskTemplateRequestT& request, const GetTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::GetTaskTemplate, request, handler, context);
        }

        /**
         * <p>Retrieves the current traffic distribution for a given traffic distribution
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/GetTrafficDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrafficDistributionOutcome GetTrafficDistribution(const Model::GetTrafficDistributionRequest& request) const;

        /**
         * A Callable wrapper for GetTrafficDistribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTrafficDistributionRequestT = Model::GetTrafficDistributionRequest>
        Model::GetTrafficDistributionOutcomeCallable GetTrafficDistributionCallable(const GetTrafficDistributionRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::GetTrafficDistribution, request);
        }

        /**
         * An Async wrapper for GetTrafficDistribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTrafficDistributionRequestT = Model::GetTrafficDistributionRequest>
        void GetTrafficDistributionAsync(const GetTrafficDistributionRequestT& request, const GetTrafficDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::GetTrafficDistribution, request, handler, context);
        }

        /**
         * <p>Imports a claimed phone number from an external service, such as Amazon
         * Pinpoint, into an Amazon Connect instance. You can call this API only in the
         * same Amazon Web Services Region where the Amazon Connect instance was
         * created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ImportPhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportPhoneNumberOutcome ImportPhoneNumber(const Model::ImportPhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for ImportPhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportPhoneNumberRequestT = Model::ImportPhoneNumberRequest>
        Model::ImportPhoneNumberOutcomeCallable ImportPhoneNumberCallable(const ImportPhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ImportPhoneNumber, request);
        }

        /**
         * An Async wrapper for ImportPhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportPhoneNumberRequestT = Model::ImportPhoneNumberRequest>
        void ImportPhoneNumberAsync(const ImportPhoneNumberRequestT& request, const ImportPhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ImportPhoneNumber, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Lists agent statuses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListAgentStatuses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentStatusesOutcome ListAgentStatuses(const Model::ListAgentStatusesRequest& request) const;

        /**
         * A Callable wrapper for ListAgentStatuses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentStatusesRequestT = Model::ListAgentStatusesRequest>
        Model::ListAgentStatusesOutcomeCallable ListAgentStatusesCallable(const ListAgentStatusesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListAgentStatuses, request);
        }

        /**
         * An Async wrapper for ListAgentStatuses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentStatusesRequestT = Model::ListAgentStatusesRequest>
        void ListAgentStatusesAsync(const ListAgentStatusesRequestT& request, const ListAgentStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListAgentStatuses, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Lists the association status of requested dataset ID for a given
         * Amazon Connect instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListAnalyticsDataAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnalyticsDataAssociationsOutcome ListAnalyticsDataAssociations(const Model::ListAnalyticsDataAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListAnalyticsDataAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnalyticsDataAssociationsRequestT = Model::ListAnalyticsDataAssociationsRequest>
        Model::ListAnalyticsDataAssociationsOutcomeCallable ListAnalyticsDataAssociationsCallable(const ListAnalyticsDataAssociationsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListAnalyticsDataAssociations, request);
        }

        /**
         * An Async wrapper for ListAnalyticsDataAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnalyticsDataAssociationsRequestT = Model::ListAnalyticsDataAssociationsRequest>
        void ListAnalyticsDataAssociationsAsync(const ListAnalyticsDataAssociationsRequestT& request, const ListAnalyticsDataAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListAnalyticsDataAssociations, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all approved origins associated with
         * the instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListApprovedOrigins">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApprovedOriginsOutcome ListApprovedOrigins(const Model::ListApprovedOriginsRequest& request) const;

        /**
         * A Callable wrapper for ListApprovedOrigins that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApprovedOriginsRequestT = Model::ListApprovedOriginsRequest>
        Model::ListApprovedOriginsOutcomeCallable ListApprovedOriginsCallable(const ListApprovedOriginsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListApprovedOrigins, request);
        }

        /**
         * An Async wrapper for ListApprovedOrigins that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApprovedOriginsRequestT = Model::ListApprovedOriginsRequest>
        void ListApprovedOriginsAsync(const ListApprovedOriginsRequestT& request, const ListApprovedOriginsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListApprovedOrigins, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>For the specified version of Amazon Lex, returns a paginated list
         * of all the Amazon Lex bots currently associated with the instance. Use this API
         * to returns both Amazon Lex V1 and V2 bots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListBots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotsOutcome ListBots(const Model::ListBotsRequest& request) const;

        /**
         * A Callable wrapper for ListBots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBotsRequestT = Model::ListBotsRequest>
        Model::ListBotsOutcomeCallable ListBotsCallable(const ListBotsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListBots, request);
        }

        /**
         * An Async wrapper for ListBots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBotsRequestT = Model::ListBotsRequest>
        void ListBotsAsync(const ListBotsRequestT& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListBots, request, handler, context);
        }

        /**
         * <p>Lists contact evaluations in the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListContactEvaluations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactEvaluationsOutcome ListContactEvaluations(const Model::ListContactEvaluationsRequest& request) const;

        /**
         * A Callable wrapper for ListContactEvaluations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContactEvaluationsRequestT = Model::ListContactEvaluationsRequest>
        Model::ListContactEvaluationsOutcomeCallable ListContactEvaluationsCallable(const ListContactEvaluationsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListContactEvaluations, request);
        }

        /**
         * An Async wrapper for ListContactEvaluations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContactEvaluationsRequestT = Model::ListContactEvaluationsRequest>
        void ListContactEvaluationsAsync(const ListContactEvaluationsRequestT& request, const ListContactEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListContactEvaluations, request, handler, context);
        }

        /**
         * <p>Provides information about the flow modules for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListContactFlowModules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactFlowModulesOutcome ListContactFlowModules(const Model::ListContactFlowModulesRequest& request) const;

        /**
         * A Callable wrapper for ListContactFlowModules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContactFlowModulesRequestT = Model::ListContactFlowModulesRequest>
        Model::ListContactFlowModulesOutcomeCallable ListContactFlowModulesCallable(const ListContactFlowModulesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListContactFlowModules, request);
        }

        /**
         * An Async wrapper for ListContactFlowModules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContactFlowModulesRequestT = Model::ListContactFlowModulesRequest>
        void ListContactFlowModulesAsync(const ListContactFlowModulesRequestT& request, const ListContactFlowModulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListContactFlowModules, request, handler, context);
        }

        /**
         * <p>Provides information about the flows for the specified Amazon Connect
         * instance.</p> <p>You can also create and update flows using the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/flow-language.html">Amazon
         * Connect Flow language</a>.</p> <p>For more information about flows, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-contact-flows.html">Flows</a>
         * in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListContactFlows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactFlowsOutcome ListContactFlows(const Model::ListContactFlowsRequest& request) const;

        /**
         * A Callable wrapper for ListContactFlows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContactFlowsRequestT = Model::ListContactFlowsRequest>
        Model::ListContactFlowsOutcomeCallable ListContactFlowsCallable(const ListContactFlowsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListContactFlows, request);
        }

        /**
         * An Async wrapper for ListContactFlows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContactFlowsRequestT = Model::ListContactFlowsRequest>
        void ListContactFlowsAsync(const ListContactFlowsRequestT& request, const ListContactFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListContactFlows, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>For the specified <code>referenceTypes</code>, returns a list of
         * references associated with the contact. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListContactReferences">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactReferencesOutcome ListContactReferences(const Model::ListContactReferencesRequest& request) const;

        /**
         * A Callable wrapper for ListContactReferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListContactReferencesRequestT = Model::ListContactReferencesRequest>
        Model::ListContactReferencesOutcomeCallable ListContactReferencesCallable(const ListContactReferencesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListContactReferences, request);
        }

        /**
         * An Async wrapper for ListContactReferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListContactReferencesRequestT = Model::ListContactReferencesRequest>
        void ListContactReferencesAsync(const ListContactReferencesRequestT& request, const ListContactReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListContactReferences, request, handler, context);
        }

        /**
         * <p>Lists the default vocabularies for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListDefaultVocabularies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDefaultVocabulariesOutcome ListDefaultVocabularies(const Model::ListDefaultVocabulariesRequest& request) const;

        /**
         * A Callable wrapper for ListDefaultVocabularies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDefaultVocabulariesRequestT = Model::ListDefaultVocabulariesRequest>
        Model::ListDefaultVocabulariesOutcomeCallable ListDefaultVocabulariesCallable(const ListDefaultVocabulariesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListDefaultVocabularies, request);
        }

        /**
         * An Async wrapper for ListDefaultVocabularies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDefaultVocabulariesRequestT = Model::ListDefaultVocabulariesRequest>
        void ListDefaultVocabulariesAsync(const ListDefaultVocabulariesRequestT& request, const ListDefaultVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListDefaultVocabularies, request, handler, context);
        }

        /**
         * <p>Lists versions of an evaluation form in the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListEvaluationFormVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEvaluationFormVersionsOutcome ListEvaluationFormVersions(const Model::ListEvaluationFormVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListEvaluationFormVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEvaluationFormVersionsRequestT = Model::ListEvaluationFormVersionsRequest>
        Model::ListEvaluationFormVersionsOutcomeCallable ListEvaluationFormVersionsCallable(const ListEvaluationFormVersionsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListEvaluationFormVersions, request);
        }

        /**
         * An Async wrapper for ListEvaluationFormVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEvaluationFormVersionsRequestT = Model::ListEvaluationFormVersionsRequest>
        void ListEvaluationFormVersionsAsync(const ListEvaluationFormVersionsRequestT& request, const ListEvaluationFormVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListEvaluationFormVersions, request, handler, context);
        }

        /**
         * <p>Lists evaluation forms in the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListEvaluationForms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEvaluationFormsOutcome ListEvaluationForms(const Model::ListEvaluationFormsRequest& request) const;

        /**
         * A Callable wrapper for ListEvaluationForms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEvaluationFormsRequestT = Model::ListEvaluationFormsRequest>
        Model::ListEvaluationFormsOutcomeCallable ListEvaluationFormsCallable(const ListEvaluationFormsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListEvaluationForms, request);
        }

        /**
         * An Async wrapper for ListEvaluationForms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEvaluationFormsRequestT = Model::ListEvaluationFormsRequest>
        void ListEvaluationFormsAsync(const ListEvaluationFormsRequestT& request, const ListEvaluationFormsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListEvaluationForms, request, handler, context);
        }

        /**
         * <p>List the flow association based on the filters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListFlowAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowAssociationsOutcome ListFlowAssociations(const Model::ListFlowAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListFlowAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFlowAssociationsRequestT = Model::ListFlowAssociationsRequest>
        Model::ListFlowAssociationsOutcomeCallable ListFlowAssociationsCallable(const ListFlowAssociationsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListFlowAssociations, request);
        }

        /**
         * An Async wrapper for ListFlowAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFlowAssociationsRequestT = Model::ListFlowAssociationsRequest>
        void ListFlowAssociationsAsync(const ListFlowAssociationsRequestT& request, const ListFlowAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListFlowAssociations, request, handler, context);
        }

        /**
         * <p>Provides information about the hours of operation for the specified Amazon
         * Connect instance.</p> <p>For more information about hours of operation, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-hours-operation.html">Set
         * the Hours of Operation for a Queue</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListHoursOfOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHoursOfOperationsOutcome ListHoursOfOperations(const Model::ListHoursOfOperationsRequest& request) const;

        /**
         * A Callable wrapper for ListHoursOfOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHoursOfOperationsRequestT = Model::ListHoursOfOperationsRequest>
        Model::ListHoursOfOperationsOutcomeCallable ListHoursOfOperationsCallable(const ListHoursOfOperationsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListHoursOfOperations, request);
        }

        /**
         * An Async wrapper for ListHoursOfOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHoursOfOperationsRequestT = Model::ListHoursOfOperationsRequest>
        void ListHoursOfOperationsAsync(const ListHoursOfOperationsRequestT& request, const ListHoursOfOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListHoursOfOperations, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all attribute types for the given
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstanceAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceAttributesOutcome ListInstanceAttributes(const Model::ListInstanceAttributesRequest& request) const;

        /**
         * A Callable wrapper for ListInstanceAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInstanceAttributesRequestT = Model::ListInstanceAttributesRequest>
        Model::ListInstanceAttributesOutcomeCallable ListInstanceAttributesCallable(const ListInstanceAttributesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListInstanceAttributes, request);
        }

        /**
         * An Async wrapper for ListInstanceAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInstanceAttributesRequestT = Model::ListInstanceAttributesRequest>
        void ListInstanceAttributesAsync(const ListInstanceAttributesRequestT& request, const ListInstanceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListInstanceAttributes, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of storage configs for the identified
         * instance and resource type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstanceStorageConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceStorageConfigsOutcome ListInstanceStorageConfigs(const Model::ListInstanceStorageConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListInstanceStorageConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInstanceStorageConfigsRequestT = Model::ListInstanceStorageConfigsRequest>
        Model::ListInstanceStorageConfigsOutcomeCallable ListInstanceStorageConfigsCallable(const ListInstanceStorageConfigsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListInstanceStorageConfigs, request);
        }

        /**
         * An Async wrapper for ListInstanceStorageConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInstanceStorageConfigsRequestT = Model::ListInstanceStorageConfigsRequest>
        void ListInstanceStorageConfigsAsync(const ListInstanceStorageConfigsRequestT& request, const ListInstanceStorageConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListInstanceStorageConfigs, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Return a list of instances which are in active state,
         * creation-in-progress state, and failed state. Instances that aren't successfully
         * created (they are in a failed state) are returned only for 24 hours after the
         * CreateInstance API was invoked.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstancesOutcome ListInstances(const Model::ListInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInstancesRequestT = Model::ListInstancesRequest>
        Model::ListInstancesOutcomeCallable ListInstancesCallable(const ListInstancesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListInstances, request);
        }

        /**
         * An Async wrapper for ListInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInstancesRequestT = Model::ListInstancesRequest>
        void ListInstancesAsync(const ListInstancesRequestT& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListInstances, request, handler, context);
        }

        /**
         * <p>Provides summary information about the Amazon Web Services resource
         * associations for the specified Amazon Connect instance.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListIntegrationAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIntegrationAssociationsOutcome ListIntegrationAssociations(const Model::ListIntegrationAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListIntegrationAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIntegrationAssociationsRequestT = Model::ListIntegrationAssociationsRequest>
        Model::ListIntegrationAssociationsOutcomeCallable ListIntegrationAssociationsCallable(const ListIntegrationAssociationsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListIntegrationAssociations, request);
        }

        /**
         * An Async wrapper for ListIntegrationAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIntegrationAssociationsRequestT = Model::ListIntegrationAssociationsRequest>
        void ListIntegrationAssociationsAsync(const ListIntegrationAssociationsRequestT& request, const ListIntegrationAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListIntegrationAssociations, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all Lambda functions that display in
         * the dropdown options in the relevant flow blocks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListLambdaFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLambdaFunctionsOutcome ListLambdaFunctions(const Model::ListLambdaFunctionsRequest& request) const;

        /**
         * A Callable wrapper for ListLambdaFunctions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLambdaFunctionsRequestT = Model::ListLambdaFunctionsRequest>
        Model::ListLambdaFunctionsOutcomeCallable ListLambdaFunctionsCallable(const ListLambdaFunctionsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListLambdaFunctions, request);
        }

        /**
         * An Async wrapper for ListLambdaFunctions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLambdaFunctionsRequestT = Model::ListLambdaFunctionsRequest>
        void ListLambdaFunctionsAsync(const ListLambdaFunctionsRequestT& request, const ListLambdaFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListLambdaFunctions, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all the Amazon Lex V1 bots currently
         * associated with the instance. To return both Amazon Lex V1 and V2 bots, use the
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ListBots.html">ListBots</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListLexBots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLexBotsOutcome ListLexBots(const Model::ListLexBotsRequest& request) const;

        /**
         * A Callable wrapper for ListLexBots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLexBotsRequestT = Model::ListLexBotsRequest>
        Model::ListLexBotsOutcomeCallable ListLexBotsCallable(const ListLexBotsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListLexBots, request);
        }

        /**
         * An Async wrapper for ListLexBots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLexBotsRequestT = Model::ListLexBotsRequest>
        void ListLexBotsAsync(const ListLexBotsRequestT& request, const ListLexBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListLexBots, request, handler, context);
        }

        /**
         * <p>Provides information about the phone numbers for the specified Amazon Connect
         * instance. </p> <p>For more information about phone numbers, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-center-phone-number.html">Set
         * Up Phone Numbers for Your Contact Center</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p>  <ul> <li> <p>We recommend using <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ListPhoneNumbersV2.html">ListPhoneNumbersV2</a>
         * to return phone number types. ListPhoneNumbers doesn't support number types
         * <code>UIFN</code>, <code>SHARED</code>, <code>THIRD_PARTY_TF</code>, and
         * <code>THIRD_PARTY_DID</code>. While it returns numbers of those types, it
         * incorrectly lists them as <code>TOLL_FREE</code> or <code>DID</code>. </p> </li>
         * <li> <p>The phone number <code>Arn</code> value that is returned from each of
         * the items in the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ListPhoneNumbers.html#connect-ListPhoneNumbers-response-PhoneNumberSummaryList">PhoneNumberSummaryList</a>
         * cannot be used to tag phone number resources. It will fail with a
         * <code>ResourceNotFoundException</code>. Instead, use the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ListPhoneNumbersV2.html">ListPhoneNumbersV2</a>
         * API. It returns the new phone number ARN that can be used to tag phone number
         * resources.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumbersOutcome ListPhoneNumbers(const Model::ListPhoneNumbersRequest& request) const;

        /**
         * A Callable wrapper for ListPhoneNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPhoneNumbersRequestT = Model::ListPhoneNumbersRequest>
        Model::ListPhoneNumbersOutcomeCallable ListPhoneNumbersCallable(const ListPhoneNumbersRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListPhoneNumbers, request);
        }

        /**
         * An Async wrapper for ListPhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPhoneNumbersRequestT = Model::ListPhoneNumbersRequest>
        void ListPhoneNumbersAsync(const ListPhoneNumbersRequestT& request, const ListPhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListPhoneNumbers, request, handler, context);
        }

        /**
         * <p>Lists phone numbers claimed to your Amazon Connect instance or traffic
         * distribution group. If the provided <code>TargetArn</code> is a traffic
         * distribution group, you can call this API in both Amazon Web Services Regions
         * associated with traffic distribution group.</p> <p>For more information about
         * phone numbers, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/contact-center-phone-number.html">Set
         * Up Phone Numbers for Your Contact Center</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p>  <ul> <li> <p>When given an instance ARN,
         * <code>ListPhoneNumbersV2</code> returns only the phone numbers claimed to the
         * instance.</p> </li> <li> <p>When given a traffic distribution group ARN
         * <code>ListPhoneNumbersV2</code> returns only the phone numbers claimed to the
         * traffic distribution group.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPhoneNumbersV2">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPhoneNumbersV2Outcome ListPhoneNumbersV2(const Model::ListPhoneNumbersV2Request& request) const;

        /**
         * A Callable wrapper for ListPhoneNumbersV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPhoneNumbersV2RequestT = Model::ListPhoneNumbersV2Request>
        Model::ListPhoneNumbersV2OutcomeCallable ListPhoneNumbersV2Callable(const ListPhoneNumbersV2RequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListPhoneNumbersV2, request);
        }

        /**
         * An Async wrapper for ListPhoneNumbersV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPhoneNumbersV2RequestT = Model::ListPhoneNumbersV2Request>
        void ListPhoneNumbersV2Async(const ListPhoneNumbersV2RequestT& request, const ListPhoneNumbersV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListPhoneNumbersV2, request, handler, context);
        }

        /**
         * <p>Lists predefined attributes for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPredefinedAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPredefinedAttributesOutcome ListPredefinedAttributes(const Model::ListPredefinedAttributesRequest& request) const;

        /**
         * A Callable wrapper for ListPredefinedAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPredefinedAttributesRequestT = Model::ListPredefinedAttributesRequest>
        Model::ListPredefinedAttributesOutcomeCallable ListPredefinedAttributesCallable(const ListPredefinedAttributesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListPredefinedAttributes, request);
        }

        /**
         * An Async wrapper for ListPredefinedAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPredefinedAttributesRequestT = Model::ListPredefinedAttributesRequest>
        void ListPredefinedAttributesAsync(const ListPredefinedAttributesRequestT& request, const ListPredefinedAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListPredefinedAttributes, request, handler, context);
        }

        /**
         * <p>Provides information about the prompts for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListPrompts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPromptsOutcome ListPrompts(const Model::ListPromptsRequest& request) const;

        /**
         * A Callable wrapper for ListPrompts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPromptsRequestT = Model::ListPromptsRequest>
        Model::ListPromptsOutcomeCallable ListPromptsCallable(const ListPromptsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListPrompts, request);
        }

        /**
         * An Async wrapper for ListPrompts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPromptsRequestT = Model::ListPromptsRequest>
        void ListPromptsAsync(const ListPromptsRequestT& request, const ListPromptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListPrompts, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Lists the quick connects associated with a queue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListQueueQuickConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueueQuickConnectsOutcome ListQueueQuickConnects(const Model::ListQueueQuickConnectsRequest& request) const;

        /**
         * A Callable wrapper for ListQueueQuickConnects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQueueQuickConnectsRequestT = Model::ListQueueQuickConnectsRequest>
        Model::ListQueueQuickConnectsOutcomeCallable ListQueueQuickConnectsCallable(const ListQueueQuickConnectsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListQueueQuickConnects, request);
        }

        /**
         * An Async wrapper for ListQueueQuickConnects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQueueQuickConnectsRequestT = Model::ListQueueQuickConnectsRequest>
        void ListQueueQuickConnectsAsync(const ListQueueQuickConnectsRequestT& request, const ListQueueQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListQueueQuickConnects, request, handler, context);
        }

        /**
         * <p>Provides information about the queues for the specified Amazon Connect
         * instance.</p> <p>If you do not specify a <code>QueueTypes</code> parameter, both
         * standard and agent queues are returned. This might cause an unexpected
         * truncation of results if you have more than 1000 agents and you limit the number
         * of results of the API call in code.</p> <p>For more information about queues,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-queues-standard-and-agent.html">Queues:
         * Standard and Agent</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueuesOutcome ListQueues(const Model::ListQueuesRequest& request) const;

        /**
         * A Callable wrapper for ListQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQueuesRequestT = Model::ListQueuesRequest>
        Model::ListQueuesOutcomeCallable ListQueuesCallable(const ListQueuesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListQueues, request);
        }

        /**
         * An Async wrapper for ListQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQueuesRequestT = Model::ListQueuesRequest>
        void ListQueuesAsync(const ListQueuesRequestT& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListQueues, request, handler, context);
        }

        /**
         * <p>Provides information about the quick connects for the specified Amazon
         * Connect instance. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListQuickConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQuickConnectsOutcome ListQuickConnects(const Model::ListQuickConnectsRequest& request) const;

        /**
         * A Callable wrapper for ListQuickConnects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQuickConnectsRequestT = Model::ListQuickConnectsRequest>
        Model::ListQuickConnectsOutcomeCallable ListQuickConnectsCallable(const ListQuickConnectsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListQuickConnects, request);
        }

        /**
         * An Async wrapper for ListQuickConnects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQuickConnectsRequestT = Model::ListQuickConnectsRequest>
        void ListQuickConnectsAsync(const ListQuickConnectsRequestT& request, const ListQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListQuickConnects, request, handler, context);
        }

        /**
         * <p>Provides a list of analysis segments for a real-time analysis session.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRealtimeContactAnalysisSegmentsV2">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRealtimeContactAnalysisSegmentsV2Outcome ListRealtimeContactAnalysisSegmentsV2(const Model::ListRealtimeContactAnalysisSegmentsV2Request& request) const;

        /**
         * A Callable wrapper for ListRealtimeContactAnalysisSegmentsV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRealtimeContactAnalysisSegmentsV2RequestT = Model::ListRealtimeContactAnalysisSegmentsV2Request>
        Model::ListRealtimeContactAnalysisSegmentsV2OutcomeCallable ListRealtimeContactAnalysisSegmentsV2Callable(const ListRealtimeContactAnalysisSegmentsV2RequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListRealtimeContactAnalysisSegmentsV2, request);
        }

        /**
         * An Async wrapper for ListRealtimeContactAnalysisSegmentsV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRealtimeContactAnalysisSegmentsV2RequestT = Model::ListRealtimeContactAnalysisSegmentsV2Request>
        void ListRealtimeContactAnalysisSegmentsV2Async(const ListRealtimeContactAnalysisSegmentsV2RequestT& request, const ListRealtimeContactAnalysisSegmentsV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListRealtimeContactAnalysisSegmentsV2, request, handler, context);
        }

        /**
         * <p>Lists the queues associated with a routing profile.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutingProfileQueuesOutcome ListRoutingProfileQueues(const Model::ListRoutingProfileQueuesRequest& request) const;

        /**
         * A Callable wrapper for ListRoutingProfileQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRoutingProfileQueuesRequestT = Model::ListRoutingProfileQueuesRequest>
        Model::ListRoutingProfileQueuesOutcomeCallable ListRoutingProfileQueuesCallable(const ListRoutingProfileQueuesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListRoutingProfileQueues, request);
        }

        /**
         * An Async wrapper for ListRoutingProfileQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRoutingProfileQueuesRequestT = Model::ListRoutingProfileQueuesRequest>
        void ListRoutingProfileQueuesAsync(const ListRoutingProfileQueuesRequestT& request, const ListRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListRoutingProfileQueues, request, handler, context);
        }

        /**
         * <p>Provides summary information about the routing profiles for the specified
         * Amazon Connect instance.</p> <p>For more information about routing profiles, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing.html">Routing
         * Profiles</a> and <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/routing-profiles.html">Create
         * a Routing Profile</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRoutingProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutingProfilesOutcome ListRoutingProfiles(const Model::ListRoutingProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListRoutingProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRoutingProfilesRequestT = Model::ListRoutingProfilesRequest>
        Model::ListRoutingProfilesOutcomeCallable ListRoutingProfilesCallable(const ListRoutingProfilesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListRoutingProfiles, request);
        }

        /**
         * An Async wrapper for ListRoutingProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRoutingProfilesRequestT = Model::ListRoutingProfilesRequest>
        void ListRoutingProfilesAsync(const ListRoutingProfilesRequestT& request, const ListRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListRoutingProfiles, request, handler, context);
        }

        /**
         * <p>List all rules for the specified Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * A Callable wrapper for ListRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        Model::ListRulesOutcomeCallable ListRulesCallable(const ListRulesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListRules, request);
        }

        /**
         * An Async wrapper for ListRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        void ListRulesAsync(const ListRulesRequestT& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListRules, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Returns a paginated list of all security keys associated with the
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityKeysOutcome ListSecurityKeys(const Model::ListSecurityKeysRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSecurityKeysRequestT = Model::ListSecurityKeysRequest>
        Model::ListSecurityKeysOutcomeCallable ListSecurityKeysCallable(const ListSecurityKeysRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListSecurityKeys, request);
        }

        /**
         * An Async wrapper for ListSecurityKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecurityKeysRequestT = Model::ListSecurityKeysRequest>
        void ListSecurityKeysAsync(const ListSecurityKeysRequestT& request, const ListSecurityKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListSecurityKeys, request, handler, context);
        }

        /**
         * <p>Returns a list of third-party applications in a specific security
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityProfileApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityProfileApplicationsOutcome ListSecurityProfileApplications(const Model::ListSecurityProfileApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityProfileApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSecurityProfileApplicationsRequestT = Model::ListSecurityProfileApplicationsRequest>
        Model::ListSecurityProfileApplicationsOutcomeCallable ListSecurityProfileApplicationsCallable(const ListSecurityProfileApplicationsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListSecurityProfileApplications, request);
        }

        /**
         * An Async wrapper for ListSecurityProfileApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecurityProfileApplicationsRequestT = Model::ListSecurityProfileApplicationsRequest>
        void ListSecurityProfileApplicationsAsync(const ListSecurityProfileApplicationsRequestT& request, const ListSecurityProfileApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListSecurityProfileApplications, request, handler, context);
        }

        /**
         * <p>Lists the permissions granted to a security profile.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityProfilePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityProfilePermissionsOutcome ListSecurityProfilePermissions(const Model::ListSecurityProfilePermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityProfilePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSecurityProfilePermissionsRequestT = Model::ListSecurityProfilePermissionsRequest>
        Model::ListSecurityProfilePermissionsOutcomeCallable ListSecurityProfilePermissionsCallable(const ListSecurityProfilePermissionsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListSecurityProfilePermissions, request);
        }

        /**
         * An Async wrapper for ListSecurityProfilePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecurityProfilePermissionsRequestT = Model::ListSecurityProfilePermissionsRequest>
        void ListSecurityProfilePermissionsAsync(const ListSecurityProfilePermissionsRequestT& request, const ListSecurityProfilePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListSecurityProfilePermissions, request, handler, context);
        }

        /**
         * <p>Provides summary information about the security profiles for the specified
         * Amazon Connect instance.</p> <p>For more information about security profiles,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-security-profiles.html">Security
         * Profiles</a> in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityProfilesOutcome ListSecurityProfiles(const Model::ListSecurityProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSecurityProfilesRequestT = Model::ListSecurityProfilesRequest>
        Model::ListSecurityProfilesOutcomeCallable ListSecurityProfilesCallable(const ListSecurityProfilesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListSecurityProfiles, request);
        }

        /**
         * An Async wrapper for ListSecurityProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecurityProfilesRequestT = Model::ListSecurityProfilesRequest>
        void ListSecurityProfilesAsync(const ListSecurityProfilesRequestT& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListSecurityProfiles, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified resource.</p> <p>For sample policies that
         * use tags, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon
         * Connect Identity-Based Policy Examples</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists task templates for the specified Amazon Connect instance.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListTaskTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTaskTemplatesOutcome ListTaskTemplates(const Model::ListTaskTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListTaskTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTaskTemplatesRequestT = Model::ListTaskTemplatesRequest>
        Model::ListTaskTemplatesOutcomeCallable ListTaskTemplatesCallable(const ListTaskTemplatesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListTaskTemplates, request);
        }

        /**
         * An Async wrapper for ListTaskTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTaskTemplatesRequestT = Model::ListTaskTemplatesRequest>
        void ListTaskTemplatesAsync(const ListTaskTemplatesRequestT& request, const ListTaskTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListTaskTemplates, request, handler, context);
        }

        /**
         * <p>Lists traffic distribution group users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListTrafficDistributionGroupUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrafficDistributionGroupUsersOutcome ListTrafficDistributionGroupUsers(const Model::ListTrafficDistributionGroupUsersRequest& request) const;

        /**
         * A Callable wrapper for ListTrafficDistributionGroupUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrafficDistributionGroupUsersRequestT = Model::ListTrafficDistributionGroupUsersRequest>
        Model::ListTrafficDistributionGroupUsersOutcomeCallable ListTrafficDistributionGroupUsersCallable(const ListTrafficDistributionGroupUsersRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListTrafficDistributionGroupUsers, request);
        }

        /**
         * An Async wrapper for ListTrafficDistributionGroupUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrafficDistributionGroupUsersRequestT = Model::ListTrafficDistributionGroupUsersRequest>
        void ListTrafficDistributionGroupUsersAsync(const ListTrafficDistributionGroupUsersRequestT& request, const ListTrafficDistributionGroupUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListTrafficDistributionGroupUsers, request, handler, context);
        }

        /**
         * <p>Lists traffic distribution groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListTrafficDistributionGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrafficDistributionGroupsOutcome ListTrafficDistributionGroups(const Model::ListTrafficDistributionGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListTrafficDistributionGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTrafficDistributionGroupsRequestT = Model::ListTrafficDistributionGroupsRequest>
        Model::ListTrafficDistributionGroupsOutcomeCallable ListTrafficDistributionGroupsCallable(const ListTrafficDistributionGroupsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListTrafficDistributionGroups, request);
        }

        /**
         * An Async wrapper for ListTrafficDistributionGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTrafficDistributionGroupsRequestT = Model::ListTrafficDistributionGroupsRequest>
        void ListTrafficDistributionGroupsAsync(const ListTrafficDistributionGroupsRequestT& request, const ListTrafficDistributionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListTrafficDistributionGroups, request, handler, context);
        }

        /**
         * <p>Lists the use cases for the integration association. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUseCases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUseCasesOutcome ListUseCases(const Model::ListUseCasesRequest& request) const;

        /**
         * A Callable wrapper for ListUseCases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUseCasesRequestT = Model::ListUseCasesRequest>
        Model::ListUseCasesOutcomeCallable ListUseCasesCallable(const ListUseCasesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListUseCases, request);
        }

        /**
         * An Async wrapper for ListUseCases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUseCasesRequestT = Model::ListUseCasesRequest>
        void ListUseCasesAsync(const ListUseCasesRequestT& request, const ListUseCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListUseCases, request, handler, context);
        }

        /**
         * <p>Provides summary information about the hierarchy groups for the specified
         * Amazon Connect instance.</p> <p>For more information about agent hierarchies,
         * see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/agent-hierarchy.html">Set
         * Up Agent Hierarchies</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUserHierarchyGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserHierarchyGroupsOutcome ListUserHierarchyGroups(const Model::ListUserHierarchyGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListUserHierarchyGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUserHierarchyGroupsRequestT = Model::ListUserHierarchyGroupsRequest>
        Model::ListUserHierarchyGroupsOutcomeCallable ListUserHierarchyGroupsCallable(const ListUserHierarchyGroupsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListUserHierarchyGroups, request);
        }

        /**
         * An Async wrapper for ListUserHierarchyGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUserHierarchyGroupsRequestT = Model::ListUserHierarchyGroupsRequest>
        void ListUserHierarchyGroupsAsync(const ListUserHierarchyGroupsRequestT& request, const ListUserHierarchyGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListUserHierarchyGroups, request, handler, context);
        }

        /**
         * <p>Lists proficiencies associated with a user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUserProficiencies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUserProficienciesOutcome ListUserProficiencies(const Model::ListUserProficienciesRequest& request) const;

        /**
         * A Callable wrapper for ListUserProficiencies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUserProficienciesRequestT = Model::ListUserProficienciesRequest>
        Model::ListUserProficienciesOutcomeCallable ListUserProficienciesCallable(const ListUserProficienciesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListUserProficiencies, request);
        }

        /**
         * An Async wrapper for ListUserProficiencies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUserProficienciesRequestT = Model::ListUserProficienciesRequest>
        void ListUserProficienciesAsync(const ListUserProficienciesRequestT& request, const ListUserProficienciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListUserProficiencies, request, handler, context);
        }

        /**
         * <p>Provides summary information about the users for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        Model::ListUsersOutcomeCallable ListUsersCallable(const ListUsersRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListUsers, request);
        }

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        void ListUsersAsync(const ListUsersRequestT& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListUsers, request, handler, context);
        }

        /**
         * <p>Returns all the available versions for the specified Amazon Connect instance
         * and view identifier.</p> <p>Results will be sorted from highest to
         * lowest.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListViewVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListViewVersionsOutcome ListViewVersions(const Model::ListViewVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListViewVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListViewVersionsRequestT = Model::ListViewVersionsRequest>
        Model::ListViewVersionsOutcomeCallable ListViewVersionsCallable(const ListViewVersionsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListViewVersions, request);
        }

        /**
         * An Async wrapper for ListViewVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListViewVersionsRequestT = Model::ListViewVersionsRequest>
        void ListViewVersionsAsync(const ListViewVersionsRequestT& request, const ListViewVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListViewVersions, request, handler, context);
        }

        /**
         * <p>Returns views in the given instance.</p> <p>Results are sorted primarily by
         * type, and secondarily by name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ListViews">AWS
         * API Reference</a></p>
         */
        virtual Model::ListViewsOutcome ListViews(const Model::ListViewsRequest& request) const;

        /**
         * A Callable wrapper for ListViews that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListViewsRequestT = Model::ListViewsRequest>
        Model::ListViewsOutcomeCallable ListViewsCallable(const ListViewsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ListViews, request);
        }

        /**
         * An Async wrapper for ListViews that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListViewsRequestT = Model::ListViewsRequest>
        void ListViewsAsync(const ListViewsRequestT& request, const ListViewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ListViews, request, handler, context);
        }

        /**
         * <p>Initiates silent monitoring of a contact. The Contact Control Panel (CCP) of
         * the user specified by <i>userId</i> will be set to silent monitoring mode on the
         * contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MonitorContact">AWS
         * API Reference</a></p>
         */
        virtual Model::MonitorContactOutcome MonitorContact(const Model::MonitorContactRequest& request) const;

        /**
         * A Callable wrapper for MonitorContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename MonitorContactRequestT = Model::MonitorContactRequest>
        Model::MonitorContactOutcomeCallable MonitorContactCallable(const MonitorContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::MonitorContact, request);
        }

        /**
         * An Async wrapper for MonitorContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename MonitorContactRequestT = Model::MonitorContactRequest>
        void MonitorContactAsync(const MonitorContactRequestT& request, const MonitorContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::MonitorContact, request, handler, context);
        }

        /**
         * <p>Allows pausing an ongoing task contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PauseContact">AWS
         * API Reference</a></p>
         */
        virtual Model::PauseContactOutcome PauseContact(const Model::PauseContactRequest& request) const;

        /**
         * A Callable wrapper for PauseContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PauseContactRequestT = Model::PauseContactRequest>
        Model::PauseContactOutcomeCallable PauseContactCallable(const PauseContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::PauseContact, request);
        }

        /**
         * An Async wrapper for PauseContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PauseContactRequestT = Model::PauseContactRequest>
        void PauseContactAsync(const PauseContactRequestT& request, const PauseContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::PauseContact, request, handler, context);
        }

        /**
         * <p>Changes the current status of a user or agent in Amazon Connect. If the agent
         * is currently handling a contact, this sets the agent's next status.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-agent-status.html">Agent
         * status</a> and <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-next-status.html">Set
         * your next status</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PutUserStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::PutUserStatusOutcome PutUserStatus(const Model::PutUserStatusRequest& request) const;

        /**
         * A Callable wrapper for PutUserStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutUserStatusRequestT = Model::PutUserStatusRequest>
        Model::PutUserStatusOutcomeCallable PutUserStatusCallable(const PutUserStatusRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::PutUserStatus, request);
        }

        /**
         * An Async wrapper for PutUserStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutUserStatusRequestT = Model::PutUserStatusRequest>
        void PutUserStatusAsync(const PutUserStatusRequestT& request, const PutUserStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::PutUserStatus, request, handler, context);
        }

        /**
         * <p>Releases a phone number previously claimed to an Amazon Connect instance or
         * traffic distribution group. You can call this API only in the Amazon Web
         * Services Region where the number was claimed.</p>  <p>To release
         * phone numbers from a traffic distribution group, use the
         * <code>ReleasePhoneNumber</code> API, not the Amazon Connect admin website.</p>
         * <p>After releasing a phone number, the phone number enters into a cooldown
         * period of 30 days. It cannot be searched for or claimed again until the period
         * has ended. If you accidentally release a phone number, contact Amazon Web
         * Services Support.</p>  <p>If you plan to claim and release numbers
         * frequently during a 30 day period, contact us for a service quota exception.
         * Otherwise, it is possible you will be blocked from claiming and releasing any
         * more numbers until 30 days past the oldest number released has expired.</p>
         * <p>By default you can claim and release up to 200% of your maximum number of
         * active phone numbers during any 30 day period. If you claim and release phone
         * numbers using the UI or API during a rolling 30 day cycle that exceeds 200% of
         * your phone number service level quota, you will be blocked from claiming any
         * more numbers until 30 days past the oldest number released has expired. </p>
         * <p>For example, if you already have 99 claimed numbers and a service level quota
         * of 99 phone numbers, and in any 30 day period you release 99, claim 99, and then
         * release 99, you will have exceeded the 200% limit. At that point you are blocked
         * from claiming any more numbers until you open an Amazon Web Services support
         * ticket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ReleasePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleasePhoneNumberOutcome ReleasePhoneNumber(const Model::ReleasePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for ReleasePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReleasePhoneNumberRequestT = Model::ReleasePhoneNumberRequest>
        Model::ReleasePhoneNumberOutcomeCallable ReleasePhoneNumberCallable(const ReleasePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ReleasePhoneNumber, request);
        }

        /**
         * An Async wrapper for ReleasePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReleasePhoneNumberRequestT = Model::ReleasePhoneNumberRequest>
        void ReleasePhoneNumberAsync(const ReleasePhoneNumberRequestT& request, const ReleasePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ReleasePhoneNumber, request, handler, context);
        }

        /**
         * <p>Replicates an Amazon Connect instance in the specified Amazon Web Services
         * Region and copies configuration information for Amazon Connect resources across
         * Amazon Web Services Regions. </p> <p>For more information about replicating an
         * Amazon Connect instance, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/create-replica-connect-instance.html">Create
         * a replica of your existing Amazon Connect instance</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ReplicateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplicateInstanceOutcome ReplicateInstance(const Model::ReplicateInstanceRequest& request) const;

        /**
         * A Callable wrapper for ReplicateInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReplicateInstanceRequestT = Model::ReplicateInstanceRequest>
        Model::ReplicateInstanceOutcomeCallable ReplicateInstanceCallable(const ReplicateInstanceRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ReplicateInstance, request);
        }

        /**
         * An Async wrapper for ReplicateInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReplicateInstanceRequestT = Model::ReplicateInstanceRequest>
        void ReplicateInstanceAsync(const ReplicateInstanceRequestT& request, const ReplicateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ReplicateInstance, request, handler, context);
        }

        /**
         * <p>Allows resuming a task contact in a paused state.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ResumeContact">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeContactOutcome ResumeContact(const Model::ResumeContactRequest& request) const;

        /**
         * A Callable wrapper for ResumeContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResumeContactRequestT = Model::ResumeContactRequest>
        Model::ResumeContactOutcomeCallable ResumeContactCallable(const ResumeContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ResumeContact, request);
        }

        /**
         * An Async wrapper for ResumeContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResumeContactRequestT = Model::ResumeContactRequest>
        void ResumeContactAsync(const ResumeContactRequestT& request, const ResumeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ResumeContact, request, handler, context);
        }

        /**
         * <p>When a contact is being recorded, and the recording has been suspended using
         * SuspendContactRecording, this API resumes recording whatever recording is
         * selected in the flow configuration: call, screen, or both. If only call
         * recording or only screen recording is enabled, then it would resume.</p>
         * <p>Voice and screen recordings are supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ResumeContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeContactRecordingOutcome ResumeContactRecording(const Model::ResumeContactRecordingRequest& request) const;

        /**
         * A Callable wrapper for ResumeContactRecording that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResumeContactRecordingRequestT = Model::ResumeContactRecordingRequest>
        Model::ResumeContactRecordingOutcomeCallable ResumeContactRecordingCallable(const ResumeContactRecordingRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::ResumeContactRecording, request);
        }

        /**
         * An Async wrapper for ResumeContactRecording that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResumeContactRecordingRequestT = Model::ResumeContactRecordingRequest>
        void ResumeContactRecordingAsync(const ResumeContactRecordingRequestT& request, const ResumeContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::ResumeContactRecording, request, handler, context);
        }

        /**
         * <p>Searches for available phone numbers that you can claim to your Amazon
         * Connect instance or traffic distribution group. If the provided
         * <code>TargetArn</code> is a traffic distribution group, you can call this API in
         * both Amazon Web Services Regions associated with the traffic distribution
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchAvailablePhoneNumbers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAvailablePhoneNumbersOutcome SearchAvailablePhoneNumbers(const Model::SearchAvailablePhoneNumbersRequest& request) const;

        /**
         * A Callable wrapper for SearchAvailablePhoneNumbers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchAvailablePhoneNumbersRequestT = Model::SearchAvailablePhoneNumbersRequest>
        Model::SearchAvailablePhoneNumbersOutcomeCallable SearchAvailablePhoneNumbersCallable(const SearchAvailablePhoneNumbersRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SearchAvailablePhoneNumbers, request);
        }

        /**
         * An Async wrapper for SearchAvailablePhoneNumbers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchAvailablePhoneNumbersRequestT = Model::SearchAvailablePhoneNumbersRequest>
        void SearchAvailablePhoneNumbersAsync(const SearchAvailablePhoneNumbersRequestT& request, const SearchAvailablePhoneNumbersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SearchAvailablePhoneNumbers, request, handler, context);
        }

        /**
         * <p>Searches contacts in an Amazon Connect instance.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchContactsOutcome SearchContacts(const Model::SearchContactsRequest& request) const;

        /**
         * A Callable wrapper for SearchContacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchContactsRequestT = Model::SearchContactsRequest>
        Model::SearchContactsOutcomeCallable SearchContactsCallable(const SearchContactsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SearchContacts, request);
        }

        /**
         * An Async wrapper for SearchContacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchContactsRequestT = Model::SearchContactsRequest>
        void SearchContactsAsync(const SearchContactsRequestT& request, const SearchContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SearchContacts, request, handler, context);
        }

        /**
         * <p>Searches the hours of operation in an Amazon Connect instance, with optional
         * filtering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchHoursOfOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchHoursOfOperationsOutcome SearchHoursOfOperations(const Model::SearchHoursOfOperationsRequest& request) const;

        /**
         * A Callable wrapper for SearchHoursOfOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchHoursOfOperationsRequestT = Model::SearchHoursOfOperationsRequest>
        Model::SearchHoursOfOperationsOutcomeCallable SearchHoursOfOperationsCallable(const SearchHoursOfOperationsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SearchHoursOfOperations, request);
        }

        /**
         * An Async wrapper for SearchHoursOfOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchHoursOfOperationsRequestT = Model::SearchHoursOfOperationsRequest>
        void SearchHoursOfOperationsAsync(const SearchHoursOfOperationsRequestT& request, const SearchHoursOfOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SearchHoursOfOperations, request, handler, context);
        }

        /**
         * <p>Predefined attributes that meet certain criteria.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchPredefinedAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchPredefinedAttributesOutcome SearchPredefinedAttributes(const Model::SearchPredefinedAttributesRequest& request) const;

        /**
         * A Callable wrapper for SearchPredefinedAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchPredefinedAttributesRequestT = Model::SearchPredefinedAttributesRequest>
        Model::SearchPredefinedAttributesOutcomeCallable SearchPredefinedAttributesCallable(const SearchPredefinedAttributesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SearchPredefinedAttributes, request);
        }

        /**
         * An Async wrapper for SearchPredefinedAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchPredefinedAttributesRequestT = Model::SearchPredefinedAttributesRequest>
        void SearchPredefinedAttributesAsync(const SearchPredefinedAttributesRequestT& request, const SearchPredefinedAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SearchPredefinedAttributes, request, handler, context);
        }

        /**
         * <p>Searches prompts in an Amazon Connect instance, with optional
         * filtering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchPrompts">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchPromptsOutcome SearchPrompts(const Model::SearchPromptsRequest& request) const;

        /**
         * A Callable wrapper for SearchPrompts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchPromptsRequestT = Model::SearchPromptsRequest>
        Model::SearchPromptsOutcomeCallable SearchPromptsCallable(const SearchPromptsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SearchPrompts, request);
        }

        /**
         * An Async wrapper for SearchPrompts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchPromptsRequestT = Model::SearchPromptsRequest>
        void SearchPromptsAsync(const SearchPromptsRequestT& request, const SearchPromptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SearchPrompts, request, handler, context);
        }

        /**
         * <p>Searches queues in an Amazon Connect instance, with optional
         * filtering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchQueuesOutcome SearchQueues(const Model::SearchQueuesRequest& request) const;

        /**
         * A Callable wrapper for SearchQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchQueuesRequestT = Model::SearchQueuesRequest>
        Model::SearchQueuesOutcomeCallable SearchQueuesCallable(const SearchQueuesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SearchQueues, request);
        }

        /**
         * An Async wrapper for SearchQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchQueuesRequestT = Model::SearchQueuesRequest>
        void SearchQueuesAsync(const SearchQueuesRequestT& request, const SearchQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SearchQueues, request, handler, context);
        }

        /**
         * <p>Searches quick connects in an Amazon Connect instance, with optional
         * filtering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchQuickConnects">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchQuickConnectsOutcome SearchQuickConnects(const Model::SearchQuickConnectsRequest& request) const;

        /**
         * A Callable wrapper for SearchQuickConnects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchQuickConnectsRequestT = Model::SearchQuickConnectsRequest>
        Model::SearchQuickConnectsOutcomeCallable SearchQuickConnectsCallable(const SearchQuickConnectsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SearchQuickConnects, request);
        }

        /**
         * An Async wrapper for SearchQuickConnects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchQuickConnectsRequestT = Model::SearchQuickConnectsRequest>
        void SearchQuickConnectsAsync(const SearchQuickConnectsRequestT& request, const SearchQuickConnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SearchQuickConnects, request, handler, context);
        }

        /**
         * <p>Searches tags used in an Amazon Connect instance using optional search
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchResourceTags">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchResourceTagsOutcome SearchResourceTags(const Model::SearchResourceTagsRequest& request) const;

        /**
         * A Callable wrapper for SearchResourceTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchResourceTagsRequestT = Model::SearchResourceTagsRequest>
        Model::SearchResourceTagsOutcomeCallable SearchResourceTagsCallable(const SearchResourceTagsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SearchResourceTags, request);
        }

        /**
         * An Async wrapper for SearchResourceTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchResourceTagsRequestT = Model::SearchResourceTagsRequest>
        void SearchResourceTagsAsync(const SearchResourceTagsRequestT& request, const SearchResourceTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SearchResourceTags, request, handler, context);
        }

        /**
         * <p>Searches routing profiles in an Amazon Connect instance, with optional
         * filtering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchRoutingProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchRoutingProfilesOutcome SearchRoutingProfiles(const Model::SearchRoutingProfilesRequest& request) const;

        /**
         * A Callable wrapper for SearchRoutingProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchRoutingProfilesRequestT = Model::SearchRoutingProfilesRequest>
        Model::SearchRoutingProfilesOutcomeCallable SearchRoutingProfilesCallable(const SearchRoutingProfilesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SearchRoutingProfiles, request);
        }

        /**
         * An Async wrapper for SearchRoutingProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchRoutingProfilesRequestT = Model::SearchRoutingProfilesRequest>
        void SearchRoutingProfilesAsync(const SearchRoutingProfilesRequestT& request, const SearchRoutingProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SearchRoutingProfiles, request, handler, context);
        }

        /**
         * <p>Searches security profiles in an Amazon Connect instance, with optional
         * filtering.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSecurityProfilesOutcome SearchSecurityProfiles(const Model::SearchSecurityProfilesRequest& request) const;

        /**
         * A Callable wrapper for SearchSecurityProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchSecurityProfilesRequestT = Model::SearchSecurityProfilesRequest>
        Model::SearchSecurityProfilesOutcomeCallable SearchSecurityProfilesCallable(const SearchSecurityProfilesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SearchSecurityProfiles, request);
        }

        /**
         * An Async wrapper for SearchSecurityProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchSecurityProfilesRequestT = Model::SearchSecurityProfilesRequest>
        void SearchSecurityProfilesAsync(const SearchSecurityProfilesRequestT& request, const SearchSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SearchSecurityProfiles, request, handler, context);
        }

        /**
         * <p>Searches users in an Amazon Connect instance, with optional filtering. </p>
         *  <p> <code>AfterContactWorkTimeLimit</code> is returned in milliseconds.
         * </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchUsers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchUsersOutcome SearchUsers(const Model::SearchUsersRequest& request) const;

        /**
         * A Callable wrapper for SearchUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchUsersRequestT = Model::SearchUsersRequest>
        Model::SearchUsersOutcomeCallable SearchUsersCallable(const SearchUsersRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SearchUsers, request);
        }

        /**
         * An Async wrapper for SearchUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchUsersRequestT = Model::SearchUsersRequest>
        void SearchUsersAsync(const SearchUsersRequestT& request, const SearchUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SearchUsers, request, handler, context);
        }

        /**
         * <p>Searches for vocabularies within a specific Amazon Connect instance using
         * <code>State</code>, <code>NameStartsWith</code>, and
         * <code>LanguageCode</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchVocabularies">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchVocabulariesOutcome SearchVocabularies(const Model::SearchVocabulariesRequest& request) const;

        /**
         * A Callable wrapper for SearchVocabularies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchVocabulariesRequestT = Model::SearchVocabulariesRequest>
        Model::SearchVocabulariesOutcomeCallable SearchVocabulariesCallable(const SearchVocabulariesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SearchVocabularies, request);
        }

        /**
         * An Async wrapper for SearchVocabularies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchVocabulariesRequestT = Model::SearchVocabulariesRequest>
        void SearchVocabulariesAsync(const SearchVocabulariesRequestT& request, const SearchVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SearchVocabularies, request, handler, context);
        }

        /**
         * <p>Processes chat integration events from Amazon Web Services or external
         * integrations to Amazon Connect. A chat integration event includes:</p> <ul> <li>
         * <p>SourceId, DestinationId, and Subtype: a set of identifiers, uniquely
         * representing a chat</p> </li> <li> <p> ChatEvent: details of the chat action to
         * perform such as sending a message, event, or disconnecting from a chat</p> </li>
         * </ul> <p>When a chat integration event is sent with chat identifiers that do not
         * map to an active chat contact, a new chat contact is also created before
         * handling chat action. </p> <p>Access to this API is currently restricted to
         * Amazon Pinpoint for supporting SMS integration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SendChatIntegrationEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::SendChatIntegrationEventOutcome SendChatIntegrationEvent(const Model::SendChatIntegrationEventRequest& request) const;

        /**
         * A Callable wrapper for SendChatIntegrationEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendChatIntegrationEventRequestT = Model::SendChatIntegrationEventRequest>
        Model::SendChatIntegrationEventOutcomeCallable SendChatIntegrationEventCallable(const SendChatIntegrationEventRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SendChatIntegrationEvent, request);
        }

        /**
         * An Async wrapper for SendChatIntegrationEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendChatIntegrationEventRequestT = Model::SendChatIntegrationEventRequest>
        void SendChatIntegrationEventAsync(const SendChatIntegrationEventRequestT& request, const SendChatIntegrationEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SendChatIntegrationEvent, request, handler, context);
        }

        /**
         * <p>Initiates a flow to start a new chat for the customer. Response of this API
         * provides a token required to obtain credentials from the <a
         * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
         * API in the Amazon Connect Participant Service.</p> <p>When a new chat contact is
         * successfully created, clients must subscribe to the participant’s connection for
         * the created chat within 5 minutes. This is achieved by invoking <a
         * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
         * with WEBSOCKET and CONNECTION_CREDENTIALS. </p> <p>A 429 error occurs in the
         * following situations:</p> <ul> <li> <p>API rate limit is exceeded. API TPS
         * throttling returns a <code>TooManyRequests</code> exception.</p> </li> <li>
         * <p>The <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">quota
         * for concurrent active chats</a> is exceeded. Active chat throttling returns a
         * <code>LimitExceededException</code>.</p> </li> </ul> <p>If you use the
         * <code>ChatDurationInMinutes</code> parameter and receive a 400 error, your
         * account may not support the ability to configure custom chat durations. For more
         * information, contact Amazon Web Services Support. </p> <p>For more information
         * about chat, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat.html">Chat</a>
         * in the <i>Amazon Connect Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartChatContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChatContactOutcome StartChatContact(const Model::StartChatContactRequest& request) const;

        /**
         * A Callable wrapper for StartChatContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartChatContactRequestT = Model::StartChatContactRequest>
        Model::StartChatContactOutcomeCallable StartChatContactCallable(const StartChatContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::StartChatContact, request);
        }

        /**
         * An Async wrapper for StartChatContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartChatContactRequestT = Model::StartChatContactRequest>
        void StartChatContactAsync(const StartChatContactRequestT& request, const StartChatContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::StartChatContact, request, handler, context);
        }

        /**
         * <p>Starts an empty evaluation in the specified Amazon Connect instance, using
         * the given evaluation form for the particular contact. The evaluation form
         * version used for the contact evaluation corresponds to the currently activated
         * version. If no version is activated for the evaluation form, the contact
         * evaluation cannot be started. </p>  <p>Evaluations created through the
         * public API do not contain answer values suggested from automation.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartContactEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContactEvaluationOutcome StartContactEvaluation(const Model::StartContactEvaluationRequest& request) const;

        /**
         * A Callable wrapper for StartContactEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartContactEvaluationRequestT = Model::StartContactEvaluationRequest>
        Model::StartContactEvaluationOutcomeCallable StartContactEvaluationCallable(const StartContactEvaluationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::StartContactEvaluation, request);
        }

        /**
         * An Async wrapper for StartContactEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartContactEvaluationRequestT = Model::StartContactEvaluationRequest>
        void StartContactEvaluationAsync(const StartContactEvaluationRequestT& request, const StartContactEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::StartContactEvaluation, request, handler, context);
        }

        /**
         * <p>Starts recording the contact: </p> <ul> <li> <p>If the API is called
         * <i>before</i> the agent joins the call, recording starts when the agent joins
         * the call.</p> </li> <li> <p>If the API is called <i>after</i> the agent joins
         * the call, recording starts at the time of the API call.</p> </li> </ul>
         * <p>StartContactRecording is a one-time action. For example, if you use
         * StopContactRecording to stop recording an ongoing call, you can't use
         * StartContactRecording to restart it. For scenarios where the recording has
         * started and you want to suspend and resume it, such as when collecting sensitive
         * information (for example, a credit card number), use SuspendContactRecording and
         * ResumeContactRecording.</p> <p>You can use this API to override the recording
         * behavior configured in the <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/set-recording-behavior.html">Set
         * recording behavior</a> block.</p> <p>Only voice recordings are supported at this
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContactRecordingOutcome StartContactRecording(const Model::StartContactRecordingRequest& request) const;

        /**
         * A Callable wrapper for StartContactRecording that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartContactRecordingRequestT = Model::StartContactRecordingRequest>
        Model::StartContactRecordingOutcomeCallable StartContactRecordingCallable(const StartContactRecordingRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::StartContactRecording, request);
        }

        /**
         * An Async wrapper for StartContactRecording that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartContactRecordingRequestT = Model::StartContactRecordingRequest>
        void StartContactRecordingAsync(const StartContactRecordingRequestT& request, const StartContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::StartContactRecording, request, handler, context);
        }

        /**
         * <p> Initiates real-time message streaming for a new chat contact.</p> <p> For
         * more information about message streaming, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-message-streaming.html">Enable
         * real-time chat message streaming</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartContactStreaming">AWS
         * API Reference</a></p>
         */
        virtual Model::StartContactStreamingOutcome StartContactStreaming(const Model::StartContactStreamingRequest& request) const;

        /**
         * A Callable wrapper for StartContactStreaming that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartContactStreamingRequestT = Model::StartContactStreamingRequest>
        Model::StartContactStreamingOutcomeCallable StartContactStreamingCallable(const StartContactStreamingRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::StartContactStreaming, request);
        }

        /**
         * An Async wrapper for StartContactStreaming that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartContactStreamingRequestT = Model::StartContactStreamingRequest>
        void StartContactStreamingAsync(const StartContactStreamingRequestT& request, const StartContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::StartContactStreaming, request, handler, context);
        }

        /**
         * <p>Places an outbound call to a contact, and then initiates the flow. It
         * performs the actions in the flow that's specified (in
         * <code>ContactFlowId</code>).</p> <p>Agents do not initiate the outbound API,
         * which means that they do not dial the contact. If the flow places an outbound
         * call to a contact, and then puts the contact in queue, the call is then routed
         * to the agent, like any other inbound case.</p> <p>There is a 60-second dialing
         * timeout for this operation. If the call is not connected after 60 seconds, it
         * fails.</p>  <p>UK numbers with a 447 prefix are not allowed by default.
         * Before you can dial these UK mobile numbers, you must submit a service quota
         * increase request. For more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon
         * Connect Service Quotas</a> in the <i>Amazon Connect Administrator Guide</i>.
         * </p>   <p>Campaign calls are not allowed by default. Before you can
         * make a call with <code>TrafficType</code> = <code>CAMPAIGN</code>, you must
         * submit a service quota increase request to the quota <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html#outbound-communications-quotas">Amazon
         * Connect campaigns</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartOutboundVoiceContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOutboundVoiceContactOutcome StartOutboundVoiceContact(const Model::StartOutboundVoiceContactRequest& request) const;

        /**
         * A Callable wrapper for StartOutboundVoiceContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartOutboundVoiceContactRequestT = Model::StartOutboundVoiceContactRequest>
        Model::StartOutboundVoiceContactOutcomeCallable StartOutboundVoiceContactCallable(const StartOutboundVoiceContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::StartOutboundVoiceContact, request);
        }

        /**
         * An Async wrapper for StartOutboundVoiceContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartOutboundVoiceContactRequestT = Model::StartOutboundVoiceContactRequest>
        void StartOutboundVoiceContactAsync(const StartOutboundVoiceContactRequestT& request, const StartOutboundVoiceContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::StartOutboundVoiceContact, request, handler, context);
        }

        /**
         * <p>Initiates a flow to start a new task contact. For more information about task
         * contacts, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/tasks.html">Concepts:
         * Tasks in Amazon Connect</a> in the <i>Amazon Connect Administrator Guide</i>.
         * </p> <p>When using <code>PreviousContactId</code> and
         * <code>RelatedContactId</code> input parameters, note the following:</p> <ul>
         * <li> <p> <code>PreviousContactId</code> </p> <ul> <li> <p>Any updates to
         * user-defined task contact attributes on any contact linked through the same
         * <code>PreviousContactId</code> will affect every contact in the chain.</p> </li>
         * <li> <p>There can be a maximum of 12 linked task contacts in a chain. That is,
         * 12 task contacts can be created that share the same
         * <code>PreviousContactId</code>.</p> </li> </ul> </li> <li> <p>
         * <code>RelatedContactId</code> </p> <ul> <li> <p>Copies contact attributes from
         * the related task contact to the new contact.</p> </li> <li> <p>Any update on
         * attributes in a new task contact does not update attributes on previous
         * contact.</p> </li> <li> <p>There’s no limit on the number of task contacts that
         * can be created that use the same <code>RelatedContactId</code>.</p> </li> </ul>
         * </li> </ul> <p>In addition, when calling StartTaskContact include only one of
         * these parameters: <code>ContactFlowID</code>, <code>QuickConnectID</code>, or
         * <code>TaskTemplateID</code>. Only one parameter is required as long as the task
         * template has a flow configured to run it. If more than one parameter is
         * specified, or only the <code>TaskTemplateID</code> is specified but it does not
         * have a flow configured, the request returns an error because Amazon Connect
         * cannot identify the unique flow to run when the task is created.</p> <p>A
         * <code>ServiceQuotaExceededException</code> occurs when the number of open tasks
         * exceeds the active tasks quota or there are already 12 tasks referencing the
         * same <code>PreviousContactId</code>. For more information about service quotas
         * for task contacts, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon
         * Connect service quotas</a> in the <i>Amazon Connect Administrator Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartTaskContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTaskContactOutcome StartTaskContact(const Model::StartTaskContactRequest& request) const;

        /**
         * A Callable wrapper for StartTaskContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTaskContactRequestT = Model::StartTaskContactRequest>
        Model::StartTaskContactOutcomeCallable StartTaskContactCallable(const StartTaskContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::StartTaskContact, request);
        }

        /**
         * An Async wrapper for StartTaskContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTaskContactRequestT = Model::StartTaskContactRequest>
        void StartTaskContactAsync(const StartTaskContactRequestT& request, const StartTaskContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::StartTaskContact, request, handler, context);
        }

        /**
         * <p>Places an inbound in-app, web, or video call to a contact, and then initiates
         * the flow. It performs the actions in the flow that are specified (in
         * ContactFlowId) and present in the Amazon Connect instance (specified as
         * InstanceId).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StartWebRTCContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWebRTCContactOutcome StartWebRTCContact(const Model::StartWebRTCContactRequest& request) const;

        /**
         * A Callable wrapper for StartWebRTCContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartWebRTCContactRequestT = Model::StartWebRTCContactRequest>
        Model::StartWebRTCContactOutcomeCallable StartWebRTCContactCallable(const StartWebRTCContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::StartWebRTCContact, request);
        }

        /**
         * An Async wrapper for StartWebRTCContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartWebRTCContactRequestT = Model::StartWebRTCContactRequest>
        void StartWebRTCContactAsync(const StartWebRTCContactRequestT& request, const StartWebRTCContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::StartWebRTCContact, request, handler, context);
        }

        /**
         * <p>Ends the specified contact. This call does not work for voice contacts that
         * use the following initiation methods:</p> <ul> <li> <p>DISCONNECT</p> </li> <li>
         * <p>TRANSFER</p> </li> <li> <p>QUEUE_TRANSFER</p> </li> </ul> <p>Chat and task
         * contacts, however, can be terminated in any state, regardless of initiation
         * method.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContact">AWS
         * API Reference</a></p>
         */
        virtual Model::StopContactOutcome StopContact(const Model::StopContactRequest& request) const;

        /**
         * A Callable wrapper for StopContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopContactRequestT = Model::StopContactRequest>
        Model::StopContactOutcomeCallable StopContactCallable(const StopContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::StopContact, request);
        }

        /**
         * An Async wrapper for StopContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopContactRequestT = Model::StopContactRequest>
        void StopContactAsync(const StopContactRequestT& request, const StopContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::StopContact, request, handler, context);
        }

        /**
         * <p>Stops recording a call when a contact is being recorded. StopContactRecording
         * is a one-time action. If you use StopContactRecording to stop recording an
         * ongoing call, you can't use StartContactRecording to restart it. For scenarios
         * where the recording has started and you want to suspend it for sensitive
         * information (for example, to collect a credit card number), and then restart it,
         * use SuspendContactRecording and ResumeContactRecording.</p> <p>Only voice
         * recordings are supported at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::StopContactRecordingOutcome StopContactRecording(const Model::StopContactRecordingRequest& request) const;

        /**
         * A Callable wrapper for StopContactRecording that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopContactRecordingRequestT = Model::StopContactRecordingRequest>
        Model::StopContactRecordingOutcomeCallable StopContactRecordingCallable(const StopContactRecordingRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::StopContactRecording, request);
        }

        /**
         * An Async wrapper for StopContactRecording that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopContactRecordingRequestT = Model::StopContactRecordingRequest>
        void StopContactRecordingAsync(const StopContactRecordingRequestT& request, const StopContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::StopContactRecording, request, handler, context);
        }

        /**
         * <p> Ends message streaming on a specified contact. To restart message streaming
         * on that contact, call the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_StartContactStreaming.html">StartContactStreaming</a>
         * API. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StopContactStreaming">AWS
         * API Reference</a></p>
         */
        virtual Model::StopContactStreamingOutcome StopContactStreaming(const Model::StopContactStreamingRequest& request) const;

        /**
         * A Callable wrapper for StopContactStreaming that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopContactStreamingRequestT = Model::StopContactStreamingRequest>
        Model::StopContactStreamingOutcomeCallable StopContactStreamingCallable(const StopContactStreamingRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::StopContactStreaming, request);
        }

        /**
         * An Async wrapper for StopContactStreaming that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopContactStreamingRequestT = Model::StopContactStreamingRequest>
        void StopContactStreamingAsync(const StopContactStreamingRequestT& request, const StopContactStreamingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::StopContactStreaming, request, handler, context);
        }

        /**
         * <p>Submits a contact evaluation in the specified Amazon Connect instance.
         * Answers included in the request are merged with existing answers for the given
         * evaluation. If no answers or notes are passed, the evaluation is submitted with
         * the existing answers and notes. You can delete an answer or note by passing an
         * empty object (<code>{}</code>) to the question identifier. </p> <p>If a contact
         * evaluation is already in submitted state, this operation will trigger a
         * resubmission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SubmitContactEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::SubmitContactEvaluationOutcome SubmitContactEvaluation(const Model::SubmitContactEvaluationRequest& request) const;

        /**
         * A Callable wrapper for SubmitContactEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SubmitContactEvaluationRequestT = Model::SubmitContactEvaluationRequest>
        Model::SubmitContactEvaluationOutcomeCallable SubmitContactEvaluationCallable(const SubmitContactEvaluationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SubmitContactEvaluation, request);
        }

        /**
         * An Async wrapper for SubmitContactEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SubmitContactEvaluationRequestT = Model::SubmitContactEvaluationRequest>
        void SubmitContactEvaluationAsync(const SubmitContactEvaluationRequestT& request, const SubmitContactEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SubmitContactEvaluation, request, handler, context);
        }

        /**
         * <p>When a contact is being recorded, this API suspends recording whatever is
         * selected in the flow configuration: call, screen, or both. If only call
         * recording or only screen recording is enabled, then it would be suspended. For
         * example, you might suspend the screen recording while collecting sensitive
         * information, such as a credit card number. Then use ResumeContactRecording to
         * restart recording the screen.</p> <p>The period of time that the recording is
         * suspended is filled with silence in the final recording.</p> <p>Voice and screen
         * recordings are supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SuspendContactRecording">AWS
         * API Reference</a></p>
         */
        virtual Model::SuspendContactRecordingOutcome SuspendContactRecording(const Model::SuspendContactRecordingRequest& request) const;

        /**
         * A Callable wrapper for SuspendContactRecording that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SuspendContactRecordingRequestT = Model::SuspendContactRecordingRequest>
        Model::SuspendContactRecordingOutcomeCallable SuspendContactRecordingCallable(const SuspendContactRecordingRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::SuspendContactRecording, request);
        }

        /**
         * An Async wrapper for SuspendContactRecording that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SuspendContactRecordingRequestT = Model::SuspendContactRecordingRequest>
        void SuspendContactRecordingAsync(const SuspendContactRecordingRequestT& request, const SuspendContactRecordingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::SuspendContactRecording, request, handler, context);
        }

        /**
         * <p>Adds the specified tags to the contact resource. For more information about
         * this API is used, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/granular-billing.html">Set
         * up granular billing for a detailed view of your Amazon Connect usage</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TagContact">AWS
         * API Reference</a></p>
         */
        virtual Model::TagContactOutcome TagContact(const Model::TagContactRequest& request) const;

        /**
         * A Callable wrapper for TagContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagContactRequestT = Model::TagContactRequest>
        Model::TagContactOutcomeCallable TagContactCallable(const TagContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::TagContact, request);
        }

        /**
         * An Async wrapper for TagContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagContactRequestT = Model::TagContactRequest>
        void TagContactAsync(const TagContactRequestT& request, const TagContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::TagContact, request, handler, context);
        }

        /**
         * <p>Adds the specified tags to the specified resource.</p> <p>Some of the
         * supported resource types are agents, routing profiles, queues, quick connects,
         * contact flows, agent statuses, hours of operation, phone numbers, security
         * profiles, and task templates. For a complete list, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/tagging.html">Tagging
         * resources in Amazon Connect</a>.</p> <p>For sample policies that use tags, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_id-based-policy-examples.html">Amazon
         * Connect Identity-Based Policy Examples</a> in the <i>Amazon Connect
         * Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::TagResource, request, handler, context);
        }

        /**
         * <p>Transfers contacts from one agent or queue to another agent or queue at any
         * point after a contact is created. You can transfer a contact to another queue by
         * providing the flow which orchestrates the contact to the destination queue. This
         * gives you more control over contact handling and helps you adhere to the service
         * level agreement (SLA) guaranteed to your customers.</p> <p>Note the following
         * requirements:</p> <ul> <li> <p>Transfer is supported for only <code>TASK</code>
         * contacts.</p> </li> <li> <p>Do not use both <code>QueueId</code> and
         * <code>UserId</code> in the same call.</p> </li> <li> <p>The following flow types
         * are supported: Inbound flow, Transfer to agent flow, and Transfer to queue
         * flow.</p> </li> <li> <p>The <code>TransferContact</code> API can be called only
         * on active contacts.</p> </li> <li> <p>A contact cannot be transferred more than
         * 11 times.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TransferContact">AWS
         * API Reference</a></p>
         */
        virtual Model::TransferContactOutcome TransferContact(const Model::TransferContactRequest& request) const;

        /**
         * A Callable wrapper for TransferContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TransferContactRequestT = Model::TransferContactRequest>
        Model::TransferContactOutcomeCallable TransferContactCallable(const TransferContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::TransferContact, request);
        }

        /**
         * An Async wrapper for TransferContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TransferContactRequestT = Model::TransferContactRequest>
        void TransferContactAsync(const TransferContactRequestT& request, const TransferContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::TransferContact, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the contact resource. For more information
         * about this API is used, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/granular-billing.html">Set
         * up granular billing for a detailed view of your Amazon Connect
         * usage</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UntagContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagContactOutcome UntagContact(const Model::UntagContactRequest& request) const;

        /**
         * A Callable wrapper for UntagContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagContactRequestT = Model::UntagContactRequest>
        Model::UntagContactOutcomeCallable UntagContactCallable(const UntagContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UntagContact, request);
        }

        /**
         * An Async wrapper for UntagContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagContactRequestT = Model::UntagContactRequest>
        void UntagContactAsync(const UntagContactRequestT& request, const UntagContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UntagContact, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UntagResource, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates agent status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateAgentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentStatusOutcome UpdateAgentStatus(const Model::UpdateAgentStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgentStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentStatusRequestT = Model::UpdateAgentStatusRequest>
        Model::UpdateAgentStatusOutcomeCallable UpdateAgentStatusCallable(const UpdateAgentStatusRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateAgentStatus, request);
        }

        /**
         * An Async wrapper for UpdateAgentStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentStatusRequestT = Model::UpdateAgentStatusRequest>
        void UpdateAgentStatusAsync(const UpdateAgentStatusRequestT& request, const UpdateAgentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateAgentStatus, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Adds or updates user-defined contact information associated with
         * the specified contact. At least one field to be updated must be present in the
         * request.</p>  <p>You can add or update user-defined contact
         * information for both ongoing and completed contacts.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactOutcome UpdateContact(const Model::UpdateContactRequest& request) const;

        /**
         * A Callable wrapper for UpdateContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactRequestT = Model::UpdateContactRequest>
        Model::UpdateContactOutcomeCallable UpdateContactCallable(const UpdateContactRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateContact, request);
        }

        /**
         * An Async wrapper for UpdateContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactRequestT = Model::UpdateContactRequest>
        void UpdateContactAsync(const UpdateContactRequestT& request, const UpdateContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateContact, request, handler, context);
        }

        /**
         * <p>Creates or updates user-defined contact attributes associated with the
         * specified contact.</p> <p>You can create or update user-defined attributes for
         * both ongoing and completed contacts. For example, while the call is active, you
         * can update the customer's name or the reason the customer called. You can add
         * notes about steps that the agent took during the call that display to the next
         * agent that takes the call. You can also update attributes for a contact using
         * data from your CRM application and save the data with the contact in Amazon
         * Connect. You could also flag calls for additional analysis, such as legal review
         * or to identify abusive callers.</p> <p>Contact attributes are available in
         * Amazon Connect for 24 months, and are then deleted. For information about
         * contact record retention and the maximum size of the contact record attributes
         * section, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html#feature-limits">Feature
         * specifications</a> in the <i>Amazon Connect Administrator Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactAttributesOutcome UpdateContactAttributes(const Model::UpdateContactAttributesRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactAttributesRequestT = Model::UpdateContactAttributesRequest>
        Model::UpdateContactAttributesOutcomeCallable UpdateContactAttributesCallable(const UpdateContactAttributesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateContactAttributes, request);
        }

        /**
         * An Async wrapper for UpdateContactAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactAttributesRequestT = Model::UpdateContactAttributesRequest>
        void UpdateContactAttributesAsync(const UpdateContactAttributesRequestT& request, const UpdateContactAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateContactAttributes, request, handler, context);
        }

        /**
         * <p>Updates details about a contact evaluation in the specified Amazon Connect
         * instance. A contact evaluation must be in draft state. Answers included in the
         * request are merged with existing answers for the given evaluation. An answer or
         * note can be deleted by passing an empty object (<code>{}</code>) to the question
         * identifier. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactEvaluationOutcome UpdateContactEvaluation(const Model::UpdateContactEvaluationRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactEvaluationRequestT = Model::UpdateContactEvaluationRequest>
        Model::UpdateContactEvaluationOutcomeCallable UpdateContactEvaluationCallable(const UpdateContactEvaluationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateContactEvaluation, request);
        }

        /**
         * An Async wrapper for UpdateContactEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactEvaluationRequestT = Model::UpdateContactEvaluationRequest>
        void UpdateContactEvaluationAsync(const UpdateContactEvaluationRequestT& request, const UpdateContactEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateContactEvaluation, request, handler, context);
        }

        /**
         * <p>Updates the specified flow.</p> <p>You can also create and update flows using
         * the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowContentOutcome UpdateContactFlowContent(const Model::UpdateContactFlowContentRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactFlowContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactFlowContentRequestT = Model::UpdateContactFlowContentRequest>
        Model::UpdateContactFlowContentOutcomeCallable UpdateContactFlowContentCallable(const UpdateContactFlowContentRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateContactFlowContent, request);
        }

        /**
         * An Async wrapper for UpdateContactFlowContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactFlowContentRequestT = Model::UpdateContactFlowContentRequest>
        void UpdateContactFlowContentAsync(const UpdateContactFlowContentRequestT& request, const UpdateContactFlowContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateContactFlowContent, request, handler, context);
        }

        /**
         * <p>Updates metadata about specified flow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowMetadataOutcome UpdateContactFlowMetadata(const Model::UpdateContactFlowMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactFlowMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactFlowMetadataRequestT = Model::UpdateContactFlowMetadataRequest>
        Model::UpdateContactFlowMetadataOutcomeCallable UpdateContactFlowMetadataCallable(const UpdateContactFlowMetadataRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateContactFlowMetadata, request);
        }

        /**
         * An Async wrapper for UpdateContactFlowMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactFlowMetadataRequestT = Model::UpdateContactFlowMetadataRequest>
        void UpdateContactFlowMetadataAsync(const UpdateContactFlowMetadataRequestT& request, const UpdateContactFlowMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateContactFlowMetadata, request, handler, context);
        }

        /**
         * <p>Updates specified flow module for the specified Amazon Connect instance.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowModuleContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowModuleContentOutcome UpdateContactFlowModuleContent(const Model::UpdateContactFlowModuleContentRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactFlowModuleContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactFlowModuleContentRequestT = Model::UpdateContactFlowModuleContentRequest>
        Model::UpdateContactFlowModuleContentOutcomeCallable UpdateContactFlowModuleContentCallable(const UpdateContactFlowModuleContentRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateContactFlowModuleContent, request);
        }

        /**
         * An Async wrapper for UpdateContactFlowModuleContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactFlowModuleContentRequestT = Model::UpdateContactFlowModuleContentRequest>
        void UpdateContactFlowModuleContentAsync(const UpdateContactFlowModuleContentRequestT& request, const UpdateContactFlowModuleContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateContactFlowModuleContent, request, handler, context);
        }

        /**
         * <p>Updates metadata about specified flow module.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowModuleMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowModuleMetadataOutcome UpdateContactFlowModuleMetadata(const Model::UpdateContactFlowModuleMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactFlowModuleMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactFlowModuleMetadataRequestT = Model::UpdateContactFlowModuleMetadataRequest>
        Model::UpdateContactFlowModuleMetadataOutcomeCallable UpdateContactFlowModuleMetadataCallable(const UpdateContactFlowModuleMetadataRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateContactFlowModuleMetadata, request);
        }

        /**
         * An Async wrapper for UpdateContactFlowModuleMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactFlowModuleMetadataRequestT = Model::UpdateContactFlowModuleMetadataRequest>
        void UpdateContactFlowModuleMetadataAsync(const UpdateContactFlowModuleMetadataRequestT& request, const UpdateContactFlowModuleMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateContactFlowModuleMetadata, request, handler, context);
        }

        /**
         * <p>The name of the flow.</p> <p>You can also create and update flows using the
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/flow-language.html">Amazon
         * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactFlowName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactFlowNameOutcome UpdateContactFlowName(const Model::UpdateContactFlowNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactFlowName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactFlowNameRequestT = Model::UpdateContactFlowNameRequest>
        Model::UpdateContactFlowNameOutcomeCallable UpdateContactFlowNameCallable(const UpdateContactFlowNameRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateContactFlowName, request);
        }

        /**
         * An Async wrapper for UpdateContactFlowName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactFlowNameRequestT = Model::UpdateContactFlowNameRequest>
        void UpdateContactFlowNameAsync(const UpdateContactFlowNameRequestT& request, const UpdateContactFlowNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateContactFlowName, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates routing priority and age on the contact
         * (<b>QueuePriority</b> and <b>QueueTimeAdjustmentInSeconds</b>). These properties
         * can be used to change a customer's position in the queue. For example, you can
         * move a contact to the back of the queue by setting a lower routing priority
         * relative to other contacts in queue; or you can move a contact to the front of
         * the queue by increasing the routing age which will make the contact look
         * artificially older and therefore higher up in the first-in-first-out routing
         * order. Note that adjusting the routing age of a contact affects only its
         * position in queue, and not its actual queue wait time as reported through
         * metrics. These properties can also be updated by using <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/change-routing-priority.html">the
         * Set routing priority / age flow block</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactRoutingData">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactRoutingDataOutcome UpdateContactRoutingData(const Model::UpdateContactRoutingDataRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactRoutingData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactRoutingDataRequestT = Model::UpdateContactRoutingDataRequest>
        Model::UpdateContactRoutingDataOutcomeCallable UpdateContactRoutingDataCallable(const UpdateContactRoutingDataRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateContactRoutingData, request);
        }

        /**
         * An Async wrapper for UpdateContactRoutingData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactRoutingDataRequestT = Model::UpdateContactRoutingDataRequest>
        void UpdateContactRoutingDataAsync(const UpdateContactRoutingDataRequestT& request, const UpdateContactRoutingDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateContactRoutingData, request, handler, context);
        }

        /**
         * <p>Updates the scheduled time of a task contact that is already
         * scheduled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateContactSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContactScheduleOutcome UpdateContactSchedule(const Model::UpdateContactScheduleRequest& request) const;

        /**
         * A Callable wrapper for UpdateContactSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContactScheduleRequestT = Model::UpdateContactScheduleRequest>
        Model::UpdateContactScheduleOutcomeCallable UpdateContactScheduleCallable(const UpdateContactScheduleRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateContactSchedule, request);
        }

        /**
         * An Async wrapper for UpdateContactSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContactScheduleRequestT = Model::UpdateContactScheduleRequest>
        void UpdateContactScheduleAsync(const UpdateContactScheduleRequestT& request, const UpdateContactScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateContactSchedule, request, handler, context);
        }

        /**
         * <p>Updates details about a specific evaluation form version in the specified
         * Amazon Connect instance. Question and section identifiers cannot be duplicated
         * within the same evaluation form.</p> <p>This operation does not support partial
         * updates. Instead it does a full update of evaluation form content.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateEvaluationForm">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEvaluationFormOutcome UpdateEvaluationForm(const Model::UpdateEvaluationFormRequest& request) const;

        /**
         * A Callable wrapper for UpdateEvaluationForm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEvaluationFormRequestT = Model::UpdateEvaluationFormRequest>
        Model::UpdateEvaluationFormOutcomeCallable UpdateEvaluationFormCallable(const UpdateEvaluationFormRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateEvaluationForm, request);
        }

        /**
         * An Async wrapper for UpdateEvaluationForm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEvaluationFormRequestT = Model::UpdateEvaluationFormRequest>
        void UpdateEvaluationFormAsync(const UpdateEvaluationFormRequestT& request, const UpdateEvaluationFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateEvaluationForm, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the hours of operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHoursOfOperationOutcome UpdateHoursOfOperation(const Model::UpdateHoursOfOperationRequest& request) const;

        /**
         * A Callable wrapper for UpdateHoursOfOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateHoursOfOperationRequestT = Model::UpdateHoursOfOperationRequest>
        Model::UpdateHoursOfOperationOutcomeCallable UpdateHoursOfOperationCallable(const UpdateHoursOfOperationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateHoursOfOperation, request);
        }

        /**
         * An Async wrapper for UpdateHoursOfOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateHoursOfOperationRequestT = Model::UpdateHoursOfOperationRequest>
        void UpdateHoursOfOperationAsync(const UpdateHoursOfOperationRequestT& request, const UpdateHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateHoursOfOperation, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the value for the specified attribute type.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateInstanceAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceAttributeOutcome UpdateInstanceAttribute(const Model::UpdateInstanceAttributeRequest& request) const;

        /**
         * A Callable wrapper for UpdateInstanceAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInstanceAttributeRequestT = Model::UpdateInstanceAttributeRequest>
        Model::UpdateInstanceAttributeOutcomeCallable UpdateInstanceAttributeCallable(const UpdateInstanceAttributeRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateInstanceAttribute, request);
        }

        /**
         * An Async wrapper for UpdateInstanceAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInstanceAttributeRequestT = Model::UpdateInstanceAttributeRequest>
        void UpdateInstanceAttributeAsync(const UpdateInstanceAttributeRequestT& request, const UpdateInstanceAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateInstanceAttribute, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates an existing configuration for a resource type. This API
         * is idempotent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateInstanceStorageConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceStorageConfigOutcome UpdateInstanceStorageConfig(const Model::UpdateInstanceStorageConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateInstanceStorageConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInstanceStorageConfigRequestT = Model::UpdateInstanceStorageConfigRequest>
        Model::UpdateInstanceStorageConfigOutcomeCallable UpdateInstanceStorageConfigCallable(const UpdateInstanceStorageConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateInstanceStorageConfig, request);
        }

        /**
         * An Async wrapper for UpdateInstanceStorageConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInstanceStorageConfigRequestT = Model::UpdateInstanceStorageConfigRequest>
        void UpdateInstanceStorageConfigAsync(const UpdateInstanceStorageConfigRequestT& request, const UpdateInstanceStorageConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateInstanceStorageConfig, request, handler, context);
        }

        /**
         * <p>Updates timeouts for when human chat participants are to be considered idle,
         * and when agents are automatically disconnected from a chat due to idleness. You
         * can set four timers:</p> <ul> <li> <p>Customer idle timeout</p> </li> <li>
         * <p>Customer auto-disconnect timeout</p> </li> <li> <p>Agent idle timeout</p>
         * </li> <li> <p>Agent auto-disconnect timeout</p> </li> </ul> <p>For more
         * information about how chat timeouts work, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/setup-chat-timeouts.html">Set
         * up chat timeouts for human participants</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateParticipantRoleConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateParticipantRoleConfigOutcome UpdateParticipantRoleConfig(const Model::UpdateParticipantRoleConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateParticipantRoleConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateParticipantRoleConfigRequestT = Model::UpdateParticipantRoleConfigRequest>
        Model::UpdateParticipantRoleConfigOutcomeCallable UpdateParticipantRoleConfigCallable(const UpdateParticipantRoleConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateParticipantRoleConfig, request);
        }

        /**
         * An Async wrapper for UpdateParticipantRoleConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateParticipantRoleConfigRequestT = Model::UpdateParticipantRoleConfigRequest>
        void UpdateParticipantRoleConfigAsync(const UpdateParticipantRoleConfigRequestT& request, const UpdateParticipantRoleConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateParticipantRoleConfig, request, handler, context);
        }

        /**
         * <p>Updates your claimed phone number from its current Amazon Connect instance or
         * traffic distribution group to another Amazon Connect instance or traffic
         * distribution group in the same Amazon Web Services Region.</p> 
         * <p>After using this API, you must verify that the phone number is attached to
         * the correct flow in the target instance or traffic distribution group. You need
         * to do this because the API switches only the phone number to a new instance or
         * traffic distribution group. It doesn't migrate the flow configuration of the
         * phone number, too.</p> <p>You can call <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribePhoneNumber.html">DescribePhoneNumber</a>
         * API to verify the status of a previous <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_UpdatePhoneNumber.html">UpdatePhoneNumber</a>
         * operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdatePhoneNumber">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePhoneNumberOutcome UpdatePhoneNumber(const Model::UpdatePhoneNumberRequest& request) const;

        /**
         * A Callable wrapper for UpdatePhoneNumber that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePhoneNumberRequestT = Model::UpdatePhoneNumberRequest>
        Model::UpdatePhoneNumberOutcomeCallable UpdatePhoneNumberCallable(const UpdatePhoneNumberRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdatePhoneNumber, request);
        }

        /**
         * An Async wrapper for UpdatePhoneNumber that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePhoneNumberRequestT = Model::UpdatePhoneNumberRequest>
        void UpdatePhoneNumberAsync(const UpdatePhoneNumberRequestT& request, const UpdatePhoneNumberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdatePhoneNumber, request, handler, context);
        }

        /**
         * <p>Updates a phone number’s metadata.</p>  <p>To verify the status of
         * a previous UpdatePhoneNumberMetadata operation, call the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribePhoneNumber.html">DescribePhoneNumber</a>
         * API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdatePhoneNumberMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePhoneNumberMetadataOutcome UpdatePhoneNumberMetadata(const Model::UpdatePhoneNumberMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdatePhoneNumberMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePhoneNumberMetadataRequestT = Model::UpdatePhoneNumberMetadataRequest>
        Model::UpdatePhoneNumberMetadataOutcomeCallable UpdatePhoneNumberMetadataCallable(const UpdatePhoneNumberMetadataRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdatePhoneNumberMetadata, request);
        }

        /**
         * An Async wrapper for UpdatePhoneNumberMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePhoneNumberMetadataRequestT = Model::UpdatePhoneNumberMetadataRequest>
        void UpdatePhoneNumberMetadataAsync(const UpdatePhoneNumberMetadataRequestT& request, const UpdatePhoneNumberMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdatePhoneNumberMetadata, request, handler, context);
        }

        /**
         * <p>Updates a predefined attribute for the specified Amazon Connect
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdatePredefinedAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePredefinedAttributeOutcome UpdatePredefinedAttribute(const Model::UpdatePredefinedAttributeRequest& request) const;

        /**
         * A Callable wrapper for UpdatePredefinedAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePredefinedAttributeRequestT = Model::UpdatePredefinedAttributeRequest>
        Model::UpdatePredefinedAttributeOutcomeCallable UpdatePredefinedAttributeCallable(const UpdatePredefinedAttributeRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdatePredefinedAttribute, request);
        }

        /**
         * An Async wrapper for UpdatePredefinedAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePredefinedAttributeRequestT = Model::UpdatePredefinedAttributeRequest>
        void UpdatePredefinedAttributeAsync(const UpdatePredefinedAttributeRequestT& request, const UpdatePredefinedAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdatePredefinedAttribute, request, handler, context);
        }

        /**
         * <p>Updates a prompt.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdatePrompt">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePromptOutcome UpdatePrompt(const Model::UpdatePromptRequest& request) const;

        /**
         * A Callable wrapper for UpdatePrompt that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePromptRequestT = Model::UpdatePromptRequest>
        Model::UpdatePromptOutcomeCallable UpdatePromptCallable(const UpdatePromptRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdatePrompt, request);
        }

        /**
         * An Async wrapper for UpdatePrompt that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePromptRequestT = Model::UpdatePromptRequest>
        void UpdatePromptAsync(const UpdatePromptRequestT& request, const UpdatePromptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdatePrompt, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the hours of operation for the specified
         * queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueHoursOfOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueHoursOfOperationOutcome UpdateQueueHoursOfOperation(const Model::UpdateQueueHoursOfOperationRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueueHoursOfOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQueueHoursOfOperationRequestT = Model::UpdateQueueHoursOfOperationRequest>
        Model::UpdateQueueHoursOfOperationOutcomeCallable UpdateQueueHoursOfOperationCallable(const UpdateQueueHoursOfOperationRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateQueueHoursOfOperation, request);
        }

        /**
         * An Async wrapper for UpdateQueueHoursOfOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQueueHoursOfOperationRequestT = Model::UpdateQueueHoursOfOperationRequest>
        void UpdateQueueHoursOfOperationAsync(const UpdateQueueHoursOfOperationRequestT& request, const UpdateQueueHoursOfOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateQueueHoursOfOperation, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the maximum number of contacts allowed in a queue before
         * it is considered full.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueMaxContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueMaxContactsOutcome UpdateQueueMaxContacts(const Model::UpdateQueueMaxContactsRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueueMaxContacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQueueMaxContactsRequestT = Model::UpdateQueueMaxContactsRequest>
        Model::UpdateQueueMaxContactsOutcomeCallable UpdateQueueMaxContactsCallable(const UpdateQueueMaxContactsRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateQueueMaxContacts, request);
        }

        /**
         * An Async wrapper for UpdateQueueMaxContacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQueueMaxContactsRequestT = Model::UpdateQueueMaxContactsRequest>
        void UpdateQueueMaxContactsAsync(const UpdateQueueMaxContactsRequestT& request, const UpdateQueueMaxContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateQueueMaxContacts, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the name and description of a queue. At least
         * <code>Name</code> or <code>Description</code> must be provided.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueNameOutcome UpdateQueueName(const Model::UpdateQueueNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueueName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQueueNameRequestT = Model::UpdateQueueNameRequest>
        Model::UpdateQueueNameOutcomeCallable UpdateQueueNameCallable(const UpdateQueueNameRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateQueueName, request);
        }

        /**
         * An Async wrapper for UpdateQueueName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQueueNameRequestT = Model::UpdateQueueNameRequest>
        void UpdateQueueNameAsync(const UpdateQueueNameRequestT& request, const UpdateQueueNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateQueueName, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the outbound caller ID name, number, and outbound whisper
         * flow for a specified queue.</p>  <ul> <li> <p>If the phone number is
         * claimed to a traffic distribution group that was created in the same Region as
         * the Amazon Connect instance where you are calling this API, then you can use a
         * full phone number ARN or a UUID for <code>OutboundCallerIdNumberId</code>.
         * However, if the phone number is claimed to a traffic distribution group that is
         * in one Region, and you are calling this API from an instance in another Amazon
         * Web Services Region that is associated with the traffic distribution group, you
         * must provide a full phone number ARN. If a UUID is provided in this scenario,
         * you will receive a <code>ResourceNotFoundException</code>.</p> </li> <li>
         * <p>Only use the phone number ARN format that doesn't contain
         * <code>instance</code> in the path, for example,
         * <code>arn:aws:connect:us-east-1:1234567890:phone-number/uuid</code>. This is the
         * same ARN format that is returned when you call the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ListPhoneNumbersV2.html">ListPhoneNumbersV2</a>
         * API.</p> </li> <li> <p>If you plan to use IAM policies to allow/deny access to
         * this API for phone number resources claimed to a traffic distribution group, see
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security_iam_resource-level-policy-examples.html#allow-deny-queue-actions-replica-region">Allow
         * or Deny queue API actions for phone numbers in a replica Region</a>.</p> </li>
         * </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueOutboundCallerConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueOutboundCallerConfigOutcome UpdateQueueOutboundCallerConfig(const Model::UpdateQueueOutboundCallerConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueueOutboundCallerConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQueueOutboundCallerConfigRequestT = Model::UpdateQueueOutboundCallerConfigRequest>
        Model::UpdateQueueOutboundCallerConfigOutcomeCallable UpdateQueueOutboundCallerConfigCallable(const UpdateQueueOutboundCallerConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateQueueOutboundCallerConfig, request);
        }

        /**
         * An Async wrapper for UpdateQueueOutboundCallerConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQueueOutboundCallerConfigRequestT = Model::UpdateQueueOutboundCallerConfigRequest>
        void UpdateQueueOutboundCallerConfigAsync(const UpdateQueueOutboundCallerConfigRequestT& request, const UpdateQueueOutboundCallerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateQueueOutboundCallerConfig, request, handler, context);
        }

        /**
         * <p>This API is in preview release for Amazon Connect and is subject to
         * change.</p> <p>Updates the status of the queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQueueStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueStatusOutcome UpdateQueueStatus(const Model::UpdateQueueStatusRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueueStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQueueStatusRequestT = Model::UpdateQueueStatusRequest>
        Model::UpdateQueueStatusOutcomeCallable UpdateQueueStatusCallable(const UpdateQueueStatusRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateQueueStatus, request);
        }

        /**
         * An Async wrapper for UpdateQueueStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQueueStatusRequestT = Model::UpdateQueueStatusRequest>
        void UpdateQueueStatusAsync(const UpdateQueueStatusRequestT& request, const UpdateQueueStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateQueueStatus, request, handler, context);
        }

        /**
         * <p>Updates the configuration settings for the specified quick
         * connect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQuickConnectConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQuickConnectConfigOutcome UpdateQuickConnectConfig(const Model::UpdateQuickConnectConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateQuickConnectConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQuickConnectConfigRequestT = Model::UpdateQuickConnectConfigRequest>
        Model::UpdateQuickConnectConfigOutcomeCallable UpdateQuickConnectConfigCallable(const UpdateQuickConnectConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateQuickConnectConfig, request);
        }

        /**
         * An Async wrapper for UpdateQuickConnectConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQuickConnectConfigRequestT = Model::UpdateQuickConnectConfigRequest>
        void UpdateQuickConnectConfigAsync(const UpdateQuickConnectConfigRequestT& request, const UpdateQuickConnectConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateQuickConnectConfig, request, handler, context);
        }

        /**
         * <p>Updates the name and description of a quick connect. The request accepts the
         * following data in JSON format. At least <code>Name</code> or
         * <code>Description</code> must be provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateQuickConnectName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQuickConnectNameOutcome UpdateQuickConnectName(const Model::UpdateQuickConnectNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateQuickConnectName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQuickConnectNameRequestT = Model::UpdateQuickConnectNameRequest>
        Model::UpdateQuickConnectNameOutcomeCallable UpdateQuickConnectNameCallable(const UpdateQuickConnectNameRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateQuickConnectName, request);
        }

        /**
         * An Async wrapper for UpdateQuickConnectName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQuickConnectNameRequestT = Model::UpdateQuickConnectNameRequest>
        void UpdateQuickConnectNameAsync(const UpdateQuickConnectNameRequestT& request, const UpdateQuickConnectNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateQuickConnectName, request, handler, context);
        }

        /**
         * <p>Whether agents with this routing profile will have their routing order
         * calculated based on <i>time since their last inbound contact</i> or <i>longest
         * idle time</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileAgentAvailabilityTimer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileAgentAvailabilityTimerOutcome UpdateRoutingProfileAgentAvailabilityTimer(const Model::UpdateRoutingProfileAgentAvailabilityTimerRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoutingProfileAgentAvailabilityTimer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRoutingProfileAgentAvailabilityTimerRequestT = Model::UpdateRoutingProfileAgentAvailabilityTimerRequest>
        Model::UpdateRoutingProfileAgentAvailabilityTimerOutcomeCallable UpdateRoutingProfileAgentAvailabilityTimerCallable(const UpdateRoutingProfileAgentAvailabilityTimerRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateRoutingProfileAgentAvailabilityTimer, request);
        }

        /**
         * An Async wrapper for UpdateRoutingProfileAgentAvailabilityTimer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRoutingProfileAgentAvailabilityTimerRequestT = Model::UpdateRoutingProfileAgentAvailabilityTimerRequest>
        void UpdateRoutingProfileAgentAvailabilityTimerAsync(const UpdateRoutingProfileAgentAvailabilityTimerRequestT& request, const UpdateRoutingProfileAgentAvailabilityTimerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateRoutingProfileAgentAvailabilityTimer, request, handler, context);
        }

        /**
         * <p>Updates the channels that agents can handle in the Contact Control Panel
         * (CCP) for a routing profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileConcurrency">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileConcurrencyOutcome UpdateRoutingProfileConcurrency(const Model::UpdateRoutingProfileConcurrencyRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoutingProfileConcurrency that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRoutingProfileConcurrencyRequestT = Model::UpdateRoutingProfileConcurrencyRequest>
        Model::UpdateRoutingProfileConcurrencyOutcomeCallable UpdateRoutingProfileConcurrencyCallable(const UpdateRoutingProfileConcurrencyRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateRoutingProfileConcurrency, request);
        }

        /**
         * An Async wrapper for UpdateRoutingProfileConcurrency that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRoutingProfileConcurrencyRequestT = Model::UpdateRoutingProfileConcurrencyRequest>
        void UpdateRoutingProfileConcurrencyAsync(const UpdateRoutingProfileConcurrencyRequestT& request, const UpdateRoutingProfileConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateRoutingProfileConcurrency, request, handler, context);
        }

        /**
         * <p>Updates the default outbound queue of a routing profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileDefaultOutboundQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileDefaultOutboundQueueOutcome UpdateRoutingProfileDefaultOutboundQueue(const Model::UpdateRoutingProfileDefaultOutboundQueueRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoutingProfileDefaultOutboundQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRoutingProfileDefaultOutboundQueueRequestT = Model::UpdateRoutingProfileDefaultOutboundQueueRequest>
        Model::UpdateRoutingProfileDefaultOutboundQueueOutcomeCallable UpdateRoutingProfileDefaultOutboundQueueCallable(const UpdateRoutingProfileDefaultOutboundQueueRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateRoutingProfileDefaultOutboundQueue, request);
        }

        /**
         * An Async wrapper for UpdateRoutingProfileDefaultOutboundQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRoutingProfileDefaultOutboundQueueRequestT = Model::UpdateRoutingProfileDefaultOutboundQueueRequest>
        void UpdateRoutingProfileDefaultOutboundQueueAsync(const UpdateRoutingProfileDefaultOutboundQueueRequestT& request, const UpdateRoutingProfileDefaultOutboundQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateRoutingProfileDefaultOutboundQueue, request, handler, context);
        }

        /**
         * <p>Updates the name and description of a routing profile. The request accepts
         * the following data in JSON format. At least <code>Name</code> or
         * <code>Description</code> must be provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileNameOutcome UpdateRoutingProfileName(const Model::UpdateRoutingProfileNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoutingProfileName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRoutingProfileNameRequestT = Model::UpdateRoutingProfileNameRequest>
        Model::UpdateRoutingProfileNameOutcomeCallable UpdateRoutingProfileNameCallable(const UpdateRoutingProfileNameRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateRoutingProfileName, request);
        }

        /**
         * An Async wrapper for UpdateRoutingProfileName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRoutingProfileNameRequestT = Model::UpdateRoutingProfileNameRequest>
        void UpdateRoutingProfileNameAsync(const UpdateRoutingProfileNameRequestT& request, const UpdateRoutingProfileNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateRoutingProfileName, request, handler, context);
        }

        /**
         * <p>Updates the properties associated with a set of queues for a routing
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRoutingProfileQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoutingProfileQueuesOutcome UpdateRoutingProfileQueues(const Model::UpdateRoutingProfileQueuesRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoutingProfileQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRoutingProfileQueuesRequestT = Model::UpdateRoutingProfileQueuesRequest>
        Model::UpdateRoutingProfileQueuesOutcomeCallable UpdateRoutingProfileQueuesCallable(const UpdateRoutingProfileQueuesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateRoutingProfileQueues, request);
        }

        /**
         * An Async wrapper for UpdateRoutingProfileQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRoutingProfileQueuesRequestT = Model::UpdateRoutingProfileQueuesRequest>
        void UpdateRoutingProfileQueuesAsync(const UpdateRoutingProfileQueuesRequestT& request, const UpdateRoutingProfileQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateRoutingProfileQueues, request, handler, context);
        }

        /**
         * <p>Updates a rule for the specified Amazon Connect instance.</p> <p>Use the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/connect-rules-language.html">Rules
         * Function language</a> to code conditions for the rule. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleOutcome UpdateRule(const Model::UpdateRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRuleRequestT = Model::UpdateRuleRequest>
        Model::UpdateRuleOutcomeCallable UpdateRuleCallable(const UpdateRuleRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateRule, request);
        }

        /**
         * An Async wrapper for UpdateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRuleRequestT = Model::UpdateRuleRequest>
        void UpdateRuleAsync(const UpdateRuleRequestT& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateRule, request, handler, context);
        }

        /**
         * <p>Updates a security profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityProfileOutcome UpdateSecurityProfile(const Model::UpdateSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSecurityProfileRequestT = Model::UpdateSecurityProfileRequest>
        Model::UpdateSecurityProfileOutcomeCallable UpdateSecurityProfileCallable(const UpdateSecurityProfileRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateSecurityProfile, request);
        }

        /**
         * An Async wrapper for UpdateSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSecurityProfileRequestT = Model::UpdateSecurityProfileRequest>
        void UpdateSecurityProfileAsync(const UpdateSecurityProfileRequestT& request, const UpdateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateSecurityProfile, request, handler, context);
        }

        /**
         * <p>Updates details about a specific task template in the specified Amazon
         * Connect instance. This operation does not support partial updates. Instead it
         * does a full update of template content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateTaskTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTaskTemplateOutcome UpdateTaskTemplate(const Model::UpdateTaskTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateTaskTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTaskTemplateRequestT = Model::UpdateTaskTemplateRequest>
        Model::UpdateTaskTemplateOutcomeCallable UpdateTaskTemplateCallable(const UpdateTaskTemplateRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateTaskTemplate, request);
        }

        /**
         * An Async wrapper for UpdateTaskTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTaskTemplateRequestT = Model::UpdateTaskTemplateRequest>
        void UpdateTaskTemplateAsync(const UpdateTaskTemplateRequestT& request, const UpdateTaskTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateTaskTemplate, request, handler, context);
        }

        /**
         * <p>Updates the traffic distribution for a given traffic distribution group. </p>
         *  <p>The <code>SignInConfig</code> distribution is available only on a
         * default <code>TrafficDistributionGroup</code> (see the <code>IsDefault</code>
         * parameter in the <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_TrafficDistributionGroup.html">TrafficDistributionGroup</a>
         * data type). If you call <code>UpdateTrafficDistribution</code> with a modified
         * <code>SignInConfig</code> and a non-default
         * <code>TrafficDistributionGroup</code>, an <code>InvalidRequestException</code>
         * is returned.</p>  <p>For more information about updating a traffic
         * distribution group, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/update-telephony-traffic-distribution.html">Update
         * telephony traffic distribution across Amazon Web Services Regions </a> in the
         * <i>Amazon Connect Administrator Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateTrafficDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrafficDistributionOutcome UpdateTrafficDistribution(const Model::UpdateTrafficDistributionRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrafficDistribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTrafficDistributionRequestT = Model::UpdateTrafficDistributionRequest>
        Model::UpdateTrafficDistributionOutcomeCallable UpdateTrafficDistributionCallable(const UpdateTrafficDistributionRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateTrafficDistribution, request);
        }

        /**
         * An Async wrapper for UpdateTrafficDistribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTrafficDistributionRequestT = Model::UpdateTrafficDistributionRequest>
        void UpdateTrafficDistributionAsync(const UpdateTrafficDistributionRequestT& request, const UpdateTrafficDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateTrafficDistribution, request, handler, context);
        }

        /**
         * <p>Assigns the specified hierarchy group to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserHierarchyOutcome UpdateUserHierarchy(const Model::UpdateUserHierarchyRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserHierarchy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserHierarchyRequestT = Model::UpdateUserHierarchyRequest>
        Model::UpdateUserHierarchyOutcomeCallable UpdateUserHierarchyCallable(const UpdateUserHierarchyRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateUserHierarchy, request);
        }

        /**
         * An Async wrapper for UpdateUserHierarchy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserHierarchyRequestT = Model::UpdateUserHierarchyRequest>
        void UpdateUserHierarchyAsync(const UpdateUserHierarchyRequestT& request, const UpdateUserHierarchyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateUserHierarchy, request, handler, context);
        }

        /**
         * <p>Updates the name of the user hierarchy group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchyGroupName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserHierarchyGroupNameOutcome UpdateUserHierarchyGroupName(const Model::UpdateUserHierarchyGroupNameRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserHierarchyGroupName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserHierarchyGroupNameRequestT = Model::UpdateUserHierarchyGroupNameRequest>
        Model::UpdateUserHierarchyGroupNameOutcomeCallable UpdateUserHierarchyGroupNameCallable(const UpdateUserHierarchyGroupNameRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateUserHierarchyGroupName, request);
        }

        /**
         * An Async wrapper for UpdateUserHierarchyGroupName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserHierarchyGroupNameRequestT = Model::UpdateUserHierarchyGroupNameRequest>
        void UpdateUserHierarchyGroupNameAsync(const UpdateUserHierarchyGroupNameRequestT& request, const UpdateUserHierarchyGroupNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateUserHierarchyGroupName, request, handler, context);
        }

        /**
         * <p>Updates the user hierarchy structure: add, remove, and rename user hierarchy
         * levels.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserHierarchyStructure">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserHierarchyStructureOutcome UpdateUserHierarchyStructure(const Model::UpdateUserHierarchyStructureRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserHierarchyStructure that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserHierarchyStructureRequestT = Model::UpdateUserHierarchyStructureRequest>
        Model::UpdateUserHierarchyStructureOutcomeCallable UpdateUserHierarchyStructureCallable(const UpdateUserHierarchyStructureRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateUserHierarchyStructure, request);
        }

        /**
         * An Async wrapper for UpdateUserHierarchyStructure that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserHierarchyStructureRequestT = Model::UpdateUserHierarchyStructureRequest>
        void UpdateUserHierarchyStructureAsync(const UpdateUserHierarchyStructureRequestT& request, const UpdateUserHierarchyStructureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateUserHierarchyStructure, request, handler, context);
        }

        /**
         * <p>Updates the identity information for the specified user.</p> 
         * <p>We strongly recommend limiting who has the ability to invoke
         * <code>UpdateUserIdentityInfo</code>. Someone with that ability can change the
         * login credentials of other users by changing their email address. This poses a
         * security risk to your organization. They can change the email address of a user
         * to the attacker's email address, and then reset the password through email. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-best-practices.html">Best
         * Practices for Security Profiles</a> in the <i>Amazon Connect Administrator
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserIdentityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserIdentityInfoOutcome UpdateUserIdentityInfo(const Model::UpdateUserIdentityInfoRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserIdentityInfo that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserIdentityInfoRequestT = Model::UpdateUserIdentityInfoRequest>
        Model::UpdateUserIdentityInfoOutcomeCallable UpdateUserIdentityInfoCallable(const UpdateUserIdentityInfoRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateUserIdentityInfo, request);
        }

        /**
         * An Async wrapper for UpdateUserIdentityInfo that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserIdentityInfoRequestT = Model::UpdateUserIdentityInfoRequest>
        void UpdateUserIdentityInfoAsync(const UpdateUserIdentityInfoRequestT& request, const UpdateUserIdentityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateUserIdentityInfo, request, handler, context);
        }

        /**
         * <p>Updates the phone configuration settings for the specified
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserPhoneConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserPhoneConfigOutcome UpdateUserPhoneConfig(const Model::UpdateUserPhoneConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserPhoneConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserPhoneConfigRequestT = Model::UpdateUserPhoneConfigRequest>
        Model::UpdateUserPhoneConfigOutcomeCallable UpdateUserPhoneConfigCallable(const UpdateUserPhoneConfigRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateUserPhoneConfig, request);
        }

        /**
         * An Async wrapper for UpdateUserPhoneConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserPhoneConfigRequestT = Model::UpdateUserPhoneConfigRequest>
        void UpdateUserPhoneConfigAsync(const UpdateUserPhoneConfigRequestT& request, const UpdateUserPhoneConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateUserPhoneConfig, request, handler, context);
        }

        /**
         * <p>Updates the properties associated with the proficiencies of a
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserProficiencies">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserProficienciesOutcome UpdateUserProficiencies(const Model::UpdateUserProficienciesRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserProficiencies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserProficienciesRequestT = Model::UpdateUserProficienciesRequest>
        Model::UpdateUserProficienciesOutcomeCallable UpdateUserProficienciesCallable(const UpdateUserProficienciesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateUserProficiencies, request);
        }

        /**
         * An Async wrapper for UpdateUserProficiencies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserProficienciesRequestT = Model::UpdateUserProficienciesRequest>
        void UpdateUserProficienciesAsync(const UpdateUserProficienciesRequestT& request, const UpdateUserProficienciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateUserProficiencies, request, handler, context);
        }

        /**
         * <p>Assigns the specified routing profile to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserRoutingProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserRoutingProfileOutcome UpdateUserRoutingProfile(const Model::UpdateUserRoutingProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserRoutingProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserRoutingProfileRequestT = Model::UpdateUserRoutingProfileRequest>
        Model::UpdateUserRoutingProfileOutcomeCallable UpdateUserRoutingProfileCallable(const UpdateUserRoutingProfileRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateUserRoutingProfile, request);
        }

        /**
         * An Async wrapper for UpdateUserRoutingProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserRoutingProfileRequestT = Model::UpdateUserRoutingProfileRequest>
        void UpdateUserRoutingProfileAsync(const UpdateUserRoutingProfileRequestT& request, const UpdateUserRoutingProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateUserRoutingProfile, request, handler, context);
        }

        /**
         * <p>Assigns the specified security profiles to the specified user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateUserSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserSecurityProfilesOutcome UpdateUserSecurityProfiles(const Model::UpdateUserSecurityProfilesRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserSecurityProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserSecurityProfilesRequestT = Model::UpdateUserSecurityProfilesRequest>
        Model::UpdateUserSecurityProfilesOutcomeCallable UpdateUserSecurityProfilesCallable(const UpdateUserSecurityProfilesRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateUserSecurityProfiles, request);
        }

        /**
         * An Async wrapper for UpdateUserSecurityProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserSecurityProfilesRequestT = Model::UpdateUserSecurityProfilesRequest>
        void UpdateUserSecurityProfilesAsync(const UpdateUserSecurityProfilesRequestT& request, const UpdateUserSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateUserSecurityProfiles, request, handler, context);
        }

        /**
         * <p>Updates the view content of the given view identifier in the specified Amazon
         * Connect instance.</p> <p>It performs content validation if <code>Status</code>
         * is set to <code>SAVED</code> and performs full content validation if
         * <code>Status</code> is <code>PUBLISHED</code>. Note that the <code>$SAVED</code>
         * alias' content will always be updated, but the <code>$LATEST</code> alias'
         * content will only be updated if <code>Status</code> is
         * <code>PUBLISHED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateViewContent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateViewContentOutcome UpdateViewContent(const Model::UpdateViewContentRequest& request) const;

        /**
         * A Callable wrapper for UpdateViewContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateViewContentRequestT = Model::UpdateViewContentRequest>
        Model::UpdateViewContentOutcomeCallable UpdateViewContentCallable(const UpdateViewContentRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateViewContent, request);
        }

        /**
         * An Async wrapper for UpdateViewContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateViewContentRequestT = Model::UpdateViewContentRequest>
        void UpdateViewContentAsync(const UpdateViewContentRequestT& request, const UpdateViewContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateViewContent, request, handler, context);
        }

        /**
         * <p>Updates the view metadata. Note that either <code>Name</code> or
         * <code>Description</code> must be provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UpdateViewMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateViewMetadataOutcome UpdateViewMetadata(const Model::UpdateViewMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateViewMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateViewMetadataRequestT = Model::UpdateViewMetadataRequest>
        Model::UpdateViewMetadataOutcomeCallable UpdateViewMetadataCallable(const UpdateViewMetadataRequestT& request) const
        {
            return SubmitCallable(&ConnectClient::UpdateViewMetadata, request);
        }

        /**
         * An Async wrapper for UpdateViewMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateViewMetadataRequestT = Model::UpdateViewMetadataRequest>
        void UpdateViewMetadataAsync(const UpdateViewMetadataRequestT& request, const UpdateViewMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectClient::UpdateViewMetadata, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ConnectClient>;
      void init(const ConnectClientConfiguration& clientConfiguration);

      ConnectClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ConnectEndpointProviderBase> m_endpointProvider;
  };

} // namespace Connect
} // namespace Aws
