/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/LexModelsV2ServiceClientModel.h>

namespace Aws
{
namespace LexModelsV2
{
  /**
   * <p/>
   */
  class AWS_LEXMODELSV2_API LexModelsV2Client : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<LexModelsV2Client>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef LexModelsV2ClientConfiguration ClientConfigurationType;
      typedef LexModelsV2EndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelsV2Client(const Aws::LexModelsV2::LexModelsV2ClientConfiguration& clientConfiguration = Aws::LexModelsV2::LexModelsV2ClientConfiguration(),
                          std::shared_ptr<LexModelsV2EndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelsV2Client(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<LexModelsV2EndpointProviderBase> endpointProvider = nullptr,
                          const Aws::LexModelsV2::LexModelsV2ClientConfiguration& clientConfiguration = Aws::LexModelsV2::LexModelsV2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LexModelsV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<LexModelsV2EndpointProviderBase> endpointProvider = nullptr,
                          const Aws::LexModelsV2::LexModelsV2ClientConfiguration& clientConfiguration = Aws::LexModelsV2::LexModelsV2ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelsV2Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelsV2Client(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LexModelsV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~LexModelsV2Client();

        /**
         * <p>Create a batch of custom vocabulary items for a given bot locale's custom
         * vocabulary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BatchCreateCustomVocabularyItem">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateCustomVocabularyItemOutcome BatchCreateCustomVocabularyItem(const Model::BatchCreateCustomVocabularyItemRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateCustomVocabularyItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCreateCustomVocabularyItemRequestT = Model::BatchCreateCustomVocabularyItemRequest>
        Model::BatchCreateCustomVocabularyItemOutcomeCallable BatchCreateCustomVocabularyItemCallable(const BatchCreateCustomVocabularyItemRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::BatchCreateCustomVocabularyItem, request);
        }

        /**
         * An Async wrapper for BatchCreateCustomVocabularyItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreateCustomVocabularyItemRequestT = Model::BatchCreateCustomVocabularyItemRequest>
        void BatchCreateCustomVocabularyItemAsync(const BatchCreateCustomVocabularyItemRequestT& request, const BatchCreateCustomVocabularyItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::BatchCreateCustomVocabularyItem, request, handler, context);
        }

        /**
         * <p>Delete a batch of custom vocabulary items for a given bot locale's custom
         * vocabulary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BatchDeleteCustomVocabularyItem">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteCustomVocabularyItemOutcome BatchDeleteCustomVocabularyItem(const Model::BatchDeleteCustomVocabularyItemRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteCustomVocabularyItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteCustomVocabularyItemRequestT = Model::BatchDeleteCustomVocabularyItemRequest>
        Model::BatchDeleteCustomVocabularyItemOutcomeCallable BatchDeleteCustomVocabularyItemCallable(const BatchDeleteCustomVocabularyItemRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::BatchDeleteCustomVocabularyItem, request);
        }

        /**
         * An Async wrapper for BatchDeleteCustomVocabularyItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteCustomVocabularyItemRequestT = Model::BatchDeleteCustomVocabularyItemRequest>
        void BatchDeleteCustomVocabularyItemAsync(const BatchDeleteCustomVocabularyItemRequestT& request, const BatchDeleteCustomVocabularyItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::BatchDeleteCustomVocabularyItem, request, handler, context);
        }

        /**
         * <p>Update a batch of custom vocabulary items for a given bot locale's custom
         * vocabulary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BatchUpdateCustomVocabularyItem">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateCustomVocabularyItemOutcome BatchUpdateCustomVocabularyItem(const Model::BatchUpdateCustomVocabularyItemRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateCustomVocabularyItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateCustomVocabularyItemRequestT = Model::BatchUpdateCustomVocabularyItemRequest>
        Model::BatchUpdateCustomVocabularyItemOutcomeCallable BatchUpdateCustomVocabularyItemCallable(const BatchUpdateCustomVocabularyItemRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::BatchUpdateCustomVocabularyItem, request);
        }

        /**
         * An Async wrapper for BatchUpdateCustomVocabularyItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateCustomVocabularyItemRequestT = Model::BatchUpdateCustomVocabularyItemRequest>
        void BatchUpdateCustomVocabularyItemAsync(const BatchUpdateCustomVocabularyItemRequestT& request, const BatchUpdateCustomVocabularyItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::BatchUpdateCustomVocabularyItem, request, handler, context);
        }

        /**
         * <p>Builds a bot, its intents, and its slot types into a specific locale. A bot
         * can be built into multiple locales. At runtime the locale is used to choose a
         * specific build of the bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BuildBotLocale">AWS
         * API Reference</a></p>
         */
        virtual Model::BuildBotLocaleOutcome BuildBotLocale(const Model::BuildBotLocaleRequest& request) const;

        /**
         * A Callable wrapper for BuildBotLocale that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BuildBotLocaleRequestT = Model::BuildBotLocaleRequest>
        Model::BuildBotLocaleOutcomeCallable BuildBotLocaleCallable(const BuildBotLocaleRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::BuildBotLocale, request);
        }

        /**
         * An Async wrapper for BuildBotLocale that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BuildBotLocaleRequestT = Model::BuildBotLocaleRequest>
        void BuildBotLocaleAsync(const BuildBotLocaleRequestT& request, const BuildBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::BuildBotLocale, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Lex conversational bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBotOutcome CreateBot(const Model::CreateBotRequest& request) const;

        /**
         * A Callable wrapper for CreateBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBotRequestT = Model::CreateBotRequest>
        Model::CreateBotOutcomeCallable CreateBotCallable(const CreateBotRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::CreateBot, request);
        }

        /**
         * An Async wrapper for CreateBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBotRequestT = Model::CreateBotRequest>
        void CreateBotAsync(const CreateBotRequestT& request, const CreateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::CreateBot, request, handler, context);
        }

        /**
         * <p>Creates an alias for the specified version of a bot. Use an alias to enable
         * you to change the version of a bot without updating applications that use the
         * bot.</p> <p>For example, you can create an alias called "PROD" that your
         * applications use to call the Amazon Lex bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBotAliasOutcome CreateBotAlias(const Model::CreateBotAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateBotAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBotAliasRequestT = Model::CreateBotAliasRequest>
        Model::CreateBotAliasOutcomeCallable CreateBotAliasCallable(const CreateBotAliasRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::CreateBotAlias, request);
        }

        /**
         * An Async wrapper for CreateBotAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBotAliasRequestT = Model::CreateBotAliasRequest>
        void CreateBotAliasAsync(const CreateBotAliasRequestT& request, const CreateBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::CreateBotAlias, request, handler, context);
        }

        /**
         * <p>Creates a locale in the bot. The locale contains the intents and slot types
         * that the bot uses in conversations with users in the specified language and
         * locale. You must add a locale to a bot before you can add intents and slot types
         * to the bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBotLocale">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBotLocaleOutcome CreateBotLocale(const Model::CreateBotLocaleRequest& request) const;

        /**
         * A Callable wrapper for CreateBotLocale that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBotLocaleRequestT = Model::CreateBotLocaleRequest>
        Model::CreateBotLocaleOutcomeCallable CreateBotLocaleCallable(const CreateBotLocaleRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::CreateBotLocale, request);
        }

        /**
         * An Async wrapper for CreateBotLocale that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBotLocaleRequestT = Model::CreateBotLocaleRequest>
        void CreateBotLocaleAsync(const CreateBotLocaleRequestT& request, const CreateBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::CreateBotLocale, request, handler, context);
        }

        /**
         * <p>Action to create a replication of the source bot in the secondary
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBotReplica">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBotReplicaOutcome CreateBotReplica(const Model::CreateBotReplicaRequest& request) const;

        /**
         * A Callable wrapper for CreateBotReplica that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBotReplicaRequestT = Model::CreateBotReplicaRequest>
        Model::CreateBotReplicaOutcomeCallable CreateBotReplicaCallable(const CreateBotReplicaRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::CreateBotReplica, request);
        }

        /**
         * An Async wrapper for CreateBotReplica that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBotReplicaRequestT = Model::CreateBotReplicaRequest>
        void CreateBotReplicaAsync(const CreateBotReplicaRequestT& request, const CreateBotReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::CreateBotReplica, request, handler, context);
        }

        /**
         * <p>Creates an immutable version of the bot. When you create the first version of
         * a bot, Amazon Lex sets the version number to 1. Subsequent bot versions increase
         * in an increment of 1. The version number will always represent the total number
         * of versions created of the bot, not the current number of versions. If a bot
         * version is deleted, that bot version number will not be reused.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBotVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBotVersionOutcome CreateBotVersion(const Model::CreateBotVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateBotVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBotVersionRequestT = Model::CreateBotVersionRequest>
        Model::CreateBotVersionOutcomeCallable CreateBotVersionCallable(const CreateBotVersionRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::CreateBotVersion, request);
        }

        /**
         * An Async wrapper for CreateBotVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBotVersionRequestT = Model::CreateBotVersionRequest>
        void CreateBotVersionAsync(const CreateBotVersionRequestT& request, const CreateBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::CreateBotVersion, request, handler, context);
        }

        /**
         * <p>Creates a zip archive containing the contents of a bot or a bot locale. The
         * archive contains a directory structure that contains JSON files that define the
         * bot.</p> <p>You can create an archive that contains the complete definition of a
         * bot, or you can specify that the archive contain only the definition of a single
         * bot locale.</p> <p>For more information about exporting bots, and about the
         * structure of the export archive, see <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/importing-exporting.html">
         * Importing and exporting bots </a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateExport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExportOutcome CreateExport(const Model::CreateExportRequest& request) const;

        /**
         * A Callable wrapper for CreateExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateExportRequestT = Model::CreateExportRequest>
        Model::CreateExportOutcomeCallable CreateExportCallable(const CreateExportRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::CreateExport, request);
        }

        /**
         * An Async wrapper for CreateExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateExportRequestT = Model::CreateExportRequest>
        void CreateExportAsync(const CreateExportRequestT& request, const CreateExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::CreateExport, request, handler, context);
        }

        /**
         * <p>Creates an intent.</p> <p>To define the interaction between the user and your
         * bot, you define one or more intents. For example, for a pizza ordering bot you
         * would create an <code>OrderPizza</code> intent.</p> <p>When you create an
         * intent, you must provide a name. You can optionally provide the following:</p>
         * <ul> <li> <p>Sample utterances. For example, "I want to order a pizza" and "Can
         * I order a pizza." You can't provide utterances for built-in intents.</p> </li>
         * <li> <p>Information to be gathered. You specify slots for the information that
         * you bot requests from the user. You can specify standard slot types, such as
         * date and time, or custom slot types for your application.</p> </li> <li> <p>How
         * the intent is fulfilled. You can provide a Lambda function or configure the
         * intent to return the intent information to your client application. If you use a
         * Lambda function, Amazon Lex invokes the function when all of the intent
         * information is available.</p> </li> <li> <p>A confirmation prompt to send to the
         * user to confirm an intent. For example, "Shall I order your pizza?"</p> </li>
         * <li> <p>A conclusion statement to send to the user after the intent is
         * fulfilled. For example, "I ordered your pizza."</p> </li> <li> <p>A follow-up
         * prompt that asks the user for additional activity. For example, "Do you want a
         * drink with your pizza?"</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIntentOutcome CreateIntent(const Model::CreateIntentRequest& request) const;

        /**
         * A Callable wrapper for CreateIntent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIntentRequestT = Model::CreateIntentRequest>
        Model::CreateIntentOutcomeCallable CreateIntentCallable(const CreateIntentRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::CreateIntent, request);
        }

        /**
         * An Async wrapper for CreateIntent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIntentRequestT = Model::CreateIntentRequest>
        void CreateIntentAsync(const CreateIntentRequestT& request, const CreateIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::CreateIntent, request, handler, context);
        }

        /**
         * <p>Creates a new resource policy with the specified policy
         * statements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourcePolicyOutcome CreateResourcePolicy(const Model::CreateResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResourcePolicyRequestT = Model::CreateResourcePolicyRequest>
        Model::CreateResourcePolicyOutcomeCallable CreateResourcePolicyCallable(const CreateResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::CreateResourcePolicy, request);
        }

        /**
         * An Async wrapper for CreateResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResourcePolicyRequestT = Model::CreateResourcePolicyRequest>
        void CreateResourcePolicyAsync(const CreateResourcePolicyRequestT& request, const CreateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::CreateResourcePolicy, request, handler, context);
        }

        /**
         * <p>Adds a new resource policy statement to a bot or bot alias. If a resource
         * policy exists, the statement is added to the current resource policy. If a
         * policy doesn't exist, a new policy is created.</p> <p>You can't create a
         * resource policy statement that allows cross-account access.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateResourcePolicyStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourcePolicyStatementOutcome CreateResourcePolicyStatement(const Model::CreateResourcePolicyStatementRequest& request) const;

        /**
         * A Callable wrapper for CreateResourcePolicyStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResourcePolicyStatementRequestT = Model::CreateResourcePolicyStatementRequest>
        Model::CreateResourcePolicyStatementOutcomeCallable CreateResourcePolicyStatementCallable(const CreateResourcePolicyStatementRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::CreateResourcePolicyStatement, request);
        }

        /**
         * An Async wrapper for CreateResourcePolicyStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResourcePolicyStatementRequestT = Model::CreateResourcePolicyStatementRequest>
        void CreateResourcePolicyStatementAsync(const CreateResourcePolicyStatementRequestT& request, const CreateResourcePolicyStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::CreateResourcePolicyStatement, request, handler, context);
        }

        /**
         * <p>Creates a slot in an intent. A slot is a variable needed to fulfill an
         * intent. For example, an <code>OrderPizza</code> intent might need slots for
         * size, crust, and number of pizzas. For each slot, you define one or more
         * utterances that Amazon Lex uses to elicit a response from the user.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateSlot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSlotOutcome CreateSlot(const Model::CreateSlotRequest& request) const;

        /**
         * A Callable wrapper for CreateSlot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSlotRequestT = Model::CreateSlotRequest>
        Model::CreateSlotOutcomeCallable CreateSlotCallable(const CreateSlotRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::CreateSlot, request);
        }

        /**
         * An Async wrapper for CreateSlot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSlotRequestT = Model::CreateSlotRequest>
        void CreateSlotAsync(const CreateSlotRequestT& request, const CreateSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::CreateSlot, request, handler, context);
        }

        /**
         * <p>Creates a custom slot type</p> <p> To create a custom slot type, specify a
         * name for the slot type and a set of enumeration values, the values that a slot
         * of this type can assume. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateSlotType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSlotTypeOutcome CreateSlotType(const Model::CreateSlotTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateSlotType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSlotTypeRequestT = Model::CreateSlotTypeRequest>
        Model::CreateSlotTypeOutcomeCallable CreateSlotTypeCallable(const CreateSlotTypeRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::CreateSlotType, request);
        }

        /**
         * An Async wrapper for CreateSlotType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSlotTypeRequestT = Model::CreateSlotTypeRequest>
        void CreateSlotTypeAsync(const CreateSlotTypeRequestT& request, const CreateSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::CreateSlotType, request, handler, context);
        }

        /**
         * <p>Create a report that describes the differences between the bot and the test
         * set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateTestSetDiscrepancyReport">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTestSetDiscrepancyReportOutcome CreateTestSetDiscrepancyReport(const Model::CreateTestSetDiscrepancyReportRequest& request) const;

        /**
         * A Callable wrapper for CreateTestSetDiscrepancyReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTestSetDiscrepancyReportRequestT = Model::CreateTestSetDiscrepancyReportRequest>
        Model::CreateTestSetDiscrepancyReportOutcomeCallable CreateTestSetDiscrepancyReportCallable(const CreateTestSetDiscrepancyReportRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::CreateTestSetDiscrepancyReport, request);
        }

        /**
         * An Async wrapper for CreateTestSetDiscrepancyReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTestSetDiscrepancyReportRequestT = Model::CreateTestSetDiscrepancyReportRequest>
        void CreateTestSetDiscrepancyReportAsync(const CreateTestSetDiscrepancyReportRequestT& request, const CreateTestSetDiscrepancyReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::CreateTestSetDiscrepancyReport, request, handler, context);
        }

        /**
         * <p>Gets a pre-signed S3 write URL that you use to upload the zip archive when
         * importing a bot or a bot locale. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateUploadUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUploadUrlOutcome CreateUploadUrl(const Model::CreateUploadUrlRequest& request) const;

        /**
         * A Callable wrapper for CreateUploadUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUploadUrlRequestT = Model::CreateUploadUrlRequest>
        Model::CreateUploadUrlOutcomeCallable CreateUploadUrlCallable(const CreateUploadUrlRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::CreateUploadUrl, request);
        }

        /**
         * An Async wrapper for CreateUploadUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUploadUrlRequestT = Model::CreateUploadUrlRequest>
        void CreateUploadUrlAsync(const CreateUploadUrlRequestT& request, const CreateUploadUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::CreateUploadUrl, request, handler, context);
        }

        /**
         * <p>Deletes all versions of a bot, including the <code>Draft</code> version. To
         * delete a specific version, use the <code>DeleteBotVersion</code> operation.</p>
         * <p>When you delete a bot, all of the resources contained in the bot are also
         * deleted. Deleting a bot removes all locales, intents, slot, and slot types
         * defined for the bot.</p> <p>If a bot has an alias, the <code>DeleteBot</code>
         * operation returns a <code>ResourceInUseException</code> exception. If you want
         * to delete the bot and the alias, set the <code>skipResourceInUseCheck</code>
         * parameter to <code>true</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotOutcome DeleteBot(const Model::DeleteBotRequest& request) const;

        /**
         * A Callable wrapper for DeleteBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBotRequestT = Model::DeleteBotRequest>
        Model::DeleteBotOutcomeCallable DeleteBotCallable(const DeleteBotRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteBot, request);
        }

        /**
         * An Async wrapper for DeleteBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBotRequestT = Model::DeleteBotRequest>
        void DeleteBotAsync(const DeleteBotRequestT& request, const DeleteBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteBot, request, handler, context);
        }

        /**
         * <p>Deletes the specified bot alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotAliasOutcome DeleteBotAlias(const Model::DeleteBotAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteBotAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBotAliasRequestT = Model::DeleteBotAliasRequest>
        Model::DeleteBotAliasOutcomeCallable DeleteBotAliasCallable(const DeleteBotAliasRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteBotAlias, request);
        }

        /**
         * An Async wrapper for DeleteBotAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBotAliasRequestT = Model::DeleteBotAliasRequest>
        void DeleteBotAliasAsync(const DeleteBotAliasRequestT& request, const DeleteBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteBotAlias, request, handler, context);
        }

        /**
         * <p>Removes a locale from a bot.</p> <p>When you delete a locale, all intents,
         * slots, and slot types defined for the locale are also deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotLocale">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotLocaleOutcome DeleteBotLocale(const Model::DeleteBotLocaleRequest& request) const;

        /**
         * A Callable wrapper for DeleteBotLocale that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBotLocaleRequestT = Model::DeleteBotLocaleRequest>
        Model::DeleteBotLocaleOutcomeCallable DeleteBotLocaleCallable(const DeleteBotLocaleRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteBotLocale, request);
        }

        /**
         * An Async wrapper for DeleteBotLocale that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBotLocaleRequestT = Model::DeleteBotLocaleRequest>
        void DeleteBotLocaleAsync(const DeleteBotLocaleRequestT& request, const DeleteBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteBotLocale, request, handler, context);
        }

        /**
         * <p>The action to delete the replicated bot in the secondary
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotReplica">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotReplicaOutcome DeleteBotReplica(const Model::DeleteBotReplicaRequest& request) const;

        /**
         * A Callable wrapper for DeleteBotReplica that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBotReplicaRequestT = Model::DeleteBotReplicaRequest>
        Model::DeleteBotReplicaOutcomeCallable DeleteBotReplicaCallable(const DeleteBotReplicaRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteBotReplica, request);
        }

        /**
         * An Async wrapper for DeleteBotReplica that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBotReplicaRequestT = Model::DeleteBotReplicaRequest>
        void DeleteBotReplicaAsync(const DeleteBotReplicaRequestT& request, const DeleteBotReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteBotReplica, request, handler, context);
        }

        /**
         * <p>Deletes a specific version of a bot. To delete all versions of a bot, use the
         * <a
         * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_DeleteBot.html">DeleteBot</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotVersionOutcome DeleteBotVersion(const Model::DeleteBotVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteBotVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBotVersionRequestT = Model::DeleteBotVersionRequest>
        Model::DeleteBotVersionOutcomeCallable DeleteBotVersionCallable(const DeleteBotVersionRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteBotVersion, request);
        }

        /**
         * An Async wrapper for DeleteBotVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBotVersionRequestT = Model::DeleteBotVersionRequest>
        void DeleteBotVersionAsync(const DeleteBotVersionRequestT& request, const DeleteBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteBotVersion, request, handler, context);
        }

        /**
         * <p>Removes a custom vocabulary from the specified locale in the specified
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteCustomVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomVocabularyOutcome DeleteCustomVocabulary(const Model::DeleteCustomVocabularyRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomVocabulary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomVocabularyRequestT = Model::DeleteCustomVocabularyRequest>
        Model::DeleteCustomVocabularyOutcomeCallable DeleteCustomVocabularyCallable(const DeleteCustomVocabularyRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteCustomVocabulary, request);
        }

        /**
         * An Async wrapper for DeleteCustomVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomVocabularyRequestT = Model::DeleteCustomVocabularyRequest>
        void DeleteCustomVocabularyAsync(const DeleteCustomVocabularyRequestT& request, const DeleteCustomVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteCustomVocabulary, request, handler, context);
        }

        /**
         * <p>Removes a previous export and the associated files stored in an S3
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteExport">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExportOutcome DeleteExport(const Model::DeleteExportRequest& request) const;

        /**
         * A Callable wrapper for DeleteExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteExportRequestT = Model::DeleteExportRequest>
        Model::DeleteExportOutcomeCallable DeleteExportCallable(const DeleteExportRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteExport, request);
        }

        /**
         * An Async wrapper for DeleteExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteExportRequestT = Model::DeleteExportRequest>
        void DeleteExportAsync(const DeleteExportRequestT& request, const DeleteExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteExport, request, handler, context);
        }

        /**
         * <p>Removes a previous import and the associated file stored in an S3
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteImport">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImportOutcome DeleteImport(const Model::DeleteImportRequest& request) const;

        /**
         * A Callable wrapper for DeleteImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteImportRequestT = Model::DeleteImportRequest>
        Model::DeleteImportOutcomeCallable DeleteImportCallable(const DeleteImportRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteImport, request);
        }

        /**
         * An Async wrapper for DeleteImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteImportRequestT = Model::DeleteImportRequest>
        void DeleteImportAsync(const DeleteImportRequestT& request, const DeleteImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteImport, request, handler, context);
        }

        /**
         * <p>Removes the specified intent.</p> <p>Deleting an intent also deletes the
         * slots associated with the intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntentOutcome DeleteIntent(const Model::DeleteIntentRequest& request) const;

        /**
         * A Callable wrapper for DeleteIntent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIntentRequestT = Model::DeleteIntentRequest>
        Model::DeleteIntentOutcomeCallable DeleteIntentCallable(const DeleteIntentRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteIntent, request);
        }

        /**
         * An Async wrapper for DeleteIntent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIntentRequestT = Model::DeleteIntentRequest>
        void DeleteIntentAsync(const DeleteIntentRequestT& request, const DeleteIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteIntent, request, handler, context);
        }

        /**
         * <p>Removes an existing policy from a bot or bot alias. If the resource doesn't
         * have a policy attached, Amazon Lex returns an exception.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes a policy statement from a resource policy. If you delete the last
         * statement from a policy, the policy is deleted. If you specify a statement ID
         * that doesn't exist in the policy, or if the bot or bot alias doesn't have a
         * policy attached, Amazon Lex returns an exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteResourcePolicyStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyStatementOutcome DeleteResourcePolicyStatement(const Model::DeleteResourcePolicyStatementRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicyStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyStatementRequestT = Model::DeleteResourcePolicyStatementRequest>
        Model::DeleteResourcePolicyStatementOutcomeCallable DeleteResourcePolicyStatementCallable(const DeleteResourcePolicyStatementRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteResourcePolicyStatement, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicyStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyStatementRequestT = Model::DeleteResourcePolicyStatementRequest>
        void DeleteResourcePolicyStatementAsync(const DeleteResourcePolicyStatementRequestT& request, const DeleteResourcePolicyStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteResourcePolicyStatement, request, handler, context);
        }

        /**
         * <p>Deletes the specified slot from an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteSlot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlotOutcome DeleteSlot(const Model::DeleteSlotRequest& request) const;

        /**
         * A Callable wrapper for DeleteSlot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSlotRequestT = Model::DeleteSlotRequest>
        Model::DeleteSlotOutcomeCallable DeleteSlotCallable(const DeleteSlotRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteSlot, request);
        }

        /**
         * An Async wrapper for DeleteSlot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSlotRequestT = Model::DeleteSlotRequest>
        void DeleteSlotAsync(const DeleteSlotRequestT& request, const DeleteSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteSlot, request, handler, context);
        }

        /**
         * <p>Deletes a slot type from a bot locale.</p> <p>If a slot is using the slot
         * type, Amazon Lex throws a <code>ResourceInUseException</code> exception. To
         * avoid the exception, set the <code>skipResourceInUseCheck</code> parameter to
         * <code>true</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteSlotType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlotTypeOutcome DeleteSlotType(const Model::DeleteSlotTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteSlotType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSlotTypeRequestT = Model::DeleteSlotTypeRequest>
        Model::DeleteSlotTypeOutcomeCallable DeleteSlotTypeCallable(const DeleteSlotTypeRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteSlotType, request);
        }

        /**
         * An Async wrapper for DeleteSlotType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSlotTypeRequestT = Model::DeleteSlotTypeRequest>
        void DeleteSlotTypeAsync(const DeleteSlotTypeRequestT& request, const DeleteSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteSlotType, request, handler, context);
        }

        /**
         * <p>The action to delete the selected test set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteTestSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTestSetOutcome DeleteTestSet(const Model::DeleteTestSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteTestSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTestSetRequestT = Model::DeleteTestSetRequest>
        Model::DeleteTestSetOutcomeCallable DeleteTestSetCallable(const DeleteTestSetRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteTestSet, request);
        }

        /**
         * An Async wrapper for DeleteTestSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTestSetRequestT = Model::DeleteTestSetRequest>
        void DeleteTestSetAsync(const DeleteTestSetRequestT& request, const DeleteTestSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteTestSet, request, handler, context);
        }

        /**
         * <p>Deletes stored utterances.</p> <p>Amazon Lex stores the utterances that users
         * send to your bot. Utterances are stored for 15 days for use with the <a
         * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_ListAggregatedUtterances.html">ListAggregatedUtterances</a>
         * operation, and then stored indefinitely for use in improving the ability of your
         * bot to respond to user input..</p> <p>Use the <code>DeleteUtterances</code>
         * operation to manually delete utterances for a specific session. When you use the
         * <code>DeleteUtterances</code> operation, utterances stored for improving your
         * bot's ability to respond to user input are deleted immediately. Utterances
         * stored for use with the <code>ListAggregatedUtterances</code> operation are
         * deleted after 15 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteUtterances">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUtterancesOutcome DeleteUtterances(const Model::DeleteUtterancesRequest& request) const;

        /**
         * A Callable wrapper for DeleteUtterances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUtterancesRequestT = Model::DeleteUtterancesRequest>
        Model::DeleteUtterancesOutcomeCallable DeleteUtterancesCallable(const DeleteUtterancesRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DeleteUtterances, request);
        }

        /**
         * An Async wrapper for DeleteUtterances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUtterancesRequestT = Model::DeleteUtterancesRequest>
        void DeleteUtterancesAsync(const DeleteUtterancesRequestT& request, const DeleteUtterancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DeleteUtterances, request, handler, context);
        }

        /**
         * <p>Provides metadata information about a bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBot">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotOutcome DescribeBot(const Model::DescribeBotRequest& request) const;

        /**
         * A Callable wrapper for DescribeBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBotRequestT = Model::DescribeBotRequest>
        Model::DescribeBotOutcomeCallable DescribeBotCallable(const DescribeBotRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeBot, request);
        }

        /**
         * An Async wrapper for DescribeBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBotRequestT = Model::DescribeBotRequest>
        void DescribeBotAsync(const DescribeBotRequestT& request, const DescribeBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeBot, request, handler, context);
        }

        /**
         * <p>Get information about a specific bot alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotAliasOutcome DescribeBotAlias(const Model::DescribeBotAliasRequest& request) const;

        /**
         * A Callable wrapper for DescribeBotAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBotAliasRequestT = Model::DescribeBotAliasRequest>
        Model::DescribeBotAliasOutcomeCallable DescribeBotAliasCallable(const DescribeBotAliasRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeBotAlias, request);
        }

        /**
         * An Async wrapper for DescribeBotAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBotAliasRequestT = Model::DescribeBotAliasRequest>
        void DescribeBotAliasAsync(const DescribeBotAliasRequestT& request, const DescribeBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeBotAlias, request, handler, context);
        }

        /**
         * <p>Describes the settings that a bot has for a specific locale. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotLocale">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotLocaleOutcome DescribeBotLocale(const Model::DescribeBotLocaleRequest& request) const;

        /**
         * A Callable wrapper for DescribeBotLocale that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBotLocaleRequestT = Model::DescribeBotLocaleRequest>
        Model::DescribeBotLocaleOutcomeCallable DescribeBotLocaleCallable(const DescribeBotLocaleRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeBotLocale, request);
        }

        /**
         * An Async wrapper for DescribeBotLocale that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBotLocaleRequestT = Model::DescribeBotLocaleRequest>
        void DescribeBotLocaleAsync(const DescribeBotLocaleRequestT& request, const DescribeBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeBotLocale, request, handler, context);
        }

        /**
         * <p>Provides metadata information about a bot recommendation. This information
         * will enable you to get a description on the request inputs, to download
         * associated transcripts after processing is complete, and to download intents and
         * slot-types generated by the bot recommendation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotRecommendationOutcome DescribeBotRecommendation(const Model::DescribeBotRecommendationRequest& request) const;

        /**
         * A Callable wrapper for DescribeBotRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBotRecommendationRequestT = Model::DescribeBotRecommendationRequest>
        Model::DescribeBotRecommendationOutcomeCallable DescribeBotRecommendationCallable(const DescribeBotRecommendationRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeBotRecommendation, request);
        }

        /**
         * An Async wrapper for DescribeBotRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBotRecommendationRequestT = Model::DescribeBotRecommendationRequest>
        void DescribeBotRecommendationAsync(const DescribeBotRecommendationRequestT& request, const DescribeBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeBotRecommendation, request, handler, context);
        }

        /**
         * <p>Monitors the bot replication status through the UI console.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotReplica">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotReplicaOutcome DescribeBotReplica(const Model::DescribeBotReplicaRequest& request) const;

        /**
         * A Callable wrapper for DescribeBotReplica that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBotReplicaRequestT = Model::DescribeBotReplicaRequest>
        Model::DescribeBotReplicaOutcomeCallable DescribeBotReplicaCallable(const DescribeBotReplicaRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeBotReplica, request);
        }

        /**
         * An Async wrapper for DescribeBotReplica that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBotReplicaRequestT = Model::DescribeBotReplicaRequest>
        void DescribeBotReplicaAsync(const DescribeBotReplicaRequestT& request, const DescribeBotReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeBotReplica, request, handler, context);
        }

        /**
         * <p>Returns information about a request to generate a bot through natural
         * language description, made through the <code>StartBotResource</code> API. Use
         * the <code>generatedBotLocaleUrl</code> to retrieve the Amazon S3 object
         * containing the bot locale configuration. You can then modify and import this
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotResourceGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotResourceGenerationOutcome DescribeBotResourceGeneration(const Model::DescribeBotResourceGenerationRequest& request) const;

        /**
         * A Callable wrapper for DescribeBotResourceGeneration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBotResourceGenerationRequestT = Model::DescribeBotResourceGenerationRequest>
        Model::DescribeBotResourceGenerationOutcomeCallable DescribeBotResourceGenerationCallable(const DescribeBotResourceGenerationRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeBotResourceGeneration, request);
        }

        /**
         * An Async wrapper for DescribeBotResourceGeneration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBotResourceGenerationRequestT = Model::DescribeBotResourceGenerationRequest>
        void DescribeBotResourceGenerationAsync(const DescribeBotResourceGenerationRequestT& request, const DescribeBotResourceGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeBotResourceGeneration, request, handler, context);
        }

        /**
         * <p>Provides metadata about a version of a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotVersionOutcome DescribeBotVersion(const Model::DescribeBotVersionRequest& request) const;

        /**
         * A Callable wrapper for DescribeBotVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBotVersionRequestT = Model::DescribeBotVersionRequest>
        Model::DescribeBotVersionOutcomeCallable DescribeBotVersionCallable(const DescribeBotVersionRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeBotVersion, request);
        }

        /**
         * An Async wrapper for DescribeBotVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBotVersionRequestT = Model::DescribeBotVersionRequest>
        void DescribeBotVersionAsync(const DescribeBotVersionRequestT& request, const DescribeBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeBotVersion, request, handler, context);
        }

        /**
         * <p>Provides metadata information about a custom vocabulary.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeCustomVocabularyMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomVocabularyMetadataOutcome DescribeCustomVocabularyMetadata(const Model::DescribeCustomVocabularyMetadataRequest& request) const;

        /**
         * A Callable wrapper for DescribeCustomVocabularyMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCustomVocabularyMetadataRequestT = Model::DescribeCustomVocabularyMetadataRequest>
        Model::DescribeCustomVocabularyMetadataOutcomeCallable DescribeCustomVocabularyMetadataCallable(const DescribeCustomVocabularyMetadataRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeCustomVocabularyMetadata, request);
        }

        /**
         * An Async wrapper for DescribeCustomVocabularyMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCustomVocabularyMetadataRequestT = Model::DescribeCustomVocabularyMetadataRequest>
        void DescribeCustomVocabularyMetadataAsync(const DescribeCustomVocabularyMetadataRequestT& request, const DescribeCustomVocabularyMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeCustomVocabularyMetadata, request, handler, context);
        }

        /**
         * <p>Gets information about a specific export.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeExport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportOutcome DescribeExport(const Model::DescribeExportRequest& request) const;

        /**
         * A Callable wrapper for DescribeExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeExportRequestT = Model::DescribeExportRequest>
        Model::DescribeExportOutcomeCallable DescribeExportCallable(const DescribeExportRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeExport, request);
        }

        /**
         * An Async wrapper for DescribeExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeExportRequestT = Model::DescribeExportRequest>
        void DescribeExportAsync(const DescribeExportRequestT& request, const DescribeExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeExport, request, handler, context);
        }

        /**
         * <p>Gets information about a specific import.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeImport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImportOutcome DescribeImport(const Model::DescribeImportRequest& request) const;

        /**
         * A Callable wrapper for DescribeImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeImportRequestT = Model::DescribeImportRequest>
        Model::DescribeImportOutcomeCallable DescribeImportCallable(const DescribeImportRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeImport, request);
        }

        /**
         * An Async wrapper for DescribeImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeImportRequestT = Model::DescribeImportRequest>
        void DescribeImportAsync(const DescribeImportRequestT& request, const DescribeImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeImport, request, handler, context);
        }

        /**
         * <p>Returns metadata about an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIntentOutcome DescribeIntent(const Model::DescribeIntentRequest& request) const;

        /**
         * A Callable wrapper for DescribeIntent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeIntentRequestT = Model::DescribeIntentRequest>
        Model::DescribeIntentOutcomeCallable DescribeIntentCallable(const DescribeIntentRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeIntent, request);
        }

        /**
         * An Async wrapper for DescribeIntent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeIntentRequestT = Model::DescribeIntentRequest>
        void DescribeIntentAsync(const DescribeIntentRequestT& request, const DescribeIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeIntent, request, handler, context);
        }

        /**
         * <p>Gets the resource policy and policy revision for a bot or bot
         * alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePolicyOutcome DescribeResourcePolicy(const Model::DescribeResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribeResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeResourcePolicyRequestT = Model::DescribeResourcePolicyRequest>
        Model::DescribeResourcePolicyOutcomeCallable DescribeResourcePolicyCallable(const DescribeResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeResourcePolicy, request);
        }

        /**
         * An Async wrapper for DescribeResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResourcePolicyRequestT = Model::DescribeResourcePolicyRequest>
        void DescribeResourcePolicyAsync(const DescribeResourcePolicyRequestT& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeResourcePolicy, request, handler, context);
        }

        /**
         * <p>Gets metadata information about a slot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeSlot">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlotOutcome DescribeSlot(const Model::DescribeSlotRequest& request) const;

        /**
         * A Callable wrapper for DescribeSlot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSlotRequestT = Model::DescribeSlotRequest>
        Model::DescribeSlotOutcomeCallable DescribeSlotCallable(const DescribeSlotRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeSlot, request);
        }

        /**
         * An Async wrapper for DescribeSlot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSlotRequestT = Model::DescribeSlotRequest>
        void DescribeSlotAsync(const DescribeSlotRequestT& request, const DescribeSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeSlot, request, handler, context);
        }

        /**
         * <p>Gets metadata information about a slot type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeSlotType">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlotTypeOutcome DescribeSlotType(const Model::DescribeSlotTypeRequest& request) const;

        /**
         * A Callable wrapper for DescribeSlotType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSlotTypeRequestT = Model::DescribeSlotTypeRequest>
        Model::DescribeSlotTypeOutcomeCallable DescribeSlotTypeCallable(const DescribeSlotTypeRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeSlotType, request);
        }

        /**
         * An Async wrapper for DescribeSlotType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSlotTypeRequestT = Model::DescribeSlotTypeRequest>
        void DescribeSlotTypeAsync(const DescribeSlotTypeRequestT& request, const DescribeSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeSlotType, request, handler, context);
        }

        /**
         * <p>Gets metadata information about the test execution.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeTestExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTestExecutionOutcome DescribeTestExecution(const Model::DescribeTestExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeTestExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTestExecutionRequestT = Model::DescribeTestExecutionRequest>
        Model::DescribeTestExecutionOutcomeCallable DescribeTestExecutionCallable(const DescribeTestExecutionRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeTestExecution, request);
        }

        /**
         * An Async wrapper for DescribeTestExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTestExecutionRequestT = Model::DescribeTestExecutionRequest>
        void DescribeTestExecutionAsync(const DescribeTestExecutionRequestT& request, const DescribeTestExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeTestExecution, request, handler, context);
        }

        /**
         * <p>Gets metadata information about the test set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeTestSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTestSetOutcome DescribeTestSet(const Model::DescribeTestSetRequest& request) const;

        /**
         * A Callable wrapper for DescribeTestSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTestSetRequestT = Model::DescribeTestSetRequest>
        Model::DescribeTestSetOutcomeCallable DescribeTestSetCallable(const DescribeTestSetRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeTestSet, request);
        }

        /**
         * An Async wrapper for DescribeTestSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTestSetRequestT = Model::DescribeTestSetRequest>
        void DescribeTestSetAsync(const DescribeTestSetRequestT& request, const DescribeTestSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeTestSet, request, handler, context);
        }

        /**
         * <p>Gets metadata information about the test set discrepancy
         * report.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeTestSetDiscrepancyReport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTestSetDiscrepancyReportOutcome DescribeTestSetDiscrepancyReport(const Model::DescribeTestSetDiscrepancyReportRequest& request) const;

        /**
         * A Callable wrapper for DescribeTestSetDiscrepancyReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTestSetDiscrepancyReportRequestT = Model::DescribeTestSetDiscrepancyReportRequest>
        Model::DescribeTestSetDiscrepancyReportOutcomeCallable DescribeTestSetDiscrepancyReportCallable(const DescribeTestSetDiscrepancyReportRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeTestSetDiscrepancyReport, request);
        }

        /**
         * An Async wrapper for DescribeTestSetDiscrepancyReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTestSetDiscrepancyReportRequestT = Model::DescribeTestSetDiscrepancyReportRequest>
        void DescribeTestSetDiscrepancyReportAsync(const DescribeTestSetDiscrepancyReportRequestT& request, const DescribeTestSetDiscrepancyReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeTestSetDiscrepancyReport, request, handler, context);
        }

        /**
         * <p>Gets metadata information about the test set generation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeTestSetGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTestSetGenerationOutcome DescribeTestSetGeneration(const Model::DescribeTestSetGenerationRequest& request) const;

        /**
         * A Callable wrapper for DescribeTestSetGeneration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTestSetGenerationRequestT = Model::DescribeTestSetGenerationRequest>
        Model::DescribeTestSetGenerationOutcomeCallable DescribeTestSetGenerationCallable(const DescribeTestSetGenerationRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::DescribeTestSetGeneration, request);
        }

        /**
         * An Async wrapper for DescribeTestSetGeneration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTestSetGenerationRequestT = Model::DescribeTestSetGenerationRequest>
        void DescribeTestSetGenerationAsync(const DescribeTestSetGenerationRequestT& request, const DescribeTestSetGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::DescribeTestSetGeneration, request, handler, context);
        }

        /**
         * <p>Generates sample utterances for an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/GenerateBotElement">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateBotElementOutcome GenerateBotElement(const Model::GenerateBotElementRequest& request) const;

        /**
         * A Callable wrapper for GenerateBotElement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GenerateBotElementRequestT = Model::GenerateBotElementRequest>
        Model::GenerateBotElementOutcomeCallable GenerateBotElementCallable(const GenerateBotElementRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::GenerateBotElement, request);
        }

        /**
         * An Async wrapper for GenerateBotElement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GenerateBotElementRequestT = Model::GenerateBotElementRequest>
        void GenerateBotElementAsync(const GenerateBotElementRequestT& request, const GenerateBotElementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::GenerateBotElement, request, handler, context);
        }

        /**
         * <p>The pre-signed Amazon S3 URL to download the test execution result
         * artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/GetTestExecutionArtifactsUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestExecutionArtifactsUrlOutcome GetTestExecutionArtifactsUrl(const Model::GetTestExecutionArtifactsUrlRequest& request) const;

        /**
         * A Callable wrapper for GetTestExecutionArtifactsUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTestExecutionArtifactsUrlRequestT = Model::GetTestExecutionArtifactsUrlRequest>
        Model::GetTestExecutionArtifactsUrlOutcomeCallable GetTestExecutionArtifactsUrlCallable(const GetTestExecutionArtifactsUrlRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::GetTestExecutionArtifactsUrl, request);
        }

        /**
         * An Async wrapper for GetTestExecutionArtifactsUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTestExecutionArtifactsUrlRequestT = Model::GetTestExecutionArtifactsUrlRequest>
        void GetTestExecutionArtifactsUrlAsync(const GetTestExecutionArtifactsUrlRequestT& request, const GetTestExecutionArtifactsUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::GetTestExecutionArtifactsUrl, request, handler, context);
        }

        /**
         * <p>Provides a list of utterances that users have sent to the bot.</p>
         * <p>Utterances are aggregated by the text of the utterance. For example, all
         * instances where customers used the phrase "I want to order pizza" are aggregated
         * into the same line in the response.</p> <p>You can see both detected utterances
         * and missed utterances. A detected utterance is where the bot properly recognized
         * the utterance and activated the associated intent. A missed utterance was not
         * recognized by the bot and didn't activate an intent.</p> <p>Utterances can be
         * aggregated for a bot alias or for a bot version, but not both at the same
         * time.</p> <p>Utterances statistics are not generated under the following
         * conditions:</p> <ul> <li> <p>The <code>childDirected</code> field was set to
         * true when the bot was created.</p> </li> <li> <p>You are using slot obfuscation
         * with one or more slots.</p> </li> <li> <p>You opted out of participating in
         * improving Amazon Lex.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListAggregatedUtterances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAggregatedUtterancesOutcome ListAggregatedUtterances(const Model::ListAggregatedUtterancesRequest& request) const;

        /**
         * A Callable wrapper for ListAggregatedUtterances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAggregatedUtterancesRequestT = Model::ListAggregatedUtterancesRequest>
        Model::ListAggregatedUtterancesOutcomeCallable ListAggregatedUtterancesCallable(const ListAggregatedUtterancesRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListAggregatedUtterances, request);
        }

        /**
         * An Async wrapper for ListAggregatedUtterances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAggregatedUtterancesRequestT = Model::ListAggregatedUtterancesRequest>
        void ListAggregatedUtterancesAsync(const ListAggregatedUtterancesRequestT& request, const ListAggregatedUtterancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListAggregatedUtterances, request, handler, context);
        }

        /**
         * <p>The action to list the replicated bots created from the source bot
         * alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotAliasReplicas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotAliasReplicasOutcome ListBotAliasReplicas(const Model::ListBotAliasReplicasRequest& request) const;

        /**
         * A Callable wrapper for ListBotAliasReplicas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBotAliasReplicasRequestT = Model::ListBotAliasReplicasRequest>
        Model::ListBotAliasReplicasOutcomeCallable ListBotAliasReplicasCallable(const ListBotAliasReplicasRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListBotAliasReplicas, request);
        }

        /**
         * An Async wrapper for ListBotAliasReplicas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBotAliasReplicasRequestT = Model::ListBotAliasReplicasRequest>
        void ListBotAliasReplicasAsync(const ListBotAliasReplicasRequestT& request, const ListBotAliasReplicasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListBotAliasReplicas, request, handler, context);
        }

        /**
         * <p>Gets a list of aliases for the specified bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotAliasesOutcome ListBotAliases(const Model::ListBotAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListBotAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBotAliasesRequestT = Model::ListBotAliasesRequest>
        Model::ListBotAliasesOutcomeCallable ListBotAliasesCallable(const ListBotAliasesRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListBotAliases, request);
        }

        /**
         * An Async wrapper for ListBotAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBotAliasesRequestT = Model::ListBotAliasesRequest>
        void ListBotAliasesAsync(const ListBotAliasesRequestT& request, const ListBotAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListBotAliases, request, handler, context);
        }

        /**
         * <p>Gets a list of locales for the specified bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotLocales">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotLocalesOutcome ListBotLocales(const Model::ListBotLocalesRequest& request) const;

        /**
         * A Callable wrapper for ListBotLocales that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBotLocalesRequestT = Model::ListBotLocalesRequest>
        Model::ListBotLocalesOutcomeCallable ListBotLocalesCallable(const ListBotLocalesRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListBotLocales, request);
        }

        /**
         * An Async wrapper for ListBotLocales that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBotLocalesRequestT = Model::ListBotLocalesRequest>
        void ListBotLocalesAsync(const ListBotLocalesRequestT& request, const ListBotLocalesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListBotLocales, request, handler, context);
        }

        /**
         * <p>Get a list of bot recommendations that meet the specified
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotRecommendationsOutcome ListBotRecommendations(const Model::ListBotRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListBotRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBotRecommendationsRequestT = Model::ListBotRecommendationsRequest>
        Model::ListBotRecommendationsOutcomeCallable ListBotRecommendationsCallable(const ListBotRecommendationsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListBotRecommendations, request);
        }

        /**
         * An Async wrapper for ListBotRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBotRecommendationsRequestT = Model::ListBotRecommendationsRequest>
        void ListBotRecommendationsAsync(const ListBotRecommendationsRequestT& request, const ListBotRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListBotRecommendations, request, handler, context);
        }

        /**
         * <p>The action to list the replicated bots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotReplicas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotReplicasOutcome ListBotReplicas(const Model::ListBotReplicasRequest& request) const;

        /**
         * A Callable wrapper for ListBotReplicas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBotReplicasRequestT = Model::ListBotReplicasRequest>
        Model::ListBotReplicasOutcomeCallable ListBotReplicasCallable(const ListBotReplicasRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListBotReplicas, request);
        }

        /**
         * An Async wrapper for ListBotReplicas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBotReplicasRequestT = Model::ListBotReplicasRequest>
        void ListBotReplicasAsync(const ListBotReplicasRequestT& request, const ListBotReplicasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListBotReplicas, request, handler, context);
        }

        /**
         * <p>Lists the generation requests made for a bot locale.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotResourceGenerations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotResourceGenerationsOutcome ListBotResourceGenerations(const Model::ListBotResourceGenerationsRequest& request) const;

        /**
         * A Callable wrapper for ListBotResourceGenerations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBotResourceGenerationsRequestT = Model::ListBotResourceGenerationsRequest>
        Model::ListBotResourceGenerationsOutcomeCallable ListBotResourceGenerationsCallable(const ListBotResourceGenerationsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListBotResourceGenerations, request);
        }

        /**
         * An Async wrapper for ListBotResourceGenerations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBotResourceGenerationsRequestT = Model::ListBotResourceGenerationsRequest>
        void ListBotResourceGenerationsAsync(const ListBotResourceGenerationsRequestT& request, const ListBotResourceGenerationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListBotResourceGenerations, request, handler, context);
        }

        /**
         * <p>Contains information about all the versions replication statuses applicable
         * for Global Resiliency.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotVersionReplicas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotVersionReplicasOutcome ListBotVersionReplicas(const Model::ListBotVersionReplicasRequest& request) const;

        /**
         * A Callable wrapper for ListBotVersionReplicas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBotVersionReplicasRequestT = Model::ListBotVersionReplicasRequest>
        Model::ListBotVersionReplicasOutcomeCallable ListBotVersionReplicasCallable(const ListBotVersionReplicasRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListBotVersionReplicas, request);
        }

        /**
         * An Async wrapper for ListBotVersionReplicas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBotVersionReplicasRequestT = Model::ListBotVersionReplicasRequest>
        void ListBotVersionReplicasAsync(const ListBotVersionReplicasRequestT& request, const ListBotVersionReplicasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListBotVersionReplicas, request, handler, context);
        }

        /**
         * <p>Gets information about all of the versions of a bot.</p> <p>The
         * <code>ListBotVersions</code> operation returns a summary of each version of a
         * bot. For example, if a bot has three numbered versions, the
         * <code>ListBotVersions</code> operation returns for summaries, one for each
         * numbered version and one for the <code>DRAFT</code> version.</p> <p>The
         * <code>ListBotVersions</code> operation always returns at least one version, the
         * <code>DRAFT</code> version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotVersionsOutcome ListBotVersions(const Model::ListBotVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListBotVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBotVersionsRequestT = Model::ListBotVersionsRequest>
        Model::ListBotVersionsOutcomeCallable ListBotVersionsCallable(const ListBotVersionsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListBotVersions, request);
        }

        /**
         * An Async wrapper for ListBotVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBotVersionsRequestT = Model::ListBotVersionsRequest>
        void ListBotVersionsAsync(const ListBotVersionsRequestT& request, const ListBotVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListBotVersions, request, handler, context);
        }

        /**
         * <p>Gets a list of available bots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotsOutcome ListBots(const Model::ListBotsRequest& request) const;

        /**
         * A Callable wrapper for ListBots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBotsRequestT = Model::ListBotsRequest>
        Model::ListBotsOutcomeCallable ListBotsCallable(const ListBotsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListBots, request);
        }

        /**
         * An Async wrapper for ListBots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBotsRequestT = Model::ListBotsRequest>
        void ListBotsAsync(const ListBotsRequestT& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListBots, request, handler, context);
        }

        /**
         * <p>Gets a list of built-in intents provided by Amazon Lex that you can use in
         * your bot. </p> <p>To use a built-in intent as a the base for your own intent,
         * include the built-in intent signature in the <code>parentIntentSignature</code>
         * parameter when you call the <code>CreateIntent</code> operation. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_CreateIntent.html">CreateIntent</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBuiltInIntents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuiltInIntentsOutcome ListBuiltInIntents(const Model::ListBuiltInIntentsRequest& request) const;

        /**
         * A Callable wrapper for ListBuiltInIntents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBuiltInIntentsRequestT = Model::ListBuiltInIntentsRequest>
        Model::ListBuiltInIntentsOutcomeCallable ListBuiltInIntentsCallable(const ListBuiltInIntentsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListBuiltInIntents, request);
        }

        /**
         * An Async wrapper for ListBuiltInIntents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBuiltInIntentsRequestT = Model::ListBuiltInIntentsRequest>
        void ListBuiltInIntentsAsync(const ListBuiltInIntentsRequestT& request, const ListBuiltInIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListBuiltInIntents, request, handler, context);
        }

        /**
         * <p>Gets a list of built-in slot types that meet the specified
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBuiltInSlotTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuiltInSlotTypesOutcome ListBuiltInSlotTypes(const Model::ListBuiltInSlotTypesRequest& request) const;

        /**
         * A Callable wrapper for ListBuiltInSlotTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBuiltInSlotTypesRequestT = Model::ListBuiltInSlotTypesRequest>
        Model::ListBuiltInSlotTypesOutcomeCallable ListBuiltInSlotTypesCallable(const ListBuiltInSlotTypesRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListBuiltInSlotTypes, request);
        }

        /**
         * An Async wrapper for ListBuiltInSlotTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBuiltInSlotTypesRequestT = Model::ListBuiltInSlotTypesRequest>
        void ListBuiltInSlotTypesAsync(const ListBuiltInSlotTypesRequestT& request, const ListBuiltInSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListBuiltInSlotTypes, request, handler, context);
        }

        /**
         * <p>Paginated list of custom vocabulary items for a given bot locale's custom
         * vocabulary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListCustomVocabularyItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomVocabularyItemsOutcome ListCustomVocabularyItems(const Model::ListCustomVocabularyItemsRequest& request) const;

        /**
         * A Callable wrapper for ListCustomVocabularyItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomVocabularyItemsRequestT = Model::ListCustomVocabularyItemsRequest>
        Model::ListCustomVocabularyItemsOutcomeCallable ListCustomVocabularyItemsCallable(const ListCustomVocabularyItemsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListCustomVocabularyItems, request);
        }

        /**
         * An Async wrapper for ListCustomVocabularyItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomVocabularyItemsRequestT = Model::ListCustomVocabularyItemsRequest>
        void ListCustomVocabularyItemsAsync(const ListCustomVocabularyItemsRequestT& request, const ListCustomVocabularyItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListCustomVocabularyItems, request, handler, context);
        }

        /**
         * <p>Lists the exports for a bot, bot locale, or custom vocabulary. Exports are
         * kept in the list for 7 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListExports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExportsOutcome ListExports(const Model::ListExportsRequest& request) const;

        /**
         * A Callable wrapper for ListExports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExportsRequestT = Model::ListExportsRequest>
        Model::ListExportsOutcomeCallable ListExportsCallable(const ListExportsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListExports, request);
        }

        /**
         * An Async wrapper for ListExports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExportsRequestT = Model::ListExportsRequest>
        void ListExportsAsync(const ListExportsRequestT& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListExports, request, handler, context);
        }

        /**
         * <p>Lists the imports for a bot, bot locale, or custom vocabulary. Imports are
         * kept in the list for 7 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListImports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportsOutcome ListImports(const Model::ListImportsRequest& request) const;

        /**
         * A Callable wrapper for ListImports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImportsRequestT = Model::ListImportsRequest>
        Model::ListImportsOutcomeCallable ListImportsCallable(const ListImportsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListImports, request);
        }

        /**
         * An Async wrapper for ListImports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImportsRequestT = Model::ListImportsRequest>
        void ListImportsAsync(const ListImportsRequestT& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListImports, request, handler, context);
        }

        /**
         * <p>Retrieves summary metrics for the intents in your bot. The following fields
         * are required:</p> <ul> <li> <p> <code>metrics</code> – A list of <a
         * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_AnalyticsIntentMetric.html">AnalyticsIntentMetric</a>
         * objects. In each object, use the <code>name</code> field to specify the metric
         * to calculate, the <code>statistic</code> field to specify whether to calculate
         * the <code>Sum</code>, <code>Average</code>, or <code>Max</code> number, and the
         * <code>order</code> field to specify whether to sort the results in
         * <code>Ascending</code> or <code>Descending</code> order.</p> </li> <li> <p>
         * <code>startDateTime</code> and <code>endDateTime</code> – Define a time range
         * for which you want to retrieve results.</p> </li> </ul> <p>Of the optional
         * fields, you can organize the results in the following ways:</p> <ul> <li> <p>Use
         * the <code>filters</code> field to filter the results, the <code>groupBy</code>
         * field to specify categories by which to group the results, and the
         * <code>binBy</code> field to specify time intervals by which to group the
         * results.</p> </li> <li> <p>Use the <code>maxResults</code> field to limit the
         * number of results to return in a single response and the <code>nextToken</code>
         * field to return the next batch of results if the response does not return the
         * full set of results.</p> </li> </ul> <p>Note that an <code>order</code> field
         * exists in both <code>binBy</code> and <code>metrics</code>. You can specify only
         * one <code>order</code> in a given request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListIntentMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIntentMetricsOutcome ListIntentMetrics(const Model::ListIntentMetricsRequest& request) const;

        /**
         * A Callable wrapper for ListIntentMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIntentMetricsRequestT = Model::ListIntentMetricsRequest>
        Model::ListIntentMetricsOutcomeCallable ListIntentMetricsCallable(const ListIntentMetricsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListIntentMetrics, request);
        }

        /**
         * An Async wrapper for ListIntentMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIntentMetricsRequestT = Model::ListIntentMetricsRequest>
        void ListIntentMetricsAsync(const ListIntentMetricsRequestT& request, const ListIntentMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListIntentMetrics, request, handler, context);
        }

        /**
         * <p>Retrieves summary statistics for a path of intents that users take over
         * sessions with your bot. The following fields are required:</p> <ul> <li> <p>
         * <code>startDateTime</code> and <code>endDateTime</code> – Define a time range
         * for which you want to retrieve results.</p> </li> <li> <p>
         * <code>intentPath</code> – Define an order of intents for which you want to
         * retrieve metrics. Separate intents in the path with a forward slash. For
         * example, populate the <code>intentPath</code> field with
         * <code>/BookCar/BookHotel</code> to see details about how many times users
         * invoked the <code>BookCar</code> and <code>BookHotel</code> intents in that
         * order.</p> </li> </ul> <p>Use the optional <code>filters</code> field to filter
         * the results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListIntentPaths">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIntentPathsOutcome ListIntentPaths(const Model::ListIntentPathsRequest& request) const;

        /**
         * A Callable wrapper for ListIntentPaths that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIntentPathsRequestT = Model::ListIntentPathsRequest>
        Model::ListIntentPathsOutcomeCallable ListIntentPathsCallable(const ListIntentPathsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListIntentPaths, request);
        }

        /**
         * An Async wrapper for ListIntentPaths that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIntentPathsRequestT = Model::ListIntentPathsRequest>
        void ListIntentPathsAsync(const ListIntentPathsRequestT& request, const ListIntentPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListIntentPaths, request, handler, context);
        }

        /**
         * <p>Retrieves summary metrics for the stages within intents in your bot. The
         * following fields are required:</p> <ul> <li> <p> <code>metrics</code> – A list
         * of <a
         * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_AnalyticsIntentStageMetric.html">AnalyticsIntentStageMetric</a>
         * objects. In each object, use the <code>name</code> field to specify the metric
         * to calculate, the <code>statistic</code> field to specify whether to calculate
         * the <code>Sum</code>, <code>Average</code>, or <code>Max</code> number, and the
         * <code>order</code> field to specify whether to sort the results in
         * <code>Ascending</code> or <code>Descending</code> order.</p> </li> <li> <p>
         * <code>startDateTime</code> and <code>endDateTime</code> – Define a time range
         * for which you want to retrieve results.</p> </li> </ul> <p>Of the optional
         * fields, you can organize the results in the following ways:</p> <ul> <li> <p>Use
         * the <code>filters</code> field to filter the results, the <code>groupBy</code>
         * field to specify categories by which to group the results, and the
         * <code>binBy</code> field to specify time intervals by which to group the
         * results.</p> </li> <li> <p>Use the <code>maxResults</code> field to limit the
         * number of results to return in a single response and the <code>nextToken</code>
         * field to return the next batch of results if the response does not return the
         * full set of results.</p> </li> </ul> <p>Note that an <code>order</code> field
         * exists in both <code>binBy</code> and <code>metrics</code>. You can only specify
         * one <code>order</code> in a given request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListIntentStageMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIntentStageMetricsOutcome ListIntentStageMetrics(const Model::ListIntentStageMetricsRequest& request) const;

        /**
         * A Callable wrapper for ListIntentStageMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIntentStageMetricsRequestT = Model::ListIntentStageMetricsRequest>
        Model::ListIntentStageMetricsOutcomeCallable ListIntentStageMetricsCallable(const ListIntentStageMetricsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListIntentStageMetrics, request);
        }

        /**
         * An Async wrapper for ListIntentStageMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIntentStageMetricsRequestT = Model::ListIntentStageMetricsRequest>
        void ListIntentStageMetricsAsync(const ListIntentStageMetricsRequestT& request, const ListIntentStageMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListIntentStageMetrics, request, handler, context);
        }

        /**
         * <p>Get a list of intents that meet the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListIntents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIntentsOutcome ListIntents(const Model::ListIntentsRequest& request) const;

        /**
         * A Callable wrapper for ListIntents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIntentsRequestT = Model::ListIntentsRequest>
        Model::ListIntentsOutcomeCallable ListIntentsCallable(const ListIntentsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListIntents, request);
        }

        /**
         * An Async wrapper for ListIntents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIntentsRequestT = Model::ListIntentsRequest>
        void ListIntentsAsync(const ListIntentsRequestT& request, const ListIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListIntents, request, handler, context);
        }

        /**
         * <p>Gets a list of recommended intents provided by the bot recommendation that
         * you can use in your bot. Intents in the response are ordered by
         * relevance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListRecommendedIntents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendedIntentsOutcome ListRecommendedIntents(const Model::ListRecommendedIntentsRequest& request) const;

        /**
         * A Callable wrapper for ListRecommendedIntents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecommendedIntentsRequestT = Model::ListRecommendedIntentsRequest>
        Model::ListRecommendedIntentsOutcomeCallable ListRecommendedIntentsCallable(const ListRecommendedIntentsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListRecommendedIntents, request);
        }

        /**
         * An Async wrapper for ListRecommendedIntents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecommendedIntentsRequestT = Model::ListRecommendedIntentsRequest>
        void ListRecommendedIntentsAsync(const ListRecommendedIntentsRequestT& request, const ListRecommendedIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListRecommendedIntents, request, handler, context);
        }

        /**
         * <p>Retrieves a list of metadata for individual user sessions with your bot. The
         * <code>startDateTime</code> and <code>endDateTime</code> fields are required.
         * These fields define a time range for which you want to retrieve results. Of the
         * optional fields, you can organize the results in the following ways:</p> <ul>
         * <li> <p>Use the <code>filters</code> field to filter the results and the
         * <code>sortBy</code> field to specify the values by which to sort the
         * results.</p> </li> <li> <p>Use the <code>maxResults</code> field to limit the
         * number of results to return in a single response and the <code>nextToken</code>
         * field to return the next batch of results if the response does not return the
         * full set of results.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListSessionAnalyticsData">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSessionAnalyticsDataOutcome ListSessionAnalyticsData(const Model::ListSessionAnalyticsDataRequest& request) const;

        /**
         * A Callable wrapper for ListSessionAnalyticsData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSessionAnalyticsDataRequestT = Model::ListSessionAnalyticsDataRequest>
        Model::ListSessionAnalyticsDataOutcomeCallable ListSessionAnalyticsDataCallable(const ListSessionAnalyticsDataRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListSessionAnalyticsData, request);
        }

        /**
         * An Async wrapper for ListSessionAnalyticsData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSessionAnalyticsDataRequestT = Model::ListSessionAnalyticsDataRequest>
        void ListSessionAnalyticsDataAsync(const ListSessionAnalyticsDataRequestT& request, const ListSessionAnalyticsDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListSessionAnalyticsData, request, handler, context);
        }

        /**
         * <p>Retrieves summary metrics for the user sessions with your bot. The following
         * fields are required:</p> <ul> <li> <p> <code>metrics</code> – A list of <a
         * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_AnalyticsSessionMetric.html">AnalyticsSessionMetric</a>
         * objects. In each object, use the <code>name</code> field to specify the metric
         * to calculate, the <code>statistic</code> field to specify whether to calculate
         * the <code>Sum</code>, <code>Average</code>, or <code>Max</code> number, and the
         * <code>order</code> field to specify whether to sort the results in
         * <code>Ascending</code> or <code>Descending</code> order.</p> </li> <li> <p>
         * <code>startDateTime</code> and <code>endDateTime</code> – Define a time range
         * for which you want to retrieve results.</p> </li> </ul> <p>Of the optional
         * fields, you can organize the results in the following ways:</p> <ul> <li> <p>Use
         * the <code>filters</code> field to filter the results, the <code>groupBy</code>
         * field to specify categories by which to group the results, and the
         * <code>binBy</code> field to specify time intervals by which to group the
         * results.</p> </li> <li> <p>Use the <code>maxResults</code> field to limit the
         * number of results to return in a single response and the <code>nextToken</code>
         * field to return the next batch of results if the response does not return the
         * full set of results.</p> </li> </ul> <p>Note that an <code>order</code> field
         * exists in both <code>binBy</code> and <code>metrics</code>. Currently, you can
         * specify it in either field, but not in both.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListSessionMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSessionMetricsOutcome ListSessionMetrics(const Model::ListSessionMetricsRequest& request) const;

        /**
         * A Callable wrapper for ListSessionMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSessionMetricsRequestT = Model::ListSessionMetricsRequest>
        Model::ListSessionMetricsOutcomeCallable ListSessionMetricsCallable(const ListSessionMetricsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListSessionMetrics, request);
        }

        /**
         * An Async wrapper for ListSessionMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSessionMetricsRequestT = Model::ListSessionMetricsRequest>
        void ListSessionMetricsAsync(const ListSessionMetricsRequestT& request, const ListSessionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListSessionMetrics, request, handler, context);
        }

        /**
         * <p>Gets a list of slot types that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListSlotTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSlotTypesOutcome ListSlotTypes(const Model::ListSlotTypesRequest& request) const;

        /**
         * A Callable wrapper for ListSlotTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSlotTypesRequestT = Model::ListSlotTypesRequest>
        Model::ListSlotTypesOutcomeCallable ListSlotTypesCallable(const ListSlotTypesRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListSlotTypes, request);
        }

        /**
         * An Async wrapper for ListSlotTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSlotTypesRequestT = Model::ListSlotTypesRequest>
        void ListSlotTypesAsync(const ListSlotTypesRequestT& request, const ListSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListSlotTypes, request, handler, context);
        }

        /**
         * <p>Gets a list of slots that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListSlots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSlotsOutcome ListSlots(const Model::ListSlotsRequest& request) const;

        /**
         * A Callable wrapper for ListSlots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSlotsRequestT = Model::ListSlotsRequest>
        Model::ListSlotsOutcomeCallable ListSlotsCallable(const ListSlotsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListSlots, request);
        }

        /**
         * An Async wrapper for ListSlots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSlotsRequestT = Model::ListSlotsRequest>
        void ListSlotsAsync(const ListSlotsRequestT& request, const ListSlotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListSlots, request, handler, context);
        }

        /**
         * <p>Gets a list of tags associated with a resource. Only bots, bot aliases, and
         * bot channels can have tags associated with them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Gets a list of test execution result items.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListTestExecutionResultItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestExecutionResultItemsOutcome ListTestExecutionResultItems(const Model::ListTestExecutionResultItemsRequest& request) const;

        /**
         * A Callable wrapper for ListTestExecutionResultItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestExecutionResultItemsRequestT = Model::ListTestExecutionResultItemsRequest>
        Model::ListTestExecutionResultItemsOutcomeCallable ListTestExecutionResultItemsCallable(const ListTestExecutionResultItemsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListTestExecutionResultItems, request);
        }

        /**
         * An Async wrapper for ListTestExecutionResultItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestExecutionResultItemsRequestT = Model::ListTestExecutionResultItemsRequest>
        void ListTestExecutionResultItemsAsync(const ListTestExecutionResultItemsRequestT& request, const ListTestExecutionResultItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListTestExecutionResultItems, request, handler, context);
        }

        /**
         * <p>The list of test set executions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListTestExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestExecutionsOutcome ListTestExecutions(const Model::ListTestExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListTestExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestExecutionsRequestT = Model::ListTestExecutionsRequest>
        Model::ListTestExecutionsOutcomeCallable ListTestExecutionsCallable(const ListTestExecutionsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListTestExecutions, request);
        }

        /**
         * An Async wrapper for ListTestExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestExecutionsRequestT = Model::ListTestExecutionsRequest>
        void ListTestExecutionsAsync(const ListTestExecutionsRequestT& request, const ListTestExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListTestExecutions, request, handler, context);
        }

        /**
         * <p>The list of test set records.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListTestSetRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestSetRecordsOutcome ListTestSetRecords(const Model::ListTestSetRecordsRequest& request) const;

        /**
         * A Callable wrapper for ListTestSetRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestSetRecordsRequestT = Model::ListTestSetRecordsRequest>
        Model::ListTestSetRecordsOutcomeCallable ListTestSetRecordsCallable(const ListTestSetRecordsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListTestSetRecords, request);
        }

        /**
         * An Async wrapper for ListTestSetRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestSetRecordsRequestT = Model::ListTestSetRecordsRequest>
        void ListTestSetRecordsAsync(const ListTestSetRecordsRequestT& request, const ListTestSetRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListTestSetRecords, request, handler, context);
        }

        /**
         * <p>The list of the test sets</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListTestSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestSetsOutcome ListTestSets(const Model::ListTestSetsRequest& request) const;

        /**
         * A Callable wrapper for ListTestSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestSetsRequestT = Model::ListTestSetsRequest>
        Model::ListTestSetsOutcomeCallable ListTestSetsCallable(const ListTestSetsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListTestSets, request);
        }

        /**
         * An Async wrapper for ListTestSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestSetsRequestT = Model::ListTestSetsRequest>
        void ListTestSetsAsync(const ListTestSetsRequestT& request, const ListTestSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListTestSets, request, handler, context);
        }

        /**
         *  <p>To use this API operation, your IAM role must have permissions to
         * perform the <a
         * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_ListAggregatedUtterances.html">ListAggregatedUtterances</a>
         * operation, which provides access to utterance-related analytics. See <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/monitoring-utterances.html">Viewing
         * utterance statistics</a> for the IAM policy to apply to the IAM role.</p>
         *  <p>Retrieves a list of metadata for individual user utterances to your
         * bot. The following fields are required:</p> <ul> <li> <p>
         * <code>startDateTime</code> and <code>endDateTime</code> – Define a time range
         * for which you want to retrieve results.</p> </li> </ul> <p>Of the optional
         * fields, you can organize the results in the following ways:</p> <ul> <li> <p>Use
         * the <code>filters</code> field to filter the results and the <code>sortBy</code>
         * field to specify the values by which to sort the results.</p> </li> <li> <p>Use
         * the <code>maxResults</code> field to limit the number of results to return in a
         * single response and the <code>nextToken</code> field to return the next batch of
         * results if the response does not return the full set of results.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListUtteranceAnalyticsData">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUtteranceAnalyticsDataOutcome ListUtteranceAnalyticsData(const Model::ListUtteranceAnalyticsDataRequest& request) const;

        /**
         * A Callable wrapper for ListUtteranceAnalyticsData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUtteranceAnalyticsDataRequestT = Model::ListUtteranceAnalyticsDataRequest>
        Model::ListUtteranceAnalyticsDataOutcomeCallable ListUtteranceAnalyticsDataCallable(const ListUtteranceAnalyticsDataRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListUtteranceAnalyticsData, request);
        }

        /**
         * An Async wrapper for ListUtteranceAnalyticsData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUtteranceAnalyticsDataRequestT = Model::ListUtteranceAnalyticsDataRequest>
        void ListUtteranceAnalyticsDataAsync(const ListUtteranceAnalyticsDataRequestT& request, const ListUtteranceAnalyticsDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListUtteranceAnalyticsData, request, handler, context);
        }

        /**
         *  <p>To use this API operation, your IAM role must have permissions to
         * perform the <a
         * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_ListAggregatedUtterances.html">ListAggregatedUtterances</a>
         * operation, which provides access to utterance-related analytics. See <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/monitoring-utterances.html">Viewing
         * utterance statistics</a> for the IAM policy to apply to the IAM role.</p>
         *  <p>Retrieves summary metrics for the utterances in your bot. The
         * following fields are required:</p> <ul> <li> <p> <code>metrics</code> – A list
         * of <a
         * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_AnalyticsUtteranceMetric.html">AnalyticsUtteranceMetric</a>
         * objects. In each object, use the <code>name</code> field to specify the metric
         * to calculate, the <code>statistic</code> field to specify whether to calculate
         * the <code>Sum</code>, <code>Average</code>, or <code>Max</code> number, and the
         * <code>order</code> field to specify whether to sort the results in
         * <code>Ascending</code> or <code>Descending</code> order.</p> </li> <li> <p>
         * <code>startDateTime</code> and <code>endDateTime</code> – Define a time range
         * for which you want to retrieve results.</p> </li> </ul> <p>Of the optional
         * fields, you can organize the results in the following ways:</p> <ul> <li> <p>Use
         * the <code>filters</code> field to filter the results, the <code>groupBy</code>
         * field to specify categories by which to group the results, and the
         * <code>binBy</code> field to specify time intervals by which to group the
         * results.</p> </li> <li> <p>Use the <code>maxResults</code> field to limit the
         * number of results to return in a single response and the <code>nextToken</code>
         * field to return the next batch of results if the response does not return the
         * full set of results.</p> </li> </ul> <p>Note that an <code>order</code> field
         * exists in both <code>binBy</code> and <code>metrics</code>. Currently, you can
         * specify it in either field, but not in both.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListUtteranceMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUtteranceMetricsOutcome ListUtteranceMetrics(const Model::ListUtteranceMetricsRequest& request) const;

        /**
         * A Callable wrapper for ListUtteranceMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUtteranceMetricsRequestT = Model::ListUtteranceMetricsRequest>
        Model::ListUtteranceMetricsOutcomeCallable ListUtteranceMetricsCallable(const ListUtteranceMetricsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::ListUtteranceMetrics, request);
        }

        /**
         * An Async wrapper for ListUtteranceMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUtteranceMetricsRequestT = Model::ListUtteranceMetricsRequest>
        void ListUtteranceMetricsAsync(const ListUtteranceMetricsRequestT& request, const ListUtteranceMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::ListUtteranceMetrics, request, handler, context);
        }

        /**
         * <p>Search for associated transcripts that meet the specified
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SearchAssociatedTranscripts">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAssociatedTranscriptsOutcome SearchAssociatedTranscripts(const Model::SearchAssociatedTranscriptsRequest& request) const;

        /**
         * A Callable wrapper for SearchAssociatedTranscripts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchAssociatedTranscriptsRequestT = Model::SearchAssociatedTranscriptsRequest>
        Model::SearchAssociatedTranscriptsOutcomeCallable SearchAssociatedTranscriptsCallable(const SearchAssociatedTranscriptsRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::SearchAssociatedTranscripts, request);
        }

        /**
         * An Async wrapper for SearchAssociatedTranscripts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchAssociatedTranscriptsRequestT = Model::SearchAssociatedTranscriptsRequest>
        void SearchAssociatedTranscriptsAsync(const SearchAssociatedTranscriptsRequestT& request, const SearchAssociatedTranscriptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::SearchAssociatedTranscripts, request, handler, context);
        }

        /**
         * <p>Use this to provide your transcript data, and to start the bot recommendation
         * process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/StartBotRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBotRecommendationOutcome StartBotRecommendation(const Model::StartBotRecommendationRequest& request) const;

        /**
         * A Callable wrapper for StartBotRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartBotRecommendationRequestT = Model::StartBotRecommendationRequest>
        Model::StartBotRecommendationOutcomeCallable StartBotRecommendationCallable(const StartBotRecommendationRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::StartBotRecommendation, request);
        }

        /**
         * An Async wrapper for StartBotRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartBotRecommendationRequestT = Model::StartBotRecommendationRequest>
        void StartBotRecommendationAsync(const StartBotRecommendationRequestT& request, const StartBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::StartBotRecommendation, request, handler, context);
        }

        /**
         * <p>Starts a request for the descriptive bot builder to generate a bot locale
         * configuration based on the prompt you provide it. After you make this call, use
         * the <code>DescribeBotResourceGeneration</code> operation to check on the status
         * of the generation and for the <code>generatedBotLocaleUrl</code> when the
         * generation is complete. Use that value to retrieve the Amazon S3 object
         * containing the bot locale configuration. You can then modify and import this
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/StartBotResourceGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBotResourceGenerationOutcome StartBotResourceGeneration(const Model::StartBotResourceGenerationRequest& request) const;

        /**
         * A Callable wrapper for StartBotResourceGeneration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartBotResourceGenerationRequestT = Model::StartBotResourceGenerationRequest>
        Model::StartBotResourceGenerationOutcomeCallable StartBotResourceGenerationCallable(const StartBotResourceGenerationRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::StartBotResourceGeneration, request);
        }

        /**
         * An Async wrapper for StartBotResourceGeneration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartBotResourceGenerationRequestT = Model::StartBotResourceGenerationRequest>
        void StartBotResourceGenerationAsync(const StartBotResourceGenerationRequestT& request, const StartBotResourceGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::StartBotResourceGeneration, request, handler, context);
        }

        /**
         * <p>Starts importing a bot, bot locale, or custom vocabulary from a zip archive
         * that you uploaded to an S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/StartImport">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportOutcome StartImport(const Model::StartImportRequest& request) const;

        /**
         * A Callable wrapper for StartImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartImportRequestT = Model::StartImportRequest>
        Model::StartImportOutcomeCallable StartImportCallable(const StartImportRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::StartImport, request);
        }

        /**
         * An Async wrapper for StartImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartImportRequestT = Model::StartImportRequest>
        void StartImportAsync(const StartImportRequestT& request, const StartImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::StartImport, request, handler, context);
        }

        /**
         * <p>The action to start test set execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/StartTestExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTestExecutionOutcome StartTestExecution(const Model::StartTestExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartTestExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTestExecutionRequestT = Model::StartTestExecutionRequest>
        Model::StartTestExecutionOutcomeCallable StartTestExecutionCallable(const StartTestExecutionRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::StartTestExecution, request);
        }

        /**
         * An Async wrapper for StartTestExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTestExecutionRequestT = Model::StartTestExecutionRequest>
        void StartTestExecutionAsync(const StartTestExecutionRequestT& request, const StartTestExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::StartTestExecution, request, handler, context);
        }

        /**
         * <p>The action to start the generation of test set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/StartTestSetGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTestSetGenerationOutcome StartTestSetGeneration(const Model::StartTestSetGenerationRequest& request) const;

        /**
         * A Callable wrapper for StartTestSetGeneration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTestSetGenerationRequestT = Model::StartTestSetGenerationRequest>
        Model::StartTestSetGenerationOutcomeCallable StartTestSetGenerationCallable(const StartTestSetGenerationRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::StartTestSetGeneration, request);
        }

        /**
         * An Async wrapper for StartTestSetGeneration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTestSetGenerationRequestT = Model::StartTestSetGenerationRequest>
        void StartTestSetGenerationAsync(const StartTestSetGenerationRequestT& request, const StartTestSetGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::StartTestSetGeneration, request, handler, context);
        }

        /**
         * <p>Stop an already running Bot Recommendation request.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/StopBotRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBotRecommendationOutcome StopBotRecommendation(const Model::StopBotRecommendationRequest& request) const;

        /**
         * A Callable wrapper for StopBotRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopBotRecommendationRequestT = Model::StopBotRecommendationRequest>
        Model::StopBotRecommendationOutcomeCallable StopBotRecommendationCallable(const StopBotRecommendationRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::StopBotRecommendation, request);
        }

        /**
         * An Async wrapper for StopBotRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopBotRecommendationRequestT = Model::StopBotRecommendationRequest>
        void StopBotRecommendationAsync(const StopBotRecommendationRequestT& request, const StopBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::StopBotRecommendation, request, handler, context);
        }

        /**
         * <p>Adds the specified tags to the specified resource. If a tag key already
         * exists, the existing value is replaced with the new value.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a bot, bot alias, or bot channel.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the configuration of an existing bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotOutcome UpdateBot(const Model::UpdateBotRequest& request) const;

        /**
         * A Callable wrapper for UpdateBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBotRequestT = Model::UpdateBotRequest>
        Model::UpdateBotOutcomeCallable UpdateBotCallable(const UpdateBotRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::UpdateBot, request);
        }

        /**
         * An Async wrapper for UpdateBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBotRequestT = Model::UpdateBotRequest>
        void UpdateBotAsync(const UpdateBotRequestT& request, const UpdateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::UpdateBot, request, handler, context);
        }

        /**
         * <p>Updates the configuration of an existing bot alias.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotAliasOutcome UpdateBotAlias(const Model::UpdateBotAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateBotAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBotAliasRequestT = Model::UpdateBotAliasRequest>
        Model::UpdateBotAliasOutcomeCallable UpdateBotAliasCallable(const UpdateBotAliasRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::UpdateBotAlias, request);
        }

        /**
         * An Async wrapper for UpdateBotAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBotAliasRequestT = Model::UpdateBotAliasRequest>
        void UpdateBotAliasAsync(const UpdateBotAliasRequestT& request, const UpdateBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::UpdateBotAlias, request, handler, context);
        }

        /**
         * <p>Updates the settings that a bot has for a specific locale.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBotLocale">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotLocaleOutcome UpdateBotLocale(const Model::UpdateBotLocaleRequest& request) const;

        /**
         * A Callable wrapper for UpdateBotLocale that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBotLocaleRequestT = Model::UpdateBotLocaleRequest>
        Model::UpdateBotLocaleOutcomeCallable UpdateBotLocaleCallable(const UpdateBotLocaleRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::UpdateBotLocale, request);
        }

        /**
         * An Async wrapper for UpdateBotLocale that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBotLocaleRequestT = Model::UpdateBotLocaleRequest>
        void UpdateBotLocaleAsync(const UpdateBotLocaleRequestT& request, const UpdateBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::UpdateBotLocale, request, handler, context);
        }

        /**
         * <p>Updates an existing bot recommendation request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBotRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotRecommendationOutcome UpdateBotRecommendation(const Model::UpdateBotRecommendationRequest& request) const;

        /**
         * A Callable wrapper for UpdateBotRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBotRecommendationRequestT = Model::UpdateBotRecommendationRequest>
        Model::UpdateBotRecommendationOutcomeCallable UpdateBotRecommendationCallable(const UpdateBotRecommendationRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::UpdateBotRecommendation, request);
        }

        /**
         * An Async wrapper for UpdateBotRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBotRecommendationRequestT = Model::UpdateBotRecommendationRequest>
        void UpdateBotRecommendationAsync(const UpdateBotRecommendationRequestT& request, const UpdateBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::UpdateBotRecommendation, request, handler, context);
        }

        /**
         * <p>Updates the password used to protect an export zip archive.</p> <p>The
         * password is not required. If you don't supply a password, Amazon Lex generates a
         * zip file that is not protected by a password. This is the archive that is
         * available at the pre-signed S3 URL provided by the <a
         * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_DescribeExport.html">DescribeExport</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateExport">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExportOutcome UpdateExport(const Model::UpdateExportRequest& request) const;

        /**
         * A Callable wrapper for UpdateExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateExportRequestT = Model::UpdateExportRequest>
        Model::UpdateExportOutcomeCallable UpdateExportCallable(const UpdateExportRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::UpdateExport, request);
        }

        /**
         * An Async wrapper for UpdateExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateExportRequestT = Model::UpdateExportRequest>
        void UpdateExportAsync(const UpdateExportRequestT& request, const UpdateExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::UpdateExport, request, handler, context);
        }

        /**
         * <p>Updates the settings for an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntentOutcome UpdateIntent(const Model::UpdateIntentRequest& request) const;

        /**
         * A Callable wrapper for UpdateIntent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIntentRequestT = Model::UpdateIntentRequest>
        Model::UpdateIntentOutcomeCallable UpdateIntentCallable(const UpdateIntentRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::UpdateIntent, request);
        }

        /**
         * An Async wrapper for UpdateIntent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIntentRequestT = Model::UpdateIntentRequest>
        void UpdateIntentAsync(const UpdateIntentRequestT& request, const UpdateIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::UpdateIntent, request, handler, context);
        }

        /**
         * <p>Replaces the existing resource policy for a bot or bot alias with a new one.
         * If the policy doesn't exist, Amazon Lex returns an exception.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourcePolicyOutcome UpdateResourcePolicy(const Model::UpdateResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResourcePolicyRequestT = Model::UpdateResourcePolicyRequest>
        Model::UpdateResourcePolicyOutcomeCallable UpdateResourcePolicyCallable(const UpdateResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::UpdateResourcePolicy, request);
        }

        /**
         * An Async wrapper for UpdateResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourcePolicyRequestT = Model::UpdateResourcePolicyRequest>
        void UpdateResourcePolicyAsync(const UpdateResourcePolicyRequestT& request, const UpdateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::UpdateResourcePolicy, request, handler, context);
        }

        /**
         * <p>Updates the settings for a slot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateSlot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSlotOutcome UpdateSlot(const Model::UpdateSlotRequest& request) const;

        /**
         * A Callable wrapper for UpdateSlot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSlotRequestT = Model::UpdateSlotRequest>
        Model::UpdateSlotOutcomeCallable UpdateSlotCallable(const UpdateSlotRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::UpdateSlot, request);
        }

        /**
         * An Async wrapper for UpdateSlot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSlotRequestT = Model::UpdateSlotRequest>
        void UpdateSlotAsync(const UpdateSlotRequestT& request, const UpdateSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::UpdateSlot, request, handler, context);
        }

        /**
         * <p>Updates the configuration of an existing slot type.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateSlotType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSlotTypeOutcome UpdateSlotType(const Model::UpdateSlotTypeRequest& request) const;

        /**
         * A Callable wrapper for UpdateSlotType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSlotTypeRequestT = Model::UpdateSlotTypeRequest>
        Model::UpdateSlotTypeOutcomeCallable UpdateSlotTypeCallable(const UpdateSlotTypeRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::UpdateSlotType, request);
        }

        /**
         * An Async wrapper for UpdateSlotType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSlotTypeRequestT = Model::UpdateSlotTypeRequest>
        void UpdateSlotTypeAsync(const UpdateSlotTypeRequestT& request, const UpdateSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::UpdateSlotType, request, handler, context);
        }

        /**
         * <p>The action to update the test set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateTestSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTestSetOutcome UpdateTestSet(const Model::UpdateTestSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateTestSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTestSetRequestT = Model::UpdateTestSetRequest>
        Model::UpdateTestSetOutcomeCallable UpdateTestSetCallable(const UpdateTestSetRequestT& request) const
        {
            return SubmitCallable(&LexModelsV2Client::UpdateTestSet, request);
        }

        /**
         * An Async wrapper for UpdateTestSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTestSetRequestT = Model::UpdateTestSetRequest>
        void UpdateTestSetAsync(const UpdateTestSetRequestT& request, const UpdateTestSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelsV2Client::UpdateTestSet, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LexModelsV2EndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LexModelsV2Client>;
      void init(const LexModelsV2ClientConfiguration& clientConfiguration);

      LexModelsV2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LexModelsV2EndpointProviderBase> m_endpointProvider;
  };

} // namespace LexModelsV2
} // namespace Aws
