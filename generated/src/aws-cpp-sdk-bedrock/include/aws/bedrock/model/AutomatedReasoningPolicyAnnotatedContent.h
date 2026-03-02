/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAnnotatedLine.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Represents a content element within an annotated chunk. This union type
 * allows for different types of content elements to be included in document
 * chunks, such as individual lines of text with their line numbers.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyAnnotatedContent">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyAnnotatedContent {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyAnnotatedContent() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyAnnotatedContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyAnnotatedContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An annotated line of text from the source document, including both the line
   * number and the text content.</p>
   */
  inline const AutomatedReasoningPolicyAnnotatedLine& GetLine() const { return m_line; }
  inline bool LineHasBeenSet() const { return m_lineHasBeenSet; }
  template <typename LineT = AutomatedReasoningPolicyAnnotatedLine>
  void SetLine(LineT&& value) {
    m_lineHasBeenSet = true;
    m_line = std::forward<LineT>(value);
  }
  template <typename LineT = AutomatedReasoningPolicyAnnotatedLine>
  AutomatedReasoningPolicyAnnotatedContent& WithLine(LineT&& value) {
    SetLine(std::forward<LineT>(value));
    return *this;
  }
  ///@}
 private:
  AutomatedReasoningPolicyAnnotatedLine m_line;
  bool m_lineHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
