/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/LexModelsV2ServiceClientModel.h>
#include <aws/lexv2-models/LexModelsV2LegacyAsyncMacros.h>

namespace Aws
{
namespace LexModelsV2
{
  /**
   * <p/>
   */
  class AWS_LEXMODELSV2_API LexModelsV2Client : public Aws::Client::AWSJsonClient
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
         * <p>Batch create custom vocabulary item for the specified locale in the specified
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BatchCreateCustomVocabularyItem">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreateCustomVocabularyItemOutcome BatchCreateCustomVocabularyItem(const Model::BatchCreateCustomVocabularyItemRequest& request) const;


        /**
         * <p>Batch delete custom vocabulary item for the specified locale in the specified
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BatchDeleteCustomVocabularyItem">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteCustomVocabularyItemOutcome BatchDeleteCustomVocabularyItem(const Model::BatchDeleteCustomVocabularyItemRequest& request) const;


        /**
         * <p>Batch update custom vocabulary item for the specified locale in the specified
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BatchUpdateCustomVocabularyItem">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateCustomVocabularyItemOutcome BatchUpdateCustomVocabularyItem(const Model::BatchUpdateCustomVocabularyItemRequest& request) const;


        /**
         * <p>Builds a bot, its intents, and its slot types into a specific locale. A bot
         * can be built into multiple locales. At runtime the locale is used to choose a
         * specific build of the bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BuildBotLocale">AWS
         * API Reference</a></p>
         */
        virtual Model::BuildBotLocaleOutcome BuildBotLocale(const Model::BuildBotLocaleRequest& request) const;


        /**
         * <p>Creates an Amazon Lex conversational bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBotOutcome CreateBot(const Model::CreateBotRequest& request) const;


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
         * <p>Creates a locale in the bot. The locale contains the intents and slot types
         * that the bot uses in conversations with users in the specified language and
         * locale. You must add a locale to a bot before you can add intents and slot types
         * to the bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBotLocale">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBotLocaleOutcome CreateBotLocale(const Model::CreateBotLocaleRequest& request) const;


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
         * <p>Creates a new resource policy with the specified policy
         * statements.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourcePolicyOutcome CreateResourcePolicy(const Model::CreateResourcePolicyRequest& request) const;


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
         * <p>Creates a custom slot type</p> <p> To create a custom slot type, specify a
         * name for the slot type and a set of enumeration values, the values that a slot
         * of this type can assume. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateSlotType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSlotTypeOutcome CreateSlotType(const Model::CreateSlotTypeRequest& request) const;


        /**
         * <p>Gets a pre-signed S3 write URL that you use to upload the zip archive when
         * importing a bot or a bot locale. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateUploadUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUploadUrlOutcome CreateUploadUrl(const Model::CreateUploadUrlRequest& request) const;


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
         * <p>Deletes the specified bot alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotAliasOutcome DeleteBotAlias(const Model::DeleteBotAliasRequest& request) const;


        /**
         * <p>Removes a locale from a bot.</p> <p>When you delete a locale, all intents,
         * slots, and slot types defined for the locale are also deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotLocale">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotLocaleOutcome DeleteBotLocale(const Model::DeleteBotLocaleRequest& request) const;


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
         * <p>Removes a custom vocabulary from the specified locale in the specified
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteCustomVocabulary">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomVocabularyOutcome DeleteCustomVocabulary(const Model::DeleteCustomVocabularyRequest& request) const;


        /**
         * <p>Removes a previous export and the associated files stored in an S3
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteExport">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteExportOutcome DeleteExport(const Model::DeleteExportRequest& request) const;


        /**
         * <p>Removes a previous import and the associated file stored in an S3
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteImport">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteImportOutcome DeleteImport(const Model::DeleteImportRequest& request) const;


        /**
         * <p>Removes the specified intent.</p> <p>Deleting an intent also deletes the
         * slots associated with the intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntentOutcome DeleteIntent(const Model::DeleteIntentRequest& request) const;


        /**
         * <p>Removes an existing policy from a bot or bot alias. If the resource doesn't
         * have a policy attached, Amazon Lex returns an exception.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;


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
         * <p>Deletes the specified slot from an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteSlot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlotOutcome DeleteSlot(const Model::DeleteSlotRequest& request) const;


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
         * <p>Provides metadata information about a bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBot">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotOutcome DescribeBot(const Model::DescribeBotRequest& request) const;


        /**
         * <p>Get information about a specific bot alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotAliasOutcome DescribeBotAlias(const Model::DescribeBotAliasRequest& request) const;


        /**
         * <p>Describes the settings that a bot has for a specific locale. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotLocale">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotLocaleOutcome DescribeBotLocale(const Model::DescribeBotLocaleRequest& request) const;


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
         * <p>Provides metadata about a version of a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotVersionOutcome DescribeBotVersion(const Model::DescribeBotVersionRequest& request) const;


        /**
         * <p>Provides metadata information about a custom vocabulary.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeCustomVocabularyMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomVocabularyMetadataOutcome DescribeCustomVocabularyMetadata(const Model::DescribeCustomVocabularyMetadataRequest& request) const;


        /**
         * <p>Gets information about a specific export.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeExport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportOutcome DescribeExport(const Model::DescribeExportRequest& request) const;


        /**
         * <p>Gets information about a specific import.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeImport">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeImportOutcome DescribeImport(const Model::DescribeImportRequest& request) const;


        /**
         * <p>Returns metadata about an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIntentOutcome DescribeIntent(const Model::DescribeIntentRequest& request) const;


        /**
         * <p>Gets the resource policy and policy revision for a bot or bot
         * alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePolicyOutcome DescribeResourcePolicy(const Model::DescribeResourcePolicyRequest& request) const;


        /**
         * <p>Gets metadata information about a slot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeSlot">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlotOutcome DescribeSlot(const Model::DescribeSlotRequest& request) const;


        /**
         * <p>Gets metadata information about a slot type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeSlotType">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlotTypeOutcome DescribeSlotType(const Model::DescribeSlotTypeRequest& request) const;


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
         * <p>Gets a list of aliases for the specified bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotAliasesOutcome ListBotAliases(const Model::ListBotAliasesRequest& request) const;


        /**
         * <p>Gets a list of locales for the specified bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotLocales">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotLocalesOutcome ListBotLocales(const Model::ListBotLocalesRequest& request) const;


        /**
         * <p>Get a list of bot recommendations that meet the specified
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotRecommendationsOutcome ListBotRecommendations(const Model::ListBotRecommendationsRequest& request) const;


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
         * <p>Gets a list of available bots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotsOutcome ListBots(const Model::ListBotsRequest& request) const;


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
         * <p>Gets a list of built-in slot types that meet the specified
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBuiltInSlotTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuiltInSlotTypesOutcome ListBuiltInSlotTypes(const Model::ListBuiltInSlotTypesRequest& request) const;


        /**
         * <p>List custom vocabulary items for the specified locale in the specified
         * bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListCustomVocabularyItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomVocabularyItemsOutcome ListCustomVocabularyItems(const Model::ListCustomVocabularyItemsRequest& request) const;


        /**
         * <p>Lists the exports for a bot, bot locale, or custom vocabulary. Exports are
         * kept in the list for 7 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListExports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExportsOutcome ListExports(const Model::ListExportsRequest& request) const;


        /**
         * <p>Lists the imports for a bot, bot locale, or custom vocabulary. Imports are
         * kept in the list for 7 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListImports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportsOutcome ListImports(const Model::ListImportsRequest& request) const;


        /**
         * <p>Get a list of intents that meet the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListIntents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIntentsOutcome ListIntents(const Model::ListIntentsRequest& request) const;


        /**
         * <p>Gets a list of recommended intents provided by the bot recommendation that
         * you can use in your bot. Intents in the response are ordered by
         * relevance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListRecommendedIntents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendedIntentsOutcome ListRecommendedIntents(const Model::ListRecommendedIntentsRequest& request) const;


        /**
         * <p>Gets a list of slot types that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListSlotTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSlotTypesOutcome ListSlotTypes(const Model::ListSlotTypesRequest& request) const;


        /**
         * <p>Gets a list of slots that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListSlots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSlotsOutcome ListSlots(const Model::ListSlotsRequest& request) const;


        /**
         * <p>Gets a list of tags associated with a resource. Only bots, bot aliases, and
         * bot channels can have tags associated with them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Search for associated transcripts that meet the specified
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SearchAssociatedTranscripts">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAssociatedTranscriptsOutcome SearchAssociatedTranscripts(const Model::SearchAssociatedTranscriptsRequest& request) const;


        /**
         * <p>Use this to provide your transcript data, and to start the bot recommendation
         * process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/StartBotRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBotRecommendationOutcome StartBotRecommendation(const Model::StartBotRecommendationRequest& request) const;


        /**
         * <p>Starts importing a bot, bot locale, or custom vocabulary from a zip archive
         * that you uploaded to an S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/StartImport">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportOutcome StartImport(const Model::StartImportRequest& request) const;


        /**
         * <p>Stop an already running Bot Recommendation request.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/StopBotRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBotRecommendationOutcome StopBotRecommendation(const Model::StopBotRecommendationRequest& request) const;


        /**
         * <p>Adds the specified tags to the specified resource. If a tag key already
         * exists, the existing value is replaced with the new value.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from a bot, bot alias, or bot channel.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the configuration of an existing bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotOutcome UpdateBot(const Model::UpdateBotRequest& request) const;


        /**
         * <p>Updates the configuration of an existing bot alias.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotAliasOutcome UpdateBotAlias(const Model::UpdateBotAliasRequest& request) const;


        /**
         * <p>Updates the settings that a bot has for a specific locale.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBotLocale">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotLocaleOutcome UpdateBotLocale(const Model::UpdateBotLocaleRequest& request) const;


        /**
         * <p>Updates an existing bot recommendation request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBotRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotRecommendationOutcome UpdateBotRecommendation(const Model::UpdateBotRecommendationRequest& request) const;


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
         * <p>Updates the settings for an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntentOutcome UpdateIntent(const Model::UpdateIntentRequest& request) const;


        /**
         * <p>Replaces the existing resource policy for a bot or bot alias with a new one.
         * If the policy doesn't exist, Amazon Lex returns an exception.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourcePolicyOutcome UpdateResourcePolicy(const Model::UpdateResourcePolicyRequest& request) const;


        /**
         * <p>Updates the settings for a slot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateSlot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSlotOutcome UpdateSlot(const Model::UpdateSlotRequest& request) const;


        /**
         * <p>Updates the configuration of an existing slot type.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateSlotType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSlotTypeOutcome UpdateSlotType(const Model::UpdateSlotTypeRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LexModelsV2EndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const LexModelsV2ClientConfiguration& clientConfiguration);

      LexModelsV2ClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LexModelsV2EndpointProviderBase> m_endpointProvider;
  };

} // namespace LexModelsV2
} // namespace Aws
