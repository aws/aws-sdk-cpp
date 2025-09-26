/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/PayloadPart.h>
#include <aws/bedrock-agent-runtime/model/TracePart.h>
#include <aws/bedrock-agent-runtime/model/ReturnControlPayload.h>
#include <aws/bedrock-agent-runtime/model/InternalServerException.h>
#include <aws/bedrock-agent-runtime/model/DependencyFailedException.h>
#include <aws/bedrock-agent-runtime/model/BadGatewayException.h>
#include <aws/bedrock-agent-runtime/model/FilePart.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ResponseStream">AWS
   * API Reference</a></p>
   */
  class ResponseStream
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ResponseStream() = default;
    AWS_BEDROCKAGENTRUNTIME_API ResponseStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ResponseStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains a part of an agent response and citations for it.</p>
     */
    inline const PayloadPart& GetChunk() const { return m_chunk; }
    inline bool ChunkHasBeenSet() const { return m_chunkHasBeenSet; }
    template<typename ChunkT = PayloadPart>
    void SetChunk(ChunkT&& value) { m_chunkHasBeenSet = true; m_chunk = std::forward<ChunkT>(value); }
    template<typename ChunkT = PayloadPart>
    ResponseStream& WithChunk(ChunkT&& value) { SetChunk(std::forward<ChunkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the agent and session, alongside the agent's
     * reasoning process and results from calling actions and querying knowledge bases
     * and metadata about the trace. You can use the trace to understand how the agent
     * arrived at the response it provided the customer. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/trace-events.html">Trace
     * events</a>.</p>
     */
    inline const TracePart& GetTrace() const { return m_trace; }
    inline bool TraceHasBeenSet() const { return m_traceHasBeenSet; }
    template<typename TraceT = TracePart>
    void SetTrace(TraceT&& value) { m_traceHasBeenSet = true; m_trace = std::forward<TraceT>(value); }
    template<typename TraceT = TracePart>
    ResponseStream& WithTrace(TraceT&& value) { SetTrace(std::forward<TraceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the parameters and information that the agent elicited from the
     * customer to carry out an action. This information is returned to the system and
     * can be used in your own setup for fulfilling the action.</p>
     */
    inline const ReturnControlPayload& GetReturnControl() const { return m_returnControl; }
    inline bool ReturnControlHasBeenSet() const { return m_returnControlHasBeenSet; }
    template<typename ReturnControlT = ReturnControlPayload>
    void SetReturnControl(ReturnControlT&& value) { m_returnControlHasBeenSet = true; m_returnControl = std::forward<ReturnControlT>(value); }
    template<typename ReturnControlT = ReturnControlPayload>
    ResponseStream& WithReturnControl(ReturnControlT&& value) { SetReturnControl(std::forward<ReturnControlT>(value)); return *this;}
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
    ResponseStream& WithInternalServerException(InternalServerExceptionT&& value) { SetInternalServerException(std::forward<InternalServerExceptionT>(value)); return *this;}
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
    ResponseStream& WithValidationException(ValidationExceptionT&& value) { SetValidationException(std::forward<ValidationExceptionT>(value)); return *this;}
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
    ResponseStream& WithResourceNotFoundException(ResourceNotFoundExceptionT&& value) { SetResourceNotFoundException(std::forward<ResourceNotFoundExceptionT>(value)); return *this;}
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
    ResponseStream& WithServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) { SetServiceQuotaExceededException(std::forward<ServiceQuotaExceededExceptionT>(value)); return *this;}
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
    ResponseStream& WithThrottlingException(ThrottlingExceptionT&& value) { SetThrottlingException(std::forward<ThrottlingExceptionT>(value)); return *this;}
    ///@}

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
    ResponseStream& WithAccessDeniedException(AccessDeniedExceptionT&& value) { SetAccessDeniedException(std::forward<AccessDeniedExceptionT>(value)); return *this;}
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
    ResponseStream& WithConflictException(ConflictExceptionT&& value) { SetConflictException(std::forward<ConflictExceptionT>(value)); return *this;}
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
    ResponseStream& WithDependencyFailedException(DependencyFailedExceptionT&& value) { SetDependencyFailedException(std::forward<DependencyFailedExceptionT>(value)); return *this;}
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
    ResponseStream& WithBadGatewayException(BadGatewayExceptionT&& value) { SetBadGatewayException(std::forward<BadGatewayExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The model specified in the request is not ready to serve Inference requests.
     * The AWS SDK will automatically retry the operation up to 5 times. For
     * information about configuring automatic retries, see <a
     * href="https://docs.aws.amazon.com/sdkref/latest/guide/feature-retry-behavior.html">Retry
     * behavior</a> in the <i>AWS SDKs and Tools</i> reference guide. </p>
     */
    inline const BedrockAgentRuntimeError& GetModelNotReadyException() const { return m_modelNotReadyException; }
    inline bool ModelNotReadyExceptionHasBeenSet() const { return m_modelNotReadyExceptionHasBeenSet; }
    template<typename ModelNotReadyExceptionT = BedrockAgentRuntimeError>
    void SetModelNotReadyException(ModelNotReadyExceptionT&& value) { m_modelNotReadyExceptionHasBeenSet = true; m_modelNotReadyException = std::forward<ModelNotReadyExceptionT>(value); }
    template<typename ModelNotReadyExceptionT = BedrockAgentRuntimeError>
    ResponseStream& WithModelNotReadyException(ModelNotReadyExceptionT&& value) { SetModelNotReadyException(std::forward<ModelNotReadyExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains intermediate response for code interpreter if any files have been
     * generated.</p>
     */
    inline const FilePart& GetFiles() const { return m_files; }
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }
    template<typename FilesT = FilePart>
    void SetFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files = std::forward<FilesT>(value); }
    template<typename FilesT = FilePart>
    ResponseStream& WithFiles(FilesT&& value) { SetFiles(std::forward<FilesT>(value)); return *this;}
    ///@}
  private:

    PayloadPart m_chunk;
    bool m_chunkHasBeenSet = false;

    TracePart m_trace;
    bool m_traceHasBeenSet = false;

    ReturnControlPayload m_returnControl;
    bool m_returnControlHasBeenSet = false;

    InternalServerException m_internalServerException;
    bool m_internalServerExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_validationException;
    bool m_validationExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_resourceNotFoundException;
    bool m_resourceNotFoundExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_serviceQuotaExceededException;
    bool m_serviceQuotaExceededExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_throttlingException;
    bool m_throttlingExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_accessDeniedException;
    bool m_accessDeniedExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_conflictException;
    bool m_conflictExceptionHasBeenSet = false;

    DependencyFailedException m_dependencyFailedException;
    bool m_dependencyFailedExceptionHasBeenSet = false;

    BadGatewayException m_badGatewayException;
    bool m_badGatewayExceptionHasBeenSet = false;

    BedrockAgentRuntimeError m_modelNotReadyException;
    bool m_modelNotReadyExceptionHasBeenSet = false;

    FilePart m_files;
    bool m_filesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
