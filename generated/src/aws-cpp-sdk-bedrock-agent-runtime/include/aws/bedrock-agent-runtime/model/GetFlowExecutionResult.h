/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/FlowExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/FlowExecutionError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{
  class GetFlowExecutionResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API GetFlowExecutionResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API GetFlowExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API GetFlowExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the flow
     * execution.</p>
     */
    inline const Aws::String& GetExecutionArn() const { return m_executionArn; }
    template<typename ExecutionArnT = Aws::String>
    void SetExecutionArn(ExecutionArnT&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::forward<ExecutionArnT>(value); }
    template<typename ExecutionArnT = Aws::String>
    GetFlowExecutionResult& WithExecutionArn(ExecutionArnT&& value) { SetExecutionArn(std::forward<ExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the flow execution.</p> <p>Flow executions time out
     * after 24 hours.</p>
     */
    inline FlowExecutionStatus GetStatus() const { return m_status; }
    inline void SetStatus(FlowExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetFlowExecutionResult& WithStatus(FlowExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the flow execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetFlowExecutionResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the flow execution ended. This field is only populated
     * when the execution has completed, failed, timed out, or been aborted.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    GetFlowExecutionResult& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of errors that occurred during the flow execution. Each error includes
     * an error code, message, and the node where the error occurred, if
     * applicable.</p>
     */
    inline const Aws::Vector<FlowExecutionError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<FlowExecutionError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<FlowExecutionError>>
    GetFlowExecutionResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = FlowExecutionError>
    GetFlowExecutionResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow alias used for the execution.</p>
     */
    inline const Aws::String& GetFlowAliasIdentifier() const { return m_flowAliasIdentifier; }
    template<typename FlowAliasIdentifierT = Aws::String>
    void SetFlowAliasIdentifier(FlowAliasIdentifierT&& value) { m_flowAliasIdentifierHasBeenSet = true; m_flowAliasIdentifier = std::forward<FlowAliasIdentifierT>(value); }
    template<typename FlowAliasIdentifierT = Aws::String>
    GetFlowExecutionResult& WithFlowAliasIdentifier(FlowAliasIdentifierT&& value) { SetFlowAliasIdentifier(std::forward<FlowAliasIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow.</p>
     */
    inline const Aws::String& GetFlowIdentifier() const { return m_flowIdentifier; }
    template<typename FlowIdentifierT = Aws::String>
    void SetFlowIdentifier(FlowIdentifierT&& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = std::forward<FlowIdentifierT>(value); }
    template<typename FlowIdentifierT = Aws::String>
    GetFlowExecutionResult& WithFlowIdentifier(FlowIdentifierT&& value) { SetFlowIdentifier(std::forward<FlowIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the flow used for the execution.</p>
     */
    inline const Aws::String& GetFlowVersion() const { return m_flowVersion; }
    template<typename FlowVersionT = Aws::String>
    void SetFlowVersion(FlowVersionT&& value) { m_flowVersionHasBeenSet = true; m_flowVersion = std::forward<FlowVersionT>(value); }
    template<typename FlowVersionT = Aws::String>
    GetFlowExecutionResult& WithFlowVersion(FlowVersionT&& value) { SetFlowVersion(std::forward<FlowVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFlowExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;

    FlowExecutionStatus m_status{FlowExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    Aws::Vector<FlowExecutionError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_flowAliasIdentifier;
    bool m_flowAliasIdentifierHasBeenSet = false;

    Aws::String m_flowIdentifier;
    bool m_flowIdentifierHasBeenSet = false;

    Aws::String m_flowVersion;
    bool m_flowVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
