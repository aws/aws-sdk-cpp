/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace BedrockAgentCore
{
namespace Model
{

  /**
   */
  class InvokeAgentRuntimeRequest : public StreamingBedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeAgentRuntime"; }

    AWS_BEDROCKAGENTCORE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_BEDROCKAGENTCORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The desired MIME type for the response from the agent runtime. This tells the
     * agent runtime what format to use for the response data. Common values include
     * application/json for JSON data.</p>
     */
    inline const Aws::String& GetAccept() const { return m_accept; }
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
    template<typename AcceptT = Aws::String>
    void SetAccept(AcceptT&& value) { m_acceptHasBeenSet = true; m_accept = std::forward<AcceptT>(value); }
    template<typename AcceptT = Aws::String>
    InvokeAgentRuntimeRequest& WithAccept(AcceptT&& value) { SetAccept(std::forward<AcceptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the MCP session.</p>
     */
    inline const Aws::String& GetMcpSessionId() const { return m_mcpSessionId; }
    inline bool McpSessionIdHasBeenSet() const { return m_mcpSessionIdHasBeenSet; }
    template<typename McpSessionIdT = Aws::String>
    void SetMcpSessionId(McpSessionIdT&& value) { m_mcpSessionIdHasBeenSet = true; m_mcpSessionId = std::forward<McpSessionIdT>(value); }
    template<typename McpSessionIdT = Aws::String>
    InvokeAgentRuntimeRequest& WithMcpSessionId(McpSessionIdT&& value) { SetMcpSessionId(std::forward<McpSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the runtime session.</p>
     */
    inline const Aws::String& GetRuntimeSessionId() const { return m_runtimeSessionId; }
    inline bool RuntimeSessionIdHasBeenSet() const { return m_runtimeSessionIdHasBeenSet; }
    template<typename RuntimeSessionIdT = Aws::String>
    void SetRuntimeSessionId(RuntimeSessionIdT&& value) { m_runtimeSessionIdHasBeenSet = true; m_runtimeSessionId = std::forward<RuntimeSessionIdT>(value); }
    template<typename RuntimeSessionIdT = Aws::String>
    InvokeAgentRuntimeRequest& WithRuntimeSessionId(RuntimeSessionIdT&& value) { SetRuntimeSessionId(std::forward<RuntimeSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the MCP protocol being used.</p>
     */
    inline const Aws::String& GetMcpProtocolVersion() const { return m_mcpProtocolVersion; }
    inline bool McpProtocolVersionHasBeenSet() const { return m_mcpProtocolVersionHasBeenSet; }
    template<typename McpProtocolVersionT = Aws::String>
    void SetMcpProtocolVersion(McpProtocolVersionT&& value) { m_mcpProtocolVersionHasBeenSet = true; m_mcpProtocolVersion = std::forward<McpProtocolVersionT>(value); }
    template<typename McpProtocolVersionT = Aws::String>
    InvokeAgentRuntimeRequest& WithMcpProtocolVersion(McpProtocolVersionT&& value) { SetMcpProtocolVersion(std::forward<McpProtocolVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the runtime user.</p>
     */
    inline const Aws::String& GetRuntimeUserId() const { return m_runtimeUserId; }
    inline bool RuntimeUserIdHasBeenSet() const { return m_runtimeUserIdHasBeenSet; }
    template<typename RuntimeUserIdT = Aws::String>
    void SetRuntimeUserId(RuntimeUserIdT&& value) { m_runtimeUserIdHasBeenSet = true; m_runtimeUserId = std::forward<RuntimeUserIdT>(value); }
    template<typename RuntimeUserIdT = Aws::String>
    InvokeAgentRuntimeRequest& WithRuntimeUserId(RuntimeUserIdT&& value) { SetRuntimeUserId(std::forward<RuntimeUserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trace identifier for request tracking.</p>
     */
    inline const Aws::String& GetTraceId() const { return m_traceId; }
    inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
    template<typename TraceIdT = Aws::String>
    void SetTraceId(TraceIdT&& value) { m_traceIdHasBeenSet = true; m_traceId = std::forward<TraceIdT>(value); }
    template<typename TraceIdT = Aws::String>
    InvokeAgentRuntimeRequest& WithTraceId(TraceIdT&& value) { SetTraceId(std::forward<TraceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent trace information for distributed tracing.</p>
     */
    inline const Aws::String& GetTraceParent() const { return m_traceParent; }
    inline bool TraceParentHasBeenSet() const { return m_traceParentHasBeenSet; }
    template<typename TraceParentT = Aws::String>
    void SetTraceParent(TraceParentT&& value) { m_traceParentHasBeenSet = true; m_traceParent = std::forward<TraceParentT>(value); }
    template<typename TraceParentT = Aws::String>
    InvokeAgentRuntimeRequest& WithTraceParent(TraceParentT&& value) { SetTraceParent(std::forward<TraceParentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trace state information for distributed tracing.</p>
     */
    inline const Aws::String& GetTraceState() const { return m_traceState; }
    inline bool TraceStateHasBeenSet() const { return m_traceStateHasBeenSet; }
    template<typename TraceStateT = Aws::String>
    void SetTraceState(TraceStateT&& value) { m_traceStateHasBeenSet = true; m_traceState = std::forward<TraceStateT>(value); }
    template<typename TraceStateT = Aws::String>
    InvokeAgentRuntimeRequest& WithTraceState(TraceStateT&& value) { SetTraceState(std::forward<TraceStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional context information for distributed tracing.</p>
     */
    inline const Aws::String& GetBaggage() const { return m_baggage; }
    inline bool BaggageHasBeenSet() const { return m_baggageHasBeenSet; }
    template<typename BaggageT = Aws::String>
    void SetBaggage(BaggageT&& value) { m_baggageHasBeenSet = true; m_baggage = std::forward<BaggageT>(value); }
    template<typename BaggageT = Aws::String>
    InvokeAgentRuntimeRequest& WithBaggage(BaggageT&& value) { SetBaggage(std::forward<BaggageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Resource Name (ARN) of the agent runtime to invoke.
     * The ARN uniquely identifies the agent runtime resource in Amazon Bedrock.</p>
     */
    inline const Aws::String& GetAgentRuntimeArn() const { return m_agentRuntimeArn; }
    inline bool AgentRuntimeArnHasBeenSet() const { return m_agentRuntimeArnHasBeenSet; }
    template<typename AgentRuntimeArnT = Aws::String>
    void SetAgentRuntimeArn(AgentRuntimeArnT&& value) { m_agentRuntimeArnHasBeenSet = true; m_agentRuntimeArn = std::forward<AgentRuntimeArnT>(value); }
    template<typename AgentRuntimeArnT = Aws::String>
    InvokeAgentRuntimeRequest& WithAgentRuntimeArn(AgentRuntimeArnT&& value) { SetAgentRuntimeArn(std::forward<AgentRuntimeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The qualifier to use for the agent runtime. This can be a version number or
     * an endpoint name that points to a specific version. If not specified, Amazon
     * Bedrock uses the default version of the agent runtime.</p>
     */
    inline const Aws::String& GetQualifier() const { return m_qualifier; }
    inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
    template<typename QualifierT = Aws::String>
    void SetQualifier(QualifierT&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::forward<QualifierT>(value); }
    template<typename QualifierT = Aws::String>
    InvokeAgentRuntimeRequest& WithQualifier(QualifierT&& value) { SetQualifier(std::forward<QualifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::String m_mcpSessionId;
    bool m_mcpSessionIdHasBeenSet = false;

    Aws::String m_runtimeSessionId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_runtimeSessionIdHasBeenSet = true;

    Aws::String m_mcpProtocolVersion;
    bool m_mcpProtocolVersionHasBeenSet = false;

    Aws::String m_runtimeUserId;
    bool m_runtimeUserIdHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;

    Aws::String m_traceParent;
    bool m_traceParentHasBeenSet = false;

    Aws::String m_traceState;
    bool m_traceStateHasBeenSet = false;

    Aws::String m_baggage;
    bool m_baggageHasBeenSet = false;

    Aws::String m_agentRuntimeArn;
    bool m_agentRuntimeArnHasBeenSet = false;

    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet = false;

  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
