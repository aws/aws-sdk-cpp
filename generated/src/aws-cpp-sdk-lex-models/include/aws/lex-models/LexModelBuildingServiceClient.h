﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/lex-models/LexModelBuildingServiceServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/lex-models/LexModelBuildingServiceErrorMarshaller.h>

namespace Aws
{
namespace LexModelBuildingService
{
  AWS_LEXMODELBUILDINGSERVICE_API extern const char SERVICE_NAME[];
  /**
   * <fullname>Amazon Lex Build-Time Actions</fullname> <p> Amazon Lex is an AWS
   * service for building conversational voice and text interfaces. Use these actions
   * to create, update, and delete conversational bots for new and existing client
   * applications. </p>
   */
  class AWS_LEXMODELBUILDINGSERVICE_API LexModelBuildingServiceClient : smithy::client::AwsSmithyClientT<Aws::LexModelBuildingService::SERVICE_NAME,
      Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      LexModelBuildingServiceEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::LexModelBuildingServiceErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<LexModelBuildingServiceClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "Lex Model Building Service"; }

      typedef LexModelBuildingServiceClientConfiguration ClientConfigurationType;
      typedef LexModelBuildingServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelBuildingServiceClient(const Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration& clientConfiguration = Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration(),
                                      std::shared_ptr<LexModelBuildingServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelBuildingServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                      std::shared_ptr<LexModelBuildingServiceEndpointProviderBase> endpointProvider = nullptr,
                                      const Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration& clientConfiguration = Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LexModelBuildingServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      std::shared_ptr<LexModelBuildingServiceEndpointProviderBase> endpointProvider = nullptr,
                                      const Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration& clientConfiguration = Aws::LexModelBuildingService::LexModelBuildingServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelBuildingServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LexModelBuildingServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LexModelBuildingServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~LexModelBuildingServiceClient();

        /**
         * <p>Creates a new version of the bot based on the <code>$LATEST</code> version.
         * If the <code>$LATEST</code> version of this resource hasn't changed since you
         * created the last version, Amazon Lex doesn't create a new version. It returns
         * the last created version.</p>  <p>You can update only the
         * <code>$LATEST</code> version of the bot. You can't update the numbered versions
         * that you create with the <code>CreateBotVersion</code> operation.</p> 
         * <p> When you create the first version of a bot, Amazon Lex sets the version to
         * 1. Subsequent versions increment by 1. For more information, see
         * <a>versioning-intro</a>. </p> <p> This operation requires permission for the
         * <code>lex:CreateBotVersion</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CreateBotVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBotVersionOutcome CreateBotVersion(const Model::CreateBotVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateBotVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBotVersionRequestT = Model::CreateBotVersionRequest>
        Model::CreateBotVersionOutcomeCallable CreateBotVersionCallable(const CreateBotVersionRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::CreateBotVersion, request);
        }

        /**
         * An Async wrapper for CreateBotVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBotVersionRequestT = Model::CreateBotVersionRequest>
        void CreateBotVersionAsync(const CreateBotVersionRequestT& request, const CreateBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::CreateBotVersion, request, handler, context);
        }

        /**
         * <p>Creates a new version of an intent based on the <code>$LATEST</code> version
         * of the intent. If the <code>$LATEST</code> version of this intent hasn't changed
         * since you last updated it, Amazon Lex doesn't create a new version. It returns
         * the last version you created.</p>  <p>You can update only the
         * <code>$LATEST</code> version of the intent. You can't update the numbered
         * versions that you create with the <code>CreateIntentVersion</code>
         * operation.</p>  <p> When you create a version of an intent, Amazon Lex
         * sets the version to 1. Subsequent versions increment by 1. For more information,
         * see <a>versioning-intro</a>. </p> <p>This operation requires permissions to
         * perform the <code>lex:CreateIntentVersion</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CreateIntentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIntentVersionOutcome CreateIntentVersion(const Model::CreateIntentVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateIntentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIntentVersionRequestT = Model::CreateIntentVersionRequest>
        Model::CreateIntentVersionOutcomeCallable CreateIntentVersionCallable(const CreateIntentVersionRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::CreateIntentVersion, request);
        }

        /**
         * An Async wrapper for CreateIntentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIntentVersionRequestT = Model::CreateIntentVersionRequest>
        void CreateIntentVersionAsync(const CreateIntentVersionRequestT& request, const CreateIntentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::CreateIntentVersion, request, handler, context);
        }

        /**
         * <p>Creates a new version of a slot type based on the <code>$LATEST</code>
         * version of the specified slot type. If the <code>$LATEST</code> version of this
         * resource has not changed since the last version that you created, Amazon Lex
         * doesn't create a new version. It returns the last version that you created. </p>
         *  <p>You can update only the <code>$LATEST</code> version of a slot type.
         * You can't update the numbered versions that you create with the
         * <code>CreateSlotTypeVersion</code> operation.</p>  <p>When you create a
         * version of a slot type, Amazon Lex sets the version to 1. Subsequent versions
         * increment by 1. For more information, see <a>versioning-intro</a>. </p> <p>This
         * operation requires permissions for the <code>lex:CreateSlotTypeVersion</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/CreateSlotTypeVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSlotTypeVersionOutcome CreateSlotTypeVersion(const Model::CreateSlotTypeVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateSlotTypeVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSlotTypeVersionRequestT = Model::CreateSlotTypeVersionRequest>
        Model::CreateSlotTypeVersionOutcomeCallable CreateSlotTypeVersionCallable(const CreateSlotTypeVersionRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::CreateSlotTypeVersion, request);
        }

        /**
         * An Async wrapper for CreateSlotTypeVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSlotTypeVersionRequestT = Model::CreateSlotTypeVersionRequest>
        void CreateSlotTypeVersionAsync(const CreateSlotTypeVersionRequestT& request, const CreateSlotTypeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::CreateSlotTypeVersion, request, handler, context);
        }

        /**
         * <p>Deletes all versions of the bot, including the <code>$LATEST</code> version.
         * To delete a specific version of the bot, use the <a>DeleteBotVersion</a>
         * operation. The <code>DeleteBot</code> operation doesn't immediately remove the
         * bot schema. Instead, it is marked for deletion and removed later.</p> <p>Amazon
         * Lex stores utterances indefinitely for improving the ability of your bot to
         * respond to user inputs. These utterances are not removed when the bot is
         * deleted. To remove the utterances, use the <a>DeleteUtterances</a>
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
         * A Callable wrapper for DeleteBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBotRequestT = Model::DeleteBotRequest>
        Model::DeleteBotOutcomeCallable DeleteBotCallable(const DeleteBotRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::DeleteBot, request);
        }

        /**
         * An Async wrapper for DeleteBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBotRequestT = Model::DeleteBotRequest>
        void DeleteBotAsync(const DeleteBotRequestT& request, const DeleteBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::DeleteBot, request, handler, context);
        }

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
         * A Callable wrapper for DeleteBotAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBotAliasRequestT = Model::DeleteBotAliasRequest>
        Model::DeleteBotAliasOutcomeCallable DeleteBotAliasCallable(const DeleteBotAliasRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::DeleteBotAlias, request);
        }

        /**
         * An Async wrapper for DeleteBotAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBotAliasRequestT = Model::DeleteBotAliasRequest>
        void DeleteBotAliasAsync(const DeleteBotAliasRequestT& request, const DeleteBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::DeleteBotAlias, request, handler, context);
        }

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
         * A Callable wrapper for DeleteBotChannelAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBotChannelAssociationRequestT = Model::DeleteBotChannelAssociationRequest>
        Model::DeleteBotChannelAssociationOutcomeCallable DeleteBotChannelAssociationCallable(const DeleteBotChannelAssociationRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::DeleteBotChannelAssociation, request);
        }

        /**
         * An Async wrapper for DeleteBotChannelAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBotChannelAssociationRequestT = Model::DeleteBotChannelAssociationRequest>
        void DeleteBotChannelAssociationAsync(const DeleteBotChannelAssociationRequestT& request, const DeleteBotChannelAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::DeleteBotChannelAssociation, request, handler, context);
        }

        /**
         * <p>Deletes a specific version of a bot. To delete all versions of a bot, use the
         * <a>DeleteBot</a> operation. </p> <p>This operation requires permissions for the
         * <code>lex:DeleteBotVersion</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteBotVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBotVersionOutcome DeleteBotVersion(const Model::DeleteBotVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteBotVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBotVersionRequestT = Model::DeleteBotVersionRequest>
        Model::DeleteBotVersionOutcomeCallable DeleteBotVersionCallable(const DeleteBotVersionRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::DeleteBotVersion, request);
        }

        /**
         * An Async wrapper for DeleteBotVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBotVersionRequestT = Model::DeleteBotVersionRequest>
        void DeleteBotVersionAsync(const DeleteBotVersionRequestT& request, const DeleteBotVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::DeleteBotVersion, request, handler, context);
        }

        /**
         * <p>Deletes all versions of the intent, including the <code>$LATEST</code>
         * version. To delete a specific version of the intent, use the
         * <a>DeleteIntentVersion</a> operation.</p> <p> You can delete a version of an
         * intent only if it is not referenced. To delete an intent that is referred to in
         * one or more bots (see <a>how-it-works</a>), you must remove those references
         * first. </p>  <p> If you get the <code>ResourceInUseException</code>
         * exception, it provides an example reference that shows where the intent is
         * referenced. To remove the reference to the intent, either update the bot or
         * delete it. If you get the same exception when you attempt to delete the intent
         * again, repeat until the intent has no references and the call to
         * <code>DeleteIntent</code> is successful. </p>  <p> This operation
         * requires permission for the <code>lex:DeleteIntent</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntentOutcome DeleteIntent(const Model::DeleteIntentRequest& request) const;

        /**
         * A Callable wrapper for DeleteIntent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIntentRequestT = Model::DeleteIntentRequest>
        Model::DeleteIntentOutcomeCallable DeleteIntentCallable(const DeleteIntentRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::DeleteIntent, request);
        }

        /**
         * An Async wrapper for DeleteIntent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIntentRequestT = Model::DeleteIntentRequest>
        void DeleteIntentAsync(const DeleteIntentRequestT& request, const DeleteIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::DeleteIntent, request, handler, context);
        }

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
         * A Callable wrapper for DeleteIntentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIntentVersionRequestT = Model::DeleteIntentVersionRequest>
        Model::DeleteIntentVersionOutcomeCallable DeleteIntentVersionCallable(const DeleteIntentVersionRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::DeleteIntentVersion, request);
        }

        /**
         * An Async wrapper for DeleteIntentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIntentVersionRequestT = Model::DeleteIntentVersionRequest>
        void DeleteIntentVersionAsync(const DeleteIntentVersionRequestT& request, const DeleteIntentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::DeleteIntentVersion, request, handler, context);
        }

        /**
         * <p>Deletes all versions of the slot type, including the <code>$LATEST</code>
         * version. To delete a specific version of the slot type, use the
         * <a>DeleteSlotTypeVersion</a> operation.</p> <p> You can delete a version of a
         * slot type only if it is not referenced. To delete a slot type that is referred
         * to in one or more intents, you must remove those references first. </p> 
         * <p> If you get the <code>ResourceInUseException</code> exception, the exception
         * provides an example reference that shows the intent where the slot type is
         * referenced. To remove the reference to the slot type, either update the intent
         * or delete it. If you get the same exception when you attempt to delete the slot
         * type again, repeat until the slot type has no references and the
         * <code>DeleteSlotType</code> call is successful. </p>  <p>This operation
         * requires permission for the <code>lex:DeleteSlotType</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteSlotType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSlotTypeOutcome DeleteSlotType(const Model::DeleteSlotTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteSlotType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSlotTypeRequestT = Model::DeleteSlotTypeRequest>
        Model::DeleteSlotTypeOutcomeCallable DeleteSlotTypeCallable(const DeleteSlotTypeRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::DeleteSlotType, request);
        }

        /**
         * An Async wrapper for DeleteSlotType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSlotTypeRequestT = Model::DeleteSlotTypeRequest>
        void DeleteSlotTypeAsync(const DeleteSlotTypeRequestT& request, const DeleteSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::DeleteSlotType, request, handler, context);
        }

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
         * A Callable wrapper for DeleteSlotTypeVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSlotTypeVersionRequestT = Model::DeleteSlotTypeVersionRequest>
        Model::DeleteSlotTypeVersionOutcomeCallable DeleteSlotTypeVersionCallable(const DeleteSlotTypeVersionRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::DeleteSlotTypeVersion, request);
        }

        /**
         * An Async wrapper for DeleteSlotTypeVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSlotTypeVersionRequestT = Model::DeleteSlotTypeVersionRequest>
        void DeleteSlotTypeVersionAsync(const DeleteSlotTypeVersionRequestT& request, const DeleteSlotTypeVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::DeleteSlotTypeVersion, request, handler, context);
        }

        /**
         * <p>Deletes stored utterances.</p> <p>Amazon Lex stores the utterances that users
         * send to your bot. Utterances are stored for 15 days for use with the
         * <a>GetUtterancesView</a> operation, and then stored indefinitely for use in
         * improving the ability of your bot to respond to user input.</p> <p>Use the
         * <code>DeleteUtterances</code> operation to manually delete stored utterances for
         * a specific user. When you use the <code>DeleteUtterances</code> operation,
         * utterances stored for improving your bot's ability to respond to user input are
         * deleted immediately. Utterances stored for use with the
         * <code>GetUtterancesView</code> operation are deleted after 15 days.</p> <p>This
         * operation requires permissions for the <code>lex:DeleteUtterances</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/DeleteUtterances">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUtterancesOutcome DeleteUtterances(const Model::DeleteUtterancesRequest& request) const;

        /**
         * A Callable wrapper for DeleteUtterances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUtterancesRequestT = Model::DeleteUtterancesRequest>
        Model::DeleteUtterancesOutcomeCallable DeleteUtterancesCallable(const DeleteUtterancesRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::DeleteUtterances, request);
        }

        /**
         * An Async wrapper for DeleteUtterances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUtterancesRequestT = Model::DeleteUtterancesRequest>
        void DeleteUtterancesAsync(const DeleteUtterancesRequestT& request, const DeleteUtterancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::DeleteUtterances, request, handler, context);
        }

        /**
         * <p>Returns metadata information for a specific bot. You must provide the bot
         * name and the bot version or alias. </p> <p> This operation requires permissions
         * for the <code>lex:GetBot</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBotOutcome GetBot(const Model::GetBotRequest& request) const;

        /**
         * A Callable wrapper for GetBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBotRequestT = Model::GetBotRequest>
        Model::GetBotOutcomeCallable GetBotCallable(const GetBotRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetBot, request);
        }

        /**
         * An Async wrapper for GetBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBotRequestT = Model::GetBotRequest>
        void GetBotAsync(const GetBotRequestT& request, const GetBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetBot, request, handler, context);
        }

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
         * A Callable wrapper for GetBotAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBotAliasRequestT = Model::GetBotAliasRequest>
        Model::GetBotAliasOutcomeCallable GetBotAliasCallable(const GetBotAliasRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetBotAlias, request);
        }

        /**
         * An Async wrapper for GetBotAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBotAliasRequestT = Model::GetBotAliasRequest>
        void GetBotAliasAsync(const GetBotAliasRequestT& request, const GetBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetBotAlias, request, handler, context);
        }

        /**
         * <p>Returns a list of aliases for a specified Amazon Lex bot.</p> <p>This
         * operation requires permissions for the <code>lex:GetBotAliases</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBotAliasesOutcome GetBotAliases(const Model::GetBotAliasesRequest& request) const;

        /**
         * A Callable wrapper for GetBotAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBotAliasesRequestT = Model::GetBotAliasesRequest>
        Model::GetBotAliasesOutcomeCallable GetBotAliasesCallable(const GetBotAliasesRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetBotAliases, request);
        }

        /**
         * An Async wrapper for GetBotAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBotAliasesRequestT = Model::GetBotAliasesRequest>
        void GetBotAliasesAsync(const GetBotAliasesRequestT& request, const GetBotAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetBotAliases, request, handler, context);
        }

        /**
         * <p>Returns information about the association between an Amazon Lex bot and a
         * messaging platform.</p> <p>This operation requires permissions for the
         * <code>lex:GetBotChannelAssociation</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBotChannelAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBotChannelAssociationOutcome GetBotChannelAssociation(const Model::GetBotChannelAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetBotChannelAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBotChannelAssociationRequestT = Model::GetBotChannelAssociationRequest>
        Model::GetBotChannelAssociationOutcomeCallable GetBotChannelAssociationCallable(const GetBotChannelAssociationRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetBotChannelAssociation, request);
        }

        /**
         * An Async wrapper for GetBotChannelAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBotChannelAssociationRequestT = Model::GetBotChannelAssociationRequest>
        void GetBotChannelAssociationAsync(const GetBotChannelAssociationRequestT& request, const GetBotChannelAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetBotChannelAssociation, request, handler, context);
        }

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
         * A Callable wrapper for GetBotChannelAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBotChannelAssociationsRequestT = Model::GetBotChannelAssociationsRequest>
        Model::GetBotChannelAssociationsOutcomeCallable GetBotChannelAssociationsCallable(const GetBotChannelAssociationsRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetBotChannelAssociations, request);
        }

        /**
         * An Async wrapper for GetBotChannelAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBotChannelAssociationsRequestT = Model::GetBotChannelAssociationsRequest>
        void GetBotChannelAssociationsAsync(const GetBotChannelAssociationsRequestT& request, const GetBotChannelAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetBotChannelAssociations, request, handler, context);
        }

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
         * A Callable wrapper for GetBotVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBotVersionsRequestT = Model::GetBotVersionsRequest>
        Model::GetBotVersionsOutcomeCallable GetBotVersionsCallable(const GetBotVersionsRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetBotVersions, request);
        }

        /**
         * An Async wrapper for GetBotVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBotVersionsRequestT = Model::GetBotVersionsRequest>
        void GetBotVersionsAsync(const GetBotVersionsRequestT& request, const GetBotVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetBotVersions, request, handler, context);
        }

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
        virtual Model::GetBotsOutcome GetBots(const Model::GetBotsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetBots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBotsRequestT = Model::GetBotsRequest>
        Model::GetBotsOutcomeCallable GetBotsCallable(const GetBotsRequestT& request = {}) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetBots, request);
        }

        /**
         * An Async wrapper for GetBots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBotsRequestT = Model::GetBotsRequest>
        void GetBotsAsync(const GetBotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetBotsRequestT& request = {}) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetBots, request, handler, context);
        }

        /**
         * <p>Returns information about a built-in intent.</p> <p>This operation requires
         * permission for the <code>lex:GetBuiltinIntent</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBuiltinIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBuiltinIntentOutcome GetBuiltinIntent(const Model::GetBuiltinIntentRequest& request) const;

        /**
         * A Callable wrapper for GetBuiltinIntent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBuiltinIntentRequestT = Model::GetBuiltinIntentRequest>
        Model::GetBuiltinIntentOutcomeCallable GetBuiltinIntentCallable(const GetBuiltinIntentRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetBuiltinIntent, request);
        }

        /**
         * An Async wrapper for GetBuiltinIntent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBuiltinIntentRequestT = Model::GetBuiltinIntentRequest>
        void GetBuiltinIntentAsync(const GetBuiltinIntentRequestT& request, const GetBuiltinIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetBuiltinIntent, request, handler, context);
        }

        /**
         * <p>Gets a list of built-in intents that meet the specified criteria.</p> <p>This
         * operation requires permission for the <code>lex:GetBuiltinIntents</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetBuiltinIntents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBuiltinIntentsOutcome GetBuiltinIntents(const Model::GetBuiltinIntentsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetBuiltinIntents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBuiltinIntentsRequestT = Model::GetBuiltinIntentsRequest>
        Model::GetBuiltinIntentsOutcomeCallable GetBuiltinIntentsCallable(const GetBuiltinIntentsRequestT& request = {}) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetBuiltinIntents, request);
        }

        /**
         * An Async wrapper for GetBuiltinIntents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBuiltinIntentsRequestT = Model::GetBuiltinIntentsRequest>
        void GetBuiltinIntentsAsync(const GetBuiltinIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetBuiltinIntentsRequestT& request = {}) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetBuiltinIntents, request, handler, context);
        }

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
        virtual Model::GetBuiltinSlotTypesOutcome GetBuiltinSlotTypes(const Model::GetBuiltinSlotTypesRequest& request = {}) const;

        /**
         * A Callable wrapper for GetBuiltinSlotTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBuiltinSlotTypesRequestT = Model::GetBuiltinSlotTypesRequest>
        Model::GetBuiltinSlotTypesOutcomeCallable GetBuiltinSlotTypesCallable(const GetBuiltinSlotTypesRequestT& request = {}) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetBuiltinSlotTypes, request);
        }

        /**
         * An Async wrapper for GetBuiltinSlotTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBuiltinSlotTypesRequestT = Model::GetBuiltinSlotTypesRequest>
        void GetBuiltinSlotTypesAsync(const GetBuiltinSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetBuiltinSlotTypesRequestT& request = {}) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetBuiltinSlotTypes, request, handler, context);
        }

        /**
         * <p>Exports the contents of a Amazon Lex resource in a specified format.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetExport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportOutcome GetExport(const Model::GetExportRequest& request) const;

        /**
         * A Callable wrapper for GetExport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExportRequestT = Model::GetExportRequest>
        Model::GetExportOutcomeCallable GetExportCallable(const GetExportRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetExport, request);
        }

        /**
         * An Async wrapper for GetExport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExportRequestT = Model::GetExportRequest>
        void GetExportAsync(const GetExportRequestT& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetExport, request, handler, context);
        }

        /**
         * <p>Gets information about an import job started with the
         * <code>StartImport</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetImport">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportOutcome GetImport(const Model::GetImportRequest& request) const;

        /**
         * A Callable wrapper for GetImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImportRequestT = Model::GetImportRequest>
        Model::GetImportOutcomeCallable GetImportCallable(const GetImportRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetImport, request);
        }

        /**
         * An Async wrapper for GetImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImportRequestT = Model::GetImportRequest>
        void GetImportAsync(const GetImportRequestT& request, const GetImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetImport, request, handler, context);
        }

        /**
         * <p> Returns information about an intent. In addition to the intent name, you
         * must specify the intent version. </p> <p> This operation requires permissions to
         * perform the <code>lex:GetIntent</code> action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetIntent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntentOutcome GetIntent(const Model::GetIntentRequest& request) const;

        /**
         * A Callable wrapper for GetIntent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIntentRequestT = Model::GetIntentRequest>
        Model::GetIntentOutcomeCallable GetIntentCallable(const GetIntentRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetIntent, request);
        }

        /**
         * An Async wrapper for GetIntent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIntentRequestT = Model::GetIntentRequest>
        void GetIntentAsync(const GetIntentRequestT& request, const GetIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetIntent, request, handler, context);
        }

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
         * A Callable wrapper for GetIntentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIntentVersionsRequestT = Model::GetIntentVersionsRequest>
        Model::GetIntentVersionsOutcomeCallable GetIntentVersionsCallable(const GetIntentVersionsRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetIntentVersions, request);
        }

        /**
         * An Async wrapper for GetIntentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIntentVersionsRequestT = Model::GetIntentVersionsRequest>
        void GetIntentVersionsAsync(const GetIntentVersionsRequestT& request, const GetIntentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetIntentVersions, request, handler, context);
        }

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
        virtual Model::GetIntentsOutcome GetIntents(const Model::GetIntentsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetIntents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIntentsRequestT = Model::GetIntentsRequest>
        Model::GetIntentsOutcomeCallable GetIntentsCallable(const GetIntentsRequestT& request = {}) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetIntents, request);
        }

        /**
         * An Async wrapper for GetIntents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIntentsRequestT = Model::GetIntentsRequest>
        void GetIntentsAsync(const GetIntentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetIntentsRequestT& request = {}) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetIntents, request, handler, context);
        }

        /**
         * <p>Provides details about an ongoing or complete migration from an Amazon Lex V1
         * bot to an Amazon Lex V2 bot. Use this operation to view the migration alerts and
         * warnings related to the migration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetMigration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMigrationOutcome GetMigration(const Model::GetMigrationRequest& request) const;

        /**
         * A Callable wrapper for GetMigration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMigrationRequestT = Model::GetMigrationRequest>
        Model::GetMigrationOutcomeCallable GetMigrationCallable(const GetMigrationRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetMigration, request);
        }

        /**
         * An Async wrapper for GetMigration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMigrationRequestT = Model::GetMigrationRequest>
        void GetMigrationAsync(const GetMigrationRequestT& request, const GetMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetMigration, request, handler, context);
        }

        /**
         * <p>Gets a list of migrations between Amazon Lex V1 and Amazon Lex
         * V2.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetMigrations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMigrationsOutcome GetMigrations(const Model::GetMigrationsRequest& request = {}) const;

        /**
         * A Callable wrapper for GetMigrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMigrationsRequestT = Model::GetMigrationsRequest>
        Model::GetMigrationsOutcomeCallable GetMigrationsCallable(const GetMigrationsRequestT& request = {}) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetMigrations, request);
        }

        /**
         * An Async wrapper for GetMigrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMigrationsRequestT = Model::GetMigrationsRequest>
        void GetMigrationsAsync(const GetMigrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetMigrationsRequestT& request = {}) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetMigrations, request, handler, context);
        }

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
         * A Callable wrapper for GetSlotType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSlotTypeRequestT = Model::GetSlotTypeRequest>
        Model::GetSlotTypeOutcomeCallable GetSlotTypeCallable(const GetSlotTypeRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetSlotType, request);
        }

        /**
         * An Async wrapper for GetSlotType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSlotTypeRequestT = Model::GetSlotTypeRequest>
        void GetSlotTypeAsync(const GetSlotTypeRequestT& request, const GetSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetSlotType, request, handler, context);
        }

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
         * A Callable wrapper for GetSlotTypeVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSlotTypeVersionsRequestT = Model::GetSlotTypeVersionsRequest>
        Model::GetSlotTypeVersionsOutcomeCallable GetSlotTypeVersionsCallable(const GetSlotTypeVersionsRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetSlotTypeVersions, request);
        }

        /**
         * An Async wrapper for GetSlotTypeVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSlotTypeVersionsRequestT = Model::GetSlotTypeVersionsRequest>
        void GetSlotTypeVersionsAsync(const GetSlotTypeVersionsRequestT& request, const GetSlotTypeVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetSlotTypeVersions, request, handler, context);
        }

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
        virtual Model::GetSlotTypesOutcome GetSlotTypes(const Model::GetSlotTypesRequest& request = {}) const;

        /**
         * A Callable wrapper for GetSlotTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSlotTypesRequestT = Model::GetSlotTypesRequest>
        Model::GetSlotTypesOutcomeCallable GetSlotTypesCallable(const GetSlotTypesRequestT& request = {}) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetSlotTypes, request);
        }

        /**
         * An Async wrapper for GetSlotTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSlotTypesRequestT = Model::GetSlotTypesRequest>
        void GetSlotTypesAsync(const GetSlotTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetSlotTypesRequestT& request = {}) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetSlotTypes, request, handler, context);
        }

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
         * performance across the two versions. </p> <p>Utterance statistics are generated
         * once a day. Data is available for the last 15 days. You can request information
         * for up to 5 versions of your bot in each request. Amazon Lex returns the most
         * frequent utterances received by the bot in the last 15 days. The response
         * contains information about a maximum of 100 utterances for each version.</p>
         * <p>If you set <code>childDirected</code> field to true when you created your
         * bot, if you are using slot obfuscation with one or more slots, or if you opted
         * out of participating in improving Amazon Lex, utterances are not available.</p>
         * <p>This operation requires permissions for the
         * <code>lex:GetUtterancesView</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/GetUtterancesView">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUtterancesViewOutcome GetUtterancesView(const Model::GetUtterancesViewRequest& request) const;

        /**
         * A Callable wrapper for GetUtterancesView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUtterancesViewRequestT = Model::GetUtterancesViewRequest>
        Model::GetUtterancesViewOutcomeCallable GetUtterancesViewCallable(const GetUtterancesViewRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::GetUtterancesView, request);
        }

        /**
         * An Async wrapper for GetUtterancesView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUtterancesViewRequestT = Model::GetUtterancesViewRequest>
        void GetUtterancesViewAsync(const GetUtterancesViewRequestT& request, const GetUtterancesViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::GetUtterancesView, request, handler, context);
        }

        /**
         * <p>Gets a list of tags associated with the specified resource. Only bots, bot
         * aliases, and bot channels can have tags associated with them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::ListTagsForResource, request, handler, context);
        }

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
         * <a>security-iam</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/PutBot">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBotOutcome PutBot(const Model::PutBotRequest& request) const;

        /**
         * A Callable wrapper for PutBot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutBotRequestT = Model::PutBotRequest>
        Model::PutBotOutcomeCallable PutBotCallable(const PutBotRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::PutBot, request);
        }

        /**
         * An Async wrapper for PutBot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutBotRequestT = Model::PutBotRequest>
        void PutBotAsync(const PutBotRequestT& request, const PutBotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::PutBot, request, handler, context);
        }

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
         * A Callable wrapper for PutBotAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutBotAliasRequestT = Model::PutBotAliasRequest>
        Model::PutBotAliasOutcomeCallable PutBotAliasCallable(const PutBotAliasRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::PutBotAlias, request);
        }

        /**
         * An Async wrapper for PutBotAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutBotAliasRequestT = Model::PutBotAliasRequest>
        void PutBotAliasAsync(const PutBotAliasRequestT& request, const PutBotAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::PutBotAlias, request, handler, context);
        }

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
         * A Callable wrapper for PutIntent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutIntentRequestT = Model::PutIntentRequest>
        Model::PutIntentOutcomeCallable PutIntentCallable(const PutIntentRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::PutIntent, request);
        }

        /**
         * An Async wrapper for PutIntent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutIntentRequestT = Model::PutIntentRequest>
        void PutIntentAsync(const PutIntentRequestT& request, const PutIntentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::PutIntent, request, handler, context);
        }

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
         * A Callable wrapper for PutSlotType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSlotTypeRequestT = Model::PutSlotTypeRequest>
        Model::PutSlotTypeOutcomeCallable PutSlotTypeCallable(const PutSlotTypeRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::PutSlotType, request);
        }

        /**
         * An Async wrapper for PutSlotType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSlotTypeRequestT = Model::PutSlotTypeRequest>
        void PutSlotTypeAsync(const PutSlotTypeRequestT& request, const PutSlotTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::PutSlotType, request, handler, context);
        }

        /**
         * <p>Starts a job to import a resource to Amazon Lex.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/StartImport">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportOutcome StartImport(const Model::StartImportRequest& request) const;

        /**
         * A Callable wrapper for StartImport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartImportRequestT = Model::StartImportRequest>
        Model::StartImportOutcomeCallable StartImportCallable(const StartImportRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::StartImport, request);
        }

        /**
         * An Async wrapper for StartImport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartImportRequestT = Model::StartImportRequest>
        void StartImportAsync(const StartImportRequestT& request, const StartImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::StartImport, request, handler, context);
        }

        /**
         * <p>Starts migrating a bot from Amazon Lex V1 to Amazon Lex V2. Migrate your bot
         * when you want to take advantage of the new features of Amazon Lex V2.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/lex/latest/dg/migrate.html">Migrating a
         * bot</a> in the <i>Amazon Lex developer guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/StartMigration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMigrationOutcome StartMigration(const Model::StartMigrationRequest& request) const;

        /**
         * A Callable wrapper for StartMigration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMigrationRequestT = Model::StartMigrationRequest>
        Model::StartMigrationOutcomeCallable StartMigrationCallable(const StartMigrationRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::StartMigration, request);
        }

        /**
         * An Async wrapper for StartMigration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMigrationRequestT = Model::StartMigrationRequest>
        void StartMigrationAsync(const StartMigrationRequestT& request, const StartMigrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::StartMigration, request, handler, context);
        }

        /**
         * <p>Adds the specified tags to the specified resource. If a tag key already
         * exists, the existing value is replaced with the new value.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a bot, bot alias or bot channel.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&LexModelBuildingServiceClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LexModelBuildingServiceClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LexModelBuildingServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LexModelBuildingServiceClient>;

  };

} // namespace LexModelBuildingService
} // namespace Aws
