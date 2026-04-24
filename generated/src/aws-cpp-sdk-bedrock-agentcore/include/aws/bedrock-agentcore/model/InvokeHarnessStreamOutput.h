/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessContentBlockDeltaEvent.h>
#include <aws/bedrock-agentcore/model/HarnessContentBlockStartEvent.h>
#include <aws/bedrock-agentcore/model/HarnessContentBlockStopEvent.h>
#include <aws/bedrock-agentcore/model/HarnessMessageStartEvent.h>
#include <aws/bedrock-agentcore/model/HarnessMessageStopEvent.h>
#include <aws/bedrock-agentcore/model/HarnessMetadataEvent.h>
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
 * <p>The streaming events returned by a harness invocation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InvokeHarnessStreamOutput">AWS
 * API Reference</a></p>
 */
class InvokeHarnessStreamOutput {
 public:
  AWS_BEDROCKAGENTCORE_API InvokeHarnessStreamOutput() = default;
  AWS_BEDROCKAGENTCORE_API InvokeHarnessStreamOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API InvokeHarnessStreamOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates the start of a new message from the agent.</p>
   */
  inline const HarnessMessageStartEvent& GetMessageStart() const { return m_messageStart; }
  inline bool MessageStartHasBeenSet() const { return m_messageStartHasBeenSet; }
  template <typename MessageStartT = HarnessMessageStartEvent>
  void SetMessageStart(MessageStartT&& value) {
    m_messageStartHasBeenSet = true;
    m_messageStart = std::forward<MessageStartT>(value);
  }
  template <typename MessageStartT = HarnessMessageStartEvent>
  InvokeHarnessStreamOutput& WithMessageStart(MessageStartT&& value) {
    SetMessageStart(std::forward<MessageStartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the start of a new content block.</p>
   */
  inline const HarnessContentBlockStartEvent& GetContentBlockStart() const { return m_contentBlockStart; }
  inline bool ContentBlockStartHasBeenSet() const { return m_contentBlockStartHasBeenSet; }
  template <typename ContentBlockStartT = HarnessContentBlockStartEvent>
  void SetContentBlockStart(ContentBlockStartT&& value) {
    m_contentBlockStartHasBeenSet = true;
    m_contentBlockStart = std::forward<ContentBlockStartT>(value);
  }
  template <typename ContentBlockStartT = HarnessContentBlockStartEvent>
  InvokeHarnessStreamOutput& WithContentBlockStart(ContentBlockStartT&& value) {
    SetContentBlockStart(std::forward<ContentBlockStartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A delta update to the current content block.</p>
   */
  inline const HarnessContentBlockDeltaEvent& GetContentBlockDelta() const { return m_contentBlockDelta; }
  inline bool ContentBlockDeltaHasBeenSet() const { return m_contentBlockDeltaHasBeenSet; }
  template <typename ContentBlockDeltaT = HarnessContentBlockDeltaEvent>
  void SetContentBlockDelta(ContentBlockDeltaT&& value) {
    m_contentBlockDeltaHasBeenSet = true;
    m_contentBlockDelta = std::forward<ContentBlockDeltaT>(value);
  }
  template <typename ContentBlockDeltaT = HarnessContentBlockDeltaEvent>
  InvokeHarnessStreamOutput& WithContentBlockDelta(ContentBlockDeltaT&& value) {
    SetContentBlockDelta(std::forward<ContentBlockDeltaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the end of the current content block.</p>
   */
  inline const HarnessContentBlockStopEvent& GetContentBlockStop() const { return m_contentBlockStop; }
  inline bool ContentBlockStopHasBeenSet() const { return m_contentBlockStopHasBeenSet; }
  template <typename ContentBlockStopT = HarnessContentBlockStopEvent>
  void SetContentBlockStop(ContentBlockStopT&& value) {
    m_contentBlockStopHasBeenSet = true;
    m_contentBlockStop = std::forward<ContentBlockStopT>(value);
  }
  template <typename ContentBlockStopT = HarnessContentBlockStopEvent>
  InvokeHarnessStreamOutput& WithContentBlockStop(ContentBlockStopT&& value) {
    SetContentBlockStop(std::forward<ContentBlockStopT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the end of the current message.</p>
   */
  inline const HarnessMessageStopEvent& GetMessageStop() const { return m_messageStop; }
  inline bool MessageStopHasBeenSet() const { return m_messageStopHasBeenSet; }
  template <typename MessageStopT = HarnessMessageStopEvent>
  void SetMessageStop(MessageStopT&& value) {
    m_messageStopHasBeenSet = true;
    m_messageStop = std::forward<MessageStopT>(value);
  }
  template <typename MessageStopT = HarnessMessageStopEvent>
  InvokeHarnessStreamOutput& WithMessageStop(MessageStopT&& value) {
    SetMessageStop(std::forward<MessageStopT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token usage and latency metrics for the invocation.</p>
   */
  inline const HarnessMetadataEvent& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = HarnessMetadataEvent>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = HarnessMetadataEvent>
  InvokeHarnessStreamOutput& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
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
  InvokeHarnessStreamOutput& WithInternalServerException(InternalServerExceptionT&& value) {
    SetInternalServerException(std::forward<InternalServerExceptionT>(value));
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
  InvokeHarnessStreamOutput& WithValidationException(ValidationExceptionT&& value) {
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
  InvokeHarnessStreamOutput& WithRuntimeClientError(RuntimeClientErrorT&& value) {
    SetRuntimeClientError(std::forward<RuntimeClientErrorT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessMessageStartEvent m_messageStart;

  HarnessContentBlockStartEvent m_contentBlockStart;

  HarnessContentBlockDeltaEvent m_contentBlockDelta;

  HarnessContentBlockStopEvent m_contentBlockStop;

  HarnessMessageStopEvent m_messageStop;

  HarnessMetadataEvent m_metadata;

  BedrockAgentCoreError m_internalServerException;

  ValidationException m_validationException;

  BedrockAgentCoreError m_runtimeClientError;
  bool m_messageStartHasBeenSet = false;
  bool m_contentBlockStartHasBeenSet = false;
  bool m_contentBlockDeltaHasBeenSet = false;
  bool m_contentBlockStopHasBeenSet = false;
  bool m_messageStopHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_internalServerExceptionHasBeenSet = false;
  bool m_validationExceptionHasBeenSet = false;
  bool m_runtimeClientErrorHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
