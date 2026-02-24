/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Represents a single line of text from a source document, annotated with its
 * line number for precise referencing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyAnnotatedLine">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyAnnotatedLine {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyAnnotatedLine() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyAnnotatedLine(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyAnnotatedLine& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The line number of this text within the source document.</p>
   */
  inline int GetLineNumber() const { return m_lineNumber; }
  inline bool LineNumberHasBeenSet() const { return m_lineNumberHasBeenSet; }
  inline void SetLineNumber(int value) {
    m_lineNumberHasBeenSet = true;
    m_lineNumber = value;
  }
  inline AutomatedReasoningPolicyAnnotatedLine& WithLineNumber(int value) {
    SetLineNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actual text content of this line from the source document.</p>
   */
  inline const Aws::String& GetLineText() const { return m_lineText; }
  inline bool LineTextHasBeenSet() const { return m_lineTextHasBeenSet; }
  template <typename LineTextT = Aws::String>
  void SetLineText(LineTextT&& value) {
    m_lineTextHasBeenSet = true;
    m_lineText = std::forward<LineTextT>(value);
  }
  template <typename LineTextT = Aws::String>
  AutomatedReasoningPolicyAnnotatedLine& WithLineText(LineTextT&& value) {
    SetLineText(std::forward<LineTextT>(value));
    return *this;
  }
  ///@}
 private:
  int m_lineNumber{0};

  Aws::String m_lineText;
  bool m_lineNumberHasBeenSet = false;
  bool m_lineTextHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
