/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/BadGatewayException.h>
#include <aws/bedrock-agent-runtime/model/InlineAgentPayloadPart.h>
#include <aws/bedrock-agent-runtime/model/DependencyFailedException.h>
#include <aws/bedrock-agent-runtime/model/InlineAgentFilePart.h>
#include <aws/bedrock-agent-runtime/model/InternalServerException.h>
#include <aws/bedrock-agent-runtime/model/InlineAgentReturnControlPayload.h>
#include <aws/bedrock-agent-runtime/model/InlineAgentTracePart.h>
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
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentResponseStream() = default;
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    InlineAgentResponseStream& WithAccessDeniedException(AccessDeniedExceptionT&& value) { SetAccessDeniedException(std::forward<AccessDeniedExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was an issue with a dependency due to a server issue. Retry your
     * request. </p>
     */
    inline const BadGatewayException& GetBadGatewayException() const { return m_badGatewayException; }
    inline bool BadGatewayExceptionHasBeenSet() const { return m_badGatewayExceptionHasBeenSet; }
    template<typename BadGatewayExceptionT = BadGatewayException>
    void SetBadGatewayException(BadGatewayExceptionT&& value) { m_badGatewayExceptionHasBeenSet = true; m_badGatewayException = std::forward<BadGatewayExceptionT>(value); }
    template<typename BadGatewayExceptionT = BadGatewayException>
    InlineAgentResponseStream& WithBadGatewayException(BadGatewayExceptionT&& value) { SetBadGatewayException(std::forward<BadGatewayExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a part of an agent response and citations for it.</p>
     */
    inline const InlineAgentPayloadPart& GetChunk() const { return m_chunk; }
    inline bool ChunkHasBeenSet() const { return m_chunkHasBeenSet; }
    template<typename ChunkT = InlineAgentPayloadPart>
    void SetChunk(ChunkT&& value) { m_chunkHasBeenSet = true; m_chunk = std::forward<ChunkT>(value); }
    template<typename ChunkT = InlineAgentPayloadPart>
    InlineAgentResponseStream& WithChunk(ChunkT&& value) { SetChunk(std::forward<ChunkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>There was a conflict performing an operation. Resolve the conflict and retry
     * your request. </p>
     */
    inline const BedrockAgentRuntimeError& GetConflictException() const { return m_conflictException; }
    inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
    template<typename ConflictExceptionT = BedrockAgentRuntimeError>
    void SetConflictException(ConflictExceptionT&& value) { m_conflictExceptionHasBeenSet = true; m_conflictException = std::forward<ConflictExceptionT>(value); }
    template<typename ConflictExceptionT = BedrockAgentRuntimeError>
    InlineAgentResponseStream& WithConflictException(ConflictExceptionT&& value) { SetConflictException(std::forward<ConflictExceptionT>(value)); return *this;}
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
    InlineAgentResponseStream& WithDependencyFailedException(DependencyFailedExceptionT&& value) { SetDependencyFailedException(std::forward<DependencyFailedExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains intermediate response for code interpreter if any files have been
     * generated.</p>
     */
    inline const InlineAgentFilePart& GetFiles() const { return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    template<typename FilesT = InlineAgentFilePart>
    void SetFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files = std::forward<FilesT>(value); }
    template<typename FilesT = InlineAgentFilePart>
    InlineAgentResponseStream& WithFiles(FilesT&& value) { SetFiles(std::forward<FilesT>(value)); return *this;}
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
    InlineAgentResponseStream& WithInternalServerException(InternalServerExceptionT&& value) { SetInternalServerException(std::forward<InternalServerExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified resource Amazon Resource Name (ARN) was not found. Check the
     * Amazon Resource Name (ARN) and try your request again. </p>
     */
    inline const BedrockAgentRuntimeError& GetResourceNotFoundException() const { return m_resourceNotFoundException; }
    inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
    template<typename ResourceNotFoundExceptionT = BedrockAgentRuntimeError>
    void SetResourceNotFoundException(ResourceNotFoundExceptionT&& value) { m_resourceNotFoundExceptionHasBeenSet = true; m_resourceNotFoundException = std::forward<ResourceNotFoundExceptionT>(value); }
    template<typename ResourceNotFoundExceptionT = BedrockAgentRuntimeError>
    InlineAgentResponseStream& WithResourceNotFoundException(ResourceNotFoundExceptionT&& value) { SetResourceNotFoundException(std::forward<ResourceNotFoundExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the parameters and information that the agent elicited from the
     * customer to carry out an action. This information is returned to the system and
     * can be used in your own setup for fulfilling the action.</p>
     */
    inline const InlineAgentReturnControlPayload& GetReturnControl() const { return m_returnControl; }
    inline bool ReturnControlHasBeenSet() const { return m_returnControlHasBeenSet; }
    template<typename ReturnControlT = InlineAgentReturnControlPayload>
    void SetReturnControl(ReturnControlT&& value) { m_returnControlHasBeenSet = true; m_returnControl = std::forward<ReturnControlT>(value); }
    template<typename ReturnControlT = InlineAgentReturnControlPayload>
    InlineAgentResponseStream& WithReturnControl(ReturnControlT&& value) { SetReturnControl(std::forward<ReturnControlT>(value)); return *this;}
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
    InlineAgentResponseStream& WithServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) { SetServiceQuotaExceededException(std::forward<ServiceQuotaExceededExceptionT>(value)); return *this;}
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
    InlineAgentResponseStream& WithThrottlingException(ThrottlingExceptionT&& value) { SetThrottlingException(std::forward<ThrottlingExceptionT>(value)); return *this;}
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
    inline const InlineAgentTracePart& GetTrace() const { return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    template<typename TraceT = InlineAgentTracePart>
    void SetTrace(TraceT&& value) { m_traceHasBeenSet = true; m_trace = std::forward<TraceT>(value); }
    template<typename TraceT = InlineAgentTracePart>
    InlineAgentResponseStream& WithTrace(TraceT&& value) { SetTrace(std::forward<TraceT>(value)); return *this;}
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
    InlineAgentResponseStream& WithValidationException(ValidationExceptionT&& value) { SetValidationException(std::forward<ValidationExceptionT>(value)); return *this;}
    ///@}
  private:

    BedrockAgentRuntimeError m_accessDeniedException;
    bool m_accessDeniedExceptionHasBeenSet = false;

    BadGatewayException m_badGatewayException;
    bool m_badGatewayExceptionHasBeenSet = false;

    InlineAgentPayloadPart m_chunk;
    bool m_chunkHasBeenSet = false;

    BedrockAgentRuntimeError m_conflictException;
    bool m_conflictExceptionHasBeenSet = false;

    DependencyFailedException m_dependencyFailedException;
    bool m_dependencyFailedExceptionHasBeenSet = false;

    InlineAgentFilePart m_files;
    bool m_filesHasBeenSet = false;

    InternalServerException m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_resourceNotFoundException;
    bool m_resourceNotFoundExceptionHasBeenSet = false;

    InlineAgentReturnControlPayload m_returnControl;
    bool m_returnControlHasBeenSet = false;

    BedrockAgentRuntimeError m_serviceQuotaExceededException;
    bool m_serviceQuotaExceededExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    InlineAgentTracePart m_trace;
    bool m_traceHasBeenSet = false;

    BedrockAgentRuntimeError m_validationException;
    bool m_validationExceptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
