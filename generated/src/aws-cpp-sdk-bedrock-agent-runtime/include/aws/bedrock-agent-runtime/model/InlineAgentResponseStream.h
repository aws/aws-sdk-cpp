/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AccessDeniedException.h>
#include <aws/bedrock-agent-runtime/model/BadGatewayException.h>
#include <aws/bedrock-agent-runtime/model/InlineAgentPayloadPart.h>
#include <aws/bedrock-agent-runtime/model/ConflictException.h>
#include <aws/bedrock-agent-runtime/model/DependencyFailedException.h>
#include <aws/bedrock-agent-runtime/model/InlineAgentFilePart.h>
#include <aws/bedrock-agent-runtime/model/InternalServerException.h>
#include <aws/bedrock-agent-runtime/model/ResourceNotFoundException.h>
#include <aws/bedrock-agent-runtime/model/InlineAgentReturnControlPayload.h>
#include <aws/bedrock-agent-runtime/model/ServiceQuotaExceededException.h>
#include <aws/bedrock-agent-runtime/model/ThrottlingException.h>
#include <aws/bedrock-agent-runtime/model/InlineAgentTracePart.h>
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
   * <p>The response from invoking the agent and associated citations and trace
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InlineAgentResponseStream">AWS
   * API Reference</a></p>
   */
  class InlineAgentResponseStream
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentResponseStream();
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline InlineAgentResponseStream& WithAccessDeniedException(const AccessDeniedException& value) { SetAccessDeniedException(value); return *this;}
    inline InlineAgentResponseStream& WithAccessDeniedException(AccessDeniedException&& value) { SetAccessDeniedException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was an issue with a dependency due to a server issue. Retry your
     * request. </p>
     */
    inline const BadGatewayException& GetBadGatewayException() const{ return m_badGatewayException; }
    inline bool BadGatewayExceptionHasBeenSet() const { return m_badGatewayExceptionHasBeenSet; }
    inline void SetBadGatewayException(const BadGatewayException& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = value; }
    inline void SetBadGatewayException(BadGatewayException&& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = std::move(value); }
    inline InlineAgentResponseStream& WithBadGatewayException(const BadGatewayException& value) { SetBadGatewayException(value); return *this;}
    inline InlineAgentResponseStream& WithBadGatewayException(BadGatewayException&& value) { SetBadGatewayException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a part of an agent response and citations for it.</p>
     */
    inline const InlineAgentPayloadPart& GetChunk() const{ return m_chunk; }
    inline bool ChunkHasBeenSet() const { return m_chunkHasBeenSet; }
    inline void SetChunk(const InlineAgentPayloadPart& value) { m_chunkHasBeenSet = true; m_chunk = value; }
    inline void SetChunk(InlineAgentPayloadPart&& value) { m_chunkHasBeenSet = true; m_chunk = std::move(value); }
    inline InlineAgentResponseStream& WithChunk(const InlineAgentPayloadPart& value) { SetChunk(value); return *this;}
    inline InlineAgentResponseStream& WithChunk(InlineAgentPayloadPart&& value) { SetChunk(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was a conflict performing an operation. Resolve the conflict and retry
     * your request. </p>
     */
    inline const ConflictException& GetConflictException() const{ return m_conflictException; }
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
    inline void SetConflictException(const ConflictException& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = value; }
    inline void SetConflictException(ConflictException&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::move(value); }
    inline InlineAgentResponseStream& WithConflictException(const ConflictException& value) { SetConflictException(value); return *this;}
    inline InlineAgentResponseStream& WithConflictException(ConflictException&& value) { SetConflictException(std::move(value)); return *this;}
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
    inline InlineAgentResponseStream& WithDependencyFailedException(const DependencyFailedException& value) { SetDependencyFailedException(value); return *this;}
    inline InlineAgentResponseStream& WithDependencyFailedException(DependencyFailedException&& value) { SetDependencyFailedException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains intermediate response for code interpreter if any files have been
     * generated.</p>
     */
    inline const InlineAgentFilePart& GetFiles() const{ return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    inline void SetFiles(const InlineAgentFilePart& value) { m_filesHasBeenSet = true; m_files = value; }
    inline void SetFiles(InlineAgentFilePart&& value) { m_filesHasBeenSet = true; m_files = std::move(value); }
    inline InlineAgentResponseStream& WithFiles(const InlineAgentFilePart& value) { SetFiles(value); return *this;}
    inline InlineAgentResponseStream& WithFiles(InlineAgentFilePart&& value) { SetFiles(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An internal server error occurred. Retry your request.</p>
     */
    inline const InternalServerException& GetInternalServerException() const{ return m_internalServerException; }
    inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
    inline void SetInternalServerException(const InternalServerException& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = value; }
    inline void SetInternalServerException(InternalServerException&& value) { m_internalServerExceptionHasBeenSet = true; m_internalServerException = std::move(value); }
    inline InlineAgentResponseStream& WithInternalServerException(const InternalServerException& value) { SetInternalServerException(value); return *this;}
    inline InlineAgentResponseStream& WithInternalServerException(InternalServerException&& value) { SetInternalServerException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified resource Amazon Resource Name (ARN) was not found. Check the
     * Amazon Resource Name (ARN) and try your request again. </p>
     */
    inline const ResourceNotFoundException& GetResourceNotFoundException() const{ return m_resourceNotFoundException; }
    inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
    inline void SetResourceNotFoundException(const ResourceNotFoundException& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = value; }
    inline void SetResourceNotFoundException(ResourceNotFoundException&& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = std::move(value); }
    inline InlineAgentResponseStream& WithResourceNotFoundException(const ResourceNotFoundException& value) { SetResourceNotFoundException(value); return *this;}
    inline InlineAgentResponseStream& WithResourceNotFoundException(ResourceNotFoundException&& value) { SetResourceNotFoundException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the parameters and information that the agent elicited from the
     * customer to carry out an action. This information is returned to the system and
     * can be used in your own setup for fulfilling the action.</p>
     */
    inline const InlineAgentReturnControlPayload& GetReturnControl() const{ return m_returnControl; }
    inline bool ReturnControlHasBeenSet() const { return m_returnControlHasBeenSet; }
    inline void SetReturnControl(const InlineAgentReturnControlPayload& value) { m_returnControlHasBeenSet = true; m_returnControl = value; }
    inline void SetReturnControl(InlineAgentReturnControlPayload&& value) { m_returnControlHasBeenSet = true; m_returnControl = std::move(value); }
    inline InlineAgentResponseStream& WithReturnControl(const InlineAgentReturnControlPayload& value) { SetReturnControl(value); return *this;}
    inline InlineAgentResponseStream& WithReturnControl(InlineAgentReturnControlPayload&& value) { SetReturnControl(std::move(value)); return *this;}
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
    inline InlineAgentResponseStream& WithServiceQuotaExceededException(const ServiceQuotaExceededException& value) { SetServiceQuotaExceededException(value); return *this;}
    inline InlineAgentResponseStream& WithServiceQuotaExceededException(ServiceQuotaExceededException&& value) { SetServiceQuotaExceededException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests exceeds the limit. Resubmit your request later.</p>
     */
    inline const ThrottlingException& GetThrottlingException() const{ return m_throttlingException; }
    inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
    inline void SetThrottlingException(const ThrottlingException& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = value; }
    inline void SetThrottlingException(ThrottlingException&& value) { m_throttlingExceptionHasBeenSet = true; m_throttlingException = std::move(value); }
    inline InlineAgentResponseStream& WithThrottlingException(const ThrottlingException& value) { SetThrottlingException(value); return *this;}
    inline InlineAgentResponseStream& WithThrottlingException(ThrottlingException&& value) { SetThrottlingException(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the agent and session, alongside the agent's
     * reasoning process and results from calling actions and querying knowledge bases
     * and metadata about the trace. You can use the trace to understand how the agent
     * arrived at the response it provided the customer. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/trace-events.html">Trace
     * events</a>. </p>
     */
    inline const InlineAgentTracePart& GetTrace() const{ return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    inline void SetTrace(const InlineAgentTracePart& value) { m_traceHasBeenSet = true; m_trace = value; }
    inline void SetTrace(InlineAgentTracePart&& value) { m_traceHasBeenSet = true; m_trace = std::move(value); }
    inline InlineAgentResponseStream& WithTrace(const InlineAgentTracePart& value) { SetTrace(value); return *this;}
    inline InlineAgentResponseStream& WithTrace(InlineAgentTracePart&& value) { SetTrace(std::move(value)); return *this;}
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
    inline InlineAgentResponseStream& WithValidationException(const ValidationException& value) { SetValidationException(value); return *this;}
    inline InlineAgentResponseStream& WithValidationException(ValidationException&& value) { SetValidationException(std::move(value)); return *this;}
    ///@}
  private:

    AccessDeniedException m_accessDeniedException;
    bool m_accessDeniedExceptionHasBeenSet = false;

    BadGatewayException m_badGatewayException;
    bool m_badGatewayExceptionHasBeenSet = false;

    InlineAgentPayloadPart m_chunk;
    bool m_chunkHasBeenSet = false;

    ConflictException m_conflictException;
    bool m_conflictExceptionHasBeenSet = false;

    DependencyFailedException m_dependencyFailedException;
    bool m_dependencyFailedExceptionHasBeenSet = false;

    InlineAgentFilePart m_files;
    bool m_filesHasBeenSet = false;

    InternalServerException m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    ResourceNotFoundException m_resourceNotFoundException;
    bool m_resourceNotFoundExceptionHasBeenSet = false;

    InlineAgentReturnControlPayload m_returnControl;
    bool m_returnControlHasBeenSet = false;

    ServiceQuotaExceededException m_serviceQuotaExceededException;
    bool m_serviceQuotaExceededExceptionHasBeenSet = false;

    ThrottlingException m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    InlineAgentTracePart m_trace;
    bool m_traceHasBeenSet = false;

    ValidationException m_validationException;
    bool m_validationExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
