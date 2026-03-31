/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/InvokeAgentRuntimeCommandHandler.h>
#include <aws/bedrock-agentcore/model/InvokeAgentRuntimeCommandRequestBody.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Request for InvokeAgentRuntimeCommand operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InvokeAgentRuntimeCommandRequest">AWS
 * API Reference</a></p>
 */
class InvokeAgentRuntimeCommandRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeAgentRuntimeCommand"; }

  inline virtual bool HasEventStreamResponse() const override { return true; }
  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  AWS_BEDROCKAGENTCORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Underlying Event Stream Decoder.
   */
  inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline InvokeAgentRuntimeCommandHandler& GetEventStreamHandler() { return m_handler; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline void SetEventStreamHandler(const InvokeAgentRuntimeCommandHandler& value) {
    m_handler = value;
    m_decoder.ResetEventStreamHandler(&m_handler);
  }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline InvokeAgentRuntimeCommandRequest& WithEventStreamHandler(const InvokeAgentRuntimeCommandHandler& value) {
    SetEventStreamHandler(value);
    return *this;
  }

  ///@{
  /**
   * <p>The MIME type of the input data in the request payload. This tells the agent
   * runtime how to interpret the payload data. Common values include
   * application/json for JSON data.</p>
   */
  inline const Aws::String& GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  template <typename ContentTypeT = Aws::String>
  void SetContentType(ContentTypeT&& value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = std::forward<ContentTypeT>(value);
  }
  template <typename ContentTypeT = Aws::String>
  InvokeAgentRuntimeCommandRequest& WithContentType(ContentTypeT&& value) {
    SetContentType(std::forward<ContentTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired MIME type for the response from the agent runtime command. This
   * tells the agent runtime what format to use for the response data. Common values
   * include application/json for JSON data.</p>
   */
  inline const Aws::String& GetAccept() const { return m_accept; }
  inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
  template <typename AcceptT = Aws::String>
  void SetAccept(AcceptT&& value) {
    m_acceptHasBeenSet = true;
    m_accept = std::forward<AcceptT>(value);
  }
  template <typename AcceptT = Aws::String>
  InvokeAgentRuntimeCommandRequest& WithAccept(AcceptT&& value) {
    SetAccept(std::forward<AcceptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the runtime session in which to execute the command.
   * This session ID is used to maintain state and context across multiple command
   * invocations.</p>
   */
  inline const Aws::String& GetRuntimeSessionId() const { return m_runtimeSessionId; }
  inline bool RuntimeSessionIdHasBeenSet() const { return m_runtimeSessionIdHasBeenSet; }
  template <typename RuntimeSessionIdT = Aws::String>
  void SetRuntimeSessionId(RuntimeSessionIdT&& value) {
    m_runtimeSessionIdHasBeenSet = true;
    m_runtimeSessionId = std::forward<RuntimeSessionIdT>(value);
  }
  template <typename RuntimeSessionIdT = Aws::String>
  InvokeAgentRuntimeCommandRequest& WithRuntimeSessionId(RuntimeSessionIdT&& value) {
    SetRuntimeSessionId(std::forward<RuntimeSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trace identifier for request tracking.</p>
   */
  inline const Aws::String& GetTraceId() const { return m_traceId; }
  inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
  template <typename TraceIdT = Aws::String>
  void SetTraceId(TraceIdT&& value) {
    m_traceIdHasBeenSet = true;
    m_traceId = std::forward<TraceIdT>(value);
  }
  template <typename TraceIdT = Aws::String>
  InvokeAgentRuntimeCommandRequest& WithTraceId(TraceIdT&& value) {
    SetTraceId(std::forward<TraceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parent trace information for distributed tracing.</p>
   */
  inline const Aws::String& GetTraceParent() const { return m_traceParent; }
  inline bool TraceParentHasBeenSet() const { return m_traceParentHasBeenSet; }
  template <typename TraceParentT = Aws::String>
  void SetTraceParent(TraceParentT&& value) {
    m_traceParentHasBeenSet = true;
    m_traceParent = std::forward<TraceParentT>(value);
  }
  template <typename TraceParentT = Aws::String>
  InvokeAgentRuntimeCommandRequest& WithTraceParent(TraceParentT&& value) {
    SetTraceParent(std::forward<TraceParentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trace state information for distributed tracing.</p>
   */
  inline const Aws::String& GetTraceState() const { return m_traceState; }
  inline bool TraceStateHasBeenSet() const { return m_traceStateHasBeenSet; }
  template <typename TraceStateT = Aws::String>
  void SetTraceState(TraceStateT&& value) {
    m_traceStateHasBeenSet = true;
    m_traceState = std::forward<TraceStateT>(value);
  }
  template <typename TraceStateT = Aws::String>
  InvokeAgentRuntimeCommandRequest& WithTraceState(TraceStateT&& value) {
    SetTraceState(std::forward<TraceStateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional context information for distributed tracing.</p>
   */
  inline const Aws::String& GetBaggage() const { return m_baggage; }
  inline bool BaggageHasBeenSet() const { return m_baggageHasBeenSet; }
  template <typename BaggageT = Aws::String>
  void SetBaggage(BaggageT&& value) {
    m_baggageHasBeenSet = true;
    m_baggage = std::forward<BaggageT>(value);
  }
  template <typename BaggageT = Aws::String>
  InvokeAgentRuntimeCommandRequest& WithBaggage(BaggageT&& value) {
    SetBaggage(std::forward<BaggageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the agent runtime on which to execute the
   * command. This identifies the specific agent runtime environment where the
   * command will run.</p>
   */
  inline const Aws::String& GetAgentRuntimeArn() const { return m_agentRuntimeArn; }
  inline bool AgentRuntimeArnHasBeenSet() const { return m_agentRuntimeArnHasBeenSet; }
  template <typename AgentRuntimeArnT = Aws::String>
  void SetAgentRuntimeArn(AgentRuntimeArnT&& value) {
    m_agentRuntimeArnHasBeenSet = true;
    m_agentRuntimeArn = std::forward<AgentRuntimeArnT>(value);
  }
  template <typename AgentRuntimeArnT = Aws::String>
  InvokeAgentRuntimeCommandRequest& WithAgentRuntimeArn(AgentRuntimeArnT&& value) {
    SetAgentRuntimeArn(std::forward<AgentRuntimeArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The qualifier to use for the agent runtime. This is an endpoint name that
   * points to a specific version. If not specified, Amazon Bedrock AgentCore uses
   * the default endpoint of the agent runtime.</p>
   */
  inline const Aws::String& GetQualifier() const { return m_qualifier; }
  inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
  template <typename QualifierT = Aws::String>
  void SetQualifier(QualifierT&& value) {
    m_qualifierHasBeenSet = true;
    m_qualifier = std::forward<QualifierT>(value);
  }
  template <typename QualifierT = Aws::String>
  InvokeAgentRuntimeCommandRequest& WithQualifier(QualifierT&& value) {
    SetQualifier(std::forward<QualifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Amazon Web Services account for the agent runtime
   * resource. This parameter is required when you specify an agent ID instead of the
   * full ARN for <code>agentRuntimeArn</code>.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  InvokeAgentRuntimeCommandRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The request body containing the command to execute and optional configuration
   * parameters such as timeout settings.</p>
   */
  inline const InvokeAgentRuntimeCommandRequestBody& GetRequestBody() const { return m_requestBody; }
  inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
  template <typename RequestBodyT = InvokeAgentRuntimeCommandRequestBody>
  void SetRequestBody(RequestBodyT&& value) {
    m_requestBodyHasBeenSet = true;
    m_requestBody = std::forward<RequestBodyT>(value);
  }
  template <typename RequestBodyT = InvokeAgentRuntimeCommandRequestBody>
  InvokeAgentRuntimeCommandRequest& WithRequestBody(RequestBodyT&& value) {
    SetRequestBody(std::forward<RequestBodyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contentType;

  Aws::String m_accept;

  Aws::String m_runtimeSessionId{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_traceId;

  Aws::String m_traceParent;

  Aws::String m_traceState;

  Aws::String m_baggage;

  Aws::String m_agentRuntimeArn;

  Aws::String m_qualifier;

  Aws::String m_accountId;

  InvokeAgentRuntimeCommandRequestBody m_requestBody;
  InvokeAgentRuntimeCommandHandler m_handler;
  Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  bool m_contentTypeHasBeenSet = false;
  bool m_acceptHasBeenSet = false;
  bool m_runtimeSessionIdHasBeenSet = true;
  bool m_traceIdHasBeenSet = false;
  bool m_traceParentHasBeenSet = false;
  bool m_traceStateHasBeenSet = false;
  bool m_baggageHasBeenSet = false;
  bool m_agentRuntimeArnHasBeenSet = false;
  bool m_qualifierHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_requestBodyHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
