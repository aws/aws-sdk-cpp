/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AccessDeniedException.h>
#include <aws/bedrock-agent-runtime/model/BadGatewayException.h>
#include <aws/bedrock-agent-runtime/model/ConflictException.h>
#include <aws/bedrock-agent-runtime/model/DependencyFailedException.h>
#include <aws/bedrock-agent-runtime/model/FlowCompletionEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowOutputEvent.h>
#include <aws/bedrock-agent-runtime/model/FlowTraceEvent.h>
#include <aws/bedrock-agent-runtime/model/InternalServerException.h>
#include <aws/bedrock-agent-runtime/model/ResourceNotFoundException.h>
#include <aws/bedrock-agent-runtime/model/ServiceQuotaExceededException.h>
#include <aws/bedrock-agent-runtime/model/ThrottlingException.h>
#include <aws/bedrock-agent-runtime/model/ValidationException.h>
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
    AWS_BEDROCKAGENTRUNTIME_API FlowResponseStream();
    AWS_BEDROCKAGENTRUNTIME_API FlowResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FlowResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The request is denied because of missing access permissions. Check your
     * permissions and retry your request.</p>
     */
    inline const AccessDeniedException& GetAccessDeniedException() const{ return m_accessDeniedException; }
    inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }
    inline void SetAccessDeniedException(const AccessDeniedException& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = value; }
    inline void SetAccessDeniedException(AccessDeniedException&& value) { m_accessDeniedExceptionHasBeenSet = true; m_accessDeniedException = std::move(value); }
    inline FlowResponseStream& WithAccessDeniedException(const AccessDeniedException& value) { SetAccessDeniedException(value); return *this;}
    inline FlowResponseStream& WithAccessDeniedException(AccessDeniedException&& value) { SetAccessDeniedException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was an issue with a dependency due to a server issue. Retry your
     * request.</p>
     */
    inline const BadGatewayException& GetBadGatewayException() const{ return m_badGatewayException; }
    inline bool BadGatewayExceptionHasBeenSet() const { return m_badGatewayExceptionHasBeenSet; }
    inline void SetBadGatewayException(const BadGatewayException& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = value; }
    inline void SetBadGatewayException(BadGatewayException&& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = std::move(value); }
    inline FlowResponseStream& WithBadGatewayException(const BadGatewayException& value) { SetBadGatewayException(value); return *this;}
    inline FlowResponseStream& WithBadGatewayException(BadGatewayException&& value) { SetBadGatewayException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was a conflict performing an operation. Resolve the conflict and retry
     * your request.</p>
     */
    inline const ConflictException& GetConflictException() const{ return m_conflictException; }
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
    inline void SetConflictException(const ConflictException& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = value; }
    inline void SetConflictException(ConflictException&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::move(value); }
    inline FlowResponseStream& WithConflictException(const ConflictException& value) { SetConflictException(value); return *this;}
    inline FlowResponseStream& WithConflictException(ConflictException&& value) { SetConflictException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was an issue with a dependency. Check the resource configurations and
     * retry the request.</p>
     */
    inline const DependencyFailedException& GetDependencyFailedException() const{ return m_dependencyFailedException; }
    inline bool DependencyFailedExceptionHasBeenSet() const { return m_dependencyFailedExceptionHasBeenSet; }
    inline void SetDependencyFailedException(const DependencyFailedException& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = value; }
    inline void SetDependencyFailedException(DependencyFailedException&& value) { m_dependencyFailedExceptionHasBeenSet = true; m_dependencyFailedException = std::move(value); }
    inline FlowResponseStream& WithDependencyFailedException(const DependencyFailedException& value) { SetDependencyFailedException(value); return *this;}
    inline FlowResponseStream& WithDependencyFailedException(DependencyFailedException&& value) { SetDependencyFailedException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about why the flow completed.</p>
     */
    inline const FlowCompletionEvent& GetFlowCompletionEvent() const{ return m_flowCompletionEvent; }
    inline bool FlowCompletionEventHasBeenSet() const { return m_flowCompletionEventHasBeenSet; }
    inline void SetFlowCompletionEvent(const FlowCompletionEvent& value) { m_flowCompletionEventHasBeenSet = true; m_flowCompletionEvent = value; }
    inline void SetFlowCompletionEvent(FlowCompletionEvent&& value) { m_flowCompletionEventHasBeenSet = true; m_flowCompletionEvent = std::move(value); }
    inline FlowResponseStream& WithFlowCompletionEvent(const FlowCompletionEvent& value) { SetFlowCompletionEvent(value); return *this;}
    inline FlowResponseStream& WithFlowCompletionEvent(FlowCompletionEvent&& value) { SetFlowCompletionEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about an output from flow invocation.</p>
     */
    inline const FlowOutputEvent& GetFlowOutputEvent() const{ return m_flowOutputEvent; }
    inline bool FlowOutputEventHasBeenSet() const { return m_flowOutputEventHasBeenSet; }
    inline void SetFlowOutputEvent(const FlowOutputEvent& value) { m_flowOutputEventHasBeenSet = true; m_flowOutputEvent = value; }
    inline void SetFlowOutputEvent(FlowOutputEvent&& value) { m_flowOutputEventHasBeenSet = true; m_flowOutputEvent = std::move(value); }
    inline FlowResponseStream& WithFlowOutputEvent(const FlowOutputEvent& value) { SetFlowOutputEvent(value); return *this;}
    inline FlowResponseStream& WithFlowOutputEvent(FlowOutputEvent&& value) { SetFlowOutputEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about a trace, which tracks an input or output for a
     * node in the flow.</p>
     */
    inline const FlowTraceEvent& GetFlowTraceEvent() const{ return m_flowTraceEvent; }
    inline bool FlowTraceEventHasBeenSet() const { return m_flowTraceEventHasBeenSet; }
    inline void SetFlowTraceEvent(const FlowTraceEvent& value) { m_flowTraceEventHasBeenSet = true; m_flowTraceEvent = value; }
    inline void SetFlowTraceEvent(FlowTraceEvent&& value) { m_flowTraceEventHasBeenSet = true; m_flowTraceEvent = std::move(value); }
    inline FlowResponseStream& WithFlowTraceEvent(const FlowTraceEvent& value) { SetFlowTraceEvent(value); return *this;}
    inline FlowResponseStream& WithFlowTraceEvent(FlowTraceEvent&& value) { SetFlowTraceEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline const InternalServerException& GetInternalServerException() const{ return m_internalServerException; }
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
    inline void SetInternalServerException(const InternalServerException& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = value; }
    inline void SetInternalServerException(InternalServerException&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::move(value); }
    inline FlowResponseStream& WithInternalServerException(const InternalServerException& value) { SetInternalServerException(value); return *this;}
    inline FlowResponseStream& WithInternalServerException(InternalServerException&& value) { SetInternalServerException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified resource Amazon Resource Name (ARN) was not found. Check the
     * Amazon Resource Name (ARN) and try your request again.</p>
     */
    inline const ResourceNotFoundException& GetResourceNotFoundException() const{ return m_resourceNotFoundException; }
    inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
    inline void SetResourceNotFoundException(const ResourceNotFoundException& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = value; }
    inline void SetResourceNotFoundException(ResourceNotFoundException&& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = std::move(value); }
    inline FlowResponseStream& WithResourceNotFoundException(const ResourceNotFoundException& value) { SetResourceNotFoundException(value); return *this;}
    inline FlowResponseStream& WithResourceNotFoundException(ResourceNotFoundException&& value) { SetResourceNotFoundException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests exceeds the service quota. Resubmit your request
     * later.</p>
     */
    inline const ServiceQuotaExceededException& GetServiceQuotaExceededException() const{ return m_serviceQuotaExceededException; }
    inline bool ServiceQuotaExceededExceptionHasBeenSet() const { return m_serviceQuotaExceededExceptionHasBeenSet; }
    inline void SetServiceQuotaExceededException(const ServiceQuotaExceededException& value) { m_serviceQuotaExceededExceptionHasBeenSet = true; m_serviceQuotaExceededException = value; }
    inline void SetServiceQuotaExceededException(ServiceQuotaExceededException&& value) { m_serviceQuotaExceededExceptionHasBeenSet = true; m_serviceQuotaExceededException = std::move(value); }
    inline FlowResponseStream& WithServiceQuotaExceededException(const ServiceQuotaExceededException& value) { SetServiceQuotaExceededException(value); return *this;}
    inline FlowResponseStream& WithServiceQuotaExceededException(ServiceQuotaExceededException&& value) { SetServiceQuotaExceededException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests exceeds the limit. Resubmit your request later.</p>
     */
    inline const ThrottlingException& GetThrottlingException() const{ return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    inline void SetThrottlingException(const ThrottlingException& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = value; }
    inline void SetThrottlingException(ThrottlingException&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::move(value); }
    inline FlowResponseStream& WithThrottlingException(const ThrottlingException& value) { SetThrottlingException(value); return *this;}
    inline FlowResponseStream& WithThrottlingException(ThrottlingException&& value) { SetThrottlingException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input validation failed. Check your request parameters and retry the
     * request.</p>
     */
    inline const ValidationException& GetValidationException() const{ return m_validationException; }
    inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
    inline void SetValidationException(const ValidationException& value) { m_validationExceptionHasBeenSet = true; m_validationException = value; }
    inline void SetValidationException(ValidationException&& value) { m_validationExceptionHasBeenSet = true; m_validationException = std::move(value); }
    inline FlowResponseStream& WithValidationException(const ValidationException& value) { SetValidationException(value); return *this;}
    inline FlowResponseStream& WithValidationException(ValidationException&& value) { SetValidationException(std::move(value)); return *this;}
    ///@}
  private:

    AccessDeniedException m_accessDeniedException;
    bool m_accessDeniedExceptionHasBeenSet = false;

    BadGatewayException m_badGatewayException;
    bool m_badGatewayExceptionHasBeenSet = false;

    ConflictException m_conflictException;
    bool m_conflictExceptionHasBeenSet = false;

    DependencyFailedException m_dependencyFailedException;
    bool m_dependencyFailedExceptionHasBeenSet = false;

    FlowCompletionEvent m_flowCompletionEvent;
    bool m_flowCompletionEventHasBeenSet = false;

    FlowOutputEvent m_flowOutputEvent;
    bool m_flowOutputEventHasBeenSet = false;

    FlowTraceEvent m_flowTraceEvent;
    bool m_flowTraceEventHasBeenSet = false;

    InternalServerException m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    ResourceNotFoundException m_resourceNotFoundException;
    bool m_resourceNotFoundExceptionHasBeenSet = false;

    ServiceQuotaExceededException m_serviceQuotaExceededException;
    bool m_serviceQuotaExceededExceptionHasBeenSet = false;

    ThrottlingException m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    ValidationException m_validationException;
    bool m_validationExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
