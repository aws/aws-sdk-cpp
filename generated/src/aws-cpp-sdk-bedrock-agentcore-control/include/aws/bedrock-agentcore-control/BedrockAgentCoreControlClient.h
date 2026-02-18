/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlPaginationBase.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlServiceClientModel.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace BedrockAgentCoreControl {
/**
 * <p>Welcome to the Amazon Bedrock AgentCore Control plane API reference. Control
 * plane actions configure, create, modify, and monitor Amazon Web Services
 * resources.</p>
 */
class AWS_BEDROCKAGENTCORECONTROL_API BedrockAgentCoreControlClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentCoreControlClient>,
      public BedrockAgentCoreControlPaginationBase<BedrockAgentCoreControlClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef BedrockAgentCoreControlClientConfiguration ClientConfigurationType;
  typedef BedrockAgentCoreControlEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  BedrockAgentCoreControlClient(const Aws::BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration& clientConfiguration =
                                    Aws::BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration(),
                                std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  BedrockAgentCoreControlClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration& clientConfiguration =
                                    Aws::BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  BedrockAgentCoreControlClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration& clientConfiguration =
                                    Aws::BedrockAgentCoreControl::BedrockAgentCoreControlClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  BedrockAgentCoreControlClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  BedrockAgentCoreControlClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  BedrockAgentCoreControlClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~BedrockAgentCoreControlClient();

  /**
   * <p>Creates an Amazon Bedrock AgentCore Runtime.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateAgentRuntime">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAgentRuntimeOutcome CreateAgentRuntime(const Model::CreateAgentRuntimeRequest& request) const;

  /**
   * A Callable wrapper for CreateAgentRuntime that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateAgentRuntimeRequestT = Model::CreateAgentRuntimeRequest>
  Model::CreateAgentRuntimeOutcomeCallable CreateAgentRuntimeCallable(const CreateAgentRuntimeRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreateAgentRuntime, request);
  }

  /**
   * An Async wrapper for CreateAgentRuntime that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateAgentRuntimeRequestT = Model::CreateAgentRuntimeRequest>
  void CreateAgentRuntimeAsync(const CreateAgentRuntimeRequestT& request, const CreateAgentRuntimeResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreateAgentRuntime, request, handler, context);
  }

  /**
   * <p>Creates an AgentCore Runtime endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateAgentRuntimeEndpoint">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAgentRuntimeEndpointOutcome CreateAgentRuntimeEndpoint(
      const Model::CreateAgentRuntimeEndpointRequest& request) const;

  /**
   * A Callable wrapper for CreateAgentRuntimeEndpoint that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateAgentRuntimeEndpointRequestT = Model::CreateAgentRuntimeEndpointRequest>
  Model::CreateAgentRuntimeEndpointOutcomeCallable CreateAgentRuntimeEndpointCallable(
      const CreateAgentRuntimeEndpointRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreateAgentRuntimeEndpoint, request);
  }

  /**
   * An Async wrapper for CreateAgentRuntimeEndpoint that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateAgentRuntimeEndpointRequestT = Model::CreateAgentRuntimeEndpointRequest>
  void CreateAgentRuntimeEndpointAsync(const CreateAgentRuntimeEndpointRequestT& request,
                                       const CreateAgentRuntimeEndpointResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreateAgentRuntimeEndpoint, request, handler, context);
  }

  /**
   * <p>Creates a new API key credential provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateApiKeyCredentialProvider">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateApiKeyCredentialProviderOutcome CreateApiKeyCredentialProvider(
      const Model::CreateApiKeyCredentialProviderRequest& request) const;

  /**
   * A Callable wrapper for CreateApiKeyCredentialProvider that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateApiKeyCredentialProviderRequestT = Model::CreateApiKeyCredentialProviderRequest>
  Model::CreateApiKeyCredentialProviderOutcomeCallable CreateApiKeyCredentialProviderCallable(
      const CreateApiKeyCredentialProviderRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreateApiKeyCredentialProvider, request);
  }

  /**
   * An Async wrapper for CreateApiKeyCredentialProvider that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateApiKeyCredentialProviderRequestT = Model::CreateApiKeyCredentialProviderRequest>
  void CreateApiKeyCredentialProviderAsync(const CreateApiKeyCredentialProviderRequestT& request,
                                           const CreateApiKeyCredentialProviderResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreateApiKeyCredentialProvider, request, handler, context);
  }

  /**
   * <p>Creates a custom browser.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateBrowser">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateBrowserOutcome CreateBrowser(const Model::CreateBrowserRequest& request) const;

  /**
   * A Callable wrapper for CreateBrowser that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateBrowserRequestT = Model::CreateBrowserRequest>
  Model::CreateBrowserOutcomeCallable CreateBrowserCallable(const CreateBrowserRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreateBrowser, request);
  }

  /**
   * An Async wrapper for CreateBrowser that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateBrowserRequestT = Model::CreateBrowserRequest>
  void CreateBrowserAsync(const CreateBrowserRequestT& request, const CreateBrowserResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreateBrowser, request, handler, context);
  }

  /**
   * <p>Creates a browser profile in Amazon Bedrock AgentCore. A browser profile
   * stores persistent browser data such as cookies, local storage, session storage,
   * and browsing history that can be saved from browser sessions and reused in
   * subsequent sessions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateBrowserProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateBrowserProfileOutcome CreateBrowserProfile(const Model::CreateBrowserProfileRequest& request) const;

  /**
   * A Callable wrapper for CreateBrowserProfile that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateBrowserProfileRequestT = Model::CreateBrowserProfileRequest>
  Model::CreateBrowserProfileOutcomeCallable CreateBrowserProfileCallable(const CreateBrowserProfileRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreateBrowserProfile, request);
  }

  /**
   * An Async wrapper for CreateBrowserProfile that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateBrowserProfileRequestT = Model::CreateBrowserProfileRequest>
  void CreateBrowserProfileAsync(const CreateBrowserProfileRequestT& request, const CreateBrowserProfileResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreateBrowserProfile, request, handler, context);
  }

  /**
   * <p>Creates a custom code interpreter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateCodeInterpreter">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateCodeInterpreterOutcome CreateCodeInterpreter(const Model::CreateCodeInterpreterRequest& request) const;

  /**
   * A Callable wrapper for CreateCodeInterpreter that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateCodeInterpreterRequestT = Model::CreateCodeInterpreterRequest>
  Model::CreateCodeInterpreterOutcomeCallable CreateCodeInterpreterCallable(const CreateCodeInterpreterRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreateCodeInterpreter, request);
  }

  /**
   * An Async wrapper for CreateCodeInterpreter that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateCodeInterpreterRequestT = Model::CreateCodeInterpreterRequest>
  void CreateCodeInterpreterAsync(const CreateCodeInterpreterRequestT& request, const CreateCodeInterpreterResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreateCodeInterpreter, request, handler, context);
  }

  /**
   * <p> Creates a custom evaluator for agent quality assessment. Custom evaluators
   * use LLM-as-a-Judge configurations with user-defined prompts, rating scales, and
   * model settings to evaluate agent performance at tool call, trace, or session
   * levels. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateEvaluator">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateEvaluatorOutcome CreateEvaluator(const Model::CreateEvaluatorRequest& request) const;

  /**
   * A Callable wrapper for CreateEvaluator that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateEvaluatorRequestT = Model::CreateEvaluatorRequest>
  Model::CreateEvaluatorOutcomeCallable CreateEvaluatorCallable(const CreateEvaluatorRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreateEvaluator, request);
  }

  /**
   * An Async wrapper for CreateEvaluator that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateEvaluatorRequestT = Model::CreateEvaluatorRequest>
  void CreateEvaluatorAsync(const CreateEvaluatorRequestT& request, const CreateEvaluatorResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreateEvaluator, request, handler, context);
  }

  /**
   * <p>Creates a gateway for Amazon Bedrock Agent. A gateway serves as an
   * integration point between your agent and external services.</p> <p>If you
   * specify <code>CUSTOM_JWT</code> as the <code>authorizerType</code>, you must
   * provide an <code>authorizerConfiguration</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateGatewayOutcome CreateGateway(const Model::CreateGatewayRequest& request) const;

  /**
   * A Callable wrapper for CreateGateway that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateGatewayRequestT = Model::CreateGatewayRequest>
  Model::CreateGatewayOutcomeCallable CreateGatewayCallable(const CreateGatewayRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreateGateway, request);
  }

  /**
   * An Async wrapper for CreateGateway that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateGatewayRequestT = Model::CreateGatewayRequest>
  void CreateGatewayAsync(const CreateGatewayRequestT& request, const CreateGatewayResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreateGateway, request, handler, context);
  }

  /**
   * <p>Creates a target for a gateway. A target defines an endpoint that the gateway
   * can connect to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateGatewayTarget">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateGatewayTargetOutcome CreateGatewayTarget(const Model::CreateGatewayTargetRequest& request) const;

  /**
   * A Callable wrapper for CreateGatewayTarget that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateGatewayTargetRequestT = Model::CreateGatewayTargetRequest>
  Model::CreateGatewayTargetOutcomeCallable CreateGatewayTargetCallable(const CreateGatewayTargetRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreateGatewayTarget, request);
  }

  /**
   * An Async wrapper for CreateGatewayTarget that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateGatewayTargetRequestT = Model::CreateGatewayTargetRequest>
  void CreateGatewayTargetAsync(const CreateGatewayTargetRequestT& request, const CreateGatewayTargetResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreateGatewayTarget, request, handler, context);
  }

  /**
   * <p>Creates a new Amazon Bedrock AgentCore Memory resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateMemory">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateMemoryOutcome CreateMemory(const Model::CreateMemoryRequest& request) const;

  /**
   * A Callable wrapper for CreateMemory that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateMemoryRequestT = Model::CreateMemoryRequest>
  Model::CreateMemoryOutcomeCallable CreateMemoryCallable(const CreateMemoryRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreateMemory, request);
  }

  /**
   * An Async wrapper for CreateMemory that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateMemoryRequestT = Model::CreateMemoryRequest>
  void CreateMemoryAsync(const CreateMemoryRequestT& request, const CreateMemoryResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreateMemory, request, handler, context);
  }

  /**
   * <p>Creates a new OAuth2 credential provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateOauth2CredentialProvider">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateOauth2CredentialProviderOutcome CreateOauth2CredentialProvider(
      const Model::CreateOauth2CredentialProviderRequest& request) const;

  /**
   * A Callable wrapper for CreateOauth2CredentialProvider that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateOauth2CredentialProviderRequestT = Model::CreateOauth2CredentialProviderRequest>
  Model::CreateOauth2CredentialProviderOutcomeCallable CreateOauth2CredentialProviderCallable(
      const CreateOauth2CredentialProviderRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreateOauth2CredentialProvider, request);
  }

  /**
   * An Async wrapper for CreateOauth2CredentialProvider that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateOauth2CredentialProviderRequestT = Model::CreateOauth2CredentialProviderRequest>
  void CreateOauth2CredentialProviderAsync(const CreateOauth2CredentialProviderRequestT& request,
                                           const CreateOauth2CredentialProviderResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreateOauth2CredentialProvider, request, handler, context);
  }

  /**
   * <p> Creates an online evaluation configuration for continuous monitoring of
   * agent performance. Online evaluation automatically samples live traffic from
   * CloudWatch logs at specified rates and applies evaluators to assess agent
   * quality in production. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateOnlineEvaluationConfig">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateOnlineEvaluationConfigOutcome CreateOnlineEvaluationConfig(
      const Model::CreateOnlineEvaluationConfigRequest& request) const;

  /**
   * A Callable wrapper for CreateOnlineEvaluationConfig that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateOnlineEvaluationConfigRequestT = Model::CreateOnlineEvaluationConfigRequest>
  Model::CreateOnlineEvaluationConfigOutcomeCallable CreateOnlineEvaluationConfigCallable(
      const CreateOnlineEvaluationConfigRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreateOnlineEvaluationConfig, request);
  }

  /**
   * An Async wrapper for CreateOnlineEvaluationConfig that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateOnlineEvaluationConfigRequestT = Model::CreateOnlineEvaluationConfigRequest>
  void CreateOnlineEvaluationConfigAsync(const CreateOnlineEvaluationConfigRequestT& request,
                                         const CreateOnlineEvaluationConfigResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreateOnlineEvaluationConfig, request, handler, context);
  }

  /**
   * <p>Creates a policy within the AgentCore Policy system. Policies provide
   * real-time, deterministic control over agentic interactions with AgentCore
   * Gateway. Using the Cedar policy language, you can define fine-grained policies
   * that specify which interactions with Gateway tools are permitted based on input
   * parameters and OAuth claims, ensuring agents operate within defined boundaries
   * and business rules. The policy is validated during creation against the Cedar
   * schema generated from the Gateway's tools' input schemas, which defines the
   * available tools, their parameters, and expected data types. This is an
   * asynchronous operation. Use the <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore-control/latest/APIReference/API_GetPolicy.html">GetPolicy</a>
   * operation to poll the <code>status</code> field to track
   * completion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreatePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

  /**
   * A Callable wrapper for CreatePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreatePolicyRequestT = Model::CreatePolicyRequest>
  Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const CreatePolicyRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreatePolicy, request);
  }

  /**
   * An Async wrapper for CreatePolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreatePolicyRequestT = Model::CreatePolicyRequest>
  void CreatePolicyAsync(const CreatePolicyRequestT& request, const CreatePolicyResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreatePolicy, request, handler, context);
  }

  /**
   * <p>Creates a new policy engine within the AgentCore Policy system. A policy
   * engine is a collection of policies that evaluates and authorizes agent tool
   * calls. When associated with Gateways (each Gateway can be associated with at
   * most one policy engine, but multiple Gateways can be associated with the same
   * engine), the policy engine intercepts all agent requests and determines whether
   * to allow or deny each action based on the defined policies. This is an
   * asynchronous operation. Use the <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore-control/latest/APIReference/API_GetPolicyEngine.html">GetPolicyEngine</a>
   * operation to poll the <code>status</code> field to track
   * completion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreatePolicyEngine">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePolicyEngineOutcome CreatePolicyEngine(const Model::CreatePolicyEngineRequest& request) const;

  /**
   * A Callable wrapper for CreatePolicyEngine that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreatePolicyEngineRequestT = Model::CreatePolicyEngineRequest>
  Model::CreatePolicyEngineOutcomeCallable CreatePolicyEngineCallable(const CreatePolicyEngineRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreatePolicyEngine, request);
  }

  /**
   * An Async wrapper for CreatePolicyEngine that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreatePolicyEngineRequestT = Model::CreatePolicyEngineRequest>
  void CreatePolicyEngineAsync(const CreatePolicyEngineRequestT& request, const CreatePolicyEngineResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreatePolicyEngine, request, handler, context);
  }

  /**
   * <p>Creates a new workload identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CreateWorkloadIdentity">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWorkloadIdentityOutcome CreateWorkloadIdentity(const Model::CreateWorkloadIdentityRequest& request) const;

  /**
   * A Callable wrapper for CreateWorkloadIdentity that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateWorkloadIdentityRequestT = Model::CreateWorkloadIdentityRequest>
  Model::CreateWorkloadIdentityOutcomeCallable CreateWorkloadIdentityCallable(const CreateWorkloadIdentityRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::CreateWorkloadIdentity, request);
  }

  /**
   * An Async wrapper for CreateWorkloadIdentity that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateWorkloadIdentityRequestT = Model::CreateWorkloadIdentityRequest>
  void CreateWorkloadIdentityAsync(const CreateWorkloadIdentityRequestT& request,
                                   const CreateWorkloadIdentityResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::CreateWorkloadIdentity, request, handler, context);
  }

  /**
   * <p>Deletes an Amazon Bedrock AgentCore Runtime.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteAgentRuntime">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAgentRuntimeOutcome DeleteAgentRuntime(const Model::DeleteAgentRuntimeRequest& request) const;

  /**
   * A Callable wrapper for DeleteAgentRuntime that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteAgentRuntimeRequestT = Model::DeleteAgentRuntimeRequest>
  Model::DeleteAgentRuntimeOutcomeCallable DeleteAgentRuntimeCallable(const DeleteAgentRuntimeRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteAgentRuntime, request);
  }

  /**
   * An Async wrapper for DeleteAgentRuntime that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteAgentRuntimeRequestT = Model::DeleteAgentRuntimeRequest>
  void DeleteAgentRuntimeAsync(const DeleteAgentRuntimeRequestT& request, const DeleteAgentRuntimeResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteAgentRuntime, request, handler, context);
  }

  /**
   * <p>Deletes an AAgentCore Runtime endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteAgentRuntimeEndpoint">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAgentRuntimeEndpointOutcome DeleteAgentRuntimeEndpoint(
      const Model::DeleteAgentRuntimeEndpointRequest& request) const;

  /**
   * A Callable wrapper for DeleteAgentRuntimeEndpoint that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteAgentRuntimeEndpointRequestT = Model::DeleteAgentRuntimeEndpointRequest>
  Model::DeleteAgentRuntimeEndpointOutcomeCallable DeleteAgentRuntimeEndpointCallable(
      const DeleteAgentRuntimeEndpointRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteAgentRuntimeEndpoint, request);
  }

  /**
   * An Async wrapper for DeleteAgentRuntimeEndpoint that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteAgentRuntimeEndpointRequestT = Model::DeleteAgentRuntimeEndpointRequest>
  void DeleteAgentRuntimeEndpointAsync(const DeleteAgentRuntimeEndpointRequestT& request,
                                       const DeleteAgentRuntimeEndpointResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteAgentRuntimeEndpoint, request, handler, context);
  }

  /**
   * <p>Deletes an API key credential provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteApiKeyCredentialProvider">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteApiKeyCredentialProviderOutcome DeleteApiKeyCredentialProvider(
      const Model::DeleteApiKeyCredentialProviderRequest& request) const;

  /**
   * A Callable wrapper for DeleteApiKeyCredentialProvider that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteApiKeyCredentialProviderRequestT = Model::DeleteApiKeyCredentialProviderRequest>
  Model::DeleteApiKeyCredentialProviderOutcomeCallable DeleteApiKeyCredentialProviderCallable(
      const DeleteApiKeyCredentialProviderRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteApiKeyCredentialProvider, request);
  }

  /**
   * An Async wrapper for DeleteApiKeyCredentialProvider that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteApiKeyCredentialProviderRequestT = Model::DeleteApiKeyCredentialProviderRequest>
  void DeleteApiKeyCredentialProviderAsync(const DeleteApiKeyCredentialProviderRequestT& request,
                                           const DeleteApiKeyCredentialProviderResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteApiKeyCredentialProvider, request, handler, context);
  }

  /**
   * <p>Deletes a custom browser.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteBrowser">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteBrowserOutcome DeleteBrowser(const Model::DeleteBrowserRequest& request) const;

  /**
   * A Callable wrapper for DeleteBrowser that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteBrowserRequestT = Model::DeleteBrowserRequest>
  Model::DeleteBrowserOutcomeCallable DeleteBrowserCallable(const DeleteBrowserRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteBrowser, request);
  }

  /**
   * An Async wrapper for DeleteBrowser that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteBrowserRequestT = Model::DeleteBrowserRequest>
  void DeleteBrowserAsync(const DeleteBrowserRequestT& request, const DeleteBrowserResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteBrowser, request, handler, context);
  }

  /**
   * <p>Deletes a browser profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteBrowserProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteBrowserProfileOutcome DeleteBrowserProfile(const Model::DeleteBrowserProfileRequest& request) const;

  /**
   * A Callable wrapper for DeleteBrowserProfile that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteBrowserProfileRequestT = Model::DeleteBrowserProfileRequest>
  Model::DeleteBrowserProfileOutcomeCallable DeleteBrowserProfileCallable(const DeleteBrowserProfileRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteBrowserProfile, request);
  }

  /**
   * An Async wrapper for DeleteBrowserProfile that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteBrowserProfileRequestT = Model::DeleteBrowserProfileRequest>
  void DeleteBrowserProfileAsync(const DeleteBrowserProfileRequestT& request, const DeleteBrowserProfileResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteBrowserProfile, request, handler, context);
  }

  /**
   * <p>Deletes a custom code interpreter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteCodeInterpreter">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteCodeInterpreterOutcome DeleteCodeInterpreter(const Model::DeleteCodeInterpreterRequest& request) const;

  /**
   * A Callable wrapper for DeleteCodeInterpreter that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteCodeInterpreterRequestT = Model::DeleteCodeInterpreterRequest>
  Model::DeleteCodeInterpreterOutcomeCallable DeleteCodeInterpreterCallable(const DeleteCodeInterpreterRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteCodeInterpreter, request);
  }

  /**
   * An Async wrapper for DeleteCodeInterpreter that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteCodeInterpreterRequestT = Model::DeleteCodeInterpreterRequest>
  void DeleteCodeInterpreterAsync(const DeleteCodeInterpreterRequestT& request, const DeleteCodeInterpreterResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteCodeInterpreter, request, handler, context);
  }

  /**
   * <p> Deletes a custom evaluator. Builtin evaluators cannot be deleted. The
   * evaluator must not be referenced by any active online evaluation configurations.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteEvaluator">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteEvaluatorOutcome DeleteEvaluator(const Model::DeleteEvaluatorRequest& request) const;

  /**
   * A Callable wrapper for DeleteEvaluator that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteEvaluatorRequestT = Model::DeleteEvaluatorRequest>
  Model::DeleteEvaluatorOutcomeCallable DeleteEvaluatorCallable(const DeleteEvaluatorRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteEvaluator, request);
  }

  /**
   * An Async wrapper for DeleteEvaluator that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteEvaluatorRequestT = Model::DeleteEvaluatorRequest>
  void DeleteEvaluatorAsync(const DeleteEvaluatorRequestT& request, const DeleteEvaluatorResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteEvaluator, request, handler, context);
  }

  /**
   * <p>Deletes a gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteGatewayOutcome DeleteGateway(const Model::DeleteGatewayRequest& request) const;

  /**
   * A Callable wrapper for DeleteGateway that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteGatewayRequestT = Model::DeleteGatewayRequest>
  Model::DeleteGatewayOutcomeCallable DeleteGatewayCallable(const DeleteGatewayRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteGateway, request);
  }

  /**
   * An Async wrapper for DeleteGateway that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteGatewayRequestT = Model::DeleteGatewayRequest>
  void DeleteGatewayAsync(const DeleteGatewayRequestT& request, const DeleteGatewayResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteGateway, request, handler, context);
  }

  /**
   * <p>Deletes a gateway target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteGatewayTarget">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteGatewayTargetOutcome DeleteGatewayTarget(const Model::DeleteGatewayTargetRequest& request) const;

  /**
   * A Callable wrapper for DeleteGatewayTarget that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteGatewayTargetRequestT = Model::DeleteGatewayTargetRequest>
  Model::DeleteGatewayTargetOutcomeCallable DeleteGatewayTargetCallable(const DeleteGatewayTargetRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteGatewayTarget, request);
  }

  /**
   * An Async wrapper for DeleteGatewayTarget that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteGatewayTargetRequestT = Model::DeleteGatewayTargetRequest>
  void DeleteGatewayTargetAsync(const DeleteGatewayTargetRequestT& request, const DeleteGatewayTargetResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteGatewayTarget, request, handler, context);
  }

  /**
   * <p>Deletes an Amazon Bedrock AgentCore Memory resource.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteMemory">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteMemoryOutcome DeleteMemory(const Model::DeleteMemoryRequest& request) const;

  /**
   * A Callable wrapper for DeleteMemory that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteMemoryRequestT = Model::DeleteMemoryRequest>
  Model::DeleteMemoryOutcomeCallable DeleteMemoryCallable(const DeleteMemoryRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteMemory, request);
  }

  /**
   * An Async wrapper for DeleteMemory that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteMemoryRequestT = Model::DeleteMemoryRequest>
  void DeleteMemoryAsync(const DeleteMemoryRequestT& request, const DeleteMemoryResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteMemory, request, handler, context);
  }

  /**
   * <p>Deletes an OAuth2 credential provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteOauth2CredentialProvider">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteOauth2CredentialProviderOutcome DeleteOauth2CredentialProvider(
      const Model::DeleteOauth2CredentialProviderRequest& request) const;

  /**
   * A Callable wrapper for DeleteOauth2CredentialProvider that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteOauth2CredentialProviderRequestT = Model::DeleteOauth2CredentialProviderRequest>
  Model::DeleteOauth2CredentialProviderOutcomeCallable DeleteOauth2CredentialProviderCallable(
      const DeleteOauth2CredentialProviderRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteOauth2CredentialProvider, request);
  }

  /**
   * An Async wrapper for DeleteOauth2CredentialProvider that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteOauth2CredentialProviderRequestT = Model::DeleteOauth2CredentialProviderRequest>
  void DeleteOauth2CredentialProviderAsync(const DeleteOauth2CredentialProviderRequestT& request,
                                           const DeleteOauth2CredentialProviderResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteOauth2CredentialProvider, request, handler, context);
  }

  /**
   * <p> Deletes an online evaluation configuration and stops any ongoing evaluation
   * processes associated with it. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteOnlineEvaluationConfig">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteOnlineEvaluationConfigOutcome DeleteOnlineEvaluationConfig(
      const Model::DeleteOnlineEvaluationConfigRequest& request) const;

  /**
   * A Callable wrapper for DeleteOnlineEvaluationConfig that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteOnlineEvaluationConfigRequestT = Model::DeleteOnlineEvaluationConfigRequest>
  Model::DeleteOnlineEvaluationConfigOutcomeCallable DeleteOnlineEvaluationConfigCallable(
      const DeleteOnlineEvaluationConfigRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteOnlineEvaluationConfig, request);
  }

  /**
   * An Async wrapper for DeleteOnlineEvaluationConfig that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteOnlineEvaluationConfigRequestT = Model::DeleteOnlineEvaluationConfigRequest>
  void DeleteOnlineEvaluationConfigAsync(const DeleteOnlineEvaluationConfigRequestT& request,
                                         const DeleteOnlineEvaluationConfigResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteOnlineEvaluationConfig, request, handler, context);
  }

  /**
   * <p>Deletes an existing policy from the AgentCore Policy system. Once deleted,
   * the policy can no longer be used for agent behavior control and all references
   * to it become invalid. This is an asynchronous operation. Use the
   * <code>GetPolicy</code> operation to poll the <code>status</code> field to track
   * completion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeletePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

  /**
   * A Callable wrapper for DeletePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeletePolicyRequestT = Model::DeletePolicyRequest>
  Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const DeletePolicyRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeletePolicy, request);
  }

  /**
   * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeletePolicyRequestT = Model::DeletePolicyRequest>
  void DeletePolicyAsync(const DeletePolicyRequestT& request, const DeletePolicyResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeletePolicy, request, handler, context);
  }

  /**
   * <p>Deletes an existing policy engine from the AgentCore Policy system. The
   * policy engine must not have any associated policies before deletion. Once
   * deleted, the policy engine and all its configurations become unavailable for
   * policy management and evaluation. This is an asynchronous operation. Use the
   * <code>GetPolicyEngine</code> operation to poll the <code>status</code> field to
   * track completion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeletePolicyEngine">AWS
   * API Reference</a></p>
   */
  virtual Model::DeletePolicyEngineOutcome DeletePolicyEngine(const Model::DeletePolicyEngineRequest& request) const;

  /**
   * A Callable wrapper for DeletePolicyEngine that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeletePolicyEngineRequestT = Model::DeletePolicyEngineRequest>
  Model::DeletePolicyEngineOutcomeCallable DeletePolicyEngineCallable(const DeletePolicyEngineRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeletePolicyEngine, request);
  }

  /**
   * An Async wrapper for DeletePolicyEngine that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeletePolicyEngineRequestT = Model::DeletePolicyEngineRequest>
  void DeletePolicyEngineAsync(const DeletePolicyEngineRequestT& request, const DeletePolicyEngineResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeletePolicyEngine, request, handler, context);
  }

  /**
   * <p>Deletes the resource-based policy for a specified resource.</p>
   * <p>This feature is currently available only for AgentCore Runtime and
   * Gateway.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

  /**
   * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
  Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteResourcePolicy, request);
  }

  /**
   * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
  void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteResourcePolicy, request, handler, context);
  }

  /**
   * <p>Deletes a workload identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DeleteWorkloadIdentity">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWorkloadIdentityOutcome DeleteWorkloadIdentity(const Model::DeleteWorkloadIdentityRequest& request) const;

  /**
   * A Callable wrapper for DeleteWorkloadIdentity that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteWorkloadIdentityRequestT = Model::DeleteWorkloadIdentityRequest>
  Model::DeleteWorkloadIdentityOutcomeCallable DeleteWorkloadIdentityCallable(const DeleteWorkloadIdentityRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::DeleteWorkloadIdentity, request);
  }

  /**
   * An Async wrapper for DeleteWorkloadIdentity that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteWorkloadIdentityRequestT = Model::DeleteWorkloadIdentityRequest>
  void DeleteWorkloadIdentityAsync(const DeleteWorkloadIdentityRequestT& request,
                                   const DeleteWorkloadIdentityResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::DeleteWorkloadIdentity, request, handler, context);
  }

  /**
   * <p>Gets an Amazon Bedrock AgentCore Runtime.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetAgentRuntime">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAgentRuntimeOutcome GetAgentRuntime(const Model::GetAgentRuntimeRequest& request) const;

  /**
   * A Callable wrapper for GetAgentRuntime that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetAgentRuntimeRequestT = Model::GetAgentRuntimeRequest>
  Model::GetAgentRuntimeOutcomeCallable GetAgentRuntimeCallable(const GetAgentRuntimeRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetAgentRuntime, request);
  }

  /**
   * An Async wrapper for GetAgentRuntime that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetAgentRuntimeRequestT = Model::GetAgentRuntimeRequest>
  void GetAgentRuntimeAsync(const GetAgentRuntimeRequestT& request, const GetAgentRuntimeResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetAgentRuntime, request, handler, context);
  }

  /**
   * <p>Gets information about an Amazon Secure AgentEndpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetAgentRuntimeEndpoint">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAgentRuntimeEndpointOutcome GetAgentRuntimeEndpoint(const Model::GetAgentRuntimeEndpointRequest& request) const;

  /**
   * A Callable wrapper for GetAgentRuntimeEndpoint that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAgentRuntimeEndpointRequestT = Model::GetAgentRuntimeEndpointRequest>
  Model::GetAgentRuntimeEndpointOutcomeCallable GetAgentRuntimeEndpointCallable(const GetAgentRuntimeEndpointRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetAgentRuntimeEndpoint, request);
  }

  /**
   * An Async wrapper for GetAgentRuntimeEndpoint that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetAgentRuntimeEndpointRequestT = Model::GetAgentRuntimeEndpointRequest>
  void GetAgentRuntimeEndpointAsync(const GetAgentRuntimeEndpointRequestT& request,
                                    const GetAgentRuntimeEndpointResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetAgentRuntimeEndpoint, request, handler, context);
  }

  /**
   * <p>Retrieves information about an API key credential provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetApiKeyCredentialProvider">AWS
   * API Reference</a></p>
   */
  virtual Model::GetApiKeyCredentialProviderOutcome GetApiKeyCredentialProvider(
      const Model::GetApiKeyCredentialProviderRequest& request) const;

  /**
   * A Callable wrapper for GetApiKeyCredentialProvider that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetApiKeyCredentialProviderRequestT = Model::GetApiKeyCredentialProviderRequest>
  Model::GetApiKeyCredentialProviderOutcomeCallable GetApiKeyCredentialProviderCallable(
      const GetApiKeyCredentialProviderRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetApiKeyCredentialProvider, request);
  }

  /**
   * An Async wrapper for GetApiKeyCredentialProvider that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetApiKeyCredentialProviderRequestT = Model::GetApiKeyCredentialProviderRequest>
  void GetApiKeyCredentialProviderAsync(const GetApiKeyCredentialProviderRequestT& request,
                                        const GetApiKeyCredentialProviderResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetApiKeyCredentialProvider, request, handler, context);
  }

  /**
   * <p>Gets information about a custom browser.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetBrowser">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBrowserOutcome GetBrowser(const Model::GetBrowserRequest& request) const;

  /**
   * A Callable wrapper for GetBrowser that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetBrowserRequestT = Model::GetBrowserRequest>
  Model::GetBrowserOutcomeCallable GetBrowserCallable(const GetBrowserRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetBrowser, request);
  }

  /**
   * An Async wrapper for GetBrowser that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetBrowserRequestT = Model::GetBrowserRequest>
  void GetBrowserAsync(const GetBrowserRequestT& request, const GetBrowserResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetBrowser, request, handler, context);
  }

  /**
   * <p>Gets information about a browser profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetBrowserProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBrowserProfileOutcome GetBrowserProfile(const Model::GetBrowserProfileRequest& request) const;

  /**
   * A Callable wrapper for GetBrowserProfile that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetBrowserProfileRequestT = Model::GetBrowserProfileRequest>
  Model::GetBrowserProfileOutcomeCallable GetBrowserProfileCallable(const GetBrowserProfileRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetBrowserProfile, request);
  }

  /**
   * An Async wrapper for GetBrowserProfile that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetBrowserProfileRequestT = Model::GetBrowserProfileRequest>
  void GetBrowserProfileAsync(const GetBrowserProfileRequestT& request, const GetBrowserProfileResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetBrowserProfile, request, handler, context);
  }

  /**
   * <p>Gets information about a custom code interpreter.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetCodeInterpreter">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCodeInterpreterOutcome GetCodeInterpreter(const Model::GetCodeInterpreterRequest& request) const;

  /**
   * A Callable wrapper for GetCodeInterpreter that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetCodeInterpreterRequestT = Model::GetCodeInterpreterRequest>
  Model::GetCodeInterpreterOutcomeCallable GetCodeInterpreterCallable(const GetCodeInterpreterRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetCodeInterpreter, request);
  }

  /**
   * An Async wrapper for GetCodeInterpreter that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetCodeInterpreterRequestT = Model::GetCodeInterpreterRequest>
  void GetCodeInterpreterAsync(const GetCodeInterpreterRequestT& request, const GetCodeInterpreterResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetCodeInterpreter, request, handler, context);
  }

  /**
   * <p> Retrieves detailed information about an evaluator, including its
   * configuration, status, and metadata. Works with both built-in and custom
   * evaluators. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetEvaluator">AWS
   * API Reference</a></p>
   */
  virtual Model::GetEvaluatorOutcome GetEvaluator(const Model::GetEvaluatorRequest& request) const;

  /**
   * A Callable wrapper for GetEvaluator that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetEvaluatorRequestT = Model::GetEvaluatorRequest>
  Model::GetEvaluatorOutcomeCallable GetEvaluatorCallable(const GetEvaluatorRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetEvaluator, request);
  }

  /**
   * An Async wrapper for GetEvaluator that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetEvaluatorRequestT = Model::GetEvaluatorRequest>
  void GetEvaluatorAsync(const GetEvaluatorRequestT& request, const GetEvaluatorResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetEvaluator, request, handler, context);
  }

  /**
   * <p>Retrieves information about a specific Gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::GetGatewayOutcome GetGateway(const Model::GetGatewayRequest& request) const;

  /**
   * A Callable wrapper for GetGateway that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetGatewayRequestT = Model::GetGatewayRequest>
  Model::GetGatewayOutcomeCallable GetGatewayCallable(const GetGatewayRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetGateway, request);
  }

  /**
   * An Async wrapper for GetGateway that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetGatewayRequestT = Model::GetGatewayRequest>
  void GetGatewayAsync(const GetGatewayRequestT& request, const GetGatewayResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetGateway, request, handler, context);
  }

  /**
   * <p>Retrieves information about a specific gateway target.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetGatewayTarget">AWS
   * API Reference</a></p>
   */
  virtual Model::GetGatewayTargetOutcome GetGatewayTarget(const Model::GetGatewayTargetRequest& request) const;

  /**
   * A Callable wrapper for GetGatewayTarget that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetGatewayTargetRequestT = Model::GetGatewayTargetRequest>
  Model::GetGatewayTargetOutcomeCallable GetGatewayTargetCallable(const GetGatewayTargetRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetGatewayTarget, request);
  }

  /**
   * An Async wrapper for GetGatewayTarget that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetGatewayTargetRequestT = Model::GetGatewayTargetRequest>
  void GetGatewayTargetAsync(const GetGatewayTargetRequestT& request, const GetGatewayTargetResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetGatewayTarget, request, handler, context);
  }

  /**
   * <p>Retrieve an existing Amazon Bedrock AgentCore Memory resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetMemory">AWS
   * API Reference</a></p>
   */
  virtual Model::GetMemoryOutcome GetMemory(const Model::GetMemoryRequest& request) const;

  /**
   * A Callable wrapper for GetMemory that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetMemoryRequestT = Model::GetMemoryRequest>
  Model::GetMemoryOutcomeCallable GetMemoryCallable(const GetMemoryRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetMemory, request);
  }

  /**
   * An Async wrapper for GetMemory that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetMemoryRequestT = Model::GetMemoryRequest>
  void GetMemoryAsync(const GetMemoryRequestT& request, const GetMemoryResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetMemory, request, handler, context);
  }

  /**
   * <p>Retrieves information about an OAuth2 credential provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetOauth2CredentialProvider">AWS
   * API Reference</a></p>
   */
  virtual Model::GetOauth2CredentialProviderOutcome GetOauth2CredentialProvider(
      const Model::GetOauth2CredentialProviderRequest& request) const;

  /**
   * A Callable wrapper for GetOauth2CredentialProvider that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetOauth2CredentialProviderRequestT = Model::GetOauth2CredentialProviderRequest>
  Model::GetOauth2CredentialProviderOutcomeCallable GetOauth2CredentialProviderCallable(
      const GetOauth2CredentialProviderRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetOauth2CredentialProvider, request);
  }

  /**
   * An Async wrapper for GetOauth2CredentialProvider that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetOauth2CredentialProviderRequestT = Model::GetOauth2CredentialProviderRequest>
  void GetOauth2CredentialProviderAsync(const GetOauth2CredentialProviderRequestT& request,
                                        const GetOauth2CredentialProviderResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetOauth2CredentialProvider, request, handler, context);
  }

  /**
   * <p> Retrieves detailed information about an online evaluation configuration,
   * including its rules, data sources, evaluators, and execution status.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetOnlineEvaluationConfig">AWS
   * API Reference</a></p>
   */
  virtual Model::GetOnlineEvaluationConfigOutcome GetOnlineEvaluationConfig(const Model::GetOnlineEvaluationConfigRequest& request) const;

  /**
   * A Callable wrapper for GetOnlineEvaluationConfig that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetOnlineEvaluationConfigRequestT = Model::GetOnlineEvaluationConfigRequest>
  Model::GetOnlineEvaluationConfigOutcomeCallable GetOnlineEvaluationConfigCallable(
      const GetOnlineEvaluationConfigRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetOnlineEvaluationConfig, request);
  }

  /**
   * An Async wrapper for GetOnlineEvaluationConfig that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetOnlineEvaluationConfigRequestT = Model::GetOnlineEvaluationConfigRequest>
  void GetOnlineEvaluationConfigAsync(const GetOnlineEvaluationConfigRequestT& request,
                                      const GetOnlineEvaluationConfigResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetOnlineEvaluationConfig, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific policy within the AgentCore
   * Policy system. This operation returns the complete policy definition, metadata,
   * and current status, allowing administrators to review and manage policy
   * configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

  /**
   * A Callable wrapper for GetPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetPolicyRequestT = Model::GetPolicyRequest>
  Model::GetPolicyOutcomeCallable GetPolicyCallable(const GetPolicyRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetPolicy, request);
  }

  /**
   * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetPolicyRequestT = Model::GetPolicyRequest>
  void GetPolicyAsync(const GetPolicyRequestT& request, const GetPolicyResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetPolicy, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific policy engine within the
   * AgentCore Policy system. This operation returns the complete policy engine
   * configuration, metadata, and current status, allowing administrators to review
   * and manage policy engine settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetPolicyEngine">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPolicyEngineOutcome GetPolicyEngine(const Model::GetPolicyEngineRequest& request) const;

  /**
   * A Callable wrapper for GetPolicyEngine that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetPolicyEngineRequestT = Model::GetPolicyEngineRequest>
  Model::GetPolicyEngineOutcomeCallable GetPolicyEngineCallable(const GetPolicyEngineRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetPolicyEngine, request);
  }

  /**
   * An Async wrapper for GetPolicyEngine that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetPolicyEngineRequestT = Model::GetPolicyEngineRequest>
  void GetPolicyEngineAsync(const GetPolicyEngineRequestT& request, const GetPolicyEngineResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetPolicyEngine, request, handler, context);
  }

  /**
   * <p>Retrieves information about a policy generation request within the AgentCore
   * Policy system. Policy generation converts natural language descriptions into
   * Cedar policy statements using AI-powered translation, enabling non-technical
   * users to create policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetPolicyGeneration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPolicyGenerationOutcome GetPolicyGeneration(const Model::GetPolicyGenerationRequest& request) const;

  /**
   * A Callable wrapper for GetPolicyGeneration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetPolicyGenerationRequestT = Model::GetPolicyGenerationRequest>
  Model::GetPolicyGenerationOutcomeCallable GetPolicyGenerationCallable(const GetPolicyGenerationRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetPolicyGeneration, request);
  }

  /**
   * An Async wrapper for GetPolicyGeneration that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetPolicyGenerationRequestT = Model::GetPolicyGenerationRequest>
  void GetPolicyGenerationAsync(const GetPolicyGenerationRequestT& request, const GetPolicyGenerationResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetPolicyGeneration, request, handler, context);
  }

  /**
   * <p>Retrieves the resource-based policy for a specified resource.</p>
   * <p>This feature is currently available only for AgentCore Runtime and
   * Gateway.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

  /**
   * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetResourcePolicy, request);
  }

  /**
   * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetResourcePolicy, request, handler, context);
  }

  /**
   * <p>Retrieves information about a token vault.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetTokenVault">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTokenVaultOutcome GetTokenVault(const Model::GetTokenVaultRequest& request = {}) const;

  /**
   * A Callable wrapper for GetTokenVault that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetTokenVaultRequestT = Model::GetTokenVaultRequest>
  Model::GetTokenVaultOutcomeCallable GetTokenVaultCallable(const GetTokenVaultRequestT& request = {}) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetTokenVault, request);
  }

  /**
   * An Async wrapper for GetTokenVault that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetTokenVaultRequestT = Model::GetTokenVaultRequest>
  void GetTokenVaultAsync(const GetTokenVaultResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const GetTokenVaultRequestT& request = {}) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetTokenVault, request, handler, context);
  }

  /**
   * <p>Retrieves information about a workload identity.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GetWorkloadIdentity">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWorkloadIdentityOutcome GetWorkloadIdentity(const Model::GetWorkloadIdentityRequest& request) const;

  /**
   * A Callable wrapper for GetWorkloadIdentity that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetWorkloadIdentityRequestT = Model::GetWorkloadIdentityRequest>
  Model::GetWorkloadIdentityOutcomeCallable GetWorkloadIdentityCallable(const GetWorkloadIdentityRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::GetWorkloadIdentity, request);
  }

  /**
   * An Async wrapper for GetWorkloadIdentity that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetWorkloadIdentityRequestT = Model::GetWorkloadIdentityRequest>
  void GetWorkloadIdentityAsync(const GetWorkloadIdentityRequestT& request, const GetWorkloadIdentityResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::GetWorkloadIdentity, request, handler, context);
  }

  /**
   * <p>Lists all endpoints for a specific Amazon Secure Agent.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListAgentRuntimeEndpoints">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAgentRuntimeEndpointsOutcome ListAgentRuntimeEndpoints(const Model::ListAgentRuntimeEndpointsRequest& request) const;

  /**
   * A Callable wrapper for ListAgentRuntimeEndpoints that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAgentRuntimeEndpointsRequestT = Model::ListAgentRuntimeEndpointsRequest>
  Model::ListAgentRuntimeEndpointsOutcomeCallable ListAgentRuntimeEndpointsCallable(
      const ListAgentRuntimeEndpointsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListAgentRuntimeEndpoints, request);
  }

  /**
   * An Async wrapper for ListAgentRuntimeEndpoints that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAgentRuntimeEndpointsRequestT = Model::ListAgentRuntimeEndpointsRequest>
  void ListAgentRuntimeEndpointsAsync(const ListAgentRuntimeEndpointsRequestT& request,
                                      const ListAgentRuntimeEndpointsResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListAgentRuntimeEndpoints, request, handler, context);
  }

  /**
   * <p>Lists all versions of a specific Amazon Secure Agent.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListAgentRuntimeVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAgentRuntimeVersionsOutcome ListAgentRuntimeVersions(const Model::ListAgentRuntimeVersionsRequest& request) const;

  /**
   * A Callable wrapper for ListAgentRuntimeVersions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAgentRuntimeVersionsRequestT = Model::ListAgentRuntimeVersionsRequest>
  Model::ListAgentRuntimeVersionsOutcomeCallable ListAgentRuntimeVersionsCallable(const ListAgentRuntimeVersionsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListAgentRuntimeVersions, request);
  }

  /**
   * An Async wrapper for ListAgentRuntimeVersions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAgentRuntimeVersionsRequestT = Model::ListAgentRuntimeVersionsRequest>
  void ListAgentRuntimeVersionsAsync(const ListAgentRuntimeVersionsRequestT& request,
                                     const ListAgentRuntimeVersionsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListAgentRuntimeVersions, request, handler, context);
  }

  /**
   * <p>Lists all Amazon Secure Agents in your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListAgentRuntimes">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAgentRuntimesOutcome ListAgentRuntimes(const Model::ListAgentRuntimesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAgentRuntimes that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAgentRuntimesRequestT = Model::ListAgentRuntimesRequest>
  Model::ListAgentRuntimesOutcomeCallable ListAgentRuntimesCallable(const ListAgentRuntimesRequestT& request = {}) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListAgentRuntimes, request);
  }

  /**
   * An Async wrapper for ListAgentRuntimes that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListAgentRuntimesRequestT = Model::ListAgentRuntimesRequest>
  void ListAgentRuntimesAsync(const ListAgentRuntimesResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const ListAgentRuntimesRequestT& request = {}) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListAgentRuntimes, request, handler, context);
  }

  /**
   * <p>Lists all API key credential providers in your account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListApiKeyCredentialProviders">AWS
   * API Reference</a></p>
   */
  virtual Model::ListApiKeyCredentialProvidersOutcome ListApiKeyCredentialProviders(
      const Model::ListApiKeyCredentialProvidersRequest& request = {}) const;

  /**
   * A Callable wrapper for ListApiKeyCredentialProviders that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListApiKeyCredentialProvidersRequestT = Model::ListApiKeyCredentialProvidersRequest>
  Model::ListApiKeyCredentialProvidersOutcomeCallable ListApiKeyCredentialProvidersCallable(
      const ListApiKeyCredentialProvidersRequestT& request = {}) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListApiKeyCredentialProviders, request);
  }

  /**
   * An Async wrapper for ListApiKeyCredentialProviders that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListApiKeyCredentialProvidersRequestT = Model::ListApiKeyCredentialProvidersRequest>
  void ListApiKeyCredentialProvidersAsync(const ListApiKeyCredentialProvidersResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                          const ListApiKeyCredentialProvidersRequestT& request = {}) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListApiKeyCredentialProviders, request, handler, context);
  }

  /**
   * <p>Lists all browser profiles in your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListBrowserProfiles">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBrowserProfilesOutcome ListBrowserProfiles(const Model::ListBrowserProfilesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListBrowserProfiles that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListBrowserProfilesRequestT = Model::ListBrowserProfilesRequest>
  Model::ListBrowserProfilesOutcomeCallable ListBrowserProfilesCallable(const ListBrowserProfilesRequestT& request = {}) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListBrowserProfiles, request);
  }

  /**
   * An Async wrapper for ListBrowserProfiles that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListBrowserProfilesRequestT = Model::ListBrowserProfilesRequest>
  void ListBrowserProfilesAsync(const ListBrowserProfilesResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                const ListBrowserProfilesRequestT& request = {}) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListBrowserProfiles, request, handler, context);
  }

  /**
   * <p>Lists all custom browsers in your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListBrowsers">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBrowsersOutcome ListBrowsers(const Model::ListBrowsersRequest& request = {}) const;

  /**
   * A Callable wrapper for ListBrowsers that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListBrowsersRequestT = Model::ListBrowsersRequest>
  Model::ListBrowsersOutcomeCallable ListBrowsersCallable(const ListBrowsersRequestT& request = {}) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListBrowsers, request);
  }

  /**
   * An Async wrapper for ListBrowsers that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListBrowsersRequestT = Model::ListBrowsersRequest>
  void ListBrowsersAsync(const ListBrowsersResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListBrowsersRequestT& request = {}) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListBrowsers, request, handler, context);
  }

  /**
   * <p>Lists all custom code interpreters in your account.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListCodeInterpreters">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCodeInterpretersOutcome ListCodeInterpreters(const Model::ListCodeInterpretersRequest& request = {}) const;

  /**
   * A Callable wrapper for ListCodeInterpreters that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListCodeInterpretersRequestT = Model::ListCodeInterpretersRequest>
  Model::ListCodeInterpretersOutcomeCallable ListCodeInterpretersCallable(const ListCodeInterpretersRequestT& request = {}) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListCodeInterpreters, request);
  }

  /**
   * An Async wrapper for ListCodeInterpreters that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListCodeInterpretersRequestT = Model::ListCodeInterpretersRequest>
  void ListCodeInterpretersAsync(const ListCodeInterpretersResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                 const ListCodeInterpretersRequestT& request = {}) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListCodeInterpreters, request, handler, context);
  }

  /**
   * <p> Lists all available evaluators, including both builtin evaluators provided
   * by the service and custom evaluators created by the user. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListEvaluators">AWS
   * API Reference</a></p>
   */
  virtual Model::ListEvaluatorsOutcome ListEvaluators(const Model::ListEvaluatorsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListEvaluators that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListEvaluatorsRequestT = Model::ListEvaluatorsRequest>
  Model::ListEvaluatorsOutcomeCallable ListEvaluatorsCallable(const ListEvaluatorsRequestT& request = {}) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListEvaluators, request);
  }

  /**
   * An Async wrapper for ListEvaluators that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListEvaluatorsRequestT = Model::ListEvaluatorsRequest>
  void ListEvaluatorsAsync(const ListEvaluatorsResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const ListEvaluatorsRequestT& request = {}) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListEvaluators, request, handler, context);
  }

  /**
   * <p>Lists all targets for a specific gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListGatewayTargets">AWS
   * API Reference</a></p>
   */
  virtual Model::ListGatewayTargetsOutcome ListGatewayTargets(const Model::ListGatewayTargetsRequest& request) const;

  /**
   * A Callable wrapper for ListGatewayTargets that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListGatewayTargetsRequestT = Model::ListGatewayTargetsRequest>
  Model::ListGatewayTargetsOutcomeCallable ListGatewayTargetsCallable(const ListGatewayTargetsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListGatewayTargets, request);
  }

  /**
   * An Async wrapper for ListGatewayTargets that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListGatewayTargetsRequestT = Model::ListGatewayTargetsRequest>
  void ListGatewayTargetsAsync(const ListGatewayTargetsRequestT& request, const ListGatewayTargetsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListGatewayTargets, request, handler, context);
  }

  /**
   * <p>Lists all gateways in the account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListGateways">AWS
   * API Reference</a></p>
   */
  virtual Model::ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest& request = {}) const;

  /**
   * A Callable wrapper for ListGateways that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListGatewaysRequestT = Model::ListGatewaysRequest>
  Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const ListGatewaysRequestT& request = {}) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListGateways, request);
  }

  /**
   * An Async wrapper for ListGateways that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListGatewaysRequestT = Model::ListGatewaysRequest>
  void ListGatewaysAsync(const ListGatewaysResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListGatewaysRequestT& request = {}) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListGateways, request, handler, context);
  }

  /**
   * <p>Lists the available Amazon Bedrock AgentCore Memory resources in the current
   * Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListMemories">AWS
   * API Reference</a></p>
   */
  virtual Model::ListMemoriesOutcome ListMemories(const Model::ListMemoriesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListMemories that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListMemoriesRequestT = Model::ListMemoriesRequest>
  Model::ListMemoriesOutcomeCallable ListMemoriesCallable(const ListMemoriesRequestT& request = {}) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListMemories, request);
  }

  /**
   * An Async wrapper for ListMemories that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListMemoriesRequestT = Model::ListMemoriesRequest>
  void ListMemoriesAsync(const ListMemoriesResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListMemoriesRequestT& request = {}) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListMemories, request, handler, context);
  }

  /**
   * <p>Lists all OAuth2 credential providers in your account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListOauth2CredentialProviders">AWS
   * API Reference</a></p>
   */
  virtual Model::ListOauth2CredentialProvidersOutcome ListOauth2CredentialProviders(
      const Model::ListOauth2CredentialProvidersRequest& request = {}) const;

  /**
   * A Callable wrapper for ListOauth2CredentialProviders that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListOauth2CredentialProvidersRequestT = Model::ListOauth2CredentialProvidersRequest>
  Model::ListOauth2CredentialProvidersOutcomeCallable ListOauth2CredentialProvidersCallable(
      const ListOauth2CredentialProvidersRequestT& request = {}) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListOauth2CredentialProviders, request);
  }

  /**
   * An Async wrapper for ListOauth2CredentialProviders that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListOauth2CredentialProvidersRequestT = Model::ListOauth2CredentialProvidersRequest>
  void ListOauth2CredentialProvidersAsync(const ListOauth2CredentialProvidersResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                          const ListOauth2CredentialProvidersRequestT& request = {}) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListOauth2CredentialProviders, request, handler, context);
  }

  /**
   * <p> Lists all online evaluation configurations in the account, providing summary
   * information about each configuration's status and settings. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListOnlineEvaluationConfigs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListOnlineEvaluationConfigsOutcome ListOnlineEvaluationConfigs(
      const Model::ListOnlineEvaluationConfigsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListOnlineEvaluationConfigs that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListOnlineEvaluationConfigsRequestT = Model::ListOnlineEvaluationConfigsRequest>
  Model::ListOnlineEvaluationConfigsOutcomeCallable ListOnlineEvaluationConfigsCallable(
      const ListOnlineEvaluationConfigsRequestT& request = {}) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListOnlineEvaluationConfigs, request);
  }

  /**
   * An Async wrapper for ListOnlineEvaluationConfigs that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListOnlineEvaluationConfigsRequestT = Model::ListOnlineEvaluationConfigsRequest>
  void ListOnlineEvaluationConfigsAsync(const ListOnlineEvaluationConfigsResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                        const ListOnlineEvaluationConfigsRequestT& request = {}) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListOnlineEvaluationConfigs, request, handler, context);
  }

  /**
   * <p>Retrieves a list of policies within the AgentCore Policy engine. This
   * operation supports pagination and filtering to help administrators manage and
   * discover policies across policy engines. Results can be filtered by policy
   * engine or resource associations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListPolicies">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request) const;

  /**
   * A Callable wrapper for ListPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListPoliciesRequestT = Model::ListPoliciesRequest>
  Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const ListPoliciesRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListPolicies, request);
  }

  /**
   * An Async wrapper for ListPolicies that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListPoliciesRequestT = Model::ListPoliciesRequest>
  void ListPoliciesAsync(const ListPoliciesRequestT& request, const ListPoliciesResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListPolicies, request, handler, context);
  }

  /**
   * <p>Retrieves a list of policy engines within the AgentCore Policy system. This
   * operation supports pagination to help administrators discover and manage policy
   * engines across their account. Each policy engine serves as a container for
   * related policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListPolicyEngines">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPolicyEnginesOutcome ListPolicyEngines(const Model::ListPolicyEnginesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListPolicyEngines that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPolicyEnginesRequestT = Model::ListPolicyEnginesRequest>
  Model::ListPolicyEnginesOutcomeCallable ListPolicyEnginesCallable(const ListPolicyEnginesRequestT& request = {}) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListPolicyEngines, request);
  }

  /**
   * An Async wrapper for ListPolicyEngines that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListPolicyEnginesRequestT = Model::ListPolicyEnginesRequest>
  void ListPolicyEnginesAsync(const ListPolicyEnginesResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const ListPolicyEnginesRequestT& request = {}) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListPolicyEngines, request, handler, context);
  }

  /**
   * <p>Retrieves a list of generated policy assets from a policy generation request
   * within the AgentCore Policy system. This operation returns the actual Cedar
   * policies and related artifacts produced by the AI-powered policy generation
   * process, allowing users to review and select from multiple generated policy
   * options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListPolicyGenerationAssets">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPolicyGenerationAssetsOutcome ListPolicyGenerationAssets(
      const Model::ListPolicyGenerationAssetsRequest& request) const;

  /**
   * A Callable wrapper for ListPolicyGenerationAssets that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListPolicyGenerationAssetsRequestT = Model::ListPolicyGenerationAssetsRequest>
  Model::ListPolicyGenerationAssetsOutcomeCallable ListPolicyGenerationAssetsCallable(
      const ListPolicyGenerationAssetsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListPolicyGenerationAssets, request);
  }

  /**
   * An Async wrapper for ListPolicyGenerationAssets that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListPolicyGenerationAssetsRequestT = Model::ListPolicyGenerationAssetsRequest>
  void ListPolicyGenerationAssetsAsync(const ListPolicyGenerationAssetsRequestT& request,
                                       const ListPolicyGenerationAssetsResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListPolicyGenerationAssets, request, handler, context);
  }

  /**
   * <p>Retrieves a list of policy generation requests within the AgentCore Policy
   * system. This operation supports pagination and filtering to help track and
   * manage AI-powered policy generation operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListPolicyGenerations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPolicyGenerationsOutcome ListPolicyGenerations(const Model::ListPolicyGenerationsRequest& request) const;

  /**
   * A Callable wrapper for ListPolicyGenerations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPolicyGenerationsRequestT = Model::ListPolicyGenerationsRequest>
  Model::ListPolicyGenerationsOutcomeCallable ListPolicyGenerationsCallable(const ListPolicyGenerationsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListPolicyGenerations, request);
  }

  /**
   * An Async wrapper for ListPolicyGenerations that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListPolicyGenerationsRequestT = Model::ListPolicyGenerationsRequest>
  void ListPolicyGenerationsAsync(const ListPolicyGenerationsRequestT& request, const ListPolicyGenerationsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListPolicyGenerations, request, handler, context);
  }

  /**
   * <p>Lists the tags associated with the specified resource.</p>  <p>This
   * feature is currently available only for AgentCore Runtime, Browser, Browser
   * Profile, Code Interpreter tool, and Gateway.</p> <p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Lists all workload identities in your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ListWorkloadIdentities">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWorkloadIdentitiesOutcome ListWorkloadIdentities(const Model::ListWorkloadIdentitiesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListWorkloadIdentities that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListWorkloadIdentitiesRequestT = Model::ListWorkloadIdentitiesRequest>
  Model::ListWorkloadIdentitiesOutcomeCallable ListWorkloadIdentitiesCallable(const ListWorkloadIdentitiesRequestT& request = {}) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::ListWorkloadIdentities, request);
  }

  /**
   * An Async wrapper for ListWorkloadIdentities that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListWorkloadIdentitiesRequestT = Model::ListWorkloadIdentitiesRequest>
  void ListWorkloadIdentitiesAsync(const ListWorkloadIdentitiesResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const ListWorkloadIdentitiesRequestT& request = {}) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::ListWorkloadIdentities, request, handler, context);
  }

  /**
   * <p>Creates or updates a resource-based policy for a resource with the specified
   * resourceArn.</p>  <p>This feature is currently available only for
   * AgentCore Runtime and Gateway.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PutResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

  /**
   * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
  Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::PutResourcePolicy, request);
  }

  /**
   * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
  void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::PutResourcePolicy, request, handler, context);
  }

  /**
   * <p>Sets the customer master key (CMK) for a token vault.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SetTokenVaultCMK">AWS
   * API Reference</a></p>
   */
  virtual Model::SetTokenVaultCMKOutcome SetTokenVaultCMK(const Model::SetTokenVaultCMKRequest& request) const;

  /**
   * A Callable wrapper for SetTokenVaultCMK that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SetTokenVaultCMKRequestT = Model::SetTokenVaultCMKRequest>
  Model::SetTokenVaultCMKOutcomeCallable SetTokenVaultCMKCallable(const SetTokenVaultCMKRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::SetTokenVaultCMK, request);
  }

  /**
   * An Async wrapper for SetTokenVaultCMK that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename SetTokenVaultCMKRequestT = Model::SetTokenVaultCMKRequest>
  void SetTokenVaultCMKAsync(const SetTokenVaultCMKRequestT& request, const SetTokenVaultCMKResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::SetTokenVaultCMK, request, handler, context);
  }

  /**
   * <p>Initiates the AI-powered generation of Cedar policies from natural language
   * descriptions within the AgentCore Policy system. This feature enables both
   * technical and non-technical users to create policies by describing their
   * authorization requirements in plain English, which is then automatically
   * translated into formal Cedar policy statements. The generation process analyzes
   * the natural language input along with the Gateway's tool context to produce
   * validated policy options. Generated policy assets are automatically deleted
   * after 7 days, so you should review and create policies from the generated assets
   * within this timeframe. Once created, policies are permanent and not subject to
   * this expiration. Generated policies should be reviewed and tested in log-only
   * mode before deploying to production. Use this when you want to describe policy
   * intent naturally rather than learning Cedar syntax, though generated policies
   * may require refinement for complex scenarios.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/StartPolicyGeneration">AWS
   * API Reference</a></p>
   */
  virtual Model::StartPolicyGenerationOutcome StartPolicyGeneration(const Model::StartPolicyGenerationRequest& request) const;

  /**
   * A Callable wrapper for StartPolicyGeneration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartPolicyGenerationRequestT = Model::StartPolicyGenerationRequest>
  Model::StartPolicyGenerationOutcomeCallable StartPolicyGenerationCallable(const StartPolicyGenerationRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::StartPolicyGeneration, request);
  }

  /**
   * An Async wrapper for StartPolicyGeneration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartPolicyGenerationRequestT = Model::StartPolicyGenerationRequest>
  void StartPolicyGenerationAsync(const StartPolicyGenerationRequestT& request, const StartPolicyGenerationResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::StartPolicyGeneration, request, handler, context);
  }

  /**
   * <p>The gateway targets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SynchronizeGatewayTargets">AWS
   * API Reference</a></p>
   */
  virtual Model::SynchronizeGatewayTargetsOutcome SynchronizeGatewayTargets(const Model::SynchronizeGatewayTargetsRequest& request) const;

  /**
   * A Callable wrapper for SynchronizeGatewayTargets that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SynchronizeGatewayTargetsRequestT = Model::SynchronizeGatewayTargetsRequest>
  Model::SynchronizeGatewayTargetsOutcomeCallable SynchronizeGatewayTargetsCallable(
      const SynchronizeGatewayTargetsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::SynchronizeGatewayTargets, request);
  }

  /**
   * An Async wrapper for SynchronizeGatewayTargets that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SynchronizeGatewayTargetsRequestT = Model::SynchronizeGatewayTargetsRequest>
  void SynchronizeGatewayTargetsAsync(const SynchronizeGatewayTargetsRequestT& request,
                                      const SynchronizeGatewayTargetsResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::SynchronizeGatewayTargets, request, handler, context);
  }

  /**
   * <p>Associates the specified tags to a resource with the specified resourceArn.
   * If existing tags on a resource are not specified in the request parameters, they
   * are not changed. When a resource is deleted, the tags associated with that
   * resource are also deleted.</p>  <p>This feature is currently available
   * only for AgentCore Runtime, Browser, Browser Profile, Code Interpreter tool, and
   * Gateway.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes the specified tags from the specified resource.</p>  <p>This
   * feature is currently available only for AgentCore Runtime, Browser, Browser
   * Profile, Code Interpreter tool, and Gateway.</p> <p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates an existing Amazon Secure Agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateAgentRuntime">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAgentRuntimeOutcome UpdateAgentRuntime(const Model::UpdateAgentRuntimeRequest& request) const;

  /**
   * A Callable wrapper for UpdateAgentRuntime that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateAgentRuntimeRequestT = Model::UpdateAgentRuntimeRequest>
  Model::UpdateAgentRuntimeOutcomeCallable UpdateAgentRuntimeCallable(const UpdateAgentRuntimeRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::UpdateAgentRuntime, request);
  }

  /**
   * An Async wrapper for UpdateAgentRuntime that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateAgentRuntimeRequestT = Model::UpdateAgentRuntimeRequest>
  void UpdateAgentRuntimeAsync(const UpdateAgentRuntimeRequestT& request, const UpdateAgentRuntimeResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::UpdateAgentRuntime, request, handler, context);
  }

  /**
   * <p>Updates an existing Amazon Bedrock AgentCore Runtime endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateAgentRuntimeEndpoint">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAgentRuntimeEndpointOutcome UpdateAgentRuntimeEndpoint(
      const Model::UpdateAgentRuntimeEndpointRequest& request) const;

  /**
   * A Callable wrapper for UpdateAgentRuntimeEndpoint that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateAgentRuntimeEndpointRequestT = Model::UpdateAgentRuntimeEndpointRequest>
  Model::UpdateAgentRuntimeEndpointOutcomeCallable UpdateAgentRuntimeEndpointCallable(
      const UpdateAgentRuntimeEndpointRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::UpdateAgentRuntimeEndpoint, request);
  }

  /**
   * An Async wrapper for UpdateAgentRuntimeEndpoint that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateAgentRuntimeEndpointRequestT = Model::UpdateAgentRuntimeEndpointRequest>
  void UpdateAgentRuntimeEndpointAsync(const UpdateAgentRuntimeEndpointRequestT& request,
                                       const UpdateAgentRuntimeEndpointResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::UpdateAgentRuntimeEndpoint, request, handler, context);
  }

  /**
   * <p>Updates an existing API key credential provider.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateApiKeyCredentialProvider">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateApiKeyCredentialProviderOutcome UpdateApiKeyCredentialProvider(
      const Model::UpdateApiKeyCredentialProviderRequest& request) const;

  /**
   * A Callable wrapper for UpdateApiKeyCredentialProvider that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateApiKeyCredentialProviderRequestT = Model::UpdateApiKeyCredentialProviderRequest>
  Model::UpdateApiKeyCredentialProviderOutcomeCallable UpdateApiKeyCredentialProviderCallable(
      const UpdateApiKeyCredentialProviderRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::UpdateApiKeyCredentialProvider, request);
  }

  /**
   * An Async wrapper for UpdateApiKeyCredentialProvider that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateApiKeyCredentialProviderRequestT = Model::UpdateApiKeyCredentialProviderRequest>
  void UpdateApiKeyCredentialProviderAsync(const UpdateApiKeyCredentialProviderRequestT& request,
                                           const UpdateApiKeyCredentialProviderResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::UpdateApiKeyCredentialProvider, request, handler, context);
  }

  /**
   * <p> Updates a custom evaluator's configuration, description, or evaluation
   * level. Built-in evaluators cannot be updated. The evaluator must not be locked
   * for modification. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateEvaluator">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateEvaluatorOutcome UpdateEvaluator(const Model::UpdateEvaluatorRequest& request) const;

  /**
   * A Callable wrapper for UpdateEvaluator that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateEvaluatorRequestT = Model::UpdateEvaluatorRequest>
  Model::UpdateEvaluatorOutcomeCallable UpdateEvaluatorCallable(const UpdateEvaluatorRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::UpdateEvaluator, request);
  }

  /**
   * An Async wrapper for UpdateEvaluator that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateEvaluatorRequestT = Model::UpdateEvaluatorRequest>
  void UpdateEvaluatorAsync(const UpdateEvaluatorRequestT& request, const UpdateEvaluatorResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::UpdateEvaluator, request, handler, context);
  }

  /**
   * <p>Updates an existing gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateGateway">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateGatewayOutcome UpdateGateway(const Model::UpdateGatewayRequest& request) const;

  /**
   * A Callable wrapper for UpdateGateway that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateGatewayRequestT = Model::UpdateGatewayRequest>
  Model::UpdateGatewayOutcomeCallable UpdateGatewayCallable(const UpdateGatewayRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::UpdateGateway, request);
  }

  /**
   * An Async wrapper for UpdateGateway that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateGatewayRequestT = Model::UpdateGatewayRequest>
  void UpdateGatewayAsync(const UpdateGatewayRequestT& request, const UpdateGatewayResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::UpdateGateway, request, handler, context);
  }

  /**
   * <p>Updates an existing gateway target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateGatewayTarget">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateGatewayTargetOutcome UpdateGatewayTarget(const Model::UpdateGatewayTargetRequest& request) const;

  /**
   * A Callable wrapper for UpdateGatewayTarget that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateGatewayTargetRequestT = Model::UpdateGatewayTargetRequest>
  Model::UpdateGatewayTargetOutcomeCallable UpdateGatewayTargetCallable(const UpdateGatewayTargetRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::UpdateGatewayTarget, request);
  }

  /**
   * An Async wrapper for UpdateGatewayTarget that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateGatewayTargetRequestT = Model::UpdateGatewayTargetRequest>
  void UpdateGatewayTargetAsync(const UpdateGatewayTargetRequestT& request, const UpdateGatewayTargetResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::UpdateGatewayTarget, request, handler, context);
  }

  /**
   * <p>Update an Amazon Bedrock AgentCore Memory resource memory.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateMemory">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateMemoryOutcome UpdateMemory(const Model::UpdateMemoryRequest& request) const;

  /**
   * A Callable wrapper for UpdateMemory that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateMemoryRequestT = Model::UpdateMemoryRequest>
  Model::UpdateMemoryOutcomeCallable UpdateMemoryCallable(const UpdateMemoryRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::UpdateMemory, request);
  }

  /**
   * An Async wrapper for UpdateMemory that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateMemoryRequestT = Model::UpdateMemoryRequest>
  void UpdateMemoryAsync(const UpdateMemoryRequestT& request, const UpdateMemoryResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::UpdateMemory, request, handler, context);
  }

  /**
   * <p>Updates an existing OAuth2 credential provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateOauth2CredentialProvider">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateOauth2CredentialProviderOutcome UpdateOauth2CredentialProvider(
      const Model::UpdateOauth2CredentialProviderRequest& request) const;

  /**
   * A Callable wrapper for UpdateOauth2CredentialProvider that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateOauth2CredentialProviderRequestT = Model::UpdateOauth2CredentialProviderRequest>
  Model::UpdateOauth2CredentialProviderOutcomeCallable UpdateOauth2CredentialProviderCallable(
      const UpdateOauth2CredentialProviderRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::UpdateOauth2CredentialProvider, request);
  }

  /**
   * An Async wrapper for UpdateOauth2CredentialProvider that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateOauth2CredentialProviderRequestT = Model::UpdateOauth2CredentialProviderRequest>
  void UpdateOauth2CredentialProviderAsync(const UpdateOauth2CredentialProviderRequestT& request,
                                           const UpdateOauth2CredentialProviderResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::UpdateOauth2CredentialProvider, request, handler, context);
  }

  /**
   * <p> Updates an online evaluation configuration's settings, including rules, data
   * sources, evaluators, and execution status. Changes take effect immediately for
   * ongoing evaluations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateOnlineEvaluationConfig">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateOnlineEvaluationConfigOutcome UpdateOnlineEvaluationConfig(
      const Model::UpdateOnlineEvaluationConfigRequest& request) const;

  /**
   * A Callable wrapper for UpdateOnlineEvaluationConfig that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateOnlineEvaluationConfigRequestT = Model::UpdateOnlineEvaluationConfigRequest>
  Model::UpdateOnlineEvaluationConfigOutcomeCallable UpdateOnlineEvaluationConfigCallable(
      const UpdateOnlineEvaluationConfigRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::UpdateOnlineEvaluationConfig, request);
  }

  /**
   * An Async wrapper for UpdateOnlineEvaluationConfig that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateOnlineEvaluationConfigRequestT = Model::UpdateOnlineEvaluationConfigRequest>
  void UpdateOnlineEvaluationConfigAsync(const UpdateOnlineEvaluationConfigRequestT& request,
                                         const UpdateOnlineEvaluationConfigResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::UpdateOnlineEvaluationConfig, request, handler, context);
  }

  /**
   * <p>Updates an existing policy within the AgentCore Policy system. This operation
   * allows modification of the policy description and definition while maintaining
   * the policy's identity. The updated policy is validated against the Cedar schema
   * before being applied. This is an asynchronous operation. Use the
   * <code>GetPolicy</code> operation to poll the <code>status</code> field to track
   * completion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdatePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePolicyOutcome UpdatePolicy(const Model::UpdatePolicyRequest& request) const;

  /**
   * A Callable wrapper for UpdatePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdatePolicyRequestT = Model::UpdatePolicyRequest>
  Model::UpdatePolicyOutcomeCallable UpdatePolicyCallable(const UpdatePolicyRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::UpdatePolicy, request);
  }

  /**
   * An Async wrapper for UpdatePolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdatePolicyRequestT = Model::UpdatePolicyRequest>
  void UpdatePolicyAsync(const UpdatePolicyRequestT& request, const UpdatePolicyResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::UpdatePolicy, request, handler, context);
  }

  /**
   * <p>Updates an existing policy engine within the AgentCore Policy system. This
   * operation allows modification of the policy engine description while maintaining
   * its identity. This is an asynchronous operation. Use the
   * <code>GetPolicyEngine</code> operation to poll the <code>status</code> field to
   * track completion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdatePolicyEngine">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePolicyEngineOutcome UpdatePolicyEngine(const Model::UpdatePolicyEngineRequest& request) const;

  /**
   * A Callable wrapper for UpdatePolicyEngine that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdatePolicyEngineRequestT = Model::UpdatePolicyEngineRequest>
  Model::UpdatePolicyEngineOutcomeCallable UpdatePolicyEngineCallable(const UpdatePolicyEngineRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::UpdatePolicyEngine, request);
  }

  /**
   * An Async wrapper for UpdatePolicyEngine that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdatePolicyEngineRequestT = Model::UpdatePolicyEngineRequest>
  void UpdatePolicyEngineAsync(const UpdatePolicyEngineRequestT& request, const UpdatePolicyEngineResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::UpdatePolicyEngine, request, handler, context);
  }

  /**
   * <p>Updates an existing workload identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UpdateWorkloadIdentity">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateWorkloadIdentityOutcome UpdateWorkloadIdentity(const Model::UpdateWorkloadIdentityRequest& request) const;

  /**
   * A Callable wrapper for UpdateWorkloadIdentity that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateWorkloadIdentityRequestT = Model::UpdateWorkloadIdentityRequest>
  Model::UpdateWorkloadIdentityOutcomeCallable UpdateWorkloadIdentityCallable(const UpdateWorkloadIdentityRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreControlClient::UpdateWorkloadIdentity, request);
  }

  /**
   * An Async wrapper for UpdateWorkloadIdentity that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateWorkloadIdentityRequestT = Model::UpdateWorkloadIdentityRequest>
  void UpdateWorkloadIdentityAsync(const UpdateWorkloadIdentityRequestT& request,
                                   const UpdateWorkloadIdentityResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreControlClient::UpdateWorkloadIdentity, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentCoreControlClient>;
  void init(const BedrockAgentCoreControlClientConfiguration& clientConfiguration);

  BedrockAgentCoreControlClientConfiguration m_clientConfiguration;
  std::shared_ptr<BedrockAgentCoreControlEndpointProviderBase> m_endpointProvider;
};

}  // namespace BedrockAgentCoreControl
}  // namespace Aws
