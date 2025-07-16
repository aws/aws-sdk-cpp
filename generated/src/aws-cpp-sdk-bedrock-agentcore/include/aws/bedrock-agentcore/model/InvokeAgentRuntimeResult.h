/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace BedrockAgentCore
{
namespace Model
{
  class InvokeAgentRuntimeResult
  {
  public:
    AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeResult() = default;
    AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeResult(InvokeAgentRuntimeResult&&) = default;
    AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeResult& operator=(InvokeAgentRuntimeResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    InvokeAgentRuntimeResult(const InvokeAgentRuntimeResult&) = delete;
    InvokeAgentRuntimeResult& operator=(const InvokeAgentRuntimeResult&) = delete;


    AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The identifier of the runtime session.</p>
     */
    inline const Aws::String& GetRuntimeSessionId() const { return m_runtimeSessionId; }
    template<typename RuntimeSessionIdT = Aws::String>
    void SetRuntimeSessionId(RuntimeSessionIdT&& value) { m_runtimeSessionIdHasBeenSet = true; m_runtimeSessionId = std::forward<RuntimeSessionIdT>(value); }
    template<typename RuntimeSessionIdT = Aws::String>
    InvokeAgentRuntimeResult& WithRuntimeSessionId(RuntimeSessionIdT&& value) { SetRuntimeSessionId(std::forward<RuntimeSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the MCP session.</p>
     */
    inline const Aws::String& GetMcpSessionId() const { return m_mcpSessionId; }
    template<typename McpSessionIdT = Aws::String>
    void SetMcpSessionId(McpSessionIdT&& value) { m_mcpSessionIdHasBeenSet = true; m_mcpSessionId = std::forward<McpSessionIdT>(value); }
    template<typename McpSessionIdT = Aws::String>
    InvokeAgentRuntimeResult& WithMcpSessionId(McpSessionIdT&& value) { SetMcpSessionId(std::forward<McpSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the MCP protocol being used.</p>
     */
    inline const Aws::String& GetMcpProtocolVersion() const { return m_mcpProtocolVersion; }
    template<typename McpProtocolVersionT = Aws::String>
    void SetMcpProtocolVersion(McpProtocolVersionT&& value) { m_mcpProtocolVersionHasBeenSet = true; m_mcpProtocolVersion = std::forward<McpProtocolVersionT>(value); }
    template<typename McpProtocolVersionT = Aws::String>
    InvokeAgentRuntimeResult& WithMcpProtocolVersion(McpProtocolVersionT&& value) { SetMcpProtocolVersion(std::forward<McpProtocolVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trace identifier for request tracking.</p>
     */
    inline const Aws::String& GetTraceId() const { return m_traceId; }
    template<typename TraceIdT = Aws::String>
    void SetTraceId(TraceIdT&& value) { m_traceIdHasBeenSet = true; m_traceId = std::forward<TraceIdT>(value); }
    template<typename TraceIdT = Aws::String>
    InvokeAgentRuntimeResult& WithTraceId(TraceIdT&& value) { SetTraceId(std::forward<TraceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent trace information for distributed tracing.</p>
     */
    inline const Aws::String& GetTraceParent() const { return m_traceParent; }
    template<typename TraceParentT = Aws::String>
    void SetTraceParent(TraceParentT&& value) { m_traceParentHasBeenSet = true; m_traceParent = std::forward<TraceParentT>(value); }
    template<typename TraceParentT = Aws::String>
    InvokeAgentRuntimeResult& WithTraceParent(TraceParentT&& value) { SetTraceParent(std::forward<TraceParentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trace state information for distributed tracing.</p>
     */
    inline const Aws::String& GetTraceState() const { return m_traceState; }
    template<typename TraceStateT = Aws::String>
    void SetTraceState(TraceStateT&& value) { m_traceStateHasBeenSet = true; m_traceState = std::forward<TraceStateT>(value); }
    template<typename TraceStateT = Aws::String>
    InvokeAgentRuntimeResult& WithTraceState(TraceStateT&& value) { SetTraceState(std::forward<TraceStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional context information for distributed tracing.</p>
     */
    inline const Aws::String& GetBaggage() const { return m_baggage; }
    template<typename BaggageT = Aws::String>
    void SetBaggage(BaggageT&& value) { m_baggageHasBeenSet = true; m_baggage = std::forward<BaggageT>(value); }
    template<typename BaggageT = Aws::String>
    InvokeAgentRuntimeResult& WithBaggage(BaggageT&& value) { SetBaggage(std::forward<BaggageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the response data. This indicates how to interpret the
     * response data. Common values include application/json for JSON data.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    InvokeAgentRuntimeResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response data from the agent runtime. The format of this data depends on
     * the specific agent configuration and the requested accept type. For most agents,
     * this is a JSON object containing the agent's response to the user's request.</p>
     */
    inline Aws::IOStream& GetResponse() const { return m_response.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_response = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The HTTP status code of the response. A status code of 200 indicates a
     * successful operation. Other status codes indicate various error conditions.</p>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline InvokeAgentRuntimeResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    InvokeAgentRuntimeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_runtimeSessionId;
    bool m_runtimeSessionIdHasBeenSet = false;

    Aws::String m_mcpSessionId;
    bool m_mcpSessionIdHasBeenSet = false;

    Aws::String m_mcpProtocolVersion;
    bool m_mcpProtocolVersionHasBeenSet = false;

    Aws::String m_traceId;
    bool m_traceIdHasBeenSet = false;

    Aws::String m_traceParent;
    bool m_traceParentHasBeenSet = false;

    Aws::String m_traceState;
    bool m_traceStateHasBeenSet = false;

    Aws::String m_baggage;
    bool m_baggageHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::Utils::Stream::ResponseStream m_response{};
    bool m_responseHasBeenSet = false;

    int m_statusCode{0};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
