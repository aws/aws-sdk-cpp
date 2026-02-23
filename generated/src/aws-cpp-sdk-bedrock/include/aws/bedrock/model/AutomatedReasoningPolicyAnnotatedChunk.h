/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAnnotatedContent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Represents a portion of a source document with line number annotations.
 * Chunks help organize document content for easier navigation and
 * reference.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyAnnotatedChunk">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyAnnotatedChunk {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyAnnotatedChunk() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyAnnotatedChunk(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyAnnotatedChunk& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The page number where this chunk begins, if the document is divided into
   * pages.</p>
   */
  inline int GetPageNumber() const { return m_pageNumber; }
  inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }
  inline void SetPageNumber(int value) {
    m_pageNumberHasBeenSet = true;
    m_pageNumber = value;
  }
  inline AutomatedReasoningPolicyAnnotatedChunk& WithPageNumber(int value) {
    SetPageNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lines of text contained within this chunk, each annotated with its line
   * number.</p>
   */
  inline const Aws::Vector<AutomatedReasoningPolicyAnnotatedContent>& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Vector<AutomatedReasoningPolicyAnnotatedContent>>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Vector<AutomatedReasoningPolicyAnnotatedContent>>
  AutomatedReasoningPolicyAnnotatedChunk& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  template <typename ContentT = AutomatedReasoningPolicyAnnotatedContent>
  AutomatedReasoningPolicyAnnotatedChunk& AddContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content.emplace_back(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  int m_pageNumber{0};

  Aws::Vector<AutomatedReasoningPolicyAnnotatedContent> m_content;
  bool m_pageNumberHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
