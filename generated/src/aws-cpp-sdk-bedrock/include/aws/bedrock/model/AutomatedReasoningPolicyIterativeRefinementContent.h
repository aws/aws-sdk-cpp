/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowDocument.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Configuration for an iterative policy refinement workflow, including source
 * documents to process and optional feedback to guide the
 * refinement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyIterativeRefinementContent">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyIterativeRefinementContent {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyIterativeRefinementContent() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyIterativeRefinementContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyIterativeRefinementContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Source documents used for iterative policy refinement. These documents
   * provide context for refining the policy definition.</p>
   */
  inline const Aws::Vector<AutomatedReasoningPolicyBuildWorkflowDocument>& GetDocuments() const { return m_documents; }
  inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
  template <typename DocumentsT = Aws::Vector<AutomatedReasoningPolicyBuildWorkflowDocument>>
  void SetDocuments(DocumentsT&& value) {
    m_documentsHasBeenSet = true;
    m_documents = std::forward<DocumentsT>(value);
  }
  template <typename DocumentsT = Aws::Vector<AutomatedReasoningPolicyBuildWorkflowDocument>>
  AutomatedReasoningPolicyIterativeRefinementContent& WithDocuments(DocumentsT&& value) {
    SetDocuments(std::forward<DocumentsT>(value));
    return *this;
  }
  template <typename DocumentsT = AutomatedReasoningPolicyBuildWorkflowDocument>
  AutomatedReasoningPolicyIterativeRefinementContent& AddDocuments(DocumentsT&& value) {
    m_documentsHasBeenSet = true;
    m_documents.emplace_back(std::forward<DocumentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional feedback to guide the iterative refinement workflow. Provide
   * specific instructions or constraints for policy refinement.</p>
   */
  inline const Aws::String& GetFeedback() const { return m_feedback; }
  inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }
  template <typename FeedbackT = Aws::String>
  void SetFeedback(FeedbackT&& value) {
    m_feedbackHasBeenSet = true;
    m_feedback = std::forward<FeedbackT>(value);
  }
  template <typename FeedbackT = Aws::String>
  AutomatedReasoningPolicyIterativeRefinementContent& WithFeedback(FeedbackT&& value) {
    SetFeedback(std::forward<FeedbackT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AutomatedReasoningPolicyBuildWorkflowDocument> m_documents;

  Aws::String m_feedback;
  bool m_documentsHasBeenSet = false;
  bool m_feedbackHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
