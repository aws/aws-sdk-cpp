/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/BadGatewayException.h>
#include <aws/bedrock-agent-runtime/model/DependencyFailedException.h>
#include <aws/bedrock-agent-runtime/model/FlowCompletionEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowMultiTurnInputRequestEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowOutputEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceEvent.h>
#include <aws/bedrock-agent-runtime/model/InternalServerException.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>The output of the flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowResponseStream">AWS
   * API Reference</a></p>
   */
  class FlowResponseStream
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FlowResponseStream() = default;
    AWS_BEDROCKAGENTRUNTIME_API FlowResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The request is denied because of missing access permissions. Check your
     * permissions and retry your request.</p>
     */
    inline const BedrockAgentRuntimeError& GetAccessDeniedException() const { return m_accessDeniedException; }
    inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }
    template<typename AccessDeniedExceptionT = BedrockAgentRuntimeError>
    void SetAccessDeniedException(AccessDeniedExceptionT&& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = std::forward<AccessDeniedExceptionT>(value); }
    template<typename AccessDeniedExceptionT = BedrockAgentRuntimeError>
    FlowResponseStream& WithAccessDeniedException(AccessDeniedExceptionT&& value) { SetAccessDeniedException(std::forward<AccessDeniedExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was an issue with a dependency due to a server issue. Retry your
     * request.</p>
     */
    inline const BadGatewayException& GetBadGatewayException() const { return m_badGatewayException; }
    inline bool BadGatewayExceptionHasBeenSet() const { return m_badGatewayExceptionHasBeenSet; }
    template<typename BadGatewayExceptionT = BadGatewayException>
    void SetBadGatewayException(BadGatewayExceptionT&& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = std::forward<BadGatewayExceptionT>(value); }
    template<typename BadGatewayExceptionT = BadGatewayException>
    FlowResponseStream& WithBadGatewayException(BadGatewayExceptionT&& value) { SetBadGatewayException(std::forward<BadGatewayExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was a conflict performing an operation. Resolve the conflict and retry
     * your request.</p>
     */
    inline const BedrockAgentRuntimeError& GetConflictException() const { return m_conflictException; }
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
    template<typename ConflictExceptionT = BedrockAgentRuntimeError>
    void SetConflictException(ConflictExceptionT&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::forward<ConflictExceptionT>(value); }
    template<typename ConflictExceptionT = BedrockAgentRuntimeError>
    FlowResponseStream& WithConflictException(ConflictExceptionT&& value) { SetConflictException(std::forward<ConflictExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was an issue with a dependency. Check the resource configurations and
     * retry the request.</p>
     */
    inline const DependencyFailedException& GetDependencyFailedException() const { return m_dependencyFailedException; }
    inline bool DependencyFailedExceptionHasBeenSet() const { return m_dependencyFailedExceptionHasBeenSet; }
    template<typename DependencyFailedExceptionT = DependencyFailedException>
    void SetDependencyFailedException(DependencyFailedExceptionT&& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = std::forward<DependencyFailedExceptionT>(value); }
    template<typename DependencyFailedExceptionT = DependencyFailedException>
    FlowResponseStream& WithDependencyFailedException(DependencyFailedExceptionT&& value) { SetDependencyFailedException(std::forward<DependencyFailedExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about why the flow completed.</p>
     */
    inline const FlowCompletionEvent& GetFlowCompletionEvent() const { return m_flowCompletionEvent; }
    inline bool FlowCompletionEventHasBeenSet() const { return m_flowCompletionEventHasBeenSet; }
    template<typename FlowCompletionEventT = FlowCompletionEvent>
    void SetFlowCompletionEvent(FlowCompletionEventT&& value) { m_flowCompletionEventHasBeenSet = true; m_flowCompletionEvent = std::forward<FlowCompletionEventT>(value); }
    template<typename FlowCompletionEventT = FlowCompletionEvent>
    FlowResponseStream& WithFlowCompletionEvent(FlowCompletionEventT&& value) { SetFlowCompletionEvent(std::forward<FlowCompletionEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event stream containing the multi-turn input request information from the
     * flow.</p>
     */
    inline const FlowMultiTurnInputRequestEvent& GetFlowMultiTurnInputRequestEvent() const { return m_flowMultiTurnInputRequestEvent; }
    inline bool FlowMultiTurnInputRequestEventHasBeenSet() const { return m_flowMultiTurnInputRequestEventHasBeenSet; }
    template<typename FlowMultiTurnInputRequestEventT = FlowMultiTurnInputRequestEvent>
    void SetFlowMultiTurnInputRequestEvent(FlowMultiTurnInputRequestEventT&& value) { m_flowMultiTurnInputRequestEventHasBeenSet = true; m_flowMultiTurnInputRequestEvent = std::forward<FlowMultiTurnInputRequestEventT>(value); }
    template<typename FlowMultiTurnInputRequestEventT = FlowMultiTurnInputRequestEvent>
    FlowResponseStream& WithFlowMultiTurnInputRequestEvent(FlowMultiTurnInputRequestEventT&& value) { SetFlowMultiTurnInputRequestEvent(std::forward<FlowMultiTurnInputRequestEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about an output from flow invocation.</p>
     */
    inline const FlowOutputEvent& GetFlowOutputEvent() const { return m_flowOutputEvent; }
    inline bool FlowOutputEventHasBeenSet() const { return m_flowOutputEventHasBeenSet; }
    template<typename FlowOutputEventT = FlowOutputEvent>
    void SetFlowOutputEvent(FlowOutputEventT&& value) { m_flowOutputEventHasBeenSet = true; m_flowOutputEvent = std::forward<FlowOutputEventT>(value); }
    template<typename FlowOutputEventT = FlowOutputEvent>
    FlowResponseStream& WithFlowOutputEvent(FlowOutputEventT&& value) { SetFlowOutputEvent(std::forward<FlowOutputEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about a trace, which tracks an input or output for a
     * node in the flow.</p>
     */
    inline const FlowTraceEvent& GetFlowTraceEvent() const { return m_flowTraceEvent; }
    inline bool FlowTraceEventHasBeenSet() const { return m_flowTraceEventHasBeenSet; }
    template<typename FlowTraceEventT = FlowTraceEvent>
    void SetFlowTraceEvent(FlowTraceEventT&& value) { m_flowTraceEventHasBeenSet = true; m_flowTraceEvent = std::forward<FlowTraceEventT>(value); }
    template<typename FlowTraceEventT = FlowTraceEvent>
    FlowResponseStream& WithFlowTraceEvent(FlowTraceEventT&& value) { SetFlowTraceEvent(std::forward<FlowTraceEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline const InternalServerException& GetInternalServerException() const { return m_internalServerException; }
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
    template<typename InternalServerExceptionT = InternalServerException>
    void SetInternalServerException(InternalServerExceptionT&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::forward<InternalServerExceptionT>(value); }
    template<typename InternalServerExceptionT = InternalServerException>
    FlowResponseStream& WithInternalServerException(InternalServerExceptionT&& value) { SetInternalServerException(std::forward<InternalServerExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified resource Amazon Resource Name (ARN) was not found. Check the
     * Amazon Resource Name (ARN) and try your request again.</p>
     */
    inline const BedrockAgentRuntimeError& GetResourceNotFoundException() const { return m_resourceNotFoundException; }
    inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
    template<typename ResourceNotFoundExceptionT = BedrockAgentRuntimeError>
    void SetResourceNotFoundException(ResourceNotFoundExceptionT&& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = std::forward<ResourceNotFoundExceptionT>(value); }
    template<typename ResourceNotFoundExceptionT = BedrockAgentRuntimeError>
    FlowResponseStream& WithResourceNotFoundException(ResourceNotFoundExceptionT&& value) { SetResourceNotFoundException(std::forward<ResourceNotFoundExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests exceeds the service quota. Resubmit your request
     * later.</p>
     */
    inline const BedrockAgentRuntimeError& GetServiceQuotaExceededException() const { return m_serviceQuotaExceededException; }
    inline bool ServiceQuotaExceededExceptionHasBeenSet() const { return m_serviceQuotaExceededExceptionHasBeenSet; }
    template<typename ServiceQuotaExceededExceptionT = BedrockAgentRuntimeError>
    void SetServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) { m_serviceQuotaExceededExceptionHasBeenSet = true; m_serviceQuotaExceededException = std::forward<ServiceQuotaExceededExceptionT>(value); }
    template<typename ServiceQuotaExceededExceptionT = BedrockAgentRuntimeError>
    FlowResponseStream& WithServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) { SetServiceQuotaExceededException(std::forward<ServiceQuotaExceededExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests exceeds the limit. Resubmit your request later.</p>
     */
    inline const BedrockAgentRuntimeError& GetThrottlingException() const { return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    template<typename ThrottlingExceptionT = BedrockAgentRuntimeError>
    void SetThrottlingException(ThrottlingExceptionT&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::forward<ThrottlingExceptionT>(value); }
    template<typename ThrottlingExceptionT = BedrockAgentRuntimeError>
    FlowResponseStream& WithThrottlingException(ThrottlingExceptionT&& value) { SetThrottlingException(std::forward<ThrottlingExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input validation failed. Check your request parameters and retry the
     * request.</p>
     */
    inline const BedrockAgentRuntimeError& GetValidationException() const { return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    template<typename ValidationExceptionT = BedrockAgentRuntimeError>
    void SetValidationException(ValidationExceptionT&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::forward<ValidationExceptionT>(value); }
    template<typename ValidationExceptionT = BedrockAgentRuntimeError>
    FlowResponseStream& WithValidationException(ValidationExceptionT&& value) { SetValidationException(std::forward<ValidationExceptionT>(value)); return *this;}
    ///@}
  private:

    BedrockAgentRuntimeError m_accessDeniedException;
    bool m_accessDeniedExceptionHasBeenSet = false;

    BadGatewayException m_badGatewayException;
    bool m_badGatewayExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_conflictException;
    bool m_conflictExceptionHasBeenSet = false;

    DependencyFailedException m_dependencyFailedException;
    bool m_dependencyFailedExceptionHasBeenSet = false;

    FlowCompletionEvent m_flowCompletionEvent;
    bool m_flowCompletionEventHasBeenSet = false;

    FlowMultiTurnInputRequestEvent m_flowMultiTurnInputRequestEvent;
    bool m_flowMultiTurnInputRequestEventHasBeenSet = false;

    FlowOutputEvent m_flowOutputEvent;
    bool m_flowOutputEventHasBeenSet = false;

    FlowTraceEvent m_flowTraceEvent;
    bool m_flowTraceEventHasBeenSet = false;

    InternalServerException m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_resourceNotFoundException;
    bool m_resourceNotFoundExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_serviceQuotaExceededException;
    bool m_serviceQuotaExceededExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_validationException;
    bool m_validationExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
