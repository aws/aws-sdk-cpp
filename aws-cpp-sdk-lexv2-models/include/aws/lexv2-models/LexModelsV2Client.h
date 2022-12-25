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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelsV2Client(const Aws::LexModelsV2::LexModelsV2ClientConfiguration& clientConfiguration = Aws::LexModelsV2::LexModelsV2ClientConfiguration(),
                          std::shared_ptr<LexModelsV2EndpointProviderBase> endpointProvider = Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelsV2Client(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<LexModelsV2EndpointProviderBase> endpointProvider = Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG),
                          const Aws::LexModelsV2::LexModelsV2ClientConfiguration& clientConfiguration = Aws::LexModelsV2::LexModelsV2ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LexModelsV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<LexModelsV2EndpointProviderBase> endpointProvider = Aws::MakeShared<LexModelsV2EndpointProvider>(ALLOCATION_TAG),
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
         * <p>Batch create custom vocabulary item for the specified locale in the specified
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BatchCreateCustomVocabularyItem">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateCustomVocabularyItemOutcome BatchCreateCustomVocabularyItem(const Model::BatchCreateCustomVocabularyItemRequest& request) const;

        /**
         * A Callable wrapper for BatchCreateCustomVocabularyItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchCreateCustomVocabularyItemOutcomeCallable BatchCreateCustomVocabularyItemCallable(const Model::BatchCreateCustomVocabularyItemRequest& request) const;

        /**
         * An Async wrapper for BatchCreateCustomVocabularyItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreateCustomVocabularyItemAsync(const Model::BatchCreateCustomVocabularyItemRequest& request, const BatchCreateCustomVocabularyItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Batch delete custom vocabulary item for the specified locale in the specified
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BatchDeleteCustomVocabularyItem">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteCustomVocabularyItemOutcome BatchDeleteCustomVocabularyItem(const Model::BatchDeleteCustomVocabularyItemRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteCustomVocabularyItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteCustomVocabularyItemOutcomeCallable BatchDeleteCustomVocabularyItemCallable(const Model::BatchDeleteCustomVocabularyItemRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteCustomVocabularyItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteCustomVocabularyItemAsync(const Model::BatchDeleteCustomVocabularyItemRequest& request, const BatchDeleteCustomVocabularyItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Batch update custom vocabulary item for the specified locale in the specified
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BatchUpdateCustomVocabularyItem">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateCustomVocabularyItemOutcome BatchUpdateCustomVocabularyItem(const Model::BatchUpdateCustomVocabularyItemRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateCustomVocabularyItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchUpdateCustomVocabularyItemOutcomeCallable BatchUpdateCustomVocabularyItemCallable(const Model::BatchUpdateCustomVocabularyItemRequest& request) const;

        /**
         * An Async wrapper for BatchUpdateCustomVocabularyItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdateCustomVocabularyItemAsync(const Model::BatchUpdateCustomVocabularyItemRequest& request, const BatchUpdateCustomVocabularyItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BuildBotLocaleOutcomeCallable BuildBotLocaleCallable(const Model::BuildBotLocaleRequest& request) const;

        /**
         * An Async wrapper for BuildBotLocale that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BuildBotLocaleAsync(const Model::BuildBotLocaleRequest& request, const BuildBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Lex conversational bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBotOutcome CreateBot(const Model::CreateBotRequest& request) const;

        /**
         * A Callable wrapper for CreateBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBotOutcomeCallable CreateBotCallable(const Model::CreateBotRequest& request) const;

        /**
         * An Async wrapper for CreateBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBotAsync(const Model::CreateBotRequest& request, const CreateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateBotAliasOutcomeCallable CreateBotAliasCallable(const Model::CreateBotAliasRequest& request) const;

        /**
         * An Async wrapper for CreateBotAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBotAliasAsync(const Model::CreateBotAliasRequest& request, const CreateBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateBotLocaleOutcomeCallable CreateBotLocaleCallable(const Model::CreateBotLocaleRequest& request) const;

        /**
         * An Async wrapper for CreateBotLocale that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBotLocaleAsync(const Model::CreateBotLocaleRequest& request, const CreateBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of the bot based on the <code>DRAFT</code> version. If
         * the <code>DRAFT</code> version of this resource hasn't changed since you created
         * the last version, Amazon Lex doesn't create a new version, it returns the last
         * created version.</p> <p>When you create the first version of a bot, Amazon Lex
         * sets the version to 1. Subsequent versions increment by 1.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBotVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBotVersionOutcome CreateBotVersion(const Model::CreateBotVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateBotVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBotVersionOutcomeCallable CreateBotVersionCallable(const Model::CreateBotVersionRequest& request) const;

        /**
         * An Async wrapper for CreateBotVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBotVersionAsync(const Model::CreateBotVersionRequest& request, const CreateBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateExportOutcomeCallable CreateExportCallable(const Model::CreateExportRequest& request) const;

        /**
         * An Async wrapper for CreateExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateExportAsync(const Model::CreateExportRequest& request, const CreateExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateIntentOutcomeCallable CreateIntentCallable(const Model::CreateIntentRequest& request) const;

        /**
         * An Async wrapper for CreateIntent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIntentAsync(const Model::CreateIntentRequest& request, const CreateIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateResourcePolicyOutcomeCallable CreateResourcePolicyCallable(const Model::CreateResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for CreateResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourcePolicyAsync(const Model::CreateResourcePolicyRequest& request, const CreateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateResourcePolicyStatementOutcomeCallable CreateResourcePolicyStatementCallable(const Model::CreateResourcePolicyStatementRequest& request) const;

        /**
         * An Async wrapper for CreateResourcePolicyStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourcePolicyStatementAsync(const Model::CreateResourcePolicyStatementRequest& request, const CreateResourcePolicyStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateSlotOutcomeCallable CreateSlotCallable(const Model::CreateSlotRequest& request) const;

        /**
         * An Async wrapper for CreateSlot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSlotAsync(const Model::CreateSlotRequest& request, const CreateSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateSlotTypeOutcomeCallable CreateSlotTypeCallable(const Model::CreateSlotTypeRequest& request) const;

        /**
         * An Async wrapper for CreateSlotType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSlotTypeAsync(const Model::CreateSlotTypeRequest& request, const CreateSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateUploadUrlOutcomeCallable CreateUploadUrlCallable(const Model::CreateUploadUrlRequest& request) const;

        /**
         * An Async wrapper for CreateUploadUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUploadUrlAsync(const Model::CreateUploadUrlRequest& request, const CreateUploadUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteBotOutcomeCallable DeleteBotCallable(const Model::DeleteBotRequest& request) const;

        /**
         * An Async wrapper for DeleteBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBotAsync(const Model::DeleteBotRequest& request, const DeleteBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified bot alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotAliasOutcome DeleteBotAlias(const Model::DeleteBotAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteBotAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBotAliasOutcomeCallable DeleteBotAliasCallable(const Model::DeleteBotAliasRequest& request) const;

        /**
         * An Async wrapper for DeleteBotAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBotAliasAsync(const Model::DeleteBotAliasRequest& request, const DeleteBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteBotLocaleOutcomeCallable DeleteBotLocaleCallable(const Model::DeleteBotLocaleRequest& request) const;

        /**
         * An Async wrapper for DeleteBotLocale that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBotLocaleAsync(const Model::DeleteBotLocaleRequest& request, const DeleteBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific version of a bot. To delete all version of a bot, use the
         * <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DeleteBot.html">DeleteBot</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotVersionOutcome DeleteBotVersion(const Model::DeleteBotVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteBotVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBotVersionOutcomeCallable DeleteBotVersionCallable(const Model::DeleteBotVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteBotVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBotVersionAsync(const Model::DeleteBotVersionRequest& request, const DeleteBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteCustomVocabularyOutcomeCallable DeleteCustomVocabularyCallable(const Model::DeleteCustomVocabularyRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomVocabulary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomVocabularyAsync(const Model::DeleteCustomVocabularyRequest& request, const DeleteCustomVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteExportOutcomeCallable DeleteExportCallable(const Model::DeleteExportRequest& request) const;

        /**
         * An Async wrapper for DeleteExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteExportAsync(const Model::DeleteExportRequest& request, const DeleteExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteImportOutcomeCallable DeleteImportCallable(const Model::DeleteImportRequest& request) const;

        /**
         * An Async wrapper for DeleteImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteImportAsync(const Model::DeleteImportRequest& request, const DeleteImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteIntentOutcomeCallable DeleteIntentCallable(const Model::DeleteIntentRequest& request) const;

        /**
         * An Async wrapper for DeleteIntent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIntentAsync(const Model::DeleteIntentRequest& request, const DeleteIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteResourcePolicyStatementOutcomeCallable DeleteResourcePolicyStatementCallable(const Model::DeleteResourcePolicyStatementRequest& request) const;

        /**
         * An Async wrapper for DeleteResourcePolicyStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyStatementAsync(const Model::DeleteResourcePolicyStatementRequest& request, const DeleteResourcePolicyStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified slot from an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteSlot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlotOutcome DeleteSlot(const Model::DeleteSlotRequest& request) const;

        /**
         * A Callable wrapper for DeleteSlot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSlotOutcomeCallable DeleteSlotCallable(const Model::DeleteSlotRequest& request) const;

        /**
         * An Async wrapper for DeleteSlot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSlotAsync(const Model::DeleteSlotRequest& request, const DeleteSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteSlotTypeOutcomeCallable DeleteSlotTypeCallable(const Model::DeleteSlotTypeRequest& request) const;

        /**
         * An Async wrapper for DeleteSlotType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSlotTypeAsync(const Model::DeleteSlotTypeRequest& request, const DeleteSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes stored utterances.</p> <p>Amazon Lex stores the utterances that users
         * send to your bot. Utterances are stored for 15 days for use with the <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_ListAggregatedUtterances.html">ListAggregatedUtterances</a>
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
        virtual Model::DeleteUtterancesOutcomeCallable DeleteUtterancesCallable(const Model::DeleteUtterancesRequest& request) const;

        /**
         * An Async wrapper for DeleteUtterances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUtterancesAsync(const Model::DeleteUtterancesRequest& request, const DeleteUtterancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides metadata information about a bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBot">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotOutcome DescribeBot(const Model::DescribeBotRequest& request) const;

        /**
         * A Callable wrapper for DescribeBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBotOutcomeCallable DescribeBotCallable(const Model::DescribeBotRequest& request) const;

        /**
         * An Async wrapper for DescribeBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBotAsync(const Model::DescribeBotRequest& request, const DescribeBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about a specific bot alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotAliasOutcome DescribeBotAlias(const Model::DescribeBotAliasRequest& request) const;

        /**
         * A Callable wrapper for DescribeBotAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBotAliasOutcomeCallable DescribeBotAliasCallable(const Model::DescribeBotAliasRequest& request) const;

        /**
         * An Async wrapper for DescribeBotAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBotAliasAsync(const Model::DescribeBotAliasRequest& request, const DescribeBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeBotLocaleOutcomeCallable DescribeBotLocaleCallable(const Model::DescribeBotLocaleRequest& request) const;

        /**
         * An Async wrapper for DescribeBotLocale that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBotLocaleAsync(const Model::DescribeBotLocaleRequest& request, const DescribeBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeBotRecommendationOutcomeCallable DescribeBotRecommendationCallable(const Model::DescribeBotRecommendationRequest& request) const;

        /**
         * An Async wrapper for DescribeBotRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBotRecommendationAsync(const Model::DescribeBotRecommendationRequest& request, const DescribeBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides metadata about a version of a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotVersionOutcome DescribeBotVersion(const Model::DescribeBotVersionRequest& request) const;

        /**
         * A Callable wrapper for DescribeBotVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBotVersionOutcomeCallable DescribeBotVersionCallable(const Model::DescribeBotVersionRequest& request) const;

        /**
         * An Async wrapper for DescribeBotVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBotVersionAsync(const Model::DescribeBotVersionRequest& request, const DescribeBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeCustomVocabularyMetadataOutcomeCallable DescribeCustomVocabularyMetadataCallable(const Model::DescribeCustomVocabularyMetadataRequest& request) const;

        /**
         * An Async wrapper for DescribeCustomVocabularyMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomVocabularyMetadataAsync(const Model::DescribeCustomVocabularyMetadataRequest& request, const DescribeCustomVocabularyMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specific export.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeExport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportOutcome DescribeExport(const Model::DescribeExportRequest& request) const;

        /**
         * A Callable wrapper for DescribeExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeExportOutcomeCallable DescribeExportCallable(const Model::DescribeExportRequest& request) const;

        /**
         * An Async wrapper for DescribeExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeExportAsync(const Model::DescribeExportRequest& request, const DescribeExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specific import.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeImport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImportOutcome DescribeImport(const Model::DescribeImportRequest& request) const;

        /**
         * A Callable wrapper for DescribeImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeImportOutcomeCallable DescribeImportCallable(const Model::DescribeImportRequest& request) const;

        /**
         * An Async wrapper for DescribeImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeImportAsync(const Model::DescribeImportRequest& request, const DescribeImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIntentOutcome DescribeIntent(const Model::DescribeIntentRequest& request) const;

        /**
         * A Callable wrapper for DescribeIntent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIntentOutcomeCallable DescribeIntentCallable(const Model::DescribeIntentRequest& request) const;

        /**
         * An Async wrapper for DescribeIntent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIntentAsync(const Model::DescribeIntentRequest& request, const DescribeIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeResourcePolicyOutcomeCallable DescribeResourcePolicyCallable(const Model::DescribeResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for DescribeResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourcePolicyAsync(const Model::DescribeResourcePolicyRequest& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets metadata information about a slot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeSlot">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlotOutcome DescribeSlot(const Model::DescribeSlotRequest& request) const;

        /**
         * A Callable wrapper for DescribeSlot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSlotOutcomeCallable DescribeSlotCallable(const Model::DescribeSlotRequest& request) const;

        /**
         * An Async wrapper for DescribeSlot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSlotAsync(const Model::DescribeSlotRequest& request, const DescribeSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets metadata information about a slot type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeSlotType">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlotTypeOutcome DescribeSlotType(const Model::DescribeSlotTypeRequest& request) const;

        /**
         * A Callable wrapper for DescribeSlotType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSlotTypeOutcomeCallable DescribeSlotTypeCallable(const Model::DescribeSlotTypeRequest& request) const;

        /**
         * An Async wrapper for DescribeSlotType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSlotTypeAsync(const Model::DescribeSlotTypeRequest& request, const DescribeSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListAggregatedUtterancesOutcomeCallable ListAggregatedUtterancesCallable(const Model::ListAggregatedUtterancesRequest& request) const;

        /**
         * An Async wrapper for ListAggregatedUtterances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAggregatedUtterancesAsync(const Model::ListAggregatedUtterancesRequest& request, const ListAggregatedUtterancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of aliases for the specified bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotAliasesOutcome ListBotAliases(const Model::ListBotAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListBotAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBotAliasesOutcomeCallable ListBotAliasesCallable(const Model::ListBotAliasesRequest& request) const;

        /**
         * An Async wrapper for ListBotAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBotAliasesAsync(const Model::ListBotAliasesRequest& request, const ListBotAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of locales for the specified bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotLocales">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotLocalesOutcome ListBotLocales(const Model::ListBotLocalesRequest& request) const;

        /**
         * A Callable wrapper for ListBotLocales that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBotLocalesOutcomeCallable ListBotLocalesCallable(const Model::ListBotLocalesRequest& request) const;

        /**
         * An Async wrapper for ListBotLocales that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBotLocalesAsync(const Model::ListBotLocalesRequest& request, const ListBotLocalesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListBotRecommendationsOutcomeCallable ListBotRecommendationsCallable(const Model::ListBotRecommendationsRequest& request) const;

        /**
         * An Async wrapper for ListBotRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBotRecommendationsAsync(const Model::ListBotRecommendationsRequest& request, const ListBotRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListBotVersionsOutcomeCallable ListBotVersionsCallable(const Model::ListBotVersionsRequest& request) const;

        /**
         * An Async wrapper for ListBotVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBotVersionsAsync(const Model::ListBotVersionsRequest& request, const ListBotVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of available bots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotsOutcome ListBots(const Model::ListBotsRequest& request) const;

        /**
         * A Callable wrapper for ListBots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBotsOutcomeCallable ListBotsCallable(const Model::ListBotsRequest& request) const;

        /**
         * An Async wrapper for ListBots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBotsAsync(const Model::ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of built-in intents provided by Amazon Lex that you can use in
         * your bot. </p> <p>To use a built-in intent as a the base for your own intent,
         * include the built-in intent signature in the <code>parentIntentSignature</code>
         * parameter when you call the <code>CreateIntent</code> operation. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateIntent.html">CreateIntent</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBuiltInIntents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuiltInIntentsOutcome ListBuiltInIntents(const Model::ListBuiltInIntentsRequest& request) const;

        /**
         * A Callable wrapper for ListBuiltInIntents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuiltInIntentsOutcomeCallable ListBuiltInIntentsCallable(const Model::ListBuiltInIntentsRequest& request) const;

        /**
         * An Async wrapper for ListBuiltInIntents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuiltInIntentsAsync(const Model::ListBuiltInIntentsRequest& request, const ListBuiltInIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListBuiltInSlotTypesOutcomeCallable ListBuiltInSlotTypesCallable(const Model::ListBuiltInSlotTypesRequest& request) const;

        /**
         * An Async wrapper for ListBuiltInSlotTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuiltInSlotTypesAsync(const Model::ListBuiltInSlotTypesRequest& request, const ListBuiltInSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List custom vocabulary items for the specified locale in the specified
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListCustomVocabularyItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomVocabularyItemsOutcome ListCustomVocabularyItems(const Model::ListCustomVocabularyItemsRequest& request) const;

        /**
         * A Callable wrapper for ListCustomVocabularyItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomVocabularyItemsOutcomeCallable ListCustomVocabularyItemsCallable(const Model::ListCustomVocabularyItemsRequest& request) const;

        /**
         * An Async wrapper for ListCustomVocabularyItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomVocabularyItemsAsync(const Model::ListCustomVocabularyItemsRequest& request, const ListCustomVocabularyItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListExportsOutcomeCallable ListExportsCallable(const Model::ListExportsRequest& request) const;

        /**
         * An Async wrapper for ListExports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListExportsAsync(const Model::ListExportsRequest& request, const ListExportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListImportsOutcomeCallable ListImportsCallable(const Model::ListImportsRequest& request) const;

        /**
         * An Async wrapper for ListImports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListImportsAsync(const Model::ListImportsRequest& request, const ListImportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListIntentsOutcomeCallable ListIntentsCallable(const Model::ListIntentsRequest& request) const;

        /**
         * An Async wrapper for ListIntents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIntentsAsync(const Model::ListIntentsRequest& request, const ListIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListRecommendedIntentsOutcomeCallable ListRecommendedIntentsCallable(const Model::ListRecommendedIntentsRequest& request) const;

        /**
         * An Async wrapper for ListRecommendedIntents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecommendedIntentsAsync(const Model::ListRecommendedIntentsRequest& request, const ListRecommendedIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSlotTypesOutcomeCallable ListSlotTypesCallable(const Model::ListSlotTypesRequest& request) const;

        /**
         * An Async wrapper for ListSlotTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSlotTypesAsync(const Model::ListSlotTypesRequest& request, const ListSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSlotsOutcomeCallable ListSlotsCallable(const Model::ListSlotsRequest& request) const;

        /**
         * An Async wrapper for ListSlots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSlotsAsync(const Model::ListSlotsRequest& request, const ListSlotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::SearchAssociatedTranscriptsOutcomeCallable SearchAssociatedTranscriptsCallable(const Model::SearchAssociatedTranscriptsRequest& request) const;

        /**
         * An Async wrapper for SearchAssociatedTranscripts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchAssociatedTranscriptsAsync(const Model::SearchAssociatedTranscriptsRequest& request, const SearchAssociatedTranscriptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartBotRecommendationOutcomeCallable StartBotRecommendationCallable(const Model::StartBotRecommendationRequest& request) const;

        /**
         * An Async wrapper for StartBotRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartBotRecommendationAsync(const Model::StartBotRecommendationRequest& request, const StartBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartImportOutcomeCallable StartImportCallable(const Model::StartImportRequest& request) const;

        /**
         * An Async wrapper for StartImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartImportAsync(const Model::StartImportRequest& request, const StartImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopBotRecommendationOutcomeCallable StopBotRecommendationCallable(const Model::StopBotRecommendationRequest& request) const;

        /**
         * An Async wrapper for StopBotRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopBotRecommendationAsync(const Model::StopBotRecommendationRequest& request, const StopBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of an existing bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotOutcome UpdateBot(const Model::UpdateBotRequest& request) const;

        /**
         * A Callable wrapper for UpdateBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBotOutcomeCallable UpdateBotCallable(const Model::UpdateBotRequest& request) const;

        /**
         * An Async wrapper for UpdateBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBotAsync(const Model::UpdateBotRequest& request, const UpdateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateBotAliasOutcomeCallable UpdateBotAliasCallable(const Model::UpdateBotAliasRequest& request) const;

        /**
         * An Async wrapper for UpdateBotAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBotAliasAsync(const Model::UpdateBotAliasRequest& request, const UpdateBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateBotLocaleOutcomeCallable UpdateBotLocaleCallable(const Model::UpdateBotLocaleRequest& request) const;

        /**
         * An Async wrapper for UpdateBotLocale that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBotLocaleAsync(const Model::UpdateBotLocaleRequest& request, const UpdateBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing bot recommendation request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBotRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotRecommendationOutcome UpdateBotRecommendation(const Model::UpdateBotRecommendationRequest& request) const;

        /**
         * A Callable wrapper for UpdateBotRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBotRecommendationOutcomeCallable UpdateBotRecommendationCallable(const Model::UpdateBotRecommendationRequest& request) const;

        /**
         * An Async wrapper for UpdateBotRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBotRecommendationAsync(const Model::UpdateBotRecommendationRequest& request, const UpdateBotRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the password used to protect an export zip archive.</p> <p>The
         * password is not required. If you don't supply a password, Amazon Lex generates a
         * zip file that is not protected by a password. This is the archive that is
         * available at the pre-signed S3 URL provided by the <a
         * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_DescribeExport.html">DescribeExport</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateExport">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateExportOutcome UpdateExport(const Model::UpdateExportRequest& request) const;

        /**
         * A Callable wrapper for UpdateExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateExportOutcomeCallable UpdateExportCallable(const Model::UpdateExportRequest& request) const;

        /**
         * An Async wrapper for UpdateExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateExportAsync(const Model::UpdateExportRequest& request, const UpdateExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntentOutcome UpdateIntent(const Model::UpdateIntentRequest& request) const;

        /**
         * A Callable wrapper for UpdateIntent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIntentOutcomeCallable UpdateIntentCallable(const Model::UpdateIntentRequest& request) const;

        /**
         * An Async wrapper for UpdateIntent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIntentAsync(const Model::UpdateIntentRequest& request, const UpdateIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateResourcePolicyOutcomeCallable UpdateResourcePolicyCallable(const Model::UpdateResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for UpdateResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourcePolicyAsync(const Model::UpdateResourcePolicyRequest& request, const UpdateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for a slot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateSlot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSlotOutcome UpdateSlot(const Model::UpdateSlotRequest& request) const;

        /**
         * A Callable wrapper for UpdateSlot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSlotOutcomeCallable UpdateSlotCallable(const Model::UpdateSlotRequest& request) const;

        /**
         * An Async wrapper for UpdateSlot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSlotAsync(const Model::UpdateSlotRequest& request, const UpdateSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateSlotTypeOutcomeCallable UpdateSlotTypeCallable(const Model::UpdateSlotTypeRequest& request) const;

        /**
         * An Async wrapper for UpdateSlotType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSlotTypeAsync(const Model::UpdateSlotTypeRequest& request, const UpdateSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
