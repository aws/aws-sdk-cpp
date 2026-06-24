/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveResponseEvent.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveResultEvent.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveTraceEvent.h>
#include <aws/bedrock-agent-runtime/model/BadGatewayException.h>
#include <aws/bedrock-agent-runtime/model/DependencyFailedException.h>
#include <aws/bedrock-agent-runtime/model/InternalServerException.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>The streaming output for agentic retrieval, containing results, traces, and
 * errors.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveStreamResponseOutput">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveStreamResponseOutput {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveStreamResponseOutput() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveStreamResponseOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveStreamResponseOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Access to the resource was denied.</p>
   */
  inline const BedrockAgentRuntimeError& GetAccessDeniedException() const { return m_accessDeniedException; }
  inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }
  template <typename AccessDeniedExceptionT = BedrockAgentRuntimeError>
  void SetAccessDeniedException(AccessDeniedExceptionT&& value) {
    m_accessDeniedExceptionHasBeenSet = true;
    m_accessDeniedException = std::forward<AccessDeniedExceptionT>(value);
  }
  template <typename AccessDeniedExceptionT = BedrockAgentRuntimeError>
  AgenticRetrieveStreamResponseOutput& WithAccessDeniedException(AccessDeniedExceptionT&& value) {
    SetAccessDeniedException(std::forward<AccessDeniedExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A bad gateway error occurred.</p>
   */
  inline const BadGatewayException& GetBadGatewayException() const { return m_badGatewayException; }
  inline bool BadGatewayExceptionHasBeenSet() const { return m_badGatewayExceptionHasBeenSet; }
  template <typename BadGatewayExceptionT = BadGatewayException>
  void SetBadGatewayException(BadGatewayExceptionT&& value) {
    m_badGatewayExceptionHasBeenSet = true;
    m_badGatewayException = std::forward<BadGatewayExceptionT>(value);
  }
  template <typename BadGatewayExceptionT = BadGatewayException>
  AgenticRetrieveStreamResponseOutput& WithBadGatewayException(BadGatewayExceptionT&& value) {
    SetBadGatewayException(std::forward<BadGatewayExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A conflict occurred with the current state of the resource.</p>
   */
  inline const BedrockAgentRuntimeError& GetConflictException() const { return m_conflictException; }
  inline bool ConflictExceptionHasBeenSet() const { return m_conflictExceptionHasBeenSet; }
  template <typename ConflictExceptionT = BedrockAgentRuntimeError>
  void SetConflictException(ConflictExceptionT&& value) {
    m_conflictExceptionHasBeenSet = true;
    m_conflictException = std::forward<ConflictExceptionT>(value);
  }
  template <typename ConflictExceptionT = BedrockAgentRuntimeError>
  AgenticRetrieveStreamResponseOutput& WithConflictException(ConflictExceptionT&& value) {
    SetConflictException(std::forward<ConflictExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A dependency failed during the operation.</p>
   */
  inline const DependencyFailedException& GetDependencyFailedException() const { return m_dependencyFailedException; }
  inline bool DependencyFailedExceptionHasBeenSet() const { return m_dependencyFailedExceptionHasBeenSet; }
  template <typename DependencyFailedExceptionT = DependencyFailedException>
  void SetDependencyFailedException(DependencyFailedExceptionT&& value) {
    m_dependencyFailedExceptionHasBeenSet = true;
    m_dependencyFailedException = std::forward<DependencyFailedExceptionT>(value);
  }
  template <typename DependencyFailedExceptionT = DependencyFailedException>
  AgenticRetrieveStreamResponseOutput& WithDependencyFailedException(DependencyFailedExceptionT&& value) {
    SetDependencyFailedException(std::forward<DependencyFailedExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An internal server error occurred.</p>
   */
  inline const InternalServerException& GetInternalServerException() const { return m_internalServerException; }
  inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
  template <typename InternalServerExceptionT = InternalServerException>
  void SetInternalServerException(InternalServerExceptionT&& value) {
    m_internalServerExceptionHasBeenSet = true;
    m_internalServerException = std::forward<InternalServerExceptionT>(value);
  }
  template <typename InternalServerExceptionT = InternalServerException>
  AgenticRetrieveStreamResponseOutput& WithInternalServerException(InternalServerExceptionT&& value) {
    SetInternalServerException(std::forward<InternalServerExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specified resource was not found.</p>
   */
  inline const BedrockAgentRuntimeError& GetResourceNotFoundException() const { return m_resourceNotFoundException; }
  inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
  template <typename ResourceNotFoundExceptionT = BedrockAgentRuntimeError>
  void SetResourceNotFoundException(ResourceNotFoundExceptionT&& value) {
    m_resourceNotFoundExceptionHasBeenSet = true;
    m_resourceNotFoundException = std::forward<ResourceNotFoundExceptionT>(value);
  }
  template <typename ResourceNotFoundExceptionT = BedrockAgentRuntimeError>
  AgenticRetrieveStreamResponseOutput& WithResourceNotFoundException(ResourceNotFoundExceptionT&& value) {
    SetResourceNotFoundException(std::forward<ResourceNotFoundExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A chunk of the generated answer. Emitted only when generateResponse is
   * true.</p>
   */
  inline const AgenticRetrieveResponseEvent& GetResponseEvent() const { return m_responseEvent; }
  inline bool ResponseEventHasBeenSet() const { return m_responseEventHasBeenSet; }
  template <typename ResponseEventT = AgenticRetrieveResponseEvent>
  void SetResponseEvent(ResponseEventT&& value) {
    m_responseEventHasBeenSet = true;
    m_responseEvent = std::forward<ResponseEventT>(value);
  }
  template <typename ResponseEventT = AgenticRetrieveResponseEvent>
  AgenticRetrieveStreamResponseOutput& WithResponseEvent(ResponseEventT&& value) {
    SetResponseEvent(std::forward<ResponseEventT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A retrieval result event containing the retrieved items.</p>
   */
  inline const AgenticRetrieveResultEvent& GetResult() const { return m_result; }
  inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
  template <typename ResultT = AgenticRetrieveResultEvent>
  void SetResult(ResultT&& value) {
    m_resultHasBeenSet = true;
    m_result = std::forward<ResultT>(value);
  }
  template <typename ResultT = AgenticRetrieveResultEvent>
  AgenticRetrieveStreamResponseOutput& WithResult(ResultT&& value) {
    SetResult(std::forward<ResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service quota has been exceeded.</p>
   */
  inline const BedrockAgentRuntimeError& GetServiceQuotaExceededException() const { return m_serviceQuotaExceededException; }
  inline bool ServiceQuotaExceededExceptionHasBeenSet() const { return m_serviceQuotaExceededExceptionHasBeenSet; }
  template <typename ServiceQuotaExceededExceptionT = BedrockAgentRuntimeError>
  void SetServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) {
    m_serviceQuotaExceededExceptionHasBeenSet = true;
    m_serviceQuotaExceededException = std::forward<ServiceQuotaExceededExceptionT>(value);
  }
  template <typename ServiceQuotaExceededExceptionT = BedrockAgentRuntimeError>
  AgenticRetrieveStreamResponseOutput& WithServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) {
    SetServiceQuotaExceededException(std::forward<ServiceQuotaExceededExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The request was throttled.</p>
   */
  inline const BedrockAgentRuntimeError& GetThrottlingException() const { return m_throttlingException; }
  inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
  template <typename ThrottlingExceptionT = BedrockAgentRuntimeError>
  void SetThrottlingException(ThrottlingExceptionT&& value) {
    m_throttlingExceptionHasBeenSet = true;
    m_throttlingException = std::forward<ThrottlingExceptionT>(value);
  }
  template <typename ThrottlingExceptionT = BedrockAgentRuntimeError>
  AgenticRetrieveStreamResponseOutput& WithThrottlingException(ThrottlingExceptionT&& value) {
    SetThrottlingException(std::forward<ThrottlingExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A trace event providing visibility into the retrieval process.</p>
   */
  inline const AgenticRetrieveTraceEvent& GetTraceEvent() const { return m_traceEvent; }
  inline bool TraceEventHasBeenSet() const { return m_traceEventHasBeenSet; }
  template <typename TraceEventT = AgenticRetrieveTraceEvent>
  void SetTraceEvent(TraceEventT&& value) {
    m_traceEventHasBeenSet = true;
    m_traceEvent = std::forward<TraceEventT>(value);
  }
  template <typename TraceEventT = AgenticRetrieveTraceEvent>
  AgenticRetrieveStreamResponseOutput& WithTraceEvent(TraceEventT&& value) {
    SetTraceEvent(std::forward<TraceEventT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The request validation failed.</p>
   */
  inline const BedrockAgentRuntimeError& GetValidationException() const { return m_validationException; }
  inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
  template <typename ValidationExceptionT = BedrockAgentRuntimeError>
  void SetValidationException(ValidationExceptionT&& value) {
    m_validationExceptionHasBeenSet = true;
    m_validationException = std::forward<ValidationExceptionT>(value);
  }
  template <typename ValidationExceptionT = BedrockAgentRuntimeError>
  AgenticRetrieveStreamResponseOutput& WithValidationException(ValidationExceptionT&& value) {
    SetValidationException(std::forward<ValidationExceptionT>(value));
    return *this;
  }
  ///@}
 private:
  BedrockAgentRuntimeError m_accessDeniedException;

  BadGatewayException m_badGatewayException;

  BedrockAgentRuntimeError m_conflictException;

  DependencyFailedException m_dependencyFailedException;

  InternalServerException m_internalServerException;

  BedrockAgentRuntimeError m_resourceNotFoundException;

  AgenticRetrieveResponseEvent m_responseEvent;

  AgenticRetrieveResultEvent m_result;

  BedrockAgentRuntimeError m_serviceQuotaExceededException;

  BedrockAgentRuntimeError m_throttlingException;

  AgenticRetrieveTraceEvent m_traceEvent;

  BedrockAgentRuntimeError m_validationException;
  bool m_accessDeniedExceptionHasBeenSet = false;
  bool m_badGatewayExceptionHasBeenSet = false;
  bool m_conflictExceptionHasBeenSet = false;
  bool m_dependencyFailedExceptionHasBeenSet = false;
  bool m_internalServerExceptionHasBeenSet = false;
  bool m_resourceNotFoundExceptionHasBeenSet = false;
  bool m_responseEventHasBeenSet = false;
  bool m_resultHasBeenSet = false;
  bool m_serviceQuotaExceededExceptionHasBeenSet = false;
  bool m_throttlingExceptionHasBeenSet = false;
  bool m_traceEventHasBeenSet = false;
  bool m_validationExceptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
