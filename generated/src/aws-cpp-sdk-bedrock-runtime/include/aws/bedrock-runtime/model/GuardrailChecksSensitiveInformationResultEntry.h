/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailChecksSensitiveInformationEntityType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockRuntime {
namespace Model {

/**
 * <p>The detection result for a single sensitive information entity found in the
 * evaluated messages.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailChecksSensitiveInformationResultEntry">AWS
 * API Reference</a></p>
 */
class GuardrailChecksSensitiveInformationResultEntry {
 public:
  AWS_BEDROCKRUNTIME_API GuardrailChecksSensitiveInformationResultEntry() = default;
  AWS_BEDROCKRUNTIME_API GuardrailChecksSensitiveInformationResultEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API GuardrailChecksSensitiveInformationResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The PII entity type that was detected.</p>
   */
  inline GuardrailChecksSensitiveInformationEntityType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(GuardrailChecksSensitiveInformationEntityType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline GuardrailChecksSensitiveInformationResultEntry& WithType(GuardrailChecksSensitiveInformationEntityType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The confidence score for the detection, ranging from 0.0 to 1.0. Higher
   * values indicate greater confidence.</p>
   */
  inline double GetConfidenceScore() const { return m_confidenceScore; }
  inline bool ConfidenceScoreHasBeenSet() const { return m_confidenceScoreHasBeenSet; }
  inline void SetConfidenceScore(double value) {
    m_confidenceScoreHasBeenSet = true;
    m_confidenceScore = value;
  }
  inline GuardrailChecksSensitiveInformationResultEntry& WithConfidenceScore(double value) {
    SetConfidenceScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start character offset of the detected entity within the content
   * block.</p>
   */
  inline int GetBeginOffset() const { return m_beginOffset; }
  inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }
  inline void SetBeginOffset(int value) {
    m_beginOffsetHasBeenSet = true;
    m_beginOffset = value;
  }
  inline GuardrailChecksSensitiveInformationResultEntry& WithBeginOffset(int value) {
    SetBeginOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end character offset of the detected entity within the content block.</p>
   */
  inline int GetEndOffset() const { return m_endOffset; }
  inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }
  inline void SetEndOffset(int value) {
    m_endOffsetHasBeenSet = true;
    m_endOffset = value;
  }
  inline GuardrailChecksSensitiveInformationResultEntry& WithEndOffset(int value) {
    SetEndOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The zero-based index of the message in the input messages array where the
   * entity was detected.</p>
   */
  inline int GetMessageIndex() const { return m_messageIndex; }
  inline bool MessageIndexHasBeenSet() const { return m_messageIndexHasBeenSet; }
  inline void SetMessageIndex(int value) {
    m_messageIndexHasBeenSet = true;
    m_messageIndex = value;
  }
  inline GuardrailChecksSensitiveInformationResultEntry& WithMessageIndex(int value) {
    SetMessageIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The zero-based index of the content block within the message where the entity
   * was detected.</p>
   */
  inline int GetContentIndex() const { return m_contentIndex; }
  inline bool ContentIndexHasBeenSet() const { return m_contentIndexHasBeenSet; }
  inline void SetContentIndex(int value) {
    m_contentIndexHasBeenSet = true;
    m_contentIndex = value;
  }
  inline GuardrailChecksSensitiveInformationResultEntry& WithContentIndex(int value) {
    SetContentIndex(value);
    return *this;
  }
  ///@}
 private:
  GuardrailChecksSensitiveInformationEntityType m_type{GuardrailChecksSensitiveInformationEntityType::NOT_SET};

  double m_confidenceScore{0.0};

  int m_beginOffset{0};

  int m_endOffset{0};

  int m_messageIndex{0};

  int m_contentIndex{0};
  bool m_typeHasBeenSet = false;
  bool m_confidenceScoreHasBeenSet = false;
  bool m_beginOffsetHasBeenSet = false;
  bool m_endOffsetHasBeenSet = false;
  bool m_messageIndexHasBeenSet = false;
  bool m_contentIndexHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
