/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/bedrock-agent/BedrockAgentServiceClientModel.h>

namespace Aws
{
namespace BedrockAgent
{
  /**
   * <p>An example service, deployed with the Octane Service creator, which will echo
   * the string</p>
   */
  class AWS_BEDROCKAGENT_API BedrockAgentClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BedrockAgentClientConfiguration ClientConfigurationType;
      typedef BedrockAgentEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentClient(const Aws::BedrockAgent::BedrockAgentClientConfiguration& clientConfiguration = Aws::BedrockAgent::BedrockAgentClientConfiguration(),
                           std::shared_ptr<BedrockAgentEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<BedrockAgentEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::BedrockAgent::BedrockAgentClientConfiguration& clientConfiguration = Aws::BedrockAgent::BedrockAgentClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockAgentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<BedrockAgentEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::BedrockAgent::BedrockAgentClientConfiguration& clientConfiguration = Aws::BedrockAgent::BedrockAgentClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BedrockAgentClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BedrockAgentClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BedrockAgentClient();

        /**
         * <p>Associate a Knowledge Base to an existing Amazon Bedrock Agent</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AssociateAgentKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAgentKnowledgeBaseOutcome AssociateAgentKnowledgeBase(const Model::AssociateAgentKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for AssociateAgentKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateAgentKnowledgeBaseRequestT = Model::AssociateAgentKnowledgeBaseRequest>
        Model::AssociateAgentKnowledgeBaseOutcomeCallable AssociateAgentKnowledgeBaseCallable(const AssociateAgentKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::AssociateAgentKnowledgeBase, request);
        }

        /**
         * An Async wrapper for AssociateAgentKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateAgentKnowledgeBaseRequestT = Model::AssociateAgentKnowledgeBaseRequest>
        void AssociateAgentKnowledgeBaseAsync(const AssociateAgentKnowledgeBaseRequestT& request, const AssociateAgentKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::AssociateAgentKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Bedrock Agent</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgentOutcome CreateAgent(const Model::CreateAgentRequest& request) const;

        /**
         * A Callable wrapper for CreateAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAgentRequestT = Model::CreateAgentRequest>
        Model::CreateAgentOutcomeCallable CreateAgentCallable(const CreateAgentRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreateAgent, request);
        }

        /**
         * An Async wrapper for CreateAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAgentRequestT = Model::CreateAgentRequest>
        void CreateAgentAsync(const CreateAgentRequestT& request, const CreateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreateAgent, request, handler, context);
        }

        /**
         * <p>Creates an Action Group for existing Amazon Bedrock Agent</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateAgentActionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgentActionGroupOutcome CreateAgentActionGroup(const Model::CreateAgentActionGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateAgentActionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAgentActionGroupRequestT = Model::CreateAgentActionGroupRequest>
        Model::CreateAgentActionGroupOutcomeCallable CreateAgentActionGroupCallable(const CreateAgentActionGroupRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreateAgentActionGroup, request);
        }

        /**
         * An Async wrapper for CreateAgentActionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAgentActionGroupRequestT = Model::CreateAgentActionGroupRequest>
        void CreateAgentActionGroupAsync(const CreateAgentActionGroupRequestT& request, const CreateAgentActionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreateAgentActionGroup, request, handler, context);
        }

        /**
         * <p>Creates an Alias for an existing Amazon Bedrock Agent</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateAgentAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAgentAliasOutcome CreateAgentAlias(const Model::CreateAgentAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateAgentAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAgentAliasRequestT = Model::CreateAgentAliasRequest>
        Model::CreateAgentAliasOutcomeCallable CreateAgentAliasCallable(const CreateAgentAliasRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreateAgentAlias, request);
        }

        /**
         * An Async wrapper for CreateAgentAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAgentAliasRequestT = Model::CreateAgentAliasRequest>
        void CreateAgentAliasAsync(const CreateAgentAliasRequestT& request, const CreateAgentAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreateAgentAlias, request, handler, context);
        }

        /**
         * <p>Create a new data source</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataSourceOutcome CreateDataSource(const Model::CreateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        Model::CreateDataSourceOutcomeCallable CreateDataSourceCallable(const CreateDataSourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreateDataSource, request);
        }

        /**
         * An Async wrapper for CreateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataSourceRequestT = Model::CreateDataSourceRequest>
        void CreateDataSourceAsync(const CreateDataSourceRequestT& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreateDataSource, request, handler, context);
        }

        /**
         * <p>Create a new knowledge base</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CreateKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKnowledgeBaseOutcome CreateKnowledgeBase(const Model::CreateKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for CreateKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKnowledgeBaseRequestT = Model::CreateKnowledgeBaseRequest>
        Model::CreateKnowledgeBaseOutcomeCallable CreateKnowledgeBaseCallable(const CreateKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::CreateKnowledgeBase, request);
        }

        /**
         * An Async wrapper for CreateKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKnowledgeBaseRequestT = Model::CreateKnowledgeBaseRequest>
        void CreateKnowledgeBaseAsync(const CreateKnowledgeBaseRequestT& request, const CreateKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::CreateKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Deletes an Agent for existing Amazon Bedrock Agent</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgentOutcome DeleteAgent(const Model::DeleteAgentRequest& request) const;

        /**
         * A Callable wrapper for DeleteAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAgentRequestT = Model::DeleteAgentRequest>
        Model::DeleteAgentOutcomeCallable DeleteAgentCallable(const DeleteAgentRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteAgent, request);
        }

        /**
         * An Async wrapper for DeleteAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAgentRequestT = Model::DeleteAgentRequest>
        void DeleteAgentAsync(const DeleteAgentRequestT& request, const DeleteAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteAgent, request, handler, context);
        }

        /**
         * <p>Deletes an Action Group for existing Amazon Bedrock Agent.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteAgentActionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgentActionGroupOutcome DeleteAgentActionGroup(const Model::DeleteAgentActionGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteAgentActionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAgentActionGroupRequestT = Model::DeleteAgentActionGroupRequest>
        Model::DeleteAgentActionGroupOutcomeCallable DeleteAgentActionGroupCallable(const DeleteAgentActionGroupRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteAgentActionGroup, request);
        }

        /**
         * An Async wrapper for DeleteAgentActionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAgentActionGroupRequestT = Model::DeleteAgentActionGroupRequest>
        void DeleteAgentActionGroupAsync(const DeleteAgentActionGroupRequestT& request, const DeleteAgentActionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteAgentActionGroup, request, handler, context);
        }

        /**
         * <p>Deletes an Alias for a Amazon Bedrock Agent</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteAgentAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgentAliasOutcome DeleteAgentAlias(const Model::DeleteAgentAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteAgentAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAgentAliasRequestT = Model::DeleteAgentAliasRequest>
        Model::DeleteAgentAliasOutcomeCallable DeleteAgentAliasCallable(const DeleteAgentAliasRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteAgentAlias, request);
        }

        /**
         * An Async wrapper for DeleteAgentAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAgentAliasRequestT = Model::DeleteAgentAliasRequest>
        void DeleteAgentAliasAsync(const DeleteAgentAliasRequestT& request, const DeleteAgentAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteAgentAlias, request, handler, context);
        }

        /**
         * <p>Deletes an Agent version for existing Amazon Bedrock Agent</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteAgentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAgentVersionOutcome DeleteAgentVersion(const Model::DeleteAgentVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAgentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAgentVersionRequestT = Model::DeleteAgentVersionRequest>
        Model::DeleteAgentVersionOutcomeCallable DeleteAgentVersionCallable(const DeleteAgentVersionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteAgentVersion, request);
        }

        /**
         * An Async wrapper for DeleteAgentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAgentVersionRequestT = Model::DeleteAgentVersionRequest>
        void DeleteAgentVersionAsync(const DeleteAgentVersionRequestT& request, const DeleteAgentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteAgentVersion, request, handler, context);
        }

        /**
         * <p>Delete an existing data source</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataSourceOutcome DeleteDataSource(const Model::DeleteDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        Model::DeleteDataSourceOutcomeCallable DeleteDataSourceCallable(const DeleteDataSourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteDataSource, request);
        }

        /**
         * An Async wrapper for DeleteDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataSourceRequestT = Model::DeleteDataSourceRequest>
        void DeleteDataSourceAsync(const DeleteDataSourceRequestT& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteDataSource, request, handler, context);
        }

        /**
         * <p>Delete an existing knowledge base</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DeleteKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKnowledgeBaseOutcome DeleteKnowledgeBase(const Model::DeleteKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKnowledgeBaseRequestT = Model::DeleteKnowledgeBaseRequest>
        Model::DeleteKnowledgeBaseOutcomeCallable DeleteKnowledgeBaseCallable(const DeleteKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DeleteKnowledgeBase, request);
        }

        /**
         * An Async wrapper for DeleteKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKnowledgeBaseRequestT = Model::DeleteKnowledgeBaseRequest>
        void DeleteKnowledgeBaseAsync(const DeleteKnowledgeBaseRequestT& request, const DeleteKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DeleteKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Disassociate an existing Knowledge Base from an Amazon Bedrock
         * Agent</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DisassociateAgentKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAgentKnowledgeBaseOutcome DisassociateAgentKnowledgeBase(const Model::DisassociateAgentKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for DisassociateAgentKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateAgentKnowledgeBaseRequestT = Model::DisassociateAgentKnowledgeBaseRequest>
        Model::DisassociateAgentKnowledgeBaseOutcomeCallable DisassociateAgentKnowledgeBaseCallable(const DisassociateAgentKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::DisassociateAgentKnowledgeBase, request);
        }

        /**
         * An Async wrapper for DisassociateAgentKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateAgentKnowledgeBaseRequestT = Model::DisassociateAgentKnowledgeBaseRequest>
        void DisassociateAgentKnowledgeBaseAsync(const DisassociateAgentKnowledgeBaseRequestT& request, const DisassociateAgentKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::DisassociateAgentKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Gets an Agent for existing Amazon Bedrock Agent</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentOutcome GetAgent(const Model::GetAgentRequest& request) const;

        /**
         * A Callable wrapper for GetAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentRequestT = Model::GetAgentRequest>
        Model::GetAgentOutcomeCallable GetAgentCallable(const GetAgentRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetAgent, request);
        }

        /**
         * An Async wrapper for GetAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentRequestT = Model::GetAgentRequest>
        void GetAgentAsync(const GetAgentRequestT& request, const GetAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetAgent, request, handler, context);
        }

        /**
         * <p>Gets an Action Group for existing Amazon Bedrock Agent Version</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgentActionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentActionGroupOutcome GetAgentActionGroup(const Model::GetAgentActionGroupRequest& request) const;

        /**
         * A Callable wrapper for GetAgentActionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentActionGroupRequestT = Model::GetAgentActionGroupRequest>
        Model::GetAgentActionGroupOutcomeCallable GetAgentActionGroupCallable(const GetAgentActionGroupRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetAgentActionGroup, request);
        }

        /**
         * An Async wrapper for GetAgentActionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentActionGroupRequestT = Model::GetAgentActionGroupRequest>
        void GetAgentActionGroupAsync(const GetAgentActionGroupRequestT& request, const GetAgentActionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetAgentActionGroup, request, handler, context);
        }

        /**
         * <p>Describes an Alias for a Amazon Bedrock Agent</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgentAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentAliasOutcome GetAgentAlias(const Model::GetAgentAliasRequest& request) const;

        /**
         * A Callable wrapper for GetAgentAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentAliasRequestT = Model::GetAgentAliasRequest>
        Model::GetAgentAliasOutcomeCallable GetAgentAliasCallable(const GetAgentAliasRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetAgentAlias, request);
        }

        /**
         * An Async wrapper for GetAgentAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentAliasRequestT = Model::GetAgentAliasRequest>
        void GetAgentAliasAsync(const GetAgentAliasRequestT& request, const GetAgentAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetAgentAlias, request, handler, context);
        }

        /**
         * <p>Gets a knowledge base associated to an existing Amazon Bedrock Agent
         * Version</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgentKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentKnowledgeBaseOutcome GetAgentKnowledgeBase(const Model::GetAgentKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for GetAgentKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentKnowledgeBaseRequestT = Model::GetAgentKnowledgeBaseRequest>
        Model::GetAgentKnowledgeBaseOutcomeCallable GetAgentKnowledgeBaseCallable(const GetAgentKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetAgentKnowledgeBase, request);
        }

        /**
         * An Async wrapper for GetAgentKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentKnowledgeBaseRequestT = Model::GetAgentKnowledgeBaseRequest>
        void GetAgentKnowledgeBaseAsync(const GetAgentKnowledgeBaseRequestT& request, const GetAgentKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetAgentKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Gets an Agent version for existing Amazon Bedrock Agent</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetAgentVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgentVersionOutcome GetAgentVersion(const Model::GetAgentVersionRequest& request) const;

        /**
         * A Callable wrapper for GetAgentVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgentVersionRequestT = Model::GetAgentVersionRequest>
        Model::GetAgentVersionOutcomeCallable GetAgentVersionCallable(const GetAgentVersionRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetAgentVersion, request);
        }

        /**
         * An Async wrapper for GetAgentVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgentVersionRequestT = Model::GetAgentVersionRequest>
        void GetAgentVersionAsync(const GetAgentVersionRequestT& request, const GetAgentVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetAgentVersion, request, handler, context);
        }

        /**
         * <p>Get an existing data source</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataSourceOutcome GetDataSource(const Model::GetDataSourceRequest& request) const;

        /**
         * A Callable wrapper for GetDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        Model::GetDataSourceOutcomeCallable GetDataSourceCallable(const GetDataSourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetDataSource, request);
        }

        /**
         * An Async wrapper for GetDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataSourceRequestT = Model::GetDataSourceRequest>
        void GetDataSourceAsync(const GetDataSourceRequestT& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetDataSource, request, handler, context);
        }

        /**
         * <p>Get an ingestion job</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetIngestionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIngestionJobOutcome GetIngestionJob(const Model::GetIngestionJobRequest& request) const;

        /**
         * A Callable wrapper for GetIngestionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIngestionJobRequestT = Model::GetIngestionJobRequest>
        Model::GetIngestionJobOutcomeCallable GetIngestionJobCallable(const GetIngestionJobRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetIngestionJob, request);
        }

        /**
         * An Async wrapper for GetIngestionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIngestionJobRequestT = Model::GetIngestionJobRequest>
        void GetIngestionJobAsync(const GetIngestionJobRequestT& request, const GetIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetIngestionJob, request, handler, context);
        }

        /**
         * <p>Get an existing knowledge base</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/GetKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKnowledgeBaseOutcome GetKnowledgeBase(const Model::GetKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for GetKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKnowledgeBaseRequestT = Model::GetKnowledgeBaseRequest>
        Model::GetKnowledgeBaseOutcomeCallable GetKnowledgeBaseCallable(const GetKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::GetKnowledgeBase, request);
        }

        /**
         * An Async wrapper for GetKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKnowledgeBaseRequestT = Model::GetKnowledgeBaseRequest>
        void GetKnowledgeBaseAsync(const GetKnowledgeBaseRequestT& request, const GetKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::GetKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Lists an Action Group for existing Amazon Bedrock Agent Version</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgentActionGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentActionGroupsOutcome ListAgentActionGroups(const Model::ListAgentActionGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListAgentActionGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentActionGroupsRequestT = Model::ListAgentActionGroupsRequest>
        Model::ListAgentActionGroupsOutcomeCallable ListAgentActionGroupsCallable(const ListAgentActionGroupsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListAgentActionGroups, request);
        }

        /**
         * An Async wrapper for ListAgentActionGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentActionGroupsRequestT = Model::ListAgentActionGroupsRequest>
        void ListAgentActionGroupsAsync(const ListAgentActionGroupsRequestT& request, const ListAgentActionGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListAgentActionGroups, request, handler, context);
        }

        /**
         * <p>Lists all the Aliases for an Amazon Bedrock Agent</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgentAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentAliasesOutcome ListAgentAliases(const Model::ListAgentAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListAgentAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentAliasesRequestT = Model::ListAgentAliasesRequest>
        Model::ListAgentAliasesOutcomeCallable ListAgentAliasesCallable(const ListAgentAliasesRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListAgentAliases, request);
        }

        /**
         * An Async wrapper for ListAgentAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentAliasesRequestT = Model::ListAgentAliasesRequest>
        void ListAgentAliasesAsync(const ListAgentAliasesRequestT& request, const ListAgentAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListAgentAliases, request, handler, context);
        }

        /**
         * <p>List of Knowledge Bases associated to an existing Amazon Bedrock Agent
         * Version</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgentKnowledgeBases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentKnowledgeBasesOutcome ListAgentKnowledgeBases(const Model::ListAgentKnowledgeBasesRequest& request) const;

        /**
         * A Callable wrapper for ListAgentKnowledgeBases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentKnowledgeBasesRequestT = Model::ListAgentKnowledgeBasesRequest>
        Model::ListAgentKnowledgeBasesOutcomeCallable ListAgentKnowledgeBasesCallable(const ListAgentKnowledgeBasesRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListAgentKnowledgeBases, request);
        }

        /**
         * An Async wrapper for ListAgentKnowledgeBases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentKnowledgeBasesRequestT = Model::ListAgentKnowledgeBasesRequest>
        void ListAgentKnowledgeBasesAsync(const ListAgentKnowledgeBasesRequestT& request, const ListAgentKnowledgeBasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListAgentKnowledgeBases, request, handler, context);
        }

        /**
         * <p>Lists Agent Versions</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentVersionsOutcome ListAgentVersions(const Model::ListAgentVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListAgentVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentVersionsRequestT = Model::ListAgentVersionsRequest>
        Model::ListAgentVersionsOutcomeCallable ListAgentVersionsCallable(const ListAgentVersionsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListAgentVersions, request);
        }

        /**
         * An Async wrapper for ListAgentVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentVersionsRequestT = Model::ListAgentVersionsRequest>
        void ListAgentVersionsAsync(const ListAgentVersionsRequestT& request, const ListAgentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListAgentVersions, request, handler, context);
        }

        /**
         * <p>Lists Agents</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListAgents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAgentsOutcome ListAgents(const Model::ListAgentsRequest& request) const;

        /**
         * A Callable wrapper for ListAgents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAgentsRequestT = Model::ListAgentsRequest>
        Model::ListAgentsOutcomeCallable ListAgentsCallable(const ListAgentsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListAgents, request);
        }

        /**
         * An Async wrapper for ListAgents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAgentsRequestT = Model::ListAgentsRequest>
        void ListAgentsAsync(const ListAgentsRequestT& request, const ListAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListAgents, request, handler, context);
        }

        /**
         * <p>List data sources</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListDataSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataSourcesOutcome ListDataSources(const Model::ListDataSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDataSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        Model::ListDataSourcesOutcomeCallable ListDataSourcesCallable(const ListDataSourcesRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListDataSources, request);
        }

        /**
         * An Async wrapper for ListDataSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataSourcesRequestT = Model::ListDataSourcesRequest>
        void ListDataSourcesAsync(const ListDataSourcesRequestT& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListDataSources, request, handler, context);
        }

        /**
         * <p>List ingestion jobs</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListIngestionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIngestionJobsOutcome ListIngestionJobs(const Model::ListIngestionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListIngestionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIngestionJobsRequestT = Model::ListIngestionJobsRequest>
        Model::ListIngestionJobsOutcomeCallable ListIngestionJobsCallable(const ListIngestionJobsRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListIngestionJobs, request);
        }

        /**
         * An Async wrapper for ListIngestionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIngestionJobsRequestT = Model::ListIngestionJobsRequest>
        void ListIngestionJobsAsync(const ListIngestionJobsRequestT& request, const ListIngestionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListIngestionJobs, request, handler, context);
        }

        /**
         * <p>List Knowledge Bases</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListKnowledgeBases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKnowledgeBasesOutcome ListKnowledgeBases(const Model::ListKnowledgeBasesRequest& request) const;

        /**
         * A Callable wrapper for ListKnowledgeBases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListKnowledgeBasesRequestT = Model::ListKnowledgeBasesRequest>
        Model::ListKnowledgeBasesOutcomeCallable ListKnowledgeBasesCallable(const ListKnowledgeBasesRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListKnowledgeBases, request);
        }

        /**
         * An Async wrapper for ListKnowledgeBases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListKnowledgeBasesRequestT = Model::ListKnowledgeBasesRequest>
        void ListKnowledgeBasesAsync(const ListKnowledgeBasesRequestT& request, const ListKnowledgeBasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListKnowledgeBases, request, handler, context);
        }

        /**
         * <p>List tags for a resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Prepares an existing Amazon Bedrock Agent to receive runtime
         * requests</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/PrepareAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::PrepareAgentOutcome PrepareAgent(const Model::PrepareAgentRequest& request) const;

        /**
         * A Callable wrapper for PrepareAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PrepareAgentRequestT = Model::PrepareAgentRequest>
        Model::PrepareAgentOutcomeCallable PrepareAgentCallable(const PrepareAgentRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::PrepareAgent, request);
        }

        /**
         * An Async wrapper for PrepareAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PrepareAgentRequestT = Model::PrepareAgentRequest>
        void PrepareAgentAsync(const PrepareAgentRequestT& request, const PrepareAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::PrepareAgent, request, handler, context);
        }

        /**
         * <p>Start a new ingestion job</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/StartIngestionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartIngestionJobOutcome StartIngestionJob(const Model::StartIngestionJobRequest& request) const;

        /**
         * A Callable wrapper for StartIngestionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartIngestionJobRequestT = Model::StartIngestionJobRequest>
        Model::StartIngestionJobOutcomeCallable StartIngestionJobCallable(const StartIngestionJobRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::StartIngestionJob, request);
        }

        /**
         * An Async wrapper for StartIngestionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartIngestionJobRequestT = Model::StartIngestionJobRequest>
        void StartIngestionJobAsync(const StartIngestionJobRequestT& request, const StartIngestionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::StartIngestionJob, request, handler, context);
        }

        /**
         * <p>Tag a resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::TagResource, request, handler, context);
        }

        /**
         * <p>Untag a resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing Amazon Bedrock Agent</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateAgent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentOutcome UpdateAgent(const Model::UpdateAgentRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentRequestT = Model::UpdateAgentRequest>
        Model::UpdateAgentOutcomeCallable UpdateAgentCallable(const UpdateAgentRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateAgent, request);
        }

        /**
         * An Async wrapper for UpdateAgent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentRequestT = Model::UpdateAgentRequest>
        void UpdateAgentAsync(const UpdateAgentRequestT& request, const UpdateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateAgent, request, handler, context);
        }

        /**
         * <p>Updates an existing Action Group for Amazon Bedrock Agent</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateAgentActionGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentActionGroupOutcome UpdateAgentActionGroup(const Model::UpdateAgentActionGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgentActionGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentActionGroupRequestT = Model::UpdateAgentActionGroupRequest>
        Model::UpdateAgentActionGroupOutcomeCallable UpdateAgentActionGroupCallable(const UpdateAgentActionGroupRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateAgentActionGroup, request);
        }

        /**
         * An Async wrapper for UpdateAgentActionGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentActionGroupRequestT = Model::UpdateAgentActionGroupRequest>
        void UpdateAgentActionGroupAsync(const UpdateAgentActionGroupRequestT& request, const UpdateAgentActionGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateAgentActionGroup, request, handler, context);
        }

        /**
         * <p>Updates an existing Alias for an Amazon Bedrock Agent</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateAgentAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentAliasOutcome UpdateAgentAlias(const Model::UpdateAgentAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgentAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentAliasRequestT = Model::UpdateAgentAliasRequest>
        Model::UpdateAgentAliasOutcomeCallable UpdateAgentAliasCallable(const UpdateAgentAliasRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateAgentAlias, request);
        }

        /**
         * An Async wrapper for UpdateAgentAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentAliasRequestT = Model::UpdateAgentAliasRequest>
        void UpdateAgentAliasAsync(const UpdateAgentAliasRequestT& request, const UpdateAgentAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateAgentAlias, request, handler, context);
        }

        /**
         * <p>Updates an existing Knowledge Base associated to an Amazon Bedrock
         * Agent</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateAgentKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAgentKnowledgeBaseOutcome UpdateAgentKnowledgeBase(const Model::UpdateAgentKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateAgentKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAgentKnowledgeBaseRequestT = Model::UpdateAgentKnowledgeBaseRequest>
        Model::UpdateAgentKnowledgeBaseOutcomeCallable UpdateAgentKnowledgeBaseCallable(const UpdateAgentKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateAgentKnowledgeBase, request);
        }

        /**
         * An Async wrapper for UpdateAgentKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAgentKnowledgeBaseRequestT = Model::UpdateAgentKnowledgeBaseRequest>
        void UpdateAgentKnowledgeBaseAsync(const UpdateAgentKnowledgeBaseRequestT& request, const UpdateAgentKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateAgentKnowledgeBase, request, handler, context);
        }

        /**
         * <p>Update an existing data source</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataSourceOutcome UpdateDataSource(const Model::UpdateDataSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        Model::UpdateDataSourceOutcomeCallable UpdateDataSourceCallable(const UpdateDataSourceRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateDataSource, request);
        }

        /**
         * An Async wrapper for UpdateDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataSourceRequestT = Model::UpdateDataSourceRequest>
        void UpdateDataSourceAsync(const UpdateDataSourceRequestT& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateDataSource, request, handler, context);
        }

        /**
         * <p>Update an existing knowledge base</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UpdateKnowledgeBase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKnowledgeBaseOutcome UpdateKnowledgeBase(const Model::UpdateKnowledgeBaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateKnowledgeBase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateKnowledgeBaseRequestT = Model::UpdateKnowledgeBaseRequest>
        Model::UpdateKnowledgeBaseOutcomeCallable UpdateKnowledgeBaseCallable(const UpdateKnowledgeBaseRequestT& request) const
        {
            return SubmitCallable(&BedrockAgentClient::UpdateKnowledgeBase, request);
        }

        /**
         * An Async wrapper for UpdateKnowledgeBase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateKnowledgeBaseRequestT = Model::UpdateKnowledgeBaseRequest>
        void UpdateKnowledgeBaseAsync(const UpdateKnowledgeBaseRequestT& request, const UpdateKnowledgeBaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BedrockAgentClient::UpdateKnowledgeBase, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BedrockAgentEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentClient>;
      void init(const BedrockAgentClientConfiguration& clientConfiguration);

      BedrockAgentClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BedrockAgentEndpointProviderBase> m_endpointProvider;
  };

} // namespace BedrockAgent
} // namespace Aws
