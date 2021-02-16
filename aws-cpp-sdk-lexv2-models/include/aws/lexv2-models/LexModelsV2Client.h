/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/BuildBotLocaleResult.h>
#include <aws/lexv2-models/model/CreateBotResult.h>
#include <aws/lexv2-models/model/CreateBotAliasResult.h>
#include <aws/lexv2-models/model/CreateBotLocaleResult.h>
#include <aws/lexv2-models/model/CreateBotVersionResult.h>
#include <aws/lexv2-models/model/CreateIntentResult.h>
#include <aws/lexv2-models/model/CreateSlotResult.h>
#include <aws/lexv2-models/model/CreateSlotTypeResult.h>
#include <aws/lexv2-models/model/DeleteBotResult.h>
#include <aws/lexv2-models/model/DeleteBotAliasResult.h>
#include <aws/lexv2-models/model/DeleteBotLocaleResult.h>
#include <aws/lexv2-models/model/DeleteBotVersionResult.h>
#include <aws/lexv2-models/model/DescribeBotResult.h>
#include <aws/lexv2-models/model/DescribeBotAliasResult.h>
#include <aws/lexv2-models/model/DescribeBotLocaleResult.h>
#include <aws/lexv2-models/model/DescribeBotVersionResult.h>
#include <aws/lexv2-models/model/DescribeIntentResult.h>
#include <aws/lexv2-models/model/DescribeSlotResult.h>
#include <aws/lexv2-models/model/DescribeSlotTypeResult.h>
#include <aws/lexv2-models/model/ListBotAliasesResult.h>
#include <aws/lexv2-models/model/ListBotLocalesResult.h>
#include <aws/lexv2-models/model/ListBotVersionsResult.h>
#include <aws/lexv2-models/model/ListBotsResult.h>
#include <aws/lexv2-models/model/ListBuiltInIntentsResult.h>
#include <aws/lexv2-models/model/ListBuiltInSlotTypesResult.h>
#include <aws/lexv2-models/model/ListIntentsResult.h>
#include <aws/lexv2-models/model/ListSlotTypesResult.h>
#include <aws/lexv2-models/model/ListSlotsResult.h>
#include <aws/lexv2-models/model/ListTagsForResourceResult.h>
#include <aws/lexv2-models/model/TagResourceResult.h>
#include <aws/lexv2-models/model/UntagResourceResult.h>
#include <aws/lexv2-models/model/UpdateBotResult.h>
#include <aws/lexv2-models/model/UpdateBotAliasResult.h>
#include <aws/lexv2-models/model/UpdateBotLocaleResult.h>
#include <aws/lexv2-models/model/UpdateIntentResult.h>
#include <aws/lexv2-models/model/UpdateSlotResult.h>
#include <aws/lexv2-models/model/UpdateSlotTypeResult.h>
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

namespace LexModelsV2
{

namespace Model
{
        class BuildBotLocaleRequest;
        class CreateBotRequest;
        class CreateBotAliasRequest;
        class CreateBotLocaleRequest;
        class CreateBotVersionRequest;
        class CreateIntentRequest;
        class CreateSlotRequest;
        class CreateSlotTypeRequest;
        class DeleteBotRequest;
        class DeleteBotAliasRequest;
        class DeleteBotLocaleRequest;
        class DeleteBotVersionRequest;
        class DeleteIntentRequest;
        class DeleteSlotRequest;
        class DeleteSlotTypeRequest;
        class DescribeBotRequest;
        class DescribeBotAliasRequest;
        class DescribeBotLocaleRequest;
        class DescribeBotVersionRequest;
        class DescribeIntentRequest;
        class DescribeSlotRequest;
        class DescribeSlotTypeRequest;
        class ListBotAliasesRequest;
        class ListBotLocalesRequest;
        class ListBotVersionsRequest;
        class ListBotsRequest;
        class ListBuiltInIntentsRequest;
        class ListBuiltInSlotTypesRequest;
        class ListIntentsRequest;
        class ListSlotTypesRequest;
        class ListSlotsRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateBotRequest;
        class UpdateBotAliasRequest;
        class UpdateBotLocaleRequest;
        class UpdateIntentRequest;
        class UpdateSlotRequest;
        class UpdateSlotTypeRequest;

        typedef Aws::Utils::Outcome<BuildBotLocaleResult, LexModelsV2Error> BuildBotLocaleOutcome;
        typedef Aws::Utils::Outcome<CreateBotResult, LexModelsV2Error> CreateBotOutcome;
        typedef Aws::Utils::Outcome<CreateBotAliasResult, LexModelsV2Error> CreateBotAliasOutcome;
        typedef Aws::Utils::Outcome<CreateBotLocaleResult, LexModelsV2Error> CreateBotLocaleOutcome;
        typedef Aws::Utils::Outcome<CreateBotVersionResult, LexModelsV2Error> CreateBotVersionOutcome;
        typedef Aws::Utils::Outcome<CreateIntentResult, LexModelsV2Error> CreateIntentOutcome;
        typedef Aws::Utils::Outcome<CreateSlotResult, LexModelsV2Error> CreateSlotOutcome;
        typedef Aws::Utils::Outcome<CreateSlotTypeResult, LexModelsV2Error> CreateSlotTypeOutcome;
        typedef Aws::Utils::Outcome<DeleteBotResult, LexModelsV2Error> DeleteBotOutcome;
        typedef Aws::Utils::Outcome<DeleteBotAliasResult, LexModelsV2Error> DeleteBotAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteBotLocaleResult, LexModelsV2Error> DeleteBotLocaleOutcome;
        typedef Aws::Utils::Outcome<DeleteBotVersionResult, LexModelsV2Error> DeleteBotVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LexModelsV2Error> DeleteIntentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LexModelsV2Error> DeleteSlotOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, LexModelsV2Error> DeleteSlotTypeOutcome;
        typedef Aws::Utils::Outcome<DescribeBotResult, LexModelsV2Error> DescribeBotOutcome;
        typedef Aws::Utils::Outcome<DescribeBotAliasResult, LexModelsV2Error> DescribeBotAliasOutcome;
        typedef Aws::Utils::Outcome<DescribeBotLocaleResult, LexModelsV2Error> DescribeBotLocaleOutcome;
        typedef Aws::Utils::Outcome<DescribeBotVersionResult, LexModelsV2Error> DescribeBotVersionOutcome;
        typedef Aws::Utils::Outcome<DescribeIntentResult, LexModelsV2Error> DescribeIntentOutcome;
        typedef Aws::Utils::Outcome<DescribeSlotResult, LexModelsV2Error> DescribeSlotOutcome;
        typedef Aws::Utils::Outcome<DescribeSlotTypeResult, LexModelsV2Error> DescribeSlotTypeOutcome;
        typedef Aws::Utils::Outcome<ListBotAliasesResult, LexModelsV2Error> ListBotAliasesOutcome;
        typedef Aws::Utils::Outcome<ListBotLocalesResult, LexModelsV2Error> ListBotLocalesOutcome;
        typedef Aws::Utils::Outcome<ListBotVersionsResult, LexModelsV2Error> ListBotVersionsOutcome;
        typedef Aws::Utils::Outcome<ListBotsResult, LexModelsV2Error> ListBotsOutcome;
        typedef Aws::Utils::Outcome<ListBuiltInIntentsResult, LexModelsV2Error> ListBuiltInIntentsOutcome;
        typedef Aws::Utils::Outcome<ListBuiltInSlotTypesResult, LexModelsV2Error> ListBuiltInSlotTypesOutcome;
        typedef Aws::Utils::Outcome<ListIntentsResult, LexModelsV2Error> ListIntentsOutcome;
        typedef Aws::Utils::Outcome<ListSlotTypesResult, LexModelsV2Error> ListSlotTypesOutcome;
        typedef Aws::Utils::Outcome<ListSlotsResult, LexModelsV2Error> ListSlotsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, LexModelsV2Error> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, LexModelsV2Error> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, LexModelsV2Error> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateBotResult, LexModelsV2Error> UpdateBotOutcome;
        typedef Aws::Utils::Outcome<UpdateBotAliasResult, LexModelsV2Error> UpdateBotAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateBotLocaleResult, LexModelsV2Error> UpdateBotLocaleOutcome;
        typedef Aws::Utils::Outcome<UpdateIntentResult, LexModelsV2Error> UpdateIntentOutcome;
        typedef Aws::Utils::Outcome<UpdateSlotResult, LexModelsV2Error> UpdateSlotOutcome;
        typedef Aws::Utils::Outcome<UpdateSlotTypeResult, LexModelsV2Error> UpdateSlotTypeOutcome;

        typedef std::future<BuildBotLocaleOutcome> BuildBotLocaleOutcomeCallable;
        typedef std::future<CreateBotOutcome> CreateBotOutcomeCallable;
        typedef std::future<CreateBotAliasOutcome> CreateBotAliasOutcomeCallable;
        typedef std::future<CreateBotLocaleOutcome> CreateBotLocaleOutcomeCallable;
        typedef std::future<CreateBotVersionOutcome> CreateBotVersionOutcomeCallable;
        typedef std::future<CreateIntentOutcome> CreateIntentOutcomeCallable;
        typedef std::future<CreateSlotOutcome> CreateSlotOutcomeCallable;
        typedef std::future<CreateSlotTypeOutcome> CreateSlotTypeOutcomeCallable;
        typedef std::future<DeleteBotOutcome> DeleteBotOutcomeCallable;
        typedef std::future<DeleteBotAliasOutcome> DeleteBotAliasOutcomeCallable;
        typedef std::future<DeleteBotLocaleOutcome> DeleteBotLocaleOutcomeCallable;
        typedef std::future<DeleteBotVersionOutcome> DeleteBotVersionOutcomeCallable;
        typedef std::future<DeleteIntentOutcome> DeleteIntentOutcomeCallable;
        typedef std::future<DeleteSlotOutcome> DeleteSlotOutcomeCallable;
        typedef std::future<DeleteSlotTypeOutcome> DeleteSlotTypeOutcomeCallable;
        typedef std::future<DescribeBotOutcome> DescribeBotOutcomeCallable;
        typedef std::future<DescribeBotAliasOutcome> DescribeBotAliasOutcomeCallable;
        typedef std::future<DescribeBotLocaleOutcome> DescribeBotLocaleOutcomeCallable;
        typedef std::future<DescribeBotVersionOutcome> DescribeBotVersionOutcomeCallable;
        typedef std::future<DescribeIntentOutcome> DescribeIntentOutcomeCallable;
        typedef std::future<DescribeSlotOutcome> DescribeSlotOutcomeCallable;
        typedef std::future<DescribeSlotTypeOutcome> DescribeSlotTypeOutcomeCallable;
        typedef std::future<ListBotAliasesOutcome> ListBotAliasesOutcomeCallable;
        typedef std::future<ListBotLocalesOutcome> ListBotLocalesOutcomeCallable;
        typedef std::future<ListBotVersionsOutcome> ListBotVersionsOutcomeCallable;
        typedef std::future<ListBotsOutcome> ListBotsOutcomeCallable;
        typedef std::future<ListBuiltInIntentsOutcome> ListBuiltInIntentsOutcomeCallable;
        typedef std::future<ListBuiltInSlotTypesOutcome> ListBuiltInSlotTypesOutcomeCallable;
        typedef std::future<ListIntentsOutcome> ListIntentsOutcomeCallable;
        typedef std::future<ListSlotTypesOutcome> ListSlotTypesOutcomeCallable;
        typedef std::future<ListSlotsOutcome> ListSlotsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateBotOutcome> UpdateBotOutcomeCallable;
        typedef std::future<UpdateBotAliasOutcome> UpdateBotAliasOutcomeCallable;
        typedef std::future<UpdateBotLocaleOutcome> UpdateBotLocaleOutcomeCallable;
        typedef std::future<UpdateIntentOutcome> UpdateIntentOutcomeCallable;
        typedef std::future<UpdateSlotOutcome> UpdateSlotOutcomeCallable;
        typedef std::future<UpdateSlotTypeOutcome> UpdateSlotTypeOutcomeCallable;
} // namespace Model

  class LexModelsV2Client;

    typedef std::function<void(const LexModelsV2Client*, const Model::BuildBotLocaleRequest&, const Model::BuildBotLocaleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BuildBotLocaleResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateBotRequest&, const Model::CreateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateBotAliasRequest&, const Model::CreateBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateBotLocaleRequest&, const Model::CreateBotLocaleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotLocaleResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateBotVersionRequest&, const Model::CreateBotVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateIntentRequest&, const Model::CreateIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateSlotRequest&, const Model::CreateSlotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSlotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::CreateSlotTypeRequest&, const Model::CreateSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSlotTypeResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteBotRequest&, const Model::DeleteBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteBotAliasRequest&, const Model::DeleteBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteBotLocaleRequest&, const Model::DeleteBotLocaleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotLocaleResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteBotVersionRequest&, const Model::DeleteBotVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteIntentRequest&, const Model::DeleteIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteSlotRequest&, const Model::DeleteSlotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DeleteSlotTypeRequest&, const Model::DeleteSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlotTypeResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeBotRequest&, const Model::DescribeBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeBotAliasRequest&, const Model::DescribeBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeBotLocaleRequest&, const Model::DescribeBotLocaleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBotLocaleResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeBotVersionRequest&, const Model::DescribeBotVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBotVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeIntentRequest&, const Model::DescribeIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeSlotRequest&, const Model::DescribeSlotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSlotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::DescribeSlotTypeRequest&, const Model::DescribeSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSlotTypeResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBotAliasesRequest&, const Model::ListBotAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotAliasesResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBotLocalesRequest&, const Model::ListBotLocalesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotLocalesResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBotVersionsRequest&, const Model::ListBotVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotVersionsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBotsRequest&, const Model::ListBotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBotsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBuiltInIntentsRequest&, const Model::ListBuiltInIntentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuiltInIntentsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListBuiltInSlotTypesRequest&, const Model::ListBuiltInSlotTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBuiltInSlotTypesResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListIntentsRequest&, const Model::ListIntentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIntentsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListSlotTypesRequest&, const Model::ListSlotTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSlotTypesResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListSlotsRequest&, const Model::ListSlotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSlotsResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateBotRequest&, const Model::UpdateBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateBotAliasRequest&, const Model::UpdateBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateBotLocaleRequest&, const Model::UpdateBotLocaleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBotLocaleResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateIntentRequest&, const Model::UpdateIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateSlotRequest&, const Model::UpdateSlotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSlotResponseReceivedHandler;
    typedef std::function<void(const LexModelsV2Client*, const Model::UpdateSlotTypeRequest&, const Model::UpdateSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSlotTypeResponseReceivedHandler;

  /**
   * <p/>
   */
  class AWS_LEXMODELSV2_API LexModelsV2Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelsV2Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelsV2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LexModelsV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~LexModelsV2Client();


        /**
         * <p>Builds a bot, its intents, and its slot types into a specific locale. A bot
         * can be built into multiple locales. At runtime the locale is used to choose a
         * specific build of the bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BuildBotLocale">AWS
         * API Reference</a></p>
         */
        virtual Model::BuildBotLocaleOutcome BuildBotLocale(const Model::BuildBotLocaleRequest& request) const;

        /**
         * <p>Builds a bot, its intents, and its slot types into a specific locale. A bot
         * can be built into multiple locales. At runtime the locale is used to choose a
         * specific build of the bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BuildBotLocale">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BuildBotLocaleOutcomeCallable BuildBotLocaleCallable(const Model::BuildBotLocaleRequest& request) const;

        /**
         * <p>Builds a bot, its intents, and its slot types into a specific locale. A bot
         * can be built into multiple locales. At runtime the locale is used to choose a
         * specific build of the bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BuildBotLocale">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BuildBotLocaleAsync(const Model::BuildBotLocaleRequest& request, const BuildBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Lex conversational bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBotOutcome CreateBot(const Model::CreateBotRequest& request) const;

        /**
         * <p>Creates an Amazon Lex conversational bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBotOutcomeCallable CreateBotCallable(const Model::CreateBotRequest& request) const;

        /**
         * <p>Creates an Amazon Lex conversational bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates an alias for the specified version of a bot. Use an alias to enable
         * you to change the version of a bot without updating applications that use the
         * bot.</p> <p>For example, you can create an alias called "PROD" that your
         * applications use to call the Amazon Lex bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBotAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBotAliasOutcomeCallable CreateBotAliasCallable(const Model::CreateBotAliasRequest& request) const;

        /**
         * <p>Creates an alias for the specified version of a bot. Use an alias to enable
         * you to change the version of a bot without updating applications that use the
         * bot.</p> <p>For example, you can create an alias called "PROD" that your
         * applications use to call the Amazon Lex bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBotAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a locale in the bot. The locale contains the intents and slot types
         * that the bot uses in conversations with users in the specified language and
         * locale. You must add a locale to a bot before you can add intents and slot types
         * to the bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBotLocale">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBotLocaleOutcomeCallable CreateBotLocaleCallable(const Model::CreateBotLocaleRequest& request) const;

        /**
         * <p>Creates a locale in the bot. The locale contains the intents and slot types
         * that the bot uses in conversations with users in the specified language and
         * locale. You must add a locale to a bot before you can add intents and slot types
         * to the bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBotLocale">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a new version of the bot based on the <code>DRAFT</code> version. If
         * the <code>DRAFT</code> version of this resource hasn't changed since you created
         * the last version, Amazon Lex doesn't create a new version, it returns the last
         * created version.</p> <p>When you create the first version of a bot, Amazon Lex
         * sets the version to 1. Subsequent versions increment by 1.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBotVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBotVersionOutcomeCallable CreateBotVersionCallable(const Model::CreateBotVersionRequest& request) const;

        /**
         * <p>Creates a new version of the bot based on the <code>DRAFT</code> version. If
         * the <code>DRAFT</code> version of this resource hasn't changed since you created
         * the last version, Amazon Lex doesn't create a new version, it returns the last
         * created version.</p> <p>When you create the first version of a bot, Amazon Lex
         * sets the version to 1. Subsequent versions increment by 1.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateBotVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBotVersionAsync(const Model::CreateBotVersionRequest& request, const CreateBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIntentOutcomeCallable CreateIntentCallable(const Model::CreateIntentRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIntentAsync(const Model::CreateIntentRequest& request, const CreateIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Creates a slot in an intent. A slot is a variable needed to fulfill an
         * intent. For example, an <code>OrderPizza</code> intent might need slots for
         * size, crust, and number of pizzas. For each slot, you define one or more
         * utterances that Amazon Lex uses to elicit a response from the user.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateSlot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSlotOutcomeCallable CreateSlotCallable(const Model::CreateSlotRequest& request) const;

        /**
         * <p>Creates a slot in an intent. A slot is a variable needed to fulfill an
         * intent. For example, an <code>OrderPizza</code> intent might need slots for
         * size, crust, and number of pizzas. For each slot, you define one or more
         * utterances that Amazon Lex uses to elicit a response from the user.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateSlot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates a custom slot type</p> <p> To create a custom slot type, specify a
         * name for the slot type and a set of enumeration values, the values that a slot
         * of this type can assume. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateSlotType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSlotTypeOutcomeCallable CreateSlotTypeCallable(const Model::CreateSlotTypeRequest& request) const;

        /**
         * <p>Creates a custom slot type</p> <p> To create a custom slot type, specify a
         * name for the slot type and a set of enumeration values, the values that a slot
         * of this type can assume. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CreateSlotType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSlotTypeAsync(const Model::CreateSlotTypeRequest& request, const CreateSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBotOutcomeCallable DeleteBotCallable(const Model::DeleteBotRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBotAsync(const Model::DeleteBotRequest& request, const DeleteBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified bot alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotAliasOutcome DeleteBotAlias(const Model::DeleteBotAliasRequest& request) const;

        /**
         * <p>Deletes the specified bot alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBotAliasOutcomeCallable DeleteBotAliasCallable(const Model::DeleteBotAliasRequest& request) const;

        /**
         * <p>Deletes the specified bot alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes a locale from a bot.</p> <p>When you delete a locale, all intents,
         * slots, and slot types defined for the locale are also deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotLocale">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBotLocaleOutcomeCallable DeleteBotLocaleCallable(const Model::DeleteBotLocaleRequest& request) const;

        /**
         * <p>Removes a locale from a bot.</p> <p>When you delete a locale, all intents,
         * slots, and slot types defined for the locale are also deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotLocale">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBotLocaleAsync(const Model::DeleteBotLocaleRequest& request, const DeleteBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific version of a bot. To delete all version of a bot, use the
         * <a>DeleteBot</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotVersionOutcome DeleteBotVersion(const Model::DeleteBotVersionRequest& request) const;

        /**
         * <p>Deletes a specific version of a bot. To delete all version of a bot, use the
         * <a>DeleteBot</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBotVersionOutcomeCallable DeleteBotVersionCallable(const Model::DeleteBotVersionRequest& request) const;

        /**
         * <p>Deletes a specific version of a bot. To delete all version of a bot, use the
         * <a>DeleteBot</a> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteBotVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBotVersionAsync(const Model::DeleteBotVersionRequest& request, const DeleteBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified intent.</p> <p>Deleting an intent also deletes the
         * slots associated with the intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntentOutcome DeleteIntent(const Model::DeleteIntentRequest& request) const;

        /**
         * <p>Removes the specified intent.</p> <p>Deleting an intent also deletes the
         * slots associated with the intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteIntent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIntentOutcomeCallable DeleteIntentCallable(const Model::DeleteIntentRequest& request) const;

        /**
         * <p>Removes the specified intent.</p> <p>Deleting an intent also deletes the
         * slots associated with the intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteIntent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIntentAsync(const Model::DeleteIntentRequest& request, const DeleteIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified slot from an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteSlot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlotOutcome DeleteSlot(const Model::DeleteSlotRequest& request) const;

        /**
         * <p>Deletes the specified slot from an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteSlot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSlotOutcomeCallable DeleteSlotCallable(const Model::DeleteSlotRequest& request) const;

        /**
         * <p>Deletes the specified slot from an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteSlot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a slot type from a bot locale.</p> <p>If a slot is using the slot
         * type, Amazon Lex throws a <code>ResourceInUseException</code> exception. To
         * avoid the exception, set the <code>skipResourceInUseCheck</code> parameter to
         * <code>true</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteSlotType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSlotTypeOutcomeCallable DeleteSlotTypeCallable(const Model::DeleteSlotTypeRequest& request) const;

        /**
         * <p>Deletes a slot type from a bot locale.</p> <p>If a slot is using the slot
         * type, Amazon Lex throws a <code>ResourceInUseException</code> exception. To
         * avoid the exception, set the <code>skipResourceInUseCheck</code> parameter to
         * <code>true</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DeleteSlotType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSlotTypeAsync(const Model::DeleteSlotTypeRequest& request, const DeleteSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides metadata information about a bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBot">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotOutcome DescribeBot(const Model::DescribeBotRequest& request) const;

        /**
         * <p>Provides metadata information about a bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBotOutcomeCallable DescribeBotCallable(const Model::DescribeBotRequest& request) const;

        /**
         * <p>Provides metadata information about a bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBotAsync(const Model::DescribeBotRequest& request, const DescribeBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get information about a specific bot alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotAliasOutcome DescribeBotAlias(const Model::DescribeBotAliasRequest& request) const;

        /**
         * <p>Get information about a specific bot alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBotAliasOutcomeCallable DescribeBotAliasCallable(const Model::DescribeBotAliasRequest& request) const;

        /**
         * <p>Get information about a specific bot alias.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Describes the settings that a bot has for a specific locale. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotLocale">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBotLocaleOutcomeCallable DescribeBotLocaleCallable(const Model::DescribeBotLocaleRequest& request) const;

        /**
         * <p>Describes the settings that a bot has for a specific locale. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotLocale">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBotLocaleAsync(const Model::DescribeBotLocaleRequest& request, const DescribeBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides metadata about a version of a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBotVersionOutcome DescribeBotVersion(const Model::DescribeBotVersionRequest& request) const;

        /**
         * <p>Provides metadata about a version of a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBotVersionOutcomeCallable DescribeBotVersionCallable(const Model::DescribeBotVersionRequest& request) const;

        /**
         * <p>Provides metadata about a version of a bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeBotVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBotVersionAsync(const Model::DescribeBotVersionRequest& request, const DescribeBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIntentOutcome DescribeIntent(const Model::DescribeIntentRequest& request) const;

        /**
         * <p>Returns metadata about an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeIntent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIntentOutcomeCallable DescribeIntentCallable(const Model::DescribeIntentRequest& request) const;

        /**
         * <p>Returns metadata about an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeIntent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIntentAsync(const Model::DescribeIntentRequest& request, const DescribeIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets metadata information about a slot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeSlot">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlotOutcome DescribeSlot(const Model::DescribeSlotRequest& request) const;

        /**
         * <p>Gets metadata information about a slot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeSlot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSlotOutcomeCallable DescribeSlotCallable(const Model::DescribeSlotRequest& request) const;

        /**
         * <p>Gets metadata information about a slot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeSlot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSlotAsync(const Model::DescribeSlotRequest& request, const DescribeSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets metadata information about a slot type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeSlotType">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSlotTypeOutcome DescribeSlotType(const Model::DescribeSlotTypeRequest& request) const;

        /**
         * <p>Gets metadata information about a slot type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeSlotType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSlotTypeOutcomeCallable DescribeSlotTypeCallable(const Model::DescribeSlotTypeRequest& request) const;

        /**
         * <p>Gets metadata information about a slot type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DescribeSlotType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSlotTypeAsync(const Model::DescribeSlotTypeRequest& request, const DescribeSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of aliases for the specified bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotAliasesOutcome ListBotAliases(const Model::ListBotAliasesRequest& request) const;

        /**
         * <p>Gets a list of aliases for the specified bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBotAliasesOutcomeCallable ListBotAliasesCallable(const Model::ListBotAliasesRequest& request) const;

        /**
         * <p>Gets a list of aliases for the specified bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBotAliasesAsync(const Model::ListBotAliasesRequest& request, const ListBotAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of locales for the specified bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotLocales">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotLocalesOutcome ListBotLocales(const Model::ListBotLocalesRequest& request) const;

        /**
         * <p>Gets a list of locales for the specified bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotLocales">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBotLocalesOutcomeCallable ListBotLocalesCallable(const Model::ListBotLocalesRequest& request) const;

        /**
         * <p>Gets a list of locales for the specified bot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotLocales">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBotLocalesAsync(const Model::ListBotLocalesRequest& request, const ListBotLocalesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Gets information about all of the versions of a bot.</p> <p>The
         * <code>ListBotVersions</code> operation returns a summary of each version of a
         * bot. For example, if a bot has three numbered versions, the
         * <code>ListBotVersions</code> operation returns for summaries, one for each
         * numbered version and one for the <code>DRAFT</code> version.</p> <p>The
         * <code>ListBotVersions</code> operation always returns at least one version, the
         * <code>DRAFT</code> version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBotVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBotVersionsOutcomeCallable ListBotVersionsCallable(const Model::ListBotVersionsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBotVersionsAsync(const Model::ListBotVersionsRequest& request, const ListBotVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of available bots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBotsOutcome ListBots(const Model::ListBotsRequest& request) const;

        /**
         * <p>Gets a list of available bots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBotsOutcomeCallable ListBotsCallable(const Model::ListBotsRequest& request) const;

        /**
         * <p>Gets a list of available bots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBotsAsync(const Model::ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of built-in intents provided by Amazon Lex that you can use in
         * your bot. </p> <p>To use a built-in intent as a the base for your own intent,
         * include the built-in intent signature in the <code>parentIntentSignature</code>
         * parameter when you call the <code>CreateIntent</code> operation. For more
         * information, see <a>CreateIntent</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBuiltInIntents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuiltInIntentsOutcome ListBuiltInIntents(const Model::ListBuiltInIntentsRequest& request) const;

        /**
         * <p>Gets a list of built-in intents provided by Amazon Lex that you can use in
         * your bot. </p> <p>To use a built-in intent as a the base for your own intent,
         * include the built-in intent signature in the <code>parentIntentSignature</code>
         * parameter when you call the <code>CreateIntent</code> operation. For more
         * information, see <a>CreateIntent</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBuiltInIntents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuiltInIntentsOutcomeCallable ListBuiltInIntentsCallable(const Model::ListBuiltInIntentsRequest& request) const;

        /**
         * <p>Gets a list of built-in intents provided by Amazon Lex that you can use in
         * your bot. </p> <p>To use a built-in intent as a the base for your own intent,
         * include the built-in intent signature in the <code>parentIntentSignature</code>
         * parameter when you call the <code>CreateIntent</code> operation. For more
         * information, see <a>CreateIntent</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBuiltInIntents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets a list of built-in slot types that meet the specified
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBuiltInSlotTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuiltInSlotTypesOutcomeCallable ListBuiltInSlotTypesCallable(const Model::ListBuiltInSlotTypesRequest& request) const;

        /**
         * <p>Gets a list of built-in slot types that meet the specified
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListBuiltInSlotTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuiltInSlotTypesAsync(const Model::ListBuiltInSlotTypesRequest& request, const ListBuiltInSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a list of intents that meet the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListIntents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIntentsOutcome ListIntents(const Model::ListIntentsRequest& request) const;

        /**
         * <p>Get a list of intents that meet the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListIntents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIntentsOutcomeCallable ListIntentsCallable(const Model::ListIntentsRequest& request) const;

        /**
         * <p>Get a list of intents that meet the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListIntents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIntentsAsync(const Model::ListIntentsRequest& request, const ListIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of slot types that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListSlotTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSlotTypesOutcome ListSlotTypes(const Model::ListSlotTypesRequest& request) const;

        /**
         * <p>Gets a list of slot types that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListSlotTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSlotTypesOutcomeCallable ListSlotTypesCallable(const Model::ListSlotTypesRequest& request) const;

        /**
         * <p>Gets a list of slot types that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListSlotTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets a list of slots that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListSlots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSlotsOutcomeCallable ListSlotsCallable(const Model::ListSlotsRequest& request) const;

        /**
         * <p>Gets a list of slots that match the specified criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListSlots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets a list of tags associated with a resource. Only bots, bot aliases, and
         * bot channels can have tags associated with them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets a list of tags associated with a resource. Only bots, bot aliases, and
         * bot channels can have tags associated with them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds the specified tags to the specified resource. If a tag key already
         * exists, the existing value is replaced with the new value.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified resource. If a tag key already
         * exists, the existing value is replaced with the new value.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds the specified tags to the specified resource. If a tag key already
         * exists, the existing value is replaced with the new value.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes tags from a bot, bot alias, or bot channel.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a bot, bot alias, or bot channel.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of an existing bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBotOutcome UpdateBot(const Model::UpdateBotRequest& request) const;

        /**
         * <p>Updates the configuration of an existing bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBotOutcomeCallable UpdateBotCallable(const Model::UpdateBotRequest& request) const;

        /**
         * <p>Updates the configuration of an existing bot. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the configuration of an existing bot alias.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBotAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBotAliasOutcomeCallable UpdateBotAliasCallable(const Model::UpdateBotAliasRequest& request) const;

        /**
         * <p>Updates the configuration of an existing bot alias.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBotAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the settings that a bot has for a specific locale.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBotLocale">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBotLocaleOutcomeCallable UpdateBotLocaleCallable(const Model::UpdateBotLocaleRequest& request) const;

        /**
         * <p>Updates the settings that a bot has for a specific locale.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateBotLocale">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBotLocaleAsync(const Model::UpdateBotLocaleRequest& request, const UpdateBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntentOutcome UpdateIntent(const Model::UpdateIntentRequest& request) const;

        /**
         * <p>Updates the settings for an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateIntent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIntentOutcomeCallable UpdateIntentCallable(const Model::UpdateIntentRequest& request) const;

        /**
         * <p>Updates the settings for an intent.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateIntent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIntentAsync(const Model::UpdateIntentRequest& request, const UpdateIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the settings for a slot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateSlot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSlotOutcome UpdateSlot(const Model::UpdateSlotRequest& request) const;

        /**
         * <p>Updates the settings for a slot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateSlot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSlotOutcomeCallable UpdateSlotCallable(const Model::UpdateSlotRequest& request) const;

        /**
         * <p>Updates the settings for a slot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateSlot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates the configuration of an existing slot type.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateSlotType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSlotTypeOutcomeCallable UpdateSlotTypeCallable(const Model::UpdateSlotTypeRequest& request) const;

        /**
         * <p>Updates the configuration of an existing slot type.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UpdateSlotType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSlotTypeAsync(const Model::UpdateSlotTypeRequest& request, const UpdateSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BuildBotLocaleAsyncHelper(const Model::BuildBotLocaleRequest& request, const BuildBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBotAsyncHelper(const Model::CreateBotRequest& request, const CreateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBotAliasAsyncHelper(const Model::CreateBotAliasRequest& request, const CreateBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBotLocaleAsyncHelper(const Model::CreateBotLocaleRequest& request, const CreateBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBotVersionAsyncHelper(const Model::CreateBotVersionRequest& request, const CreateBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIntentAsyncHelper(const Model::CreateIntentRequest& request, const CreateIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSlotAsyncHelper(const Model::CreateSlotRequest& request, const CreateSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSlotTypeAsyncHelper(const Model::CreateSlotTypeRequest& request, const CreateSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBotAsyncHelper(const Model::DeleteBotRequest& request, const DeleteBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBotAliasAsyncHelper(const Model::DeleteBotAliasRequest& request, const DeleteBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBotLocaleAsyncHelper(const Model::DeleteBotLocaleRequest& request, const DeleteBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBotVersionAsyncHelper(const Model::DeleteBotVersionRequest& request, const DeleteBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIntentAsyncHelper(const Model::DeleteIntentRequest& request, const DeleteIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSlotAsyncHelper(const Model::DeleteSlotRequest& request, const DeleteSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSlotTypeAsyncHelper(const Model::DeleteSlotTypeRequest& request, const DeleteSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBotAsyncHelper(const Model::DescribeBotRequest& request, const DescribeBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBotAliasAsyncHelper(const Model::DescribeBotAliasRequest& request, const DescribeBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBotLocaleAsyncHelper(const Model::DescribeBotLocaleRequest& request, const DescribeBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBotVersionAsyncHelper(const Model::DescribeBotVersionRequest& request, const DescribeBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeIntentAsyncHelper(const Model::DescribeIntentRequest& request, const DescribeIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSlotAsyncHelper(const Model::DescribeSlotRequest& request, const DescribeSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSlotTypeAsyncHelper(const Model::DescribeSlotTypeRequest& request, const DescribeSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBotAliasesAsyncHelper(const Model::ListBotAliasesRequest& request, const ListBotAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBotLocalesAsyncHelper(const Model::ListBotLocalesRequest& request, const ListBotLocalesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBotVersionsAsyncHelper(const Model::ListBotVersionsRequest& request, const ListBotVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBotsAsyncHelper(const Model::ListBotsRequest& request, const ListBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBuiltInIntentsAsyncHelper(const Model::ListBuiltInIntentsRequest& request, const ListBuiltInIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBuiltInSlotTypesAsyncHelper(const Model::ListBuiltInSlotTypesRequest& request, const ListBuiltInSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIntentsAsyncHelper(const Model::ListIntentsRequest& request, const ListIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSlotTypesAsyncHelper(const Model::ListSlotTypesRequest& request, const ListSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSlotsAsyncHelper(const Model::ListSlotsRequest& request, const ListSlotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBotAsyncHelper(const Model::UpdateBotRequest& request, const UpdateBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBotAliasAsyncHelper(const Model::UpdateBotAliasRequest& request, const UpdateBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBotLocaleAsyncHelper(const Model::UpdateBotLocaleRequest& request, const UpdateBotLocaleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIntentAsyncHelper(const Model::UpdateIntentRequest& request, const UpdateIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSlotAsyncHelper(const Model::UpdateSlotRequest& request, const UpdateSlotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSlotTypeAsyncHelper(const Model::UpdateSlotTypeRequest& request, const UpdateSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LexModelsV2
} // namespace Aws
