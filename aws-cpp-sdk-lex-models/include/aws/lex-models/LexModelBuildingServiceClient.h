/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lex-models/model/CreateBotVersionResult.h>
#include <aws/lex-models/model/CreateIntentVersionResult.h>
#include <aws/lex-models/model/CreateSlotTypeVersionResult.h>
#include <aws/lex-models/model/GetBotResult.h>
#include <aws/lex-models/model/GetBotAliasResult.h>
#include <aws/lex-models/model/GetBotAliasesResult.h>
#include <aws/lex-models/model/GetBotChannelAssociationResult.h>
#include <aws/lex-models/model/GetBotChannelAssociationsResult.h>
#include <aws/lex-models/model/GetBotVersionsResult.h>
#include <aws/lex-models/model/GetBotsResult.h>
#include <aws/lex-models/model/GetBuiltinIntentResult.h>
#include <aws/lex-models/model/GetBuiltinIntentsResult.h>
#include <aws/lex-models/model/GetBuiltinSlotTypesResult.h>
#include <aws/lex-models/model/GetExportResult.h>
#include <aws/lex-models/model/GetImportResult.h>
#include <aws/lex-models/model/GetIntentResult.h>
#include <aws/lex-models/model/GetIntentVersionsResult.h>
#include <aws/lex-models/model/GetIntentsResult.h>
#include <aws/lex-models/model/GetSlotTypeResult.h>
#include <aws/lex-models/model/GetSlotTypeVersionsResult.h>
#include <aws/lex-models/model/GetSlotTypesResult.h>
#include <aws/lex-models/model/GetUtterancesViewResult.h>
#include <aws/lex-models/model/PutBotResult.h>
#include <aws/lex-models/model/PutBotAliasResult.h>
#include <aws/lex-models/model/PutIntentResult.h>
#include <aws/lex-models/model/PutSlotTypeResult.h>
#include <aws/lex-models/model/StartImportResult.h>
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

namespace LexModelBuildingService
{

namespace Model
{
        class CreateBotVersionRequest;
        class CreateIntentVersionRequest;
        class CreateSlotTypeVersionRequest;
        class DeleteBotRequest;
        class DeleteBotAliasRequest;
        class DeleteBotChannelAssociationRequest;
        class DeleteBotVersionRequest;
        class DeleteIntentRequest;
        class DeleteIntentVersionRequest;
        class DeleteSlotTypeRequest;
        class DeleteSlotTypeVersionRequest;
        class DeleteUtterancesRequest;
        class GetBotRequest;
        class GetBotAliasRequest;
        class GetBotAliasesRequest;
        class GetBotChannelAssociationRequest;
        class GetBotChannelAssociationsRequest;
        class GetBotVersionsRequest;
        class GetBotsRequest;
        class GetBuiltinIntentRequest;
        class GetBuiltinIntentsRequest;
        class GetBuiltinSlotTypesRequest;
        class GetExportRequest;
        class GetImportRequest;
        class GetIntentRequest;
        class GetIntentVersionsRequest;
        class GetIntentsRequest;
        class GetSlotTypeRequest;
        class GetSlotTypeVersionsRequest;
        class GetSlotTypesRequest;
        class GetUtterancesViewRequest;
        class PutBotRequest;
        class PutBotAliasRequest;
        class PutIntentRequest;
        class PutSlotTypeRequest;
        class StartImportRequest;

        typedef Aws::Utils::Outcome<CreateBotVersionResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> CreateBotVersionOutcome;
        typedef Aws::Utils::Outcome<CreateIntentVersionResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> CreateIntentVersionOutcome;
        typedef Aws::Utils::Outcome<CreateSlotTypeVersionResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> CreateSlotTypeVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> DeleteBotOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> DeleteBotAliasOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> DeleteBotChannelAssociationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> DeleteBotVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> DeleteIntentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> DeleteIntentVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> DeleteSlotTypeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> DeleteSlotTypeVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> DeleteUtterancesOutcome;
        typedef Aws::Utils::Outcome<GetBotResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetBotOutcome;
        typedef Aws::Utils::Outcome<GetBotAliasResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetBotAliasOutcome;
        typedef Aws::Utils::Outcome<GetBotAliasesResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetBotAliasesOutcome;
        typedef Aws::Utils::Outcome<GetBotChannelAssociationResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetBotChannelAssociationOutcome;
        typedef Aws::Utils::Outcome<GetBotChannelAssociationsResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetBotChannelAssociationsOutcome;
        typedef Aws::Utils::Outcome<GetBotVersionsResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetBotVersionsOutcome;
        typedef Aws::Utils::Outcome<GetBotsResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetBotsOutcome;
        typedef Aws::Utils::Outcome<GetBuiltinIntentResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetBuiltinIntentOutcome;
        typedef Aws::Utils::Outcome<GetBuiltinIntentsResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetBuiltinIntentsOutcome;
        typedef Aws::Utils::Outcome<GetBuiltinSlotTypesResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetBuiltinSlotTypesOutcome;
        typedef Aws::Utils::Outcome<GetExportResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetExportOutcome;
        typedef Aws::Utils::Outcome<GetImportResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetImportOutcome;
        typedef Aws::Utils::Outcome<GetIntentResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetIntentOutcome;
        typedef Aws::Utils::Outcome<GetIntentVersionsResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetIntentVersionsOutcome;
        typedef Aws::Utils::Outcome<GetIntentsResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetIntentsOutcome;
        typedef Aws::Utils::Outcome<GetSlotTypeResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetSlotTypeOutcome;
        typedef Aws::Utils::Outcome<GetSlotTypeVersionsResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetSlotTypeVersionsOutcome;
        typedef Aws::Utils::Outcome<GetSlotTypesResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetSlotTypesOutcome;
        typedef Aws::Utils::Outcome<GetUtterancesViewResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> GetUtterancesViewOutcome;
        typedef Aws::Utils::Outcome<PutBotResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> PutBotOutcome;
        typedef Aws::Utils::Outcome<PutBotAliasResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> PutBotAliasOutcome;
        typedef Aws::Utils::Outcome<PutIntentResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> PutIntentOutcome;
        typedef Aws::Utils::Outcome<PutSlotTypeResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> PutSlotTypeOutcome;
        typedef Aws::Utils::Outcome<StartImportResult, Aws::Client::AWSError<LexModelBuildingServiceErrors>> StartImportOutcome;

        typedef std::future<CreateBotVersionOutcome> CreateBotVersionOutcomeCallable;
        typedef std::future<CreateIntentVersionOutcome> CreateIntentVersionOutcomeCallable;
        typedef std::future<CreateSlotTypeVersionOutcome> CreateSlotTypeVersionOutcomeCallable;
        typedef std::future<DeleteBotOutcome> DeleteBotOutcomeCallable;
        typedef std::future<DeleteBotAliasOutcome> DeleteBotAliasOutcomeCallable;
        typedef std::future<DeleteBotChannelAssociationOutcome> DeleteBotChannelAssociationOutcomeCallable;
        typedef std::future<DeleteBotVersionOutcome> DeleteBotVersionOutcomeCallable;
        typedef std::future<DeleteIntentOutcome> DeleteIntentOutcomeCallable;
        typedef std::future<DeleteIntentVersionOutcome> DeleteIntentVersionOutcomeCallable;
        typedef std::future<DeleteSlotTypeOutcome> DeleteSlotTypeOutcomeCallable;
        typedef std::future<DeleteSlotTypeVersionOutcome> DeleteSlotTypeVersionOutcomeCallable;
        typedef std::future<DeleteUtterancesOutcome> DeleteUtterancesOutcomeCallable;
        typedef std::future<GetBotOutcome> GetBotOutcomeCallable;
        typedef std::future<GetBotAliasOutcome> GetBotAliasOutcomeCallable;
        typedef std::future<GetBotAliasesOutcome> GetBotAliasesOutcomeCallable;
        typedef std::future<GetBotChannelAssociationOutcome> GetBotChannelAssociationOutcomeCallable;
        typedef std::future<GetBotChannelAssociationsOutcome> GetBotChannelAssociationsOutcomeCallable;
        typedef std::future<GetBotVersionsOutcome> GetBotVersionsOutcomeCallable;
        typedef std::future<GetBotsOutcome> GetBotsOutcomeCallable;
        typedef std::future<GetBuiltinIntentOutcome> GetBuiltinIntentOutcomeCallable;
        typedef std::future<GetBuiltinIntentsOutcome> GetBuiltinIntentsOutcomeCallable;
        typedef std::future<GetBuiltinSlotTypesOutcome> GetBuiltinSlotTypesOutcomeCallable;
        typedef std::future<GetExportOutcome> GetExportOutcomeCallable;
        typedef std::future<GetImportOutcome> GetImportOutcomeCallable;
        typedef std::future<GetIntentOutcome> GetIntentOutcomeCallable;
        typedef std::future<GetIntentVersionsOutcome> GetIntentVersionsOutcomeCallable;
        typedef std::future<GetIntentsOutcome> GetIntentsOutcomeCallable;
        typedef std::future<GetSlotTypeOutcome> GetSlotTypeOutcomeCallable;
        typedef std::future<GetSlotTypeVersionsOutcome> GetSlotTypeVersionsOutcomeCallable;
        typedef std::future<GetSlotTypesOutcome> GetSlotTypesOutcomeCallable;
        typedef std::future<GetUtterancesViewOutcome> GetUtterancesViewOutcomeCallable;
        typedef std::future<PutBotOutcome> PutBotOutcomeCallable;
        typedef std::future<PutBotAliasOutcome> PutBotAliasOutcomeCallable;
        typedef std::future<PutIntentOutcome> PutIntentOutcomeCallable;
        typedef std::future<PutSlotTypeOutcome> PutSlotTypeOutcomeCallable;
        typedef std::future<StartImportOutcome> StartImportOutcomeCallable;
} // namespace Model

  class LexModelBuildingServiceClient;

    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::CreateBotVersionRequest&, const Model::CreateBotVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBotVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::CreateIntentVersionRequest&, const Model::CreateIntentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntentVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::CreateSlotTypeVersionRequest&, const Model::CreateSlotTypeVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSlotTypeVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteBotRequest&, const Model::DeleteBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteBotAliasRequest&, const Model::DeleteBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteBotChannelAssociationRequest&, const Model::DeleteBotChannelAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotChannelAssociationResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteBotVersionRequest&, const Model::DeleteBotVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBotVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteIntentRequest&, const Model::DeleteIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteIntentVersionRequest&, const Model::DeleteIntentVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntentVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteSlotTypeRequest&, const Model::DeleteSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlotTypeResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteSlotTypeVersionRequest&, const Model::DeleteSlotTypeVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlotTypeVersionResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::DeleteUtterancesRequest&, const Model::DeleteUtterancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUtterancesResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotRequest&, const Model::GetBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotAliasRequest&, const Model::GetBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotAliasesRequest&, const Model::GetBotAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotAliasesResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotChannelAssociationRequest&, const Model::GetBotChannelAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotChannelAssociationResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotChannelAssociationsRequest&, const Model::GetBotChannelAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotChannelAssociationsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotVersionsRequest&, const Model::GetBotVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotVersionsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBotsRequest&, const Model::GetBotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBotsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBuiltinIntentRequest&, const Model::GetBuiltinIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBuiltinIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBuiltinIntentsRequest&, const Model::GetBuiltinIntentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBuiltinIntentsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetBuiltinSlotTypesRequest&, const Model::GetBuiltinSlotTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBuiltinSlotTypesResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetExportRequest&, const Model::GetExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExportResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetImportRequest&, const Model::GetImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetIntentRequest&, const Model::GetIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetIntentVersionsRequest&, const Model::GetIntentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntentVersionsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetIntentsRequest&, const Model::GetIntentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntentsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetSlotTypeRequest&, const Model::GetSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSlotTypeResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetSlotTypeVersionsRequest&, const Model::GetSlotTypeVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSlotTypeVersionsResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetSlotTypesRequest&, const Model::GetSlotTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSlotTypesResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::GetUtterancesViewRequest&, const Model::GetUtterancesViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUtterancesViewResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::PutBotRequest&, const Model::PutBotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBotResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::PutBotAliasRequest&, const Model::PutBotAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBotAliasResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::PutIntentRequest&, const Model::PutIntentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutIntentResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::PutSlotTypeRequest&, const Model::PutSlotTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSlotTypeResponseReceivedHandler;
    typedef std::function<void(const LexModelBuildingServiceClient*, const Model::StartImportRequest&, const Model::StartImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImportResponseReceivedHandler;

  /**
   * <fullname>Amazon Lex Build-Time Actions</fullname> <p> Amazon Lex is an AWS
   * service for building conversational voice and text interfaces. Use these actions
   * to create, update, and delete conversational bots for new and existing client
   * applications. </p>
   */
  class AWS_LEXMODELBUILDINGSERVICE_API LexModelBuildingServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelBuildingServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelBuildingServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LexModelBuildingServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~LexModelBuildingServiceClient();

        inline virtual const char* GetServiceClientName() const override { return "Lex Model Building Service"; }


        /**
         * <p>Creates a new version of the bot based on the <code>$LATEST</code> version.
         * If the <code>$LATEST</code> version of this resource hasn't changed since you
         * created the last version, Amazon Lex doesn't create a new version. It returns
         * the last created version.</p> <note> <p>You can update only the
         * <code>$LATEST</code> version of the bot. You can't update the numbered versions
         * that you create with the <code>CreateBotVersion</code> operation.</p> </note>
         * <p> When you create the first version of a bot, Amazon Lex sets the version to
         * 1. Subsequent versions increment by 1. For more information, see
         * <a>versioning-intro</a>. </p> <p> This operation requires permission for the
         * <code>lex:CreateBotVersion</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CreateBotVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBotVersionOutcome CreateBotVersion(const Model::CreateBotVersionRequest& request) const;

        /**
         * <p>Creates a new version of the bot based on the <code>$LATEST</code> version.
         * If the <code>$LATEST</code> version of this resource hasn't changed since you
         * created the last version, Amazon Lex doesn't create a new version. It returns
         * the last created version.</p> <note> <p>You can update only the
         * <code>$LATEST</code> version of the bot. You can't update the numbered versions
         * that you create with the <code>CreateBotVersion</code> operation.</p> </note>
         * <p> When you create the first version of a bot, Amazon Lex sets the version to
         * 1. Subsequent versions increment by 1. For more information, see
         * <a>versioning-intro</a>. </p> <p> This operation requires permission for the
         * <code>lex:CreateBotVersion</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CreateBotVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBotVersionOutcomeCallable CreateBotVersionCallable(const Model::CreateBotVersionRequest& request) const;

        /**
         * <p>Creates a new version of the bot based on the <code>$LATEST</code> version.
         * If the <code>$LATEST</code> version of this resource hasn't changed since you
         * created the last version, Amazon Lex doesn't create a new version. It returns
         * the last created version.</p> <note> <p>You can update only the
         * <code>$LATEST</code> version of the bot. You can't update the numbered versions
         * that you create with the <code>CreateBotVersion</code> operation.</p> </note>
         * <p> When you create the first version of a bot, Amazon Lex sets the version to
         * 1. Subsequent versions increment by 1. For more information, see
         * <a>versioning-intro</a>. </p> <p> This operation requires permission for the
         * <code>lex:CreateBotVersion</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CreateBotVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBotVersionAsync(const Model::CreateBotVersionRequest& request, const CreateBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of an intent based on the <code>$LATEST</code> version
         * of the intent. If the <code>$LATEST</code> version of this intent hasn't changed
         * since you last updated it, Amazon Lex doesn't create a new version. It returns
         * the last version you created.</p> <note> <p>You can update only the
         * <code>$LATEST</code> version of the intent. You can't update the numbered
         * versions that you create with the <code>CreateIntentVersion</code>
         * operation.</p> </note> <p> When you create a version of an intent, Amazon Lex
         * sets the version to 1. Subsequent versions increment by 1. For more information,
         * see <a>versioning-intro</a>. </p> <p>This operation requires permissions to
         * perform the <code>lex:CreateIntentVersion</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CreateIntentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIntentVersionOutcome CreateIntentVersion(const Model::CreateIntentVersionRequest& request) const;

        /**
         * <p>Creates a new version of an intent based on the <code>$LATEST</code> version
         * of the intent. If the <code>$LATEST</code> version of this intent hasn't changed
         * since you last updated it, Amazon Lex doesn't create a new version. It returns
         * the last version you created.</p> <note> <p>You can update only the
         * <code>$LATEST</code> version of the intent. You can't update the numbered
         * versions that you create with the <code>CreateIntentVersion</code>
         * operation.</p> </note> <p> When you create a version of an intent, Amazon Lex
         * sets the version to 1. Subsequent versions increment by 1. For more information,
         * see <a>versioning-intro</a>. </p> <p>This operation requires permissions to
         * perform the <code>lex:CreateIntentVersion</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CreateIntentVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIntentVersionOutcomeCallable CreateIntentVersionCallable(const Model::CreateIntentVersionRequest& request) const;

        /**
         * <p>Creates a new version of an intent based on the <code>$LATEST</code> version
         * of the intent. If the <code>$LATEST</code> version of this intent hasn't changed
         * since you last updated it, Amazon Lex doesn't create a new version. It returns
         * the last version you created.</p> <note> <p>You can update only the
         * <code>$LATEST</code> version of the intent. You can't update the numbered
         * versions that you create with the <code>CreateIntentVersion</code>
         * operation.</p> </note> <p> When you create a version of an intent, Amazon Lex
         * sets the version to 1. Subsequent versions increment by 1. For more information,
         * see <a>versioning-intro</a>. </p> <p>This operation requires permissions to
         * perform the <code>lex:CreateIntentVersion</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CreateIntentVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIntentVersionAsync(const Model::CreateIntentVersionRequest& request, const CreateIntentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of a slot type based on the <code>$LATEST</code>
         * version of the specified slot type. If the <code>$LATEST</code> version of this
         * resource has not changed since the last version that you created, Amazon Lex
         * doesn't create a new version. It returns the last version that you created. </p>
         * <note> <p>You can update only the <code>$LATEST</code> version of a slot type.
         * You can't update the numbered versions that you create with the
         * <code>CreateSlotTypeVersion</code> operation.</p> </note> <p>When you create a
         * version of a slot type, Amazon Lex sets the version to 1. Subsequent versions
         * increment by 1. For more information, see <a>versioning-intro</a>. </p> <p>This
         * operation requires permissions for the <code>lex:CreateSlotTypeVersion</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CreateSlotTypeVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSlotTypeVersionOutcome CreateSlotTypeVersion(const Model::CreateSlotTypeVersionRequest& request) const;

        /**
         * <p>Creates a new version of a slot type based on the <code>$LATEST</code>
         * version of the specified slot type. If the <code>$LATEST</code> version of this
         * resource has not changed since the last version that you created, Amazon Lex
         * doesn't create a new version. It returns the last version that you created. </p>
         * <note> <p>You can update only the <code>$LATEST</code> version of a slot type.
         * You can't update the numbered versions that you create with the
         * <code>CreateSlotTypeVersion</code> operation.</p> </note> <p>When you create a
         * version of a slot type, Amazon Lex sets the version to 1. Subsequent versions
         * increment by 1. For more information, see <a>versioning-intro</a>. </p> <p>This
         * operation requires permissions for the <code>lex:CreateSlotTypeVersion</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CreateSlotTypeVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSlotTypeVersionOutcomeCallable CreateSlotTypeVersionCallable(const Model::CreateSlotTypeVersionRequest& request) const;

        /**
         * <p>Creates a new version of a slot type based on the <code>$LATEST</code>
         * version of the specified slot type. If the <code>$LATEST</code> version of this
         * resource has not changed since the last version that you created, Amazon Lex
         * doesn't create a new version. It returns the last version that you created. </p>
         * <note> <p>You can update only the <code>$LATEST</code> version of a slot type.
         * You can't update the numbered versions that you create with the
         * <code>CreateSlotTypeVersion</code> operation.</p> </note> <p>When you create a
         * version of a slot type, Amazon Lex sets the version to 1. Subsequent versions
         * increment by 1. For more information, see <a>versioning-intro</a>. </p> <p>This
         * operation requires permissions for the <code>lex:CreateSlotTypeVersion</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CreateSlotTypeVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSlotTypeVersionAsync(const Model::CreateSlotTypeVersionRequest& request, const CreateSlotTypeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all versions of the bot, including the <code>$LATEST</code> version.
         * To delete a specific version of the bot, use the <a>DeleteBotVersion</a>
         * operation.</p> <p>If a bot has an alias, you can't delete it. Instead, the
         * <code>DeleteBot</code> operation returns a <code>ResourceInUseException</code>
         * exception that includes a reference to the alias that refers to the bot. To
         * remove the reference to the bot, delete the alias. If you get the same exception
         * again, delete the referring alias until the <code>DeleteBot</code> operation is
         * successful.</p> <p>This operation requires permissions for the
         * <code>lex:DeleteBot</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteBot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotOutcome DeleteBot(const Model::DeleteBotRequest& request) const;

        /**
         * <p>Deletes all versions of the bot, including the <code>$LATEST</code> version.
         * To delete a specific version of the bot, use the <a>DeleteBotVersion</a>
         * operation.</p> <p>If a bot has an alias, you can't delete it. Instead, the
         * <code>DeleteBot</code> operation returns a <code>ResourceInUseException</code>
         * exception that includes a reference to the alias that refers to the bot. To
         * remove the reference to the bot, delete the alias. If you get the same exception
         * again, delete the referring alias until the <code>DeleteBot</code> operation is
         * successful.</p> <p>This operation requires permissions for the
         * <code>lex:DeleteBot</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteBot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBotOutcomeCallable DeleteBotCallable(const Model::DeleteBotRequest& request) const;

        /**
         * <p>Deletes all versions of the bot, including the <code>$LATEST</code> version.
         * To delete a specific version of the bot, use the <a>DeleteBotVersion</a>
         * operation.</p> <p>If a bot has an alias, you can't delete it. Instead, the
         * <code>DeleteBot</code> operation returns a <code>ResourceInUseException</code>
         * exception that includes a reference to the alias that refers to the bot. To
         * remove the reference to the bot, delete the alias. If you get the same exception
         * again, delete the referring alias until the <code>DeleteBot</code> operation is
         * successful.</p> <p>This operation requires permissions for the
         * <code>lex:DeleteBot</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteBot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBotAsync(const Model::DeleteBotRequest& request, const DeleteBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an alias for the specified bot. </p> <p>You can't delete an alias
         * that is used in the association between a bot and a messaging channel. If an
         * alias is used in a channel association, the <code>DeleteBot</code> operation
         * returns a <code>ResourceInUseException</code> exception that includes a
         * reference to the channel association that refers to the bot. You can remove the
         * reference to the alias by deleting the channel association. If you get the same
         * exception again, delete the referring association until the
         * <code>DeleteBotAlias</code> operation is successful.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotAliasOutcome DeleteBotAlias(const Model::DeleteBotAliasRequest& request) const;

        /**
         * <p>Deletes an alias for the specified bot. </p> <p>You can't delete an alias
         * that is used in the association between a bot and a messaging channel. If an
         * alias is used in a channel association, the <code>DeleteBot</code> operation
         * returns a <code>ResourceInUseException</code> exception that includes a
         * reference to the channel association that refers to the bot. You can remove the
         * reference to the alias by deleting the channel association. If you get the same
         * exception again, delete the referring association until the
         * <code>DeleteBotAlias</code> operation is successful.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteBotAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBotAliasOutcomeCallable DeleteBotAliasCallable(const Model::DeleteBotAliasRequest& request) const;

        /**
         * <p>Deletes an alias for the specified bot. </p> <p>You can't delete an alias
         * that is used in the association between a bot and a messaging channel. If an
         * alias is used in a channel association, the <code>DeleteBot</code> operation
         * returns a <code>ResourceInUseException</code> exception that includes a
         * reference to the channel association that refers to the bot. You can remove the
         * reference to the alias by deleting the channel association. If you get the same
         * exception again, delete the referring association until the
         * <code>DeleteBotAlias</code> operation is successful.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteBotAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBotAliasAsync(const Model::DeleteBotAliasRequest& request, const DeleteBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the association between an Amazon Lex bot and a messaging
         * platform.</p> <p>This operation requires permission for the
         * <code>lex:DeleteBotChannelAssociation</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteBotChannelAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotChannelAssociationOutcome DeleteBotChannelAssociation(const Model::DeleteBotChannelAssociationRequest& request) const;

        /**
         * <p>Deletes the association between an Amazon Lex bot and a messaging
         * platform.</p> <p>This operation requires permission for the
         * <code>lex:DeleteBotChannelAssociation</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteBotChannelAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBotChannelAssociationOutcomeCallable DeleteBotChannelAssociationCallable(const Model::DeleteBotChannelAssociationRequest& request) const;

        /**
         * <p>Deletes the association between an Amazon Lex bot and a messaging
         * platform.</p> <p>This operation requires permission for the
         * <code>lex:DeleteBotChannelAssociation</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteBotChannelAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBotChannelAssociationAsync(const Model::DeleteBotChannelAssociationRequest& request, const DeleteBotChannelAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific version of a bot. To delete all versions of a bot, use the
         * <a>DeleteBot</a> operation. </p> <p>This operation requires permissions for the
         * <code>lex:DeleteBotVersion</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteBotVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotVersionOutcome DeleteBotVersion(const Model::DeleteBotVersionRequest& request) const;

        /**
         * <p>Deletes a specific version of a bot. To delete all versions of a bot, use the
         * <a>DeleteBot</a> operation. </p> <p>This operation requires permissions for the
         * <code>lex:DeleteBotVersion</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteBotVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBotVersionOutcomeCallable DeleteBotVersionCallable(const Model::DeleteBotVersionRequest& request) const;

        /**
         * <p>Deletes a specific version of a bot. To delete all versions of a bot, use the
         * <a>DeleteBot</a> operation. </p> <p>This operation requires permissions for the
         * <code>lex:DeleteBotVersion</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteBotVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBotVersionAsync(const Model::DeleteBotVersionRequest& request, const DeleteBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all versions of the intent, including the <code>$LATEST</code>
         * version. To delete a specific version of the intent, use the
         * <a>DeleteIntentVersion</a> operation.</p> <p> You can delete a version of an
         * intent only if it is not referenced. To delete an intent that is referred to in
         * one or more bots (see <a>how-it-works</a>), you must remove those references
         * first. </p> <note> <p> If you get the <code>ResourceInUseException</code>
         * exception, it provides an example reference that shows where the intent is
         * referenced. To remove the reference to the intent, either update the bot or
         * delete it. If you get the same exception when you attempt to delete the intent
         * again, repeat until the intent has no references and the call to
         * <code>DeleteIntent</code> is successful. </p> </note> <p> This operation
         * requires permission for the <code>lex:DeleteIntent</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntentOutcome DeleteIntent(const Model::DeleteIntentRequest& request) const;

        /**
         * <p>Deletes all versions of the intent, including the <code>$LATEST</code>
         * version. To delete a specific version of the intent, use the
         * <a>DeleteIntentVersion</a> operation.</p> <p> You can delete a version of an
         * intent only if it is not referenced. To delete an intent that is referred to in
         * one or more bots (see <a>how-it-works</a>), you must remove those references
         * first. </p> <note> <p> If you get the <code>ResourceInUseException</code>
         * exception, it provides an example reference that shows where the intent is
         * referenced. To remove the reference to the intent, either update the bot or
         * delete it. If you get the same exception when you attempt to delete the intent
         * again, repeat until the intent has no references and the call to
         * <code>DeleteIntent</code> is successful. </p> </note> <p> This operation
         * requires permission for the <code>lex:DeleteIntent</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteIntent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIntentOutcomeCallable DeleteIntentCallable(const Model::DeleteIntentRequest& request) const;

        /**
         * <p>Deletes all versions of the intent, including the <code>$LATEST</code>
         * version. To delete a specific version of the intent, use the
         * <a>DeleteIntentVersion</a> operation.</p> <p> You can delete a version of an
         * intent only if it is not referenced. To delete an intent that is referred to in
         * one or more bots (see <a>how-it-works</a>), you must remove those references
         * first. </p> <note> <p> If you get the <code>ResourceInUseException</code>
         * exception, it provides an example reference that shows where the intent is
         * referenced. To remove the reference to the intent, either update the bot or
         * delete it. If you get the same exception when you attempt to delete the intent
         * again, repeat until the intent has no references and the call to
         * <code>DeleteIntent</code> is successful. </p> </note> <p> This operation
         * requires permission for the <code>lex:DeleteIntent</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteIntent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIntentAsync(const Model::DeleteIntentRequest& request, const DeleteIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific version of an intent. To delete all versions of a intent,
         * use the <a>DeleteIntent</a> operation. </p> <p>This operation requires
         * permissions for the <code>lex:DeleteIntentVersion</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteIntentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntentVersionOutcome DeleteIntentVersion(const Model::DeleteIntentVersionRequest& request) const;

        /**
         * <p>Deletes a specific version of an intent. To delete all versions of a intent,
         * use the <a>DeleteIntent</a> operation. </p> <p>This operation requires
         * permissions for the <code>lex:DeleteIntentVersion</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteIntentVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIntentVersionOutcomeCallable DeleteIntentVersionCallable(const Model::DeleteIntentVersionRequest& request) const;

        /**
         * <p>Deletes a specific version of an intent. To delete all versions of a intent,
         * use the <a>DeleteIntent</a> operation. </p> <p>This operation requires
         * permissions for the <code>lex:DeleteIntentVersion</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteIntentVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIntentVersionAsync(const Model::DeleteIntentVersionRequest& request, const DeleteIntentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all versions of the slot type, including the <code>$LATEST</code>
         * version. To delete a specific version of the slot type, use the
         * <a>DeleteSlotTypeVersion</a> operation.</p> <p> You can delete a version of a
         * slot type only if it is not referenced. To delete a slot type that is referred
         * to in one or more intents, you must remove those references first. </p> <note>
         * <p> If you get the <code>ResourceInUseException</code> exception, the exception
         * provides an example reference that shows the intent where the slot type is
         * referenced. To remove the reference to the slot type, either update the intent
         * or delete it. If you get the same exception when you attempt to delete the slot
         * type again, repeat until the slot type has no references and the
         * <code>DeleteSlotType</code> call is successful. </p> </note> <p>This operation
         * requires permission for the <code>lex:DeleteSlotType</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteSlotType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlotTypeOutcome DeleteSlotType(const Model::DeleteSlotTypeRequest& request) const;

        /**
         * <p>Deletes all versions of the slot type, including the <code>$LATEST</code>
         * version. To delete a specific version of the slot type, use the
         * <a>DeleteSlotTypeVersion</a> operation.</p> <p> You can delete a version of a
         * slot type only if it is not referenced. To delete a slot type that is referred
         * to in one or more intents, you must remove those references first. </p> <note>
         * <p> If you get the <code>ResourceInUseException</code> exception, the exception
         * provides an example reference that shows the intent where the slot type is
         * referenced. To remove the reference to the slot type, either update the intent
         * or delete it. If you get the same exception when you attempt to delete the slot
         * type again, repeat until the slot type has no references and the
         * <code>DeleteSlotType</code> call is successful. </p> </note> <p>This operation
         * requires permission for the <code>lex:DeleteSlotType</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteSlotType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSlotTypeOutcomeCallable DeleteSlotTypeCallable(const Model::DeleteSlotTypeRequest& request) const;

        /**
         * <p>Deletes all versions of the slot type, including the <code>$LATEST</code>
         * version. To delete a specific version of the slot type, use the
         * <a>DeleteSlotTypeVersion</a> operation.</p> <p> You can delete a version of a
         * slot type only if it is not referenced. To delete a slot type that is referred
         * to in one or more intents, you must remove those references first. </p> <note>
         * <p> If you get the <code>ResourceInUseException</code> exception, the exception
         * provides an example reference that shows the intent where the slot type is
         * referenced. To remove the reference to the slot type, either update the intent
         * or delete it. If you get the same exception when you attempt to delete the slot
         * type again, repeat until the slot type has no references and the
         * <code>DeleteSlotType</code> call is successful. </p> </note> <p>This operation
         * requires permission for the <code>lex:DeleteSlotType</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteSlotType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSlotTypeAsync(const Model::DeleteSlotTypeRequest& request, const DeleteSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific version of a slot type. To delete all versions of a slot
         * type, use the <a>DeleteSlotType</a> operation. </p> <p>This operation requires
         * permissions for the <code>lex:DeleteSlotTypeVersion</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteSlotTypeVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlotTypeVersionOutcome DeleteSlotTypeVersion(const Model::DeleteSlotTypeVersionRequest& request) const;

        /**
         * <p>Deletes a specific version of a slot type. To delete all versions of a slot
         * type, use the <a>DeleteSlotType</a> operation. </p> <p>This operation requires
         * permissions for the <code>lex:DeleteSlotTypeVersion</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteSlotTypeVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSlotTypeVersionOutcomeCallable DeleteSlotTypeVersionCallable(const Model::DeleteSlotTypeVersionRequest& request) const;

        /**
         * <p>Deletes a specific version of a slot type. To delete all versions of a slot
         * type, use the <a>DeleteSlotType</a> operation. </p> <p>This operation requires
         * permissions for the <code>lex:DeleteSlotTypeVersion</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteSlotTypeVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSlotTypeVersionAsync(const Model::DeleteSlotTypeVersionRequest& request, const DeleteSlotTypeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes stored utterances.</p> <p>Amazon Lex stores the utterances that users
         * send to your bot. Utterances are stored for 15 days for use with the
         * <a>GetUtterancesView</a> operation, and then stored indefinitely for use in
         * improving the ability of your bot to respond to user input.</p> <p>Use the
         * <code>DeleteStoredUtterances</code> operation to manually delete stored
         * utterances for a specific user.</p> <p>This operation requires permissions for
         * the <code>lex:DeleteUtterances</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteUtterances">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUtterancesOutcome DeleteUtterances(const Model::DeleteUtterancesRequest& request) const;

        /**
         * <p>Deletes stored utterances.</p> <p>Amazon Lex stores the utterances that users
         * send to your bot. Utterances are stored for 15 days for use with the
         * <a>GetUtterancesView</a> operation, and then stored indefinitely for use in
         * improving the ability of your bot to respond to user input.</p> <p>Use the
         * <code>DeleteStoredUtterances</code> operation to manually delete stored
         * utterances for a specific user.</p> <p>This operation requires permissions for
         * the <code>lex:DeleteUtterances</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteUtterances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUtterancesOutcomeCallable DeleteUtterancesCallable(const Model::DeleteUtterancesRequest& request) const;

        /**
         * <p>Deletes stored utterances.</p> <p>Amazon Lex stores the utterances that users
         * send to your bot. Utterances are stored for 15 days for use with the
         * <a>GetUtterancesView</a> operation, and then stored indefinitely for use in
         * improving the ability of your bot to respond to user input.</p> <p>Use the
         * <code>DeleteStoredUtterances</code> operation to manually delete stored
         * utterances for a specific user.</p> <p>This operation requires permissions for
         * the <code>lex:DeleteUtterances</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteUtterances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUtterancesAsync(const Model::DeleteUtterancesRequest& request, const DeleteUtterancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata information for a specific bot. You must provide the bot
         * name and the bot version or alias. </p> <p> This operation requires permissions
         * for the <code>lex:GetBot</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBotOutcome GetBot(const Model::GetBotRequest& request) const;

        /**
         * <p>Returns metadata information for a specific bot. You must provide the bot
         * name and the bot version or alias. </p> <p> This operation requires permissions
         * for the <code>lex:GetBot</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBotOutcomeCallable GetBotCallable(const Model::GetBotRequest& request) const;

        /**
         * <p>Returns metadata information for a specific bot. You must provide the bot
         * name and the bot version or alias. </p> <p> This operation requires permissions
         * for the <code>lex:GetBot</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBotAsync(const Model::GetBotRequest& request, const GetBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an Amazon Lex bot alias. For more information about
         * aliases, see <a>versioning-aliases</a>.</p> <p>This operation requires
         * permissions for the <code>lex:GetBotAlias</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBotAliasOutcome GetBotAlias(const Model::GetBotAliasRequest& request) const;

        /**
         * <p>Returns information about an Amazon Lex bot alias. For more information about
         * aliases, see <a>versioning-aliases</a>.</p> <p>This operation requires
         * permissions for the <code>lex:GetBotAlias</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBotAliasOutcomeCallable GetBotAliasCallable(const Model::GetBotAliasRequest& request) const;

        /**
         * <p>Returns information about an Amazon Lex bot alias. For more information about
         * aliases, see <a>versioning-aliases</a>.</p> <p>This operation requires
         * permissions for the <code>lex:GetBotAlias</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBotAliasAsync(const Model::GetBotAliasRequest& request, const GetBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of aliases for a specified Amazon Lex bot.</p> <p>This
         * operation requires permissions for the <code>lex:GetBotAliases</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBotAliasesOutcome GetBotAliases(const Model::GetBotAliasesRequest& request) const;

        /**
         * <p>Returns a list of aliases for a specified Amazon Lex bot.</p> <p>This
         * operation requires permissions for the <code>lex:GetBotAliases</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBotAliasesOutcomeCallable GetBotAliasesCallable(const Model::GetBotAliasesRequest& request) const;

        /**
         * <p>Returns a list of aliases for a specified Amazon Lex bot.</p> <p>This
         * operation requires permissions for the <code>lex:GetBotAliases</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBotAliasesAsync(const Model::GetBotAliasesRequest& request, const GetBotAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the association between an Amazon Lex bot and a
         * messaging platform.</p> <p>This operation requires permissions for the
         * <code>lex:GetBotChannelAssociation</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotChannelAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBotChannelAssociationOutcome GetBotChannelAssociation(const Model::GetBotChannelAssociationRequest& request) const;

        /**
         * <p>Returns information about the association between an Amazon Lex bot and a
         * messaging platform.</p> <p>This operation requires permissions for the
         * <code>lex:GetBotChannelAssociation</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotChannelAssociation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBotChannelAssociationOutcomeCallable GetBotChannelAssociationCallable(const Model::GetBotChannelAssociationRequest& request) const;

        /**
         * <p>Returns information about the association between an Amazon Lex bot and a
         * messaging platform.</p> <p>This operation requires permissions for the
         * <code>lex:GetBotChannelAssociation</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotChannelAssociation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBotChannelAssociationAsync(const Model::GetBotChannelAssociationRequest& request, const GetBotChannelAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of all of the channels associated with the specified bot.
         * </p> <p>The <code>GetBotChannelAssociations</code> operation requires
         * permissions for the <code>lex:GetBotChannelAssociations</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotChannelAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBotChannelAssociationsOutcome GetBotChannelAssociations(const Model::GetBotChannelAssociationsRequest& request) const;

        /**
         * <p> Returns a list of all of the channels associated with the specified bot.
         * </p> <p>The <code>GetBotChannelAssociations</code> operation requires
         * permissions for the <code>lex:GetBotChannelAssociations</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotChannelAssociations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBotChannelAssociationsOutcomeCallable GetBotChannelAssociationsCallable(const Model::GetBotChannelAssociationsRequest& request) const;

        /**
         * <p> Returns a list of all of the channels associated with the specified bot.
         * </p> <p>The <code>GetBotChannelAssociations</code> operation requires
         * permissions for the <code>lex:GetBotChannelAssociations</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotChannelAssociations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBotChannelAssociationsAsync(const Model::GetBotChannelAssociationsRequest& request, const GetBotChannelAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about all of the versions of a bot.</p> <p>The
         * <code>GetBotVersions</code> operation returns a <code>BotMetadata</code> object
         * for each version of a bot. For example, if a bot has three numbered versions,
         * the <code>GetBotVersions</code> operation returns four <code>BotMetadata</code>
         * objects in the response, one for each numbered version and one for the
         * <code>$LATEST</code> version. </p> <p>The <code>GetBotVersions</code> operation
         * always returns at least one version, the <code>$LATEST</code> version.</p>
         * <p>This operation requires permissions for the <code>lex:GetBotVersions</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBotVersionsOutcome GetBotVersions(const Model::GetBotVersionsRequest& request) const;

        /**
         * <p>Gets information about all of the versions of a bot.</p> <p>The
         * <code>GetBotVersions</code> operation returns a <code>BotMetadata</code> object
         * for each version of a bot. For example, if a bot has three numbered versions,
         * the <code>GetBotVersions</code> operation returns four <code>BotMetadata</code>
         * objects in the response, one for each numbered version and one for the
         * <code>$LATEST</code> version. </p> <p>The <code>GetBotVersions</code> operation
         * always returns at least one version, the <code>$LATEST</code> version.</p>
         * <p>This operation requires permissions for the <code>lex:GetBotVersions</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBotVersionsOutcomeCallable GetBotVersionsCallable(const Model::GetBotVersionsRequest& request) const;

        /**
         * <p>Gets information about all of the versions of a bot.</p> <p>The
         * <code>GetBotVersions</code> operation returns a <code>BotMetadata</code> object
         * for each version of a bot. For example, if a bot has three numbered versions,
         * the <code>GetBotVersions</code> operation returns four <code>BotMetadata</code>
         * objects in the response, one for each numbered version and one for the
         * <code>$LATEST</code> version. </p> <p>The <code>GetBotVersions</code> operation
         * always returns at least one version, the <code>$LATEST</code> version.</p>
         * <p>This operation requires permissions for the <code>lex:GetBotVersions</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBotVersionsAsync(const Model::GetBotVersionsRequest& request, const GetBotVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns bot information as follows: </p> <ul> <li> <p>If you provide the
         * <code>nameContains</code> field, the response includes information for the
         * <code>$LATEST</code> version of all bots whose name contains the specified
         * string.</p> </li> <li> <p>If you don't specify the <code>nameContains</code>
         * field, the operation returns information about the <code>$LATEST</code> version
         * of all of your bots.</p> </li> </ul> <p>This operation requires permission for
         * the <code>lex:GetBots</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBots">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBotsOutcome GetBots(const Model::GetBotsRequest& request) const;

        /**
         * <p>Returns bot information as follows: </p> <ul> <li> <p>If you provide the
         * <code>nameContains</code> field, the response includes information for the
         * <code>$LATEST</code> version of all bots whose name contains the specified
         * string.</p> </li> <li> <p>If you don't specify the <code>nameContains</code>
         * field, the operation returns information about the <code>$LATEST</code> version
         * of all of your bots.</p> </li> </ul> <p>This operation requires permission for
         * the <code>lex:GetBots</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBotsOutcomeCallable GetBotsCallable(const Model::GetBotsRequest& request) const;

        /**
         * <p>Returns bot information as follows: </p> <ul> <li> <p>If you provide the
         * <code>nameContains</code> field, the response includes information for the
         * <code>$LATEST</code> version of all bots whose name contains the specified
         * string.</p> </li> <li> <p>If you don't specify the <code>nameContains</code>
         * field, the operation returns information about the <code>$LATEST</code> version
         * of all of your bots.</p> </li> </ul> <p>This operation requires permission for
         * the <code>lex:GetBots</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBotsAsync(const Model::GetBotsRequest& request, const GetBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a built-in intent.</p> <p>This operation requires
         * permission for the <code>lex:GetBuiltinIntent</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBuiltinIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBuiltinIntentOutcome GetBuiltinIntent(const Model::GetBuiltinIntentRequest& request) const;

        /**
         * <p>Returns information about a built-in intent.</p> <p>This operation requires
         * permission for the <code>lex:GetBuiltinIntent</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBuiltinIntent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBuiltinIntentOutcomeCallable GetBuiltinIntentCallable(const Model::GetBuiltinIntentRequest& request) const;

        /**
         * <p>Returns information about a built-in intent.</p> <p>This operation requires
         * permission for the <code>lex:GetBuiltinIntent</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBuiltinIntent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBuiltinIntentAsync(const Model::GetBuiltinIntentRequest& request, const GetBuiltinIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of built-in intents that meet the specified criteria.</p> <p>This
         * operation requires permission for the <code>lex:GetBuiltinIntents</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBuiltinIntents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBuiltinIntentsOutcome GetBuiltinIntents(const Model::GetBuiltinIntentsRequest& request) const;

        /**
         * <p>Gets a list of built-in intents that meet the specified criteria.</p> <p>This
         * operation requires permission for the <code>lex:GetBuiltinIntents</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBuiltinIntents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBuiltinIntentsOutcomeCallable GetBuiltinIntentsCallable(const Model::GetBuiltinIntentsRequest& request) const;

        /**
         * <p>Gets a list of built-in intents that meet the specified criteria.</p> <p>This
         * operation requires permission for the <code>lex:GetBuiltinIntents</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBuiltinIntents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBuiltinIntentsAsync(const Model::GetBuiltinIntentsRequest& request, const GetBuiltinIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of built-in slot types that meet the specified criteria.</p>
         * <p>For a list of built-in slot types, see <a
         * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
         * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p> <p>This operation
         * requires permission for the <code>lex:GetBuiltInSlotTypes</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBuiltinSlotTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBuiltinSlotTypesOutcome GetBuiltinSlotTypes(const Model::GetBuiltinSlotTypesRequest& request) const;

        /**
         * <p>Gets a list of built-in slot types that meet the specified criteria.</p>
         * <p>For a list of built-in slot types, see <a
         * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
         * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p> <p>This operation
         * requires permission for the <code>lex:GetBuiltInSlotTypes</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBuiltinSlotTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBuiltinSlotTypesOutcomeCallable GetBuiltinSlotTypesCallable(const Model::GetBuiltinSlotTypesRequest& request) const;

        /**
         * <p>Gets a list of built-in slot types that meet the specified criteria.</p>
         * <p>For a list of built-in slot types, see <a
         * href="https://developer.amazon.com/public/solutions/alexa/alexa-skills-kit/docs/built-in-intent-ref/slot-type-reference">Slot
         * Type Reference</a> in the <i>Alexa Skills Kit</i>.</p> <p>This operation
         * requires permission for the <code>lex:GetBuiltInSlotTypes</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBuiltinSlotTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBuiltinSlotTypesAsync(const Model::GetBuiltinSlotTypesRequest& request, const GetBuiltinSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports the contents of a Amazon Lex resource in a specified format.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetExport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportOutcome GetExport(const Model::GetExportRequest& request) const;

        /**
         * <p>Exports the contents of a Amazon Lex resource in a specified format.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetExport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExportOutcomeCallable GetExportCallable(const Model::GetExportRequest& request) const;

        /**
         * <p>Exports the contents of a Amazon Lex resource in a specified format.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetExport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExportAsync(const Model::GetExportRequest& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an import job started with the
         * <code>StartImport</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetImport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportOutcome GetImport(const Model::GetImportRequest& request) const;

        /**
         * <p>Gets information about an import job started with the
         * <code>StartImport</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetImport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetImportOutcomeCallable GetImportCallable(const Model::GetImportRequest& request) const;

        /**
         * <p>Gets information about an import job started with the
         * <code>StartImport</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetImport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetImportAsync(const Model::GetImportRequest& request, const GetImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns information about an intent. In addition to the intent name, you
         * must specify the intent version. </p> <p> This operation requires permissions to
         * perform the <code>lex:GetIntent</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntentOutcome GetIntent(const Model::GetIntentRequest& request) const;

        /**
         * <p> Returns information about an intent. In addition to the intent name, you
         * must specify the intent version. </p> <p> This operation requires permissions to
         * perform the <code>lex:GetIntent</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetIntent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntentOutcomeCallable GetIntentCallable(const Model::GetIntentRequest& request) const;

        /**
         * <p> Returns information about an intent. In addition to the intent name, you
         * must specify the intent version. </p> <p> This operation requires permissions to
         * perform the <code>lex:GetIntent</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetIntent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntentAsync(const Model::GetIntentRequest& request, const GetIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about all of the versions of an intent.</p> <p>The
         * <code>GetIntentVersions</code> operation returns an <code>IntentMetadata</code>
         * object for each version of an intent. For example, if an intent has three
         * numbered versions, the <code>GetIntentVersions</code> operation returns four
         * <code>IntentMetadata</code> objects in the response, one for each numbered
         * version and one for the <code>$LATEST</code> version. </p> <p>The
         * <code>GetIntentVersions</code> operation always returns at least one version,
         * the <code>$LATEST</code> version.</p> <p>This operation requires permissions for
         * the <code>lex:GetIntentVersions</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetIntentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntentVersionsOutcome GetIntentVersions(const Model::GetIntentVersionsRequest& request) const;

        /**
         * <p>Gets information about all of the versions of an intent.</p> <p>The
         * <code>GetIntentVersions</code> operation returns an <code>IntentMetadata</code>
         * object for each version of an intent. For example, if an intent has three
         * numbered versions, the <code>GetIntentVersions</code> operation returns four
         * <code>IntentMetadata</code> objects in the response, one for each numbered
         * version and one for the <code>$LATEST</code> version. </p> <p>The
         * <code>GetIntentVersions</code> operation always returns at least one version,
         * the <code>$LATEST</code> version.</p> <p>This operation requires permissions for
         * the <code>lex:GetIntentVersions</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetIntentVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntentVersionsOutcomeCallable GetIntentVersionsCallable(const Model::GetIntentVersionsRequest& request) const;

        /**
         * <p>Gets information about all of the versions of an intent.</p> <p>The
         * <code>GetIntentVersions</code> operation returns an <code>IntentMetadata</code>
         * object for each version of an intent. For example, if an intent has three
         * numbered versions, the <code>GetIntentVersions</code> operation returns four
         * <code>IntentMetadata</code> objects in the response, one for each numbered
         * version and one for the <code>$LATEST</code> version. </p> <p>The
         * <code>GetIntentVersions</code> operation always returns at least one version,
         * the <code>$LATEST</code> version.</p> <p>This operation requires permissions for
         * the <code>lex:GetIntentVersions</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetIntentVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntentVersionsAsync(const Model::GetIntentVersionsRequest& request, const GetIntentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns intent information as follows: </p> <ul> <li> <p>If you specify the
         * <code>nameContains</code> field, returns the <code>$LATEST</code> version of all
         * intents that contain the specified string.</p> </li> <li> <p> If you don't
         * specify the <code>nameContains</code> field, returns information about the
         * <code>$LATEST</code> version of all intents. </p> </li> </ul> <p> The operation
         * requires permission for the <code>lex:GetIntents</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetIntents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntentsOutcome GetIntents(const Model::GetIntentsRequest& request) const;

        /**
         * <p>Returns intent information as follows: </p> <ul> <li> <p>If you specify the
         * <code>nameContains</code> field, returns the <code>$LATEST</code> version of all
         * intents that contain the specified string.</p> </li> <li> <p> If you don't
         * specify the <code>nameContains</code> field, returns information about the
         * <code>$LATEST</code> version of all intents. </p> </li> </ul> <p> The operation
         * requires permission for the <code>lex:GetIntents</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetIntents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntentsOutcomeCallable GetIntentsCallable(const Model::GetIntentsRequest& request) const;

        /**
         * <p>Returns intent information as follows: </p> <ul> <li> <p>If you specify the
         * <code>nameContains</code> field, returns the <code>$LATEST</code> version of all
         * intents that contain the specified string.</p> </li> <li> <p> If you don't
         * specify the <code>nameContains</code> field, returns information about the
         * <code>$LATEST</code> version of all intents. </p> </li> </ul> <p> The operation
         * requires permission for the <code>lex:GetIntents</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetIntents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntentsAsync(const Model::GetIntentsRequest& request, const GetIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific version of a slot type. In addition to
         * specifying the slot type name, you must specify the slot type version.</p>
         * <p>This operation requires permissions for the <code>lex:GetSlotType</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetSlotType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSlotTypeOutcome GetSlotType(const Model::GetSlotTypeRequest& request) const;

        /**
         * <p>Returns information about a specific version of a slot type. In addition to
         * specifying the slot type name, you must specify the slot type version.</p>
         * <p>This operation requires permissions for the <code>lex:GetSlotType</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetSlotType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSlotTypeOutcomeCallable GetSlotTypeCallable(const Model::GetSlotTypeRequest& request) const;

        /**
         * <p>Returns information about a specific version of a slot type. In addition to
         * specifying the slot type name, you must specify the slot type version.</p>
         * <p>This operation requires permissions for the <code>lex:GetSlotType</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetSlotType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSlotTypeAsync(const Model::GetSlotTypeRequest& request, const GetSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about all versions of a slot type.</p> <p>The
         * <code>GetSlotTypeVersions</code> operation returns a
         * <code>SlotTypeMetadata</code> object for each version of a slot type. For
         * example, if a slot type has three numbered versions, the
         * <code>GetSlotTypeVersions</code> operation returns four
         * <code>SlotTypeMetadata</code> objects in the response, one for each numbered
         * version and one for the <code>$LATEST</code> version. </p> <p>The
         * <code>GetSlotTypeVersions</code> operation always returns at least one version,
         * the <code>$LATEST</code> version.</p> <p>This operation requires permissions for
         * the <code>lex:GetSlotTypeVersions</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetSlotTypeVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSlotTypeVersionsOutcome GetSlotTypeVersions(const Model::GetSlotTypeVersionsRequest& request) const;

        /**
         * <p>Gets information about all versions of a slot type.</p> <p>The
         * <code>GetSlotTypeVersions</code> operation returns a
         * <code>SlotTypeMetadata</code> object for each version of a slot type. For
         * example, if a slot type has three numbered versions, the
         * <code>GetSlotTypeVersions</code> operation returns four
         * <code>SlotTypeMetadata</code> objects in the response, one for each numbered
         * version and one for the <code>$LATEST</code> version. </p> <p>The
         * <code>GetSlotTypeVersions</code> operation always returns at least one version,
         * the <code>$LATEST</code> version.</p> <p>This operation requires permissions for
         * the <code>lex:GetSlotTypeVersions</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetSlotTypeVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSlotTypeVersionsOutcomeCallable GetSlotTypeVersionsCallable(const Model::GetSlotTypeVersionsRequest& request) const;

        /**
         * <p>Gets information about all versions of a slot type.</p> <p>The
         * <code>GetSlotTypeVersions</code> operation returns a
         * <code>SlotTypeMetadata</code> object for each version of a slot type. For
         * example, if a slot type has three numbered versions, the
         * <code>GetSlotTypeVersions</code> operation returns four
         * <code>SlotTypeMetadata</code> objects in the response, one for each numbered
         * version and one for the <code>$LATEST</code> version. </p> <p>The
         * <code>GetSlotTypeVersions</code> operation always returns at least one version,
         * the <code>$LATEST</code> version.</p> <p>This operation requires permissions for
         * the <code>lex:GetSlotTypeVersions</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetSlotTypeVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSlotTypeVersionsAsync(const Model::GetSlotTypeVersionsRequest& request, const GetSlotTypeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns slot type information as follows: </p> <ul> <li> <p>If you specify
         * the <code>nameContains</code> field, returns the <code>$LATEST</code> version of
         * all slot types that contain the specified string.</p> </li> <li> <p> If you
         * don't specify the <code>nameContains</code> field, returns information about the
         * <code>$LATEST</code> version of all slot types. </p> </li> </ul> <p> The
         * operation requires permission for the <code>lex:GetSlotTypes</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetSlotTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSlotTypesOutcome GetSlotTypes(const Model::GetSlotTypesRequest& request) const;

        /**
         * <p>Returns slot type information as follows: </p> <ul> <li> <p>If you specify
         * the <code>nameContains</code> field, returns the <code>$LATEST</code> version of
         * all slot types that contain the specified string.</p> </li> <li> <p> If you
         * don't specify the <code>nameContains</code> field, returns information about the
         * <code>$LATEST</code> version of all slot types. </p> </li> </ul> <p> The
         * operation requires permission for the <code>lex:GetSlotTypes</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetSlotTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSlotTypesOutcomeCallable GetSlotTypesCallable(const Model::GetSlotTypesRequest& request) const;

        /**
         * <p>Returns slot type information as follows: </p> <ul> <li> <p>If you specify
         * the <code>nameContains</code> field, returns the <code>$LATEST</code> version of
         * all slot types that contain the specified string.</p> </li> <li> <p> If you
         * don't specify the <code>nameContains</code> field, returns information about the
         * <code>$LATEST</code> version of all slot types. </p> </li> </ul> <p> The
         * operation requires permission for the <code>lex:GetSlotTypes</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetSlotTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSlotTypesAsync(const Model::GetSlotTypesRequest& request, const GetSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use the <code>GetUtterancesView</code> operation to get information about the
         * utterances that your users have made to your bot. You can use this list to tune
         * the utterances that your bot responds to.</p> <p>For example, say that you have
         * created a bot to order flowers. After your users have used your bot for a while,
         * use the <code>GetUtterancesView</code> operation to see the requests that they
         * have made and whether they have been successful. You might find that the
         * utterance "I want flowers" is not being recognized. You could add this utterance
         * to the <code>OrderFlowers</code> intent so that your bot recognizes that
         * utterance.</p> <p>After you publish a new version of a bot, you can get
         * information about the old version and the new so that you can compare the
         * performance across the two versions. </p> <note> <p>Utterance statistics are
         * generated once a day. Data is available for the last 15 days. You can request
         * information for up to 5 versions in each request. The response contains
         * information about a maximum of 100 utterances for each version.</p> </note>
         * <p>This operation requires permissions for the
         * <code>lex:GetUtterancesView</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetUtterancesView">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUtterancesViewOutcome GetUtterancesView(const Model::GetUtterancesViewRequest& request) const;

        /**
         * <p>Use the <code>GetUtterancesView</code> operation to get information about the
         * utterances that your users have made to your bot. You can use this list to tune
         * the utterances that your bot responds to.</p> <p>For example, say that you have
         * created a bot to order flowers. After your users have used your bot for a while,
         * use the <code>GetUtterancesView</code> operation to see the requests that they
         * have made and whether they have been successful. You might find that the
         * utterance "I want flowers" is not being recognized. You could add this utterance
         * to the <code>OrderFlowers</code> intent so that your bot recognizes that
         * utterance.</p> <p>After you publish a new version of a bot, you can get
         * information about the old version and the new so that you can compare the
         * performance across the two versions. </p> <note> <p>Utterance statistics are
         * generated once a day. Data is available for the last 15 days. You can request
         * information for up to 5 versions in each request. The response contains
         * information about a maximum of 100 utterances for each version.</p> </note>
         * <p>This operation requires permissions for the
         * <code>lex:GetUtterancesView</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetUtterancesView">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUtterancesViewOutcomeCallable GetUtterancesViewCallable(const Model::GetUtterancesViewRequest& request) const;

        /**
         * <p>Use the <code>GetUtterancesView</code> operation to get information about the
         * utterances that your users have made to your bot. You can use this list to tune
         * the utterances that your bot responds to.</p> <p>For example, say that you have
         * created a bot to order flowers. After your users have used your bot for a while,
         * use the <code>GetUtterancesView</code> operation to see the requests that they
         * have made and whether they have been successful. You might find that the
         * utterance "I want flowers" is not being recognized. You could add this utterance
         * to the <code>OrderFlowers</code> intent so that your bot recognizes that
         * utterance.</p> <p>After you publish a new version of a bot, you can get
         * information about the old version and the new so that you can compare the
         * performance across the two versions. </p> <note> <p>Utterance statistics are
         * generated once a day. Data is available for the last 15 days. You can request
         * information for up to 5 versions in each request. The response contains
         * information about a maximum of 100 utterances for each version.</p> </note>
         * <p>This operation requires permissions for the
         * <code>lex:GetUtterancesView</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetUtterancesView">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUtterancesViewAsync(const Model::GetUtterancesViewRequest& request, const GetUtterancesViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Lex conversational bot or replaces an existing bot. When
         * you create or update a bot you are only required to specify a name, a locale,
         * and whether the bot is directed toward children under age 13. You can use this
         * to add intents later, or to remove intents from an existing bot. When you create
         * a bot with the minimum information, the bot is created or updated but Amazon Lex
         * returns the <code/> response <code>FAILED</code>. You can build the bot after
         * you add one or more intents. For more information about Amazon Lex bots, see
         * <a>how-it-works</a>. </p> <p>If you specify the name of an existing bot, the
         * fields in the request replace the existing values in the <code>$LATEST</code>
         * version of the bot. Amazon Lex removes any fields that you don't provide values
         * for in the request, except for the <code>idleTTLInSeconds</code> and
         * <code>privacySettings</code> fields, which are set to their default values. If
         * you don't specify values for required fields, Amazon Lex throws an
         * exception.</p> <p>This operation requires permissions for the
         * <code>lex:PutBot</code> action. For more information, see
         * <a>auth-and-access-control</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/PutBot">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBotOutcome PutBot(const Model::PutBotRequest& request) const;

        /**
         * <p>Creates an Amazon Lex conversational bot or replaces an existing bot. When
         * you create or update a bot you are only required to specify a name, a locale,
         * and whether the bot is directed toward children under age 13. You can use this
         * to add intents later, or to remove intents from an existing bot. When you create
         * a bot with the minimum information, the bot is created or updated but Amazon Lex
         * returns the <code/> response <code>FAILED</code>. You can build the bot after
         * you add one or more intents. For more information about Amazon Lex bots, see
         * <a>how-it-works</a>. </p> <p>If you specify the name of an existing bot, the
         * fields in the request replace the existing values in the <code>$LATEST</code>
         * version of the bot. Amazon Lex removes any fields that you don't provide values
         * for in the request, except for the <code>idleTTLInSeconds</code> and
         * <code>privacySettings</code> fields, which are set to their default values. If
         * you don't specify values for required fields, Amazon Lex throws an
         * exception.</p> <p>This operation requires permissions for the
         * <code>lex:PutBot</code> action. For more information, see
         * <a>auth-and-access-control</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/PutBot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBotOutcomeCallable PutBotCallable(const Model::PutBotRequest& request) const;

        /**
         * <p>Creates an Amazon Lex conversational bot or replaces an existing bot. When
         * you create or update a bot you are only required to specify a name, a locale,
         * and whether the bot is directed toward children under age 13. You can use this
         * to add intents later, or to remove intents from an existing bot. When you create
         * a bot with the minimum information, the bot is created or updated but Amazon Lex
         * returns the <code/> response <code>FAILED</code>. You can build the bot after
         * you add one or more intents. For more information about Amazon Lex bots, see
         * <a>how-it-works</a>. </p> <p>If you specify the name of an existing bot, the
         * fields in the request replace the existing values in the <code>$LATEST</code>
         * version of the bot. Amazon Lex removes any fields that you don't provide values
         * for in the request, except for the <code>idleTTLInSeconds</code> and
         * <code>privacySettings</code> fields, which are set to their default values. If
         * you don't specify values for required fields, Amazon Lex throws an
         * exception.</p> <p>This operation requires permissions for the
         * <code>lex:PutBot</code> action. For more information, see
         * <a>auth-and-access-control</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/PutBot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBotAsync(const Model::PutBotRequest& request, const PutBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an alias for the specified version of the bot or replaces an alias
         * for the specified bot. To change the version of the bot that the alias points
         * to, replace the alias. For more information about aliases, see
         * <a>versioning-aliases</a>.</p> <p>This operation requires permissions for the
         * <code>lex:PutBotAlias</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/PutBotAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBotAliasOutcome PutBotAlias(const Model::PutBotAliasRequest& request) const;

        /**
         * <p>Creates an alias for the specified version of the bot or replaces an alias
         * for the specified bot. To change the version of the bot that the alias points
         * to, replace the alias. For more information about aliases, see
         * <a>versioning-aliases</a>.</p> <p>This operation requires permissions for the
         * <code>lex:PutBotAlias</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/PutBotAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBotAliasOutcomeCallable PutBotAliasCallable(const Model::PutBotAliasRequest& request) const;

        /**
         * <p>Creates an alias for the specified version of the bot or replaces an alias
         * for the specified bot. To change the version of the bot that the alias points
         * to, replace the alias. For more information about aliases, see
         * <a>versioning-aliases</a>.</p> <p>This operation requires permissions for the
         * <code>lex:PutBotAlias</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/PutBotAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBotAliasAsync(const Model::PutBotAliasRequest& request, const PutBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an intent or replaces an existing intent.</p> <p>To define the
         * interaction between the user and your bot, you use one or more intents. For a
         * pizza ordering bot, for example, you would create an <code>OrderPizza</code>
         * intent. </p> <p>To create an intent or replace an existing intent, you must
         * provide the following:</p> <ul> <li> <p>Intent name. For example,
         * <code>OrderPizza</code>.</p> </li> <li> <p>Sample utterances. For example, "Can
         * I order a pizza, please." and "I want to order a pizza."</p> </li> <li>
         * <p>Information to be gathered. You specify slot types for the information that
         * your bot will request from the user. You can specify standard slot types, such
         * as a date or a time, or custom slot types such as the size and crust of a
         * pizza.</p> </li> <li> <p>How the intent will be fulfilled. You can provide a
         * Lambda function or configure the intent to return the intent information to the
         * client application. If you use a Lambda function, when all of the intent
         * information is available, Amazon Lex invokes your Lambda function. If you
         * configure your intent to return the intent information to the client
         * application. </p> </li> </ul> <p>You can specify other optional information in
         * the request, such as:</p> <ul> <li> <p>A confirmation prompt to ask the user to
         * confirm an intent. For example, "Shall I order your pizza?"</p> </li> <li> <p>A
         * conclusion statement to send to the user after the intent has been fulfilled.
         * For example, "I placed your pizza order."</p> </li> <li> <p>A follow-up prompt
         * that asks the user for additional activity. For example, asking "Do you want to
         * order a drink with your pizza?"</p> </li> </ul> <p>If you specify an existing
         * intent name to update the intent, Amazon Lex replaces the values in the
         * <code>$LATEST</code> version of the intent with the values in the request.
         * Amazon Lex removes fields that you don't provide in the request. If you don't
         * specify the required fields, Amazon Lex throws an exception. When you update the
         * <code>$LATEST</code> version of an intent, the <code>status</code> field of any
         * bot that uses the <code>$LATEST</code> version of the intent is set to
         * <code>NOT_BUILT</code>.</p> <p>For more information, see
         * <a>how-it-works</a>.</p> <p>This operation requires permissions for the
         * <code>lex:PutIntent</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/PutIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::PutIntentOutcome PutIntent(const Model::PutIntentRequest& request) const;

        /**
         * <p>Creates an intent or replaces an existing intent.</p> <p>To define the
         * interaction between the user and your bot, you use one or more intents. For a
         * pizza ordering bot, for example, you would create an <code>OrderPizza</code>
         * intent. </p> <p>To create an intent or replace an existing intent, you must
         * provide the following:</p> <ul> <li> <p>Intent name. For example,
         * <code>OrderPizza</code>.</p> </li> <li> <p>Sample utterances. For example, "Can
         * I order a pizza, please." and "I want to order a pizza."</p> </li> <li>
         * <p>Information to be gathered. You specify slot types for the information that
         * your bot will request from the user. You can specify standard slot types, such
         * as a date or a time, or custom slot types such as the size and crust of a
         * pizza.</p> </li> <li> <p>How the intent will be fulfilled. You can provide a
         * Lambda function or configure the intent to return the intent information to the
         * client application. If you use a Lambda function, when all of the intent
         * information is available, Amazon Lex invokes your Lambda function. If you
         * configure your intent to return the intent information to the client
         * application. </p> </li> </ul> <p>You can specify other optional information in
         * the request, such as:</p> <ul> <li> <p>A confirmation prompt to ask the user to
         * confirm an intent. For example, "Shall I order your pizza?"</p> </li> <li> <p>A
         * conclusion statement to send to the user after the intent has been fulfilled.
         * For example, "I placed your pizza order."</p> </li> <li> <p>A follow-up prompt
         * that asks the user for additional activity. For example, asking "Do you want to
         * order a drink with your pizza?"</p> </li> </ul> <p>If you specify an existing
         * intent name to update the intent, Amazon Lex replaces the values in the
         * <code>$LATEST</code> version of the intent with the values in the request.
         * Amazon Lex removes fields that you don't provide in the request. If you don't
         * specify the required fields, Amazon Lex throws an exception. When you update the
         * <code>$LATEST</code> version of an intent, the <code>status</code> field of any
         * bot that uses the <code>$LATEST</code> version of the intent is set to
         * <code>NOT_BUILT</code>.</p> <p>For more information, see
         * <a>how-it-works</a>.</p> <p>This operation requires permissions for the
         * <code>lex:PutIntent</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/PutIntent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutIntentOutcomeCallable PutIntentCallable(const Model::PutIntentRequest& request) const;

        /**
         * <p>Creates an intent or replaces an existing intent.</p> <p>To define the
         * interaction between the user and your bot, you use one or more intents. For a
         * pizza ordering bot, for example, you would create an <code>OrderPizza</code>
         * intent. </p> <p>To create an intent or replace an existing intent, you must
         * provide the following:</p> <ul> <li> <p>Intent name. For example,
         * <code>OrderPizza</code>.</p> </li> <li> <p>Sample utterances. For example, "Can
         * I order a pizza, please." and "I want to order a pizza."</p> </li> <li>
         * <p>Information to be gathered. You specify slot types for the information that
         * your bot will request from the user. You can specify standard slot types, such
         * as a date or a time, or custom slot types such as the size and crust of a
         * pizza.</p> </li> <li> <p>How the intent will be fulfilled. You can provide a
         * Lambda function or configure the intent to return the intent information to the
         * client application. If you use a Lambda function, when all of the intent
         * information is available, Amazon Lex invokes your Lambda function. If you
         * configure your intent to return the intent information to the client
         * application. </p> </li> </ul> <p>You can specify other optional information in
         * the request, such as:</p> <ul> <li> <p>A confirmation prompt to ask the user to
         * confirm an intent. For example, "Shall I order your pizza?"</p> </li> <li> <p>A
         * conclusion statement to send to the user after the intent has been fulfilled.
         * For example, "I placed your pizza order."</p> </li> <li> <p>A follow-up prompt
         * that asks the user for additional activity. For example, asking "Do you want to
         * order a drink with your pizza?"</p> </li> </ul> <p>If you specify an existing
         * intent name to update the intent, Amazon Lex replaces the values in the
         * <code>$LATEST</code> version of the intent with the values in the request.
         * Amazon Lex removes fields that you don't provide in the request. If you don't
         * specify the required fields, Amazon Lex throws an exception. When you update the
         * <code>$LATEST</code> version of an intent, the <code>status</code> field of any
         * bot that uses the <code>$LATEST</code> version of the intent is set to
         * <code>NOT_BUILT</code>.</p> <p>For more information, see
         * <a>how-it-works</a>.</p> <p>This operation requires permissions for the
         * <code>lex:PutIntent</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/PutIntent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutIntentAsync(const Model::PutIntentRequest& request, const PutIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom slot type or replaces an existing custom slot type.</p>
         * <p>To create a custom slot type, specify a name for the slot type and a set of
         * enumeration values, which are the values that a slot of this type can assume.
         * For more information, see <a>how-it-works</a>.</p> <p>If you specify the name of
         * an existing slot type, the fields in the request replace the existing values in
         * the <code>$LATEST</code> version of the slot type. Amazon Lex removes the fields
         * that you don't provide in the request. If you don't specify required fields,
         * Amazon Lex throws an exception. When you update the <code>$LATEST</code> version
         * of a slot type, if a bot uses the <code>$LATEST</code> version of an intent that
         * contains the slot type, the bot's <code>status</code> field is set to
         * <code>NOT_BUILT</code>.</p> <p>This operation requires permissions for the
         * <code>lex:PutSlotType</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/PutSlotType">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSlotTypeOutcome PutSlotType(const Model::PutSlotTypeRequest& request) const;

        /**
         * <p>Creates a custom slot type or replaces an existing custom slot type.</p>
         * <p>To create a custom slot type, specify a name for the slot type and a set of
         * enumeration values, which are the values that a slot of this type can assume.
         * For more information, see <a>how-it-works</a>.</p> <p>If you specify the name of
         * an existing slot type, the fields in the request replace the existing values in
         * the <code>$LATEST</code> version of the slot type. Amazon Lex removes the fields
         * that you don't provide in the request. If you don't specify required fields,
         * Amazon Lex throws an exception. When you update the <code>$LATEST</code> version
         * of a slot type, if a bot uses the <code>$LATEST</code> version of an intent that
         * contains the slot type, the bot's <code>status</code> field is set to
         * <code>NOT_BUILT</code>.</p> <p>This operation requires permissions for the
         * <code>lex:PutSlotType</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/PutSlotType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSlotTypeOutcomeCallable PutSlotTypeCallable(const Model::PutSlotTypeRequest& request) const;

        /**
         * <p>Creates a custom slot type or replaces an existing custom slot type.</p>
         * <p>To create a custom slot type, specify a name for the slot type and a set of
         * enumeration values, which are the values that a slot of this type can assume.
         * For more information, see <a>how-it-works</a>.</p> <p>If you specify the name of
         * an existing slot type, the fields in the request replace the existing values in
         * the <code>$LATEST</code> version of the slot type. Amazon Lex removes the fields
         * that you don't provide in the request. If you don't specify required fields,
         * Amazon Lex throws an exception. When you update the <code>$LATEST</code> version
         * of a slot type, if a bot uses the <code>$LATEST</code> version of an intent that
         * contains the slot type, the bot's <code>status</code> field is set to
         * <code>NOT_BUILT</code>.</p> <p>This operation requires permissions for the
         * <code>lex:PutSlotType</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/PutSlotType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSlotTypeAsync(const Model::PutSlotTypeRequest& request, const PutSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a job to import a resource to Amazon Lex.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/StartImport">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportOutcome StartImport(const Model::StartImportRequest& request) const;

        /**
         * <p>Starts a job to import a resource to Amazon Lex.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/StartImport">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartImportOutcomeCallable StartImportCallable(const Model::StartImportRequest& request) const;

        /**
         * <p>Starts a job to import a resource to Amazon Lex.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/StartImport">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartImportAsync(const Model::StartImportRequest& request, const StartImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateBotVersionAsyncHelper(const Model::CreateBotVersionRequest& request, const CreateBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIntentVersionAsyncHelper(const Model::CreateIntentVersionRequest& request, const CreateIntentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSlotTypeVersionAsyncHelper(const Model::CreateSlotTypeVersionRequest& request, const CreateSlotTypeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBotAsyncHelper(const Model::DeleteBotRequest& request, const DeleteBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBotAliasAsyncHelper(const Model::DeleteBotAliasRequest& request, const DeleteBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBotChannelAssociationAsyncHelper(const Model::DeleteBotChannelAssociationRequest& request, const DeleteBotChannelAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBotVersionAsyncHelper(const Model::DeleteBotVersionRequest& request, const DeleteBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIntentAsyncHelper(const Model::DeleteIntentRequest& request, const DeleteIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIntentVersionAsyncHelper(const Model::DeleteIntentVersionRequest& request, const DeleteIntentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSlotTypeAsyncHelper(const Model::DeleteSlotTypeRequest& request, const DeleteSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSlotTypeVersionAsyncHelper(const Model::DeleteSlotTypeVersionRequest& request, const DeleteSlotTypeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUtterancesAsyncHelper(const Model::DeleteUtterancesRequest& request, const DeleteUtterancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBotAsyncHelper(const Model::GetBotRequest& request, const GetBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBotAliasAsyncHelper(const Model::GetBotAliasRequest& request, const GetBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBotAliasesAsyncHelper(const Model::GetBotAliasesRequest& request, const GetBotAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBotChannelAssociationAsyncHelper(const Model::GetBotChannelAssociationRequest& request, const GetBotChannelAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBotChannelAssociationsAsyncHelper(const Model::GetBotChannelAssociationsRequest& request, const GetBotChannelAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBotVersionsAsyncHelper(const Model::GetBotVersionsRequest& request, const GetBotVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBotsAsyncHelper(const Model::GetBotsRequest& request, const GetBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBuiltinIntentAsyncHelper(const Model::GetBuiltinIntentRequest& request, const GetBuiltinIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBuiltinIntentsAsyncHelper(const Model::GetBuiltinIntentsRequest& request, const GetBuiltinIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBuiltinSlotTypesAsyncHelper(const Model::GetBuiltinSlotTypesRequest& request, const GetBuiltinSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetExportAsyncHelper(const Model::GetExportRequest& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetImportAsyncHelper(const Model::GetImportRequest& request, const GetImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIntentAsyncHelper(const Model::GetIntentRequest& request, const GetIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIntentVersionsAsyncHelper(const Model::GetIntentVersionsRequest& request, const GetIntentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIntentsAsyncHelper(const Model::GetIntentsRequest& request, const GetIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSlotTypeAsyncHelper(const Model::GetSlotTypeRequest& request, const GetSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSlotTypeVersionsAsyncHelper(const Model::GetSlotTypeVersionsRequest& request, const GetSlotTypeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSlotTypesAsyncHelper(const Model::GetSlotTypesRequest& request, const GetSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUtterancesViewAsyncHelper(const Model::GetUtterancesViewRequest& request, const GetUtterancesViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBotAsyncHelper(const Model::PutBotRequest& request, const PutBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutBotAliasAsyncHelper(const Model::PutBotAliasRequest& request, const PutBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutIntentAsyncHelper(const Model::PutIntentRequest& request, const PutIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutSlotTypeAsyncHelper(const Model::PutSlotTypeRequest& request, const PutSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartImportAsyncHelper(const Model::StartImportRequest& request, const StartImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace LexModelBuildingService
} // namespace Aws
