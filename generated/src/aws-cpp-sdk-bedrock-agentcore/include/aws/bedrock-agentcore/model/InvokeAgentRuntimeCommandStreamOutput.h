/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ResponseChunk.h>
#include <aws/bedrock-agentcore/model/ValidationException.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Streaming output for InvokeAgentRuntimeCommand operation Delivers typed
 * events: contentStart (first), contentDelta (middle), contentStop
 * (last)</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InvokeAgentRuntimeCommandStreamOutput">AWS
 * API Reference</a></p>
 */
class InvokeAgentRuntimeCommandStreamOutput {
 public:
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandStreamOutput() = default;
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandStreamOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandStreamOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Response chunk containing command execution events</p>
   */
  inline const ResponseChunk& GetChunk() const { return m_chunk; }
  inline bool ChunkHasBeenSet() const { return m_chunkHasBeenSet; }
  template <typename ChunkT = ResponseChunk>
  void SetChunk(ChunkT&& value) {
    m_chunkHasBeenSet = true;
    m_chunk = std::forward<ChunkT>(value);
  }
  template <typename ChunkT = ResponseChunk>
  InvokeAgentRuntimeCommandStreamOutput& WithChunk(ChunkT&& value) {
    SetChunk(std::forward<ChunkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Exception events for error streaming</p>
   */
  inline const BedrockAgentCoreError& GetAccessDeniedException() const { return m_accessDeniedException; }
  inline bool AccessDeniedExceptionHasBeenSet() const { return m_accessDeniedExceptionHasBeenSet; }
  template <typename AccessDeniedExceptionT = BedrockAgentCoreError>
  void SetAccessDeniedException(AccessDeniedExceptionT&& value) {
    m_accessDeniedExceptionHasBeenSet = true;
    m_accessDeniedException = std::forward<AccessDeniedExceptionT>(value);
  }
  template <typename AccessDeniedExceptionT = BedrockAgentCoreError>
  InvokeAgentRuntimeCommandStreamOutput& WithAccessDeniedException(AccessDeniedExceptionT&& value) {
    SetAccessDeniedException(std::forward<AccessDeniedExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BedrockAgentCoreError& GetInternalServerException() const { return m_internalServerException; }
  inline bool InternalServerExceptionHasBeenSet() const { return m_internalServerExceptionHasBeenSet; }
  template <typename InternalServerExceptionT = BedrockAgentCoreError>
  void SetInternalServerException(InternalServerExceptionT&& value) {
    m_internalServerExceptionHasBeenSet = true;
    m_internalServerException = std::forward<InternalServerExceptionT>(value);
  }
  template <typename InternalServerExceptionT = BedrockAgentCoreError>
  InvokeAgentRuntimeCommandStreamOutput& WithInternalServerException(InternalServerExceptionT&& value) {
    SetInternalServerException(std::forward<InternalServerExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BedrockAgentCoreError& GetResourceNotFoundException() const { return m_resourceNotFoundException; }
  inline bool ResourceNotFoundExceptionHasBeenSet() const { return m_resourceNotFoundExceptionHasBeenSet; }
  template <typename ResourceNotFoundExceptionT = BedrockAgentCoreError>
  void SetResourceNotFoundException(ResourceNotFoundExceptionT&& value) {
    m_resourceNotFoundExceptionHasBeenSet = true;
    m_resourceNotFoundException = std::forward<ResourceNotFoundExceptionT>(value);
  }
  template <typename ResourceNotFoundExceptionT = BedrockAgentCoreError>
  InvokeAgentRuntimeCommandStreamOutput& WithResourceNotFoundException(ResourceNotFoundExceptionT&& value) {
    SetResourceNotFoundException(std::forward<ResourceNotFoundExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BedrockAgentCoreError& GetServiceQuotaExceededException() const { return m_serviceQuotaExceededException; }
  inline bool ServiceQuotaExceededExceptionHasBeenSet() const { return m_serviceQuotaExceededExceptionHasBeenSet; }
  template <typename ServiceQuotaExceededExceptionT = BedrockAgentCoreError>
  void SetServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) {
    m_serviceQuotaExceededExceptionHasBeenSet = true;
    m_serviceQuotaExceededException = std::forward<ServiceQuotaExceededExceptionT>(value);
  }
  template <typename ServiceQuotaExceededExceptionT = BedrockAgentCoreError>
  InvokeAgentRuntimeCommandStreamOutput& WithServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) {
    SetServiceQuotaExceededException(std::forward<ServiceQuotaExceededExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BedrockAgentCoreError& GetThrottlingException() const { return m_throttlingException; }
  inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
  template <typename ThrottlingExceptionT = BedrockAgentCoreError>
  void SetThrottlingException(ThrottlingExceptionT&& value) {
    m_throttlingExceptionHasBeenSet = true;
    m_throttlingException = std::forward<ThrottlingExceptionT>(value);
  }
  template <typename ThrottlingExceptionT = BedrockAgentCoreError>
  InvokeAgentRuntimeCommandStreamOutput& WithThrottlingException(ThrottlingExceptionT&& value) {
    SetThrottlingException(std::forward<ThrottlingExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ValidationException& GetValidationException() const { return m_validationException; }
  inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
  template <typename ValidationExceptionT = ValidationException>
  void SetValidationException(ValidationExceptionT&& value) {
    m_validationExceptionHasBeenSet = true;
    m_validationException = std::forward<ValidationExceptionT>(value);
  }
  template <typename ValidationExceptionT = ValidationException>
  InvokeAgentRuntimeCommandStreamOutput& WithValidationException(ValidationExceptionT&& value) {
    SetValidationException(std::forward<ValidationExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BedrockAgentCoreError& GetRuntimeClientError() const { return m_runtimeClientError; }
  inline bool RuntimeClientErrorHasBeenSet() const { return m_runtimeClientErrorHasBeenSet; }
  template <typename RuntimeClientErrorT = BedrockAgentCoreError>
  void SetRuntimeClientError(RuntimeClientErrorT&& value) {
    m_runtimeClientErrorHasBeenSet = true;
    m_runtimeClientError = std::forward<RuntimeClientErrorT>(value);
  }
  template <typename RuntimeClientErrorT = BedrockAgentCoreError>
  InvokeAgentRuntimeCommandStreamOutput& WithRuntimeClientError(RuntimeClientErrorT&& value) {
    SetRuntimeClientError(std::forward<RuntimeClientErrorT>(value));
    return *this;
  }
  ///@}
 private:
  ResponseChunk m_chunk;

  BedrockAgentCoreError m_accessDeniedException;

  BedrockAgentCoreError m_internalServerException;

  BedrockAgentCoreError m_resourceNotFoundException;

  BedrockAgentCoreError m_serviceQuotaExceededException;

  BedrockAgentCoreError m_throttlingException;

  ValidationException m_validationException;

  BedrockAgentCoreError m_runtimeClientError;
  bool m_chunkHasBeenSet = false;
  bool m_accessDeniedExceptionHasBeenSet = false;
  bool m_internalServerExceptionHasBeenSet = false;
  bool m_resourceNotFoundExceptionHasBeenSet = false;
  bool m_serviceQuotaExceededExceptionHasBeenSet = false;
  bool m_throttlingExceptionHasBeenSet = false;
  bool m_validationExceptionHasBeenSet = false;
  bool m_runtimeClientErrorHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
