/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCorePaginationBase.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreServiceClientModel.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace BedrockAgentCore {
/**
 * <p>Welcome to the Amazon Bedrock AgentCore Data Plane API reference. Data Plane
 * actions process and handle data or workloads within Amazon Web Services
 * services. </p>
 */
class AWS_BEDROCKAGENTCORE_API BedrockAgentCoreClient : public Aws::Client::AWSJsonClient,
                                                        public Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentCoreClient>,
                                                        public BedrockAgentCorePaginationBase<BedrockAgentCoreClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef BedrockAgentCoreClientConfiguration ClientConfigurationType;
  typedef BedrockAgentCoreEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  BedrockAgentCoreClient(const Aws::BedrockAgentCore::BedrockAgentCoreClientConfiguration& clientConfiguration =
                             Aws::BedrockAgentCore::BedrockAgentCoreClientConfiguration(),
                         std::shared_ptr<BedrockAgentCoreEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  BedrockAgentCoreClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<BedrockAgentCoreEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::BedrockAgentCore::BedrockAgentCoreClientConfiguration& clientConfiguration =
                             Aws::BedrockAgentCore::BedrockAgentCoreClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  BedrockAgentCoreClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<BedrockAgentCoreEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::BedrockAgentCore::BedrockAgentCoreClientConfiguration& clientConfiguration =
                             Aws::BedrockAgentCore::BedrockAgentCoreClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  BedrockAgentCoreClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  BedrockAgentCoreClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  BedrockAgentCoreClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~BedrockAgentCoreClient();

  /**
   * <p>Creates multiple memory records in a single batch operation for the specified
   * memory with custom content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/BatchCreateMemoryRecords">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchCreateMemoryRecordsOutcome BatchCreateMemoryRecords(const Model::BatchCreateMemoryRecordsRequest& request) const;

  /**
   * A Callable wrapper for BatchCreateMemoryRecords that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchCreateMemoryRecordsRequestT = Model::BatchCreateMemoryRecordsRequest>
  Model::BatchCreateMemoryRecordsOutcomeCallable BatchCreateMemoryRecordsCallable(const BatchCreateMemoryRecordsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::BatchCreateMemoryRecords, request);
  }

  /**
   * An Async wrapper for BatchCreateMemoryRecords that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchCreateMemoryRecordsRequestT = Model::BatchCreateMemoryRecordsRequest>
  void BatchCreateMemoryRecordsAsync(const BatchCreateMemoryRecordsRequestT& request,
                                     const BatchCreateMemoryRecordsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::BatchCreateMemoryRecords, request, handler, context);
  }

  /**
   * <p>Deletes multiple memory records in a single batch operation from the
   * specified memory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/BatchDeleteMemoryRecords">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchDeleteMemoryRecordsOutcome BatchDeleteMemoryRecords(const Model::BatchDeleteMemoryRecordsRequest& request) const;

  /**
   * A Callable wrapper for BatchDeleteMemoryRecords that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchDeleteMemoryRecordsRequestT = Model::BatchDeleteMemoryRecordsRequest>
  Model::BatchDeleteMemoryRecordsOutcomeCallable BatchDeleteMemoryRecordsCallable(const BatchDeleteMemoryRecordsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::BatchDeleteMemoryRecords, request);
  }

  /**
   * An Async wrapper for BatchDeleteMemoryRecords that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchDeleteMemoryRecordsRequestT = Model::BatchDeleteMemoryRecordsRequest>
  void BatchDeleteMemoryRecordsAsync(const BatchDeleteMemoryRecordsRequestT& request,
                                     const BatchDeleteMemoryRecordsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::BatchDeleteMemoryRecords, request, handler, context);
  }

  /**
   * <p>Updates multiple memory records with custom content in a single batch
   * operation within the specified memory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/BatchUpdateMemoryRecords">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchUpdateMemoryRecordsOutcome BatchUpdateMemoryRecords(const Model::BatchUpdateMemoryRecordsRequest& request) const;

  /**
   * A Callable wrapper for BatchUpdateMemoryRecords that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchUpdateMemoryRecordsRequestT = Model::BatchUpdateMemoryRecordsRequest>
  Model::BatchUpdateMemoryRecordsOutcomeCallable BatchUpdateMemoryRecordsCallable(const BatchUpdateMemoryRecordsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::BatchUpdateMemoryRecords, request);
  }

  /**
   * An Async wrapper for BatchUpdateMemoryRecords that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchUpdateMemoryRecordsRequestT = Model::BatchUpdateMemoryRecordsRequest>
  void BatchUpdateMemoryRecordsAsync(const BatchUpdateMemoryRecordsRequestT& request,
                                     const BatchUpdateMemoryRecordsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::BatchUpdateMemoryRecords, request, handler, context);
  }

  /**
   * <p>Confirms the user authentication session for obtaining OAuth2.0 tokens for a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CompleteResourceTokenAuth">AWS
   * API Reference</a></p>
   */
  virtual Model::CompleteResourceTokenAuthOutcome CompleteResourceTokenAuth(const Model::CompleteResourceTokenAuthRequest& request) const;

  /**
   * A Callable wrapper for CompleteResourceTokenAuth that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CompleteResourceTokenAuthRequestT = Model::CompleteResourceTokenAuthRequest>
  Model::CompleteResourceTokenAuthOutcomeCallable CompleteResourceTokenAuthCallable(
      const CompleteResourceTokenAuthRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::CompleteResourceTokenAuth, request);
  }

  /**
   * An Async wrapper for CompleteResourceTokenAuth that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CompleteResourceTokenAuthRequestT = Model::CompleteResourceTokenAuthRequest>
  void CompleteResourceTokenAuthAsync(const CompleteResourceTokenAuthRequestT& request,
                                      const CompleteResourceTokenAuthResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::CompleteResourceTokenAuth, request, handler, context);
  }

  /**
   * <p>Creates an event in an AgentCore Memory resource. Events represent
   * interactions or activities that occur within a session and are associated with
   * specific actors.</p> <p>To use this operation, you must have the
   * <code>bedrock-agentcore:CreateEvent</code> permission.</p> <p>This operation is
   * subject to request rate limiting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CreateEvent">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateEventOutcome CreateEvent(const Model::CreateEventRequest& request) const;

  /**
   * A Callable wrapper for CreateEvent that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateEventRequestT = Model::CreateEventRequest>
  Model::CreateEventOutcomeCallable CreateEventCallable(const CreateEventRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::CreateEvent, request);
  }

  /**
   * An Async wrapper for CreateEvent that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateEventRequestT = Model::CreateEventRequest>
  void CreateEventAsync(const CreateEventRequestT& request, const CreateEventResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::CreateEvent, request, handler, context);
  }

  /**
   * <p>Deletes an event from an AgentCore Memory resource. When you delete an event,
   * it is permanently removed.</p> <p>To use this operation, you must have the
   * <code>bedrock-agentcore:DeleteEvent</code> permission.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/DeleteEvent">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteEventOutcome DeleteEvent(const Model::DeleteEventRequest& request) const;

  /**
   * A Callable wrapper for DeleteEvent that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteEventRequestT = Model::DeleteEventRequest>
  Model::DeleteEventOutcomeCallable DeleteEventCallable(const DeleteEventRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::DeleteEvent, request);
  }

  /**
   * An Async wrapper for DeleteEvent that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteEventRequestT = Model::DeleteEventRequest>
  void DeleteEventAsync(const DeleteEventRequestT& request, const DeleteEventResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::DeleteEvent, request, handler, context);
  }

  /**
   * <p>Deletes a memory record from an AgentCore Memory resource. When you delete a
   * memory record, it is permanently removed.</p> <p>To use this operation, you must
   * have the <code>bedrock-agentcore:DeleteMemoryRecord</code>
   * permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/DeleteMemoryRecord">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteMemoryRecordOutcome DeleteMemoryRecord(const Model::DeleteMemoryRecordRequest& request) const;

  /**
   * A Callable wrapper for DeleteMemoryRecord that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteMemoryRecordRequestT = Model::DeleteMemoryRecordRequest>
  Model::DeleteMemoryRecordOutcomeCallable DeleteMemoryRecordCallable(const DeleteMemoryRecordRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::DeleteMemoryRecord, request);
  }

  /**
   * An Async wrapper for DeleteMemoryRecord that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteMemoryRecordRequestT = Model::DeleteMemoryRecordRequest>
  void DeleteMemoryRecordAsync(const DeleteMemoryRecordRequestT& request, const DeleteMemoryRecordResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::DeleteMemoryRecord, request, handler, context);
  }

  /**
   * <p> Performs on-demand evaluation of agent traces using a specified evaluator.
   * This synchronous API accepts traces in OpenTelemetry format and returns
   * immediate scoring results with detailed explanations.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/Evaluate">AWS
   * API Reference</a></p>
   */
  virtual Model::EvaluateOutcome Evaluate(const Model::EvaluateRequest& request) const;

  /**
   * A Callable wrapper for Evaluate that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename EvaluateRequestT = Model::EvaluateRequest>
  Model::EvaluateOutcomeCallable EvaluateCallable(const EvaluateRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::Evaluate, request);
  }

  /**
   * An Async wrapper for Evaluate that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename EvaluateRequestT = Model::EvaluateRequest>
  void EvaluateAsync(const EvaluateRequestT& request, const EvaluateResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::Evaluate, request, handler, context);
  }

  /**
   * <p>Retrieves the A2A agent card associated with an AgentCore Runtime
   * agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GetAgentCard">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAgentCardOutcome GetAgentCard(const Model::GetAgentCardRequest& request) const;

  /**
   * A Callable wrapper for GetAgentCard that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetAgentCardRequestT = Model::GetAgentCardRequest>
  Model::GetAgentCardOutcomeCallable GetAgentCardCallable(const GetAgentCardRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::GetAgentCard, request);
  }

  /**
   * An Async wrapper for GetAgentCard that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetAgentCardRequestT = Model::GetAgentCardRequest>
  void GetAgentCardAsync(const GetAgentCardRequestT& request, const GetAgentCardResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::GetAgentCard, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific browser session in Amazon
   * Bedrock AgentCore. This operation returns the session's configuration, current
   * status, associated streams, and metadata.</p> <p>To get a browser session, you
   * must specify both the browser identifier and the session ID. The response
   * includes information about the session's viewport configuration, timeout
   * settings, and stream endpoints.</p> <p>The following operations are related to
   * <code>GetBrowserSession</code>:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_StartBrowserSession.html">StartBrowserSession</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_ListBrowserSessions.html">ListBrowserSessions</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_StopBrowserSession.html">StopBrowserSession</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GetBrowserSession">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBrowserSessionOutcome GetBrowserSession(const Model::GetBrowserSessionRequest& request) const;

  /**
   * A Callable wrapper for GetBrowserSession that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetBrowserSessionRequestT = Model::GetBrowserSessionRequest>
  Model::GetBrowserSessionOutcomeCallable GetBrowserSessionCallable(const GetBrowserSessionRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::GetBrowserSession, request);
  }

  /**
   * An Async wrapper for GetBrowserSession that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetBrowserSessionRequestT = Model::GetBrowserSessionRequest>
  void GetBrowserSessionAsync(const GetBrowserSessionRequestT& request, const GetBrowserSessionResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::GetBrowserSession, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific code interpreter session in
   * Amazon Bedrock AgentCore. This operation returns the session's configuration,
   * current status, and metadata.</p> <p>To get a code interpreter session, you must
   * specify both the code interpreter identifier and the session ID. The response
   * includes information about the session's timeout settings and current
   * status.</p> <p>The following operations are related to
   * <code>GetCodeInterpreterSession</code>:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_StartCodeInterpreterSession.html">StartCodeInterpreterSession</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_ListCodeInterpreterSessions.html">ListCodeInterpreterSessions</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_StopCodeInterpreterSession.html">StopCodeInterpreterSession</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GetCodeInterpreterSession">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCodeInterpreterSessionOutcome GetCodeInterpreterSession(const Model::GetCodeInterpreterSessionRequest& request) const;

  /**
   * A Callable wrapper for GetCodeInterpreterSession that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetCodeInterpreterSessionRequestT = Model::GetCodeInterpreterSessionRequest>
  Model::GetCodeInterpreterSessionOutcomeCallable GetCodeInterpreterSessionCallable(
      const GetCodeInterpreterSessionRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::GetCodeInterpreterSession, request);
  }

  /**
   * An Async wrapper for GetCodeInterpreterSession that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetCodeInterpreterSessionRequestT = Model::GetCodeInterpreterSessionRequest>
  void GetCodeInterpreterSessionAsync(const GetCodeInterpreterSessionRequestT& request,
                                      const GetCodeInterpreterSessionResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::GetCodeInterpreterSession, request, handler, context);
  }

  /**
   * <p>Retrieves information about a specific event in an AgentCore Memory
   * resource.</p> <p>To use this operation, you must have the
   * <code>bedrock-agentcore:GetEvent</code> permission.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GetEvent">AWS
   * API Reference</a></p>
   */
  virtual Model::GetEventOutcome GetEvent(const Model::GetEventRequest& request) const;

  /**
   * A Callable wrapper for GetEvent that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetEventRequestT = Model::GetEventRequest>
  Model::GetEventOutcomeCallable GetEventCallable(const GetEventRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::GetEvent, request);
  }

  /**
   * An Async wrapper for GetEvent that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetEventRequestT = Model::GetEventRequest>
  void GetEventAsync(const GetEventRequestT& request, const GetEventResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::GetEvent, request, handler, context);
  }

  /**
   * <p>Retrieves a specific memory record from an AgentCore Memory resource.</p>
   * <p>To use this operation, you must have the
   * <code>bedrock-agentcore:GetMemoryRecord</code> permission.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GetMemoryRecord">AWS
   * API Reference</a></p>
   */
  virtual Model::GetMemoryRecordOutcome GetMemoryRecord(const Model::GetMemoryRecordRequest& request) const;

  /**
   * A Callable wrapper for GetMemoryRecord that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetMemoryRecordRequestT = Model::GetMemoryRecordRequest>
  Model::GetMemoryRecordOutcomeCallable GetMemoryRecordCallable(const GetMemoryRecordRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::GetMemoryRecord, request);
  }

  /**
   * An Async wrapper for GetMemoryRecord that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetMemoryRecordRequestT = Model::GetMemoryRecordRequest>
  void GetMemoryRecordAsync(const GetMemoryRecordRequestT& request, const GetMemoryRecordResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::GetMemoryRecord, request, handler, context);
  }

  /**
   * <p>Retrieves the API key associated with an API key credential
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GetResourceApiKey">AWS
   * API Reference</a></p>
   */
  virtual Model::GetResourceApiKeyOutcome GetResourceApiKey(const Model::GetResourceApiKeyRequest& request) const;

  /**
   * A Callable wrapper for GetResourceApiKey that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetResourceApiKeyRequestT = Model::GetResourceApiKeyRequest>
  Model::GetResourceApiKeyOutcomeCallable GetResourceApiKeyCallable(const GetResourceApiKeyRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::GetResourceApiKey, request);
  }

  /**
   * An Async wrapper for GetResourceApiKey that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetResourceApiKeyRequestT = Model::GetResourceApiKeyRequest>
  void GetResourceApiKeyAsync(const GetResourceApiKeyRequestT& request, const GetResourceApiKeyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::GetResourceApiKey, request, handler, context);
  }

  /**
   * <p>Returns the OAuth 2.0 token of the provided resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GetResourceOauth2Token">AWS
   * API Reference</a></p>
   */
  virtual Model::GetResourceOauth2TokenOutcome GetResourceOauth2Token(const Model::GetResourceOauth2TokenRequest& request) const;

  /**
   * A Callable wrapper for GetResourceOauth2Token that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetResourceOauth2TokenRequestT = Model::GetResourceOauth2TokenRequest>
  Model::GetResourceOauth2TokenOutcomeCallable GetResourceOauth2TokenCallable(const GetResourceOauth2TokenRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::GetResourceOauth2Token, request);
  }

  /**
   * An Async wrapper for GetResourceOauth2Token that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetResourceOauth2TokenRequestT = Model::GetResourceOauth2TokenRequest>
  void GetResourceOauth2TokenAsync(const GetResourceOauth2TokenRequestT& request,
                                   const GetResourceOauth2TokenResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::GetResourceOauth2Token, request, handler, context);
  }

  /**
   * <p>Obtains a workload access token for agentic workloads not acting on behalf of
   * a user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GetWorkloadAccessToken">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWorkloadAccessTokenOutcome GetWorkloadAccessToken(const Model::GetWorkloadAccessTokenRequest& request) const;

  /**
   * A Callable wrapper for GetWorkloadAccessToken that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetWorkloadAccessTokenRequestT = Model::GetWorkloadAccessTokenRequest>
  Model::GetWorkloadAccessTokenOutcomeCallable GetWorkloadAccessTokenCallable(const GetWorkloadAccessTokenRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::GetWorkloadAccessToken, request);
  }

  /**
   * An Async wrapper for GetWorkloadAccessToken that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetWorkloadAccessTokenRequestT = Model::GetWorkloadAccessTokenRequest>
  void GetWorkloadAccessTokenAsync(const GetWorkloadAccessTokenRequestT& request,
                                   const GetWorkloadAccessTokenResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::GetWorkloadAccessToken, request, handler, context);
  }

  /**
   * <p>Obtains a workload access token for agentic workloads acting on behalf of a
   * user, using a JWT token.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GetWorkloadAccessTokenForJWT">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWorkloadAccessTokenForJWTOutcome GetWorkloadAccessTokenForJWT(
      const Model::GetWorkloadAccessTokenForJWTRequest& request) const;

  /**
   * A Callable wrapper for GetWorkloadAccessTokenForJWT that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetWorkloadAccessTokenForJWTRequestT = Model::GetWorkloadAccessTokenForJWTRequest>
  Model::GetWorkloadAccessTokenForJWTOutcomeCallable GetWorkloadAccessTokenForJWTCallable(
      const GetWorkloadAccessTokenForJWTRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::GetWorkloadAccessTokenForJWT, request);
  }

  /**
   * An Async wrapper for GetWorkloadAccessTokenForJWT that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetWorkloadAccessTokenForJWTRequestT = Model::GetWorkloadAccessTokenForJWTRequest>
  void GetWorkloadAccessTokenForJWTAsync(const GetWorkloadAccessTokenForJWTRequestT& request,
                                         const GetWorkloadAccessTokenForJWTResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::GetWorkloadAccessTokenForJWT, request, handler, context);
  }

  /**
   * <p>Obtains a workload access token for agentic workloads acting on behalf of a
   * user, using the user's ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GetWorkloadAccessTokenForUserId">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWorkloadAccessTokenForUserIdOutcome GetWorkloadAccessTokenForUserId(
      const Model::GetWorkloadAccessTokenForUserIdRequest& request) const;

  /**
   * A Callable wrapper for GetWorkloadAccessTokenForUserId that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetWorkloadAccessTokenForUserIdRequestT = Model::GetWorkloadAccessTokenForUserIdRequest>
  Model::GetWorkloadAccessTokenForUserIdOutcomeCallable GetWorkloadAccessTokenForUserIdCallable(
      const GetWorkloadAccessTokenForUserIdRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::GetWorkloadAccessTokenForUserId, request);
  }

  /**
   * An Async wrapper for GetWorkloadAccessTokenForUserId that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetWorkloadAccessTokenForUserIdRequestT = Model::GetWorkloadAccessTokenForUserIdRequest>
  void GetWorkloadAccessTokenForUserIdAsync(const GetWorkloadAccessTokenForUserIdRequestT& request,
                                            const GetWorkloadAccessTokenForUserIdResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::GetWorkloadAccessTokenForUserId, request, handler, context);
  }

  /**
   * <p>Sends a request to an agent or tool hosted in an Amazon Bedrock AgentCore
   * Runtime and receives responses in real-time. </p> <p>To invoke an agent you must
   * specify the AgentCore Runtime ARN and provide a payload containing your request.
   * You can optionally specify a qualifier to target a specific version or endpoint
   * of the agent.</p> <p>This operation supports streaming responses, allowing you
   * to receive partial responses as they become available. We recommend using
   * pagination to ensure that the operation returns quickly and successfully when
   * processing large responses.</p> <p>For example code, see <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/devguide/runtime-invoke-agent.html">Invoke
   * an AgentCore Runtime agent</a>. </p> <p>If you're integrating your agent with
   * OAuth, you can't use the Amazon Web Services SDK to call
   * <code>InvokeAgentRuntime</code>. Instead, make a HTTPS request to
   * <code>InvokeAgentRuntime</code>. For an example, see <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/devguide/runtime-oauth.html">Authenticate
   * and authorize with Inbound Auth and Outbound Auth</a>.</p> <p>To use this
   * operation, you must have the <code>bedrock-agentcore:InvokeAgentRuntime</code>
   * permission. If you are making a call to <code>InvokeAgentRuntime</code> on
   * behalf of a user ID with the
   * <code>X-Amzn-Bedrock-AgentCore-Runtime-User-Id</code> header, You require
   * permissions to both actions (<code>bedrock-agentcore:InvokeAgentRuntime</code>
   * and <code>bedrock-agentcore:InvokeAgentRuntimeForUser</code>). </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InvokeAgentRuntime">AWS
   * API Reference</a></p>
   */
  virtual Model::InvokeAgentRuntimeOutcome InvokeAgentRuntime(const Model::InvokeAgentRuntimeRequest& request) const;

  /**
   * A Callable wrapper for InvokeAgentRuntime that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename InvokeAgentRuntimeRequestT = Model::InvokeAgentRuntimeRequest>
  Model::InvokeAgentRuntimeOutcomeCallable InvokeAgentRuntimeCallable(const InvokeAgentRuntimeRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::InvokeAgentRuntime, request);
  }

  /**
   * An Async wrapper for InvokeAgentRuntime that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename InvokeAgentRuntimeRequestT = Model::InvokeAgentRuntimeRequest>
  void InvokeAgentRuntimeAsync(const InvokeAgentRuntimeRequestT& request, const InvokeAgentRuntimeResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::InvokeAgentRuntime, request, handler, context);
  }

  /**
   * <p>Executes code within an active code interpreter session in Amazon Bedrock
   * AgentCore. This operation processes the provided code, runs it in a secure
   * environment, and returns the execution results including output, errors, and
   * generated visualizations.</p> <p>To execute code, you must specify the code
   * interpreter identifier, session ID, and the code to run in the arguments
   * parameter. The operation returns a stream containing the execution results,
   * which can include text output, error messages, and data visualizations.</p>
   * <p>This operation is subject to request rate limiting based on your account's
   * service quotas.</p> <p>The following operations are related to
   * <code>InvokeCodeInterpreter</code>:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_StartCodeInterpreterSession.html">StartCodeInterpreterSession</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_GetCodeInterpreterSession.html">GetCodeInterpreterSession</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InvokeCodeInterpreter">AWS
   * API Reference</a></p>
   */
  virtual Model::InvokeCodeInterpreterOutcome InvokeCodeInterpreter(Model::InvokeCodeInterpreterRequest& request) const;

  /**
   * A Callable wrapper for InvokeCodeInterpreter that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename InvokeCodeInterpreterRequestT = Model::InvokeCodeInterpreterRequest>
  Model::InvokeCodeInterpreterOutcomeCallable InvokeCodeInterpreterCallable(InvokeCodeInterpreterRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::InvokeCodeInterpreter, request);
  }

  /**
   * An Async wrapper for InvokeCodeInterpreter that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename InvokeCodeInterpreterRequestT = Model::InvokeCodeInterpreterRequest>
  void InvokeCodeInterpreterAsync(InvokeCodeInterpreterRequestT& request, const InvokeCodeInterpreterResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::InvokeCodeInterpreter, request, handler, context);
  }

  /**
   * <p>Lists all actors in an AgentCore Memory resource. We recommend using
   * pagination to ensure that the operation returns quickly and successfully.</p>
   * <p>To use this operation, you must have the
   * <code>bedrock-agentcore:ListActors</code> permission.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ListActors">AWS
   * API Reference</a></p>
   */
  virtual Model::ListActorsOutcome ListActors(const Model::ListActorsRequest& request) const;

  /**
   * A Callable wrapper for ListActors that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListActorsRequestT = Model::ListActorsRequest>
  Model::ListActorsOutcomeCallable ListActorsCallable(const ListActorsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::ListActors, request);
  }

  /**
   * An Async wrapper for ListActors that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListActorsRequestT = Model::ListActorsRequest>
  void ListActorsAsync(const ListActorsRequestT& request, const ListActorsResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::ListActors, request, handler, context);
  }

  /**
   * <p>Retrieves a list of browser sessions in Amazon Bedrock AgentCore that match
   * the specified criteria. This operation returns summary information about each
   * session, including identifiers, status, and timestamps.</p> <p>You can filter
   * the results by browser identifier and session status. The operation supports
   * pagination to handle large result sets efficiently.</p> <p>We recommend using
   * pagination to ensure that the operation returns quickly and successfully when
   * retrieving large numbers of sessions.</p> <p>The following operations are
   * related to <code>ListBrowserSessions</code>:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_StartBrowserSession.html">StartBrowserSession</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_GetBrowserSession.html">GetBrowserSession</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ListBrowserSessions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBrowserSessionsOutcome ListBrowserSessions(const Model::ListBrowserSessionsRequest& request) const;

  /**
   * A Callable wrapper for ListBrowserSessions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListBrowserSessionsRequestT = Model::ListBrowserSessionsRequest>
  Model::ListBrowserSessionsOutcomeCallable ListBrowserSessionsCallable(const ListBrowserSessionsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::ListBrowserSessions, request);
  }

  /**
   * An Async wrapper for ListBrowserSessions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListBrowserSessionsRequestT = Model::ListBrowserSessionsRequest>
  void ListBrowserSessionsAsync(const ListBrowserSessionsRequestT& request, const ListBrowserSessionsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::ListBrowserSessions, request, handler, context);
  }

  /**
   * <p>Retrieves a list of code interpreter sessions in Amazon Bedrock AgentCore
   * that match the specified criteria. This operation returns summary information
   * about each session, including identifiers, status, and timestamps.</p> <p>You
   * can filter the results by code interpreter identifier and session status. The
   * operation supports pagination to handle large result sets efficiently.</p> <p>We
   * recommend using pagination to ensure that the operation returns quickly and
   * successfully when retrieving large numbers of sessions.</p> <p>The following
   * operations are related to <code>ListCodeInterpreterSessions</code>:</p> <ul>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_StartCodeInterpreterSession.html">StartCodeInterpreterSession</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_GetCodeInterpreterSession.html">GetCodeInterpreterSession</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ListCodeInterpreterSessions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCodeInterpreterSessionsOutcome ListCodeInterpreterSessions(
      const Model::ListCodeInterpreterSessionsRequest& request) const;

  /**
   * A Callable wrapper for ListCodeInterpreterSessions that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListCodeInterpreterSessionsRequestT = Model::ListCodeInterpreterSessionsRequest>
  Model::ListCodeInterpreterSessionsOutcomeCallable ListCodeInterpreterSessionsCallable(
      const ListCodeInterpreterSessionsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::ListCodeInterpreterSessions, request);
  }

  /**
   * An Async wrapper for ListCodeInterpreterSessions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListCodeInterpreterSessionsRequestT = Model::ListCodeInterpreterSessionsRequest>
  void ListCodeInterpreterSessionsAsync(const ListCodeInterpreterSessionsRequestT& request,
                                        const ListCodeInterpreterSessionsResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::ListCodeInterpreterSessions, request, handler, context);
  }

  /**
   * <p>Lists events in an AgentCore Memory resource based on specified criteria. We
   * recommend using pagination to ensure that the operation returns quickly and
   * successfully.</p> <p>To use this operation, you must have the
   * <code>bedrock-agentcore:ListEvents</code> permission.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ListEvents">AWS
   * API Reference</a></p>
   */
  virtual Model::ListEventsOutcome ListEvents(const Model::ListEventsRequest& request) const;

  /**
   * A Callable wrapper for ListEvents that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListEventsRequestT = Model::ListEventsRequest>
  Model::ListEventsOutcomeCallable ListEventsCallable(const ListEventsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::ListEvents, request);
  }

  /**
   * An Async wrapper for ListEvents that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListEventsRequestT = Model::ListEventsRequest>
  void ListEventsAsync(const ListEventsRequestT& request, const ListEventsResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::ListEvents, request, handler, context);
  }

  /**
   * <p>Lists all long-term memory extraction jobs that are eligible to be started
   * with optional filtering.</p> <p>To use this operation, you must have the
   * <code>bedrock-agentcore:ListMemoryExtractionJobs</code>
   * permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ListMemoryExtractionJobs">AWS
   * API Reference</a></p>
   */
  virtual Model::ListMemoryExtractionJobsOutcome ListMemoryExtractionJobs(const Model::ListMemoryExtractionJobsRequest& request) const;

  /**
   * A Callable wrapper for ListMemoryExtractionJobs that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListMemoryExtractionJobsRequestT = Model::ListMemoryExtractionJobsRequest>
  Model::ListMemoryExtractionJobsOutcomeCallable ListMemoryExtractionJobsCallable(const ListMemoryExtractionJobsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::ListMemoryExtractionJobs, request);
  }

  /**
   * An Async wrapper for ListMemoryExtractionJobs that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListMemoryExtractionJobsRequestT = Model::ListMemoryExtractionJobsRequest>
  void ListMemoryExtractionJobsAsync(const ListMemoryExtractionJobsRequestT& request,
                                     const ListMemoryExtractionJobsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::ListMemoryExtractionJobs, request, handler, context);
  }

  /**
   * <p>Lists memory records in an AgentCore Memory resource based on specified
   * criteria. We recommend using pagination to ensure that the operation returns
   * quickly and successfully.</p> <p>To use this operation, you must have the
   * <code>bedrock-agentcore:ListMemoryRecords</code> permission.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ListMemoryRecords">AWS
   * API Reference</a></p>
   */
  virtual Model::ListMemoryRecordsOutcome ListMemoryRecords(const Model::ListMemoryRecordsRequest& request) const;

  /**
   * A Callable wrapper for ListMemoryRecords that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListMemoryRecordsRequestT = Model::ListMemoryRecordsRequest>
  Model::ListMemoryRecordsOutcomeCallable ListMemoryRecordsCallable(const ListMemoryRecordsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::ListMemoryRecords, request);
  }

  /**
   * An Async wrapper for ListMemoryRecords that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListMemoryRecordsRequestT = Model::ListMemoryRecordsRequest>
  void ListMemoryRecordsAsync(const ListMemoryRecordsRequestT& request, const ListMemoryRecordsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::ListMemoryRecords, request, handler, context);
  }

  /**
   * <p>Lists sessions in an AgentCore Memory resource based on specified criteria.
   * We recommend using pagination to ensure that the operation returns quickly and
   * successfully.</p> <p>To use this operation, you must have the
   * <code>bedrock-agentcore:ListSessions</code> permission.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ListSessions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSessionsOutcome ListSessions(const Model::ListSessionsRequest& request) const;

  /**
   * A Callable wrapper for ListSessions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListSessionsRequestT = Model::ListSessionsRequest>
  Model::ListSessionsOutcomeCallable ListSessionsCallable(const ListSessionsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::ListSessions, request);
  }

  /**
   * An Async wrapper for ListSessions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListSessionsRequestT = Model::ListSessionsRequest>
  void ListSessionsAsync(const ListSessionsRequestT& request, const ListSessionsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::ListSessions, request, handler, context);
  }

  /**
   * <p>Searches for and retrieves memory records from an AgentCore Memory resource
   * based on specified search criteria. We recommend using pagination to ensure that
   * the operation returns quickly and successfully.</p> <p>To use this operation,
   * you must have the <code>bedrock-agentcore:RetrieveMemoryRecords</code>
   * permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/RetrieveMemoryRecords">AWS
   * API Reference</a></p>
   */
  virtual Model::RetrieveMemoryRecordsOutcome RetrieveMemoryRecords(const Model::RetrieveMemoryRecordsRequest& request) const;

  /**
   * A Callable wrapper for RetrieveMemoryRecords that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RetrieveMemoryRecordsRequestT = Model::RetrieveMemoryRecordsRequest>
  Model::RetrieveMemoryRecordsOutcomeCallable RetrieveMemoryRecordsCallable(const RetrieveMemoryRecordsRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::RetrieveMemoryRecords, request);
  }

  /**
   * An Async wrapper for RetrieveMemoryRecords that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RetrieveMemoryRecordsRequestT = Model::RetrieveMemoryRecordsRequest>
  void RetrieveMemoryRecordsAsync(const RetrieveMemoryRecordsRequestT& request, const RetrieveMemoryRecordsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::RetrieveMemoryRecords, request, handler, context);
  }

  /**
   * <p>Saves the current state of a browser session as a reusable profile in Amazon
   * Bedrock AgentCore. A browser profile captures persistent browser data such as
   * cookies and local storage from an active session, enabling you to reuse this
   * data in future browser sessions.</p> <p>To save a browser session profile, you
   * must specify the profile identifier, browser identifier, and session ID. The
   * session must be active when saving the profile. Once saved, the profile can be
   * used with the <code>StartBrowserSession</code> operation to initialize new
   * sessions with the stored browser state.</p> <p>Browser profiles are useful for
   * scenarios that require persistent authentication, maintaining user preferences
   * across sessions, or continuing tasks that depend on previously stored browser
   * data.</p> <p>The following operations are related to
   * <code>SaveBrowserSessionProfile</code>:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_StartBrowserSession.html">StartBrowserSession</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_GetBrowserSession.html">GetBrowserSession</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/SaveBrowserSessionProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::SaveBrowserSessionProfileOutcome SaveBrowserSessionProfile(const Model::SaveBrowserSessionProfileRequest& request) const;

  /**
   * A Callable wrapper for SaveBrowserSessionProfile that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SaveBrowserSessionProfileRequestT = Model::SaveBrowserSessionProfileRequest>
  Model::SaveBrowserSessionProfileOutcomeCallable SaveBrowserSessionProfileCallable(
      const SaveBrowserSessionProfileRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::SaveBrowserSessionProfile, request);
  }

  /**
   * An Async wrapper for SaveBrowserSessionProfile that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SaveBrowserSessionProfileRequestT = Model::SaveBrowserSessionProfileRequest>
  void SaveBrowserSessionProfileAsync(const SaveBrowserSessionProfileRequestT& request,
                                      const SaveBrowserSessionProfileResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::SaveBrowserSessionProfile, request, handler, context);
  }

  /**
   * <p>Creates and initializes a browser session in Amazon Bedrock AgentCore. The
   * session enables agents to navigate and interact with web content, extract
   * information from websites, and perform web-based tasks as part of their response
   * generation.</p> <p>To create a session, you must specify a browser identifier
   * and a name. You can also configure the viewport dimensions to control the
   * visible area of web content. The session remains active until it times out or
   * you explicitly stop it using the <code>StopBrowserSession</code> operation.</p>
   * <p>The following operations are related to <code>StartBrowserSession</code>:</p>
   * <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_GetBrowserSession.html">GetBrowserSession</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_UpdateBrowserStream.html">UpdateBrowserStream</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_SaveBrowserSessionProfile.html">SaveBrowserSessionProfile</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_StopBrowserSession.html">StopBrowserSession</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/StartBrowserSession">AWS
   * API Reference</a></p>
   */
  virtual Model::StartBrowserSessionOutcome StartBrowserSession(const Model::StartBrowserSessionRequest& request) const;

  /**
   * A Callable wrapper for StartBrowserSession that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartBrowserSessionRequestT = Model::StartBrowserSessionRequest>
  Model::StartBrowserSessionOutcomeCallable StartBrowserSessionCallable(const StartBrowserSessionRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::StartBrowserSession, request);
  }

  /**
   * An Async wrapper for StartBrowserSession that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartBrowserSessionRequestT = Model::StartBrowserSessionRequest>
  void StartBrowserSessionAsync(const StartBrowserSessionRequestT& request, const StartBrowserSessionResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::StartBrowserSession, request, handler, context);
  }

  /**
   * <p>Creates and initializes a code interpreter session in Amazon Bedrock
   * AgentCore. The session enables agents to execute code as part of their response
   * generation, supporting programming languages such as Python for data analysis,
   * visualization, and computation tasks.</p> <p>To create a session, you must
   * specify a code interpreter identifier and a name. The session remains active
   * until it times out or you explicitly stop it using the
   * <code>StopCodeInterpreterSession</code> operation.</p> <p>The following
   * operations are related to <code>StartCodeInterpreterSession</code>:</p> <ul>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_InvokeCodeInterpreter.html">InvokeCodeInterpreter</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_GetCodeInterpreterSession.html">GetCodeInterpreterSession</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_StopCodeInterpreterSession.html">StopCodeInterpreterSession</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/StartCodeInterpreterSession">AWS
   * API Reference</a></p>
   */
  virtual Model::StartCodeInterpreterSessionOutcome StartCodeInterpreterSession(
      const Model::StartCodeInterpreterSessionRequest& request) const;

  /**
   * A Callable wrapper for StartCodeInterpreterSession that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename StartCodeInterpreterSessionRequestT = Model::StartCodeInterpreterSessionRequest>
  Model::StartCodeInterpreterSessionOutcomeCallable StartCodeInterpreterSessionCallable(
      const StartCodeInterpreterSessionRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::StartCodeInterpreterSession, request);
  }

  /**
   * An Async wrapper for StartCodeInterpreterSession that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartCodeInterpreterSessionRequestT = Model::StartCodeInterpreterSessionRequest>
  void StartCodeInterpreterSessionAsync(const StartCodeInterpreterSessionRequestT& request,
                                        const StartCodeInterpreterSessionResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::StartCodeInterpreterSession, request, handler, context);
  }

  /**
   * <p> Starts a memory extraction job that processes events that failed extraction
   * previously in an AgentCore Memory resource and produces structured memory
   * records. When earlier extraction attempts have left events unprocessed, this job
   * will pick up and extract those as well. </p> <p>To use this operation, you must
   * have the <code>bedrock-agentcore:StartMemoryExtractionJob</code>
   * permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/StartMemoryExtractionJob">AWS
   * API Reference</a></p>
   */
  virtual Model::StartMemoryExtractionJobOutcome StartMemoryExtractionJob(const Model::StartMemoryExtractionJobRequest& request) const;

  /**
   * A Callable wrapper for StartMemoryExtractionJob that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartMemoryExtractionJobRequestT = Model::StartMemoryExtractionJobRequest>
  Model::StartMemoryExtractionJobOutcomeCallable StartMemoryExtractionJobCallable(const StartMemoryExtractionJobRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::StartMemoryExtractionJob, request);
  }

  /**
   * An Async wrapper for StartMemoryExtractionJob that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartMemoryExtractionJobRequestT = Model::StartMemoryExtractionJobRequest>
  void StartMemoryExtractionJobAsync(const StartMemoryExtractionJobRequestT& request,
                                     const StartMemoryExtractionJobResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::StartMemoryExtractionJob, request, handler, context);
  }

  /**
   * <p>Terminates an active browser session in Amazon Bedrock AgentCore. This
   * operation stops the session, releases associated resources, and makes the
   * session unavailable for further use.</p> <p>To stop a browser session, you must
   * specify both the browser identifier and the session ID. Once stopped, a session
   * cannot be restarted; you must create a new session using
   * <code>StartBrowserSession</code>.</p> <p>The following operations are related to
   * <code>StopBrowserSession</code>:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_StartBrowserSession.html">StartBrowserSession</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_GetBrowserSession.html">GetBrowserSession</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/StopBrowserSession">AWS
   * API Reference</a></p>
   */
  virtual Model::StopBrowserSessionOutcome StopBrowserSession(const Model::StopBrowserSessionRequest& request) const;

  /**
   * A Callable wrapper for StopBrowserSession that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StopBrowserSessionRequestT = Model::StopBrowserSessionRequest>
  Model::StopBrowserSessionOutcomeCallable StopBrowserSessionCallable(const StopBrowserSessionRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::StopBrowserSession, request);
  }

  /**
   * An Async wrapper for StopBrowserSession that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StopBrowserSessionRequestT = Model::StopBrowserSessionRequest>
  void StopBrowserSessionAsync(const StopBrowserSessionRequestT& request, const StopBrowserSessionResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::StopBrowserSession, request, handler, context);
  }

  /**
   * <p>Terminates an active code interpreter session in Amazon Bedrock AgentCore.
   * This operation stops the session, releases associated resources, and makes the
   * session unavailable for further use.</p> <p>To stop a code interpreter session,
   * you must specify both the code interpreter identifier and the session ID. Once
   * stopped, a session cannot be restarted; you must create a new session using
   * <code>StartCodeInterpreterSession</code>.</p> <p>The following operations are
   * related to <code>StopCodeInterpreterSession</code>:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_StartCodeInterpreterSession.html">StartCodeInterpreterSession</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock-agentcore/latest/APIReference/API_GetCodeInterpreterSession.html">GetCodeInterpreterSession</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/StopCodeInterpreterSession">AWS
   * API Reference</a></p>
   */
  virtual Model::StopCodeInterpreterSessionOutcome StopCodeInterpreterSession(
      const Model::StopCodeInterpreterSessionRequest& request) const;

  /**
   * A Callable wrapper for StopCodeInterpreterSession that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename StopCodeInterpreterSessionRequestT = Model::StopCodeInterpreterSessionRequest>
  Model::StopCodeInterpreterSessionOutcomeCallable StopCodeInterpreterSessionCallable(
      const StopCodeInterpreterSessionRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::StopCodeInterpreterSession, request);
  }

  /**
   * An Async wrapper for StopCodeInterpreterSession that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StopCodeInterpreterSessionRequestT = Model::StopCodeInterpreterSessionRequest>
  void StopCodeInterpreterSessionAsync(const StopCodeInterpreterSessionRequestT& request,
                                       const StopCodeInterpreterSessionResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::StopCodeInterpreterSession, request, handler, context);
  }

  /**
   * <p>Stops a session that is running in an running AgentCore Runtime
   * agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/StopRuntimeSession">AWS
   * API Reference</a></p>
   */
  virtual Model::StopRuntimeSessionOutcome StopRuntimeSession(const Model::StopRuntimeSessionRequest& request) const;

  /**
   * A Callable wrapper for StopRuntimeSession that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StopRuntimeSessionRequestT = Model::StopRuntimeSessionRequest>
  Model::StopRuntimeSessionOutcomeCallable StopRuntimeSessionCallable(const StopRuntimeSessionRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::StopRuntimeSession, request);
  }

  /**
   * An Async wrapper for StopRuntimeSession that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StopRuntimeSessionRequestT = Model::StopRuntimeSessionRequest>
  void StopRuntimeSessionAsync(const StopRuntimeSessionRequestT& request, const StopRuntimeSessionResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::StopRuntimeSession, request, handler, context);
  }

  /**
   * <p>Updates a browser stream. To use this operation, you must have permissions to
   * perform the bedrock:UpdateBrowserStream action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/UpdateBrowserStream">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateBrowserStreamOutcome UpdateBrowserStream(const Model::UpdateBrowserStreamRequest& request) const;

  /**
   * A Callable wrapper for UpdateBrowserStream that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateBrowserStreamRequestT = Model::UpdateBrowserStreamRequest>
  Model::UpdateBrowserStreamOutcomeCallable UpdateBrowserStreamCallable(const UpdateBrowserStreamRequestT& request) const {
    return SubmitCallable(&BedrockAgentCoreClient::UpdateBrowserStream, request);
  }

  /**
   * An Async wrapper for UpdateBrowserStream that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateBrowserStreamRequestT = Model::UpdateBrowserStreamRequest>
  void UpdateBrowserStreamAsync(const UpdateBrowserStreamRequestT& request, const UpdateBrowserStreamResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BedrockAgentCoreClient::UpdateBrowserStream, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<BedrockAgentCoreEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<BedrockAgentCoreClient>;
  void init(const BedrockAgentCoreClientConfiguration& clientConfiguration);

  BedrockAgentCoreClientConfiguration m_clientConfiguration;
  std::shared_ptr<BedrockAgentCoreEndpointProviderBase> m_endpointProvider;
};

}  // namespace BedrockAgentCore
}  // namespace Aws
