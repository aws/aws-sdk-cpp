/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowDocument.h>
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
 * <p>Configuration for generating a fidelity report, which can either analyze new
 * documents or update an existing fidelity report with a new policy
 * definition.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyGenerateFidelityReportContent">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyGenerateFidelityReportContent {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyGenerateFidelityReportContent() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyGenerateFidelityReportContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyGenerateFidelityReportContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Source documents to analyze for generating a new fidelity report. The
   * documents will be processed to create atomic statements and grounding
   * information.</p>
   */
  inline const Aws::Vector<AutomatedReasoningPolicyBuildWorkflowDocument>& GetDocuments() const { return m_documents; }
  inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
  template <typename DocumentsT = Aws::Vector<AutomatedReasoningPolicyBuildWorkflowDocument>>
  void SetDocuments(DocumentsT&& value) {
    m_documentsHasBeenSet = true;
    m_documents = std::forward<DocumentsT>(value);
  }
  template <typename DocumentsT = Aws::Vector<AutomatedReasoningPolicyBuildWorkflowDocument>>
  AutomatedReasoningPolicyGenerateFidelityReportContent& WithDocuments(DocumentsT&& value) {
    SetDocuments(std::forward<DocumentsT>(value));
    return *this;
  }
  template <typename DocumentsT = AutomatedReasoningPolicyBuildWorkflowDocument>
  AutomatedReasoningPolicyGenerateFidelityReportContent& AddDocuments(DocumentsT&& value) {
    m_documentsHasBeenSet = true;
    m_documents.emplace_back(std::forward<DocumentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AutomatedReasoningPolicyBuildWorkflowDocument> m_documents;
  bool m_documentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
