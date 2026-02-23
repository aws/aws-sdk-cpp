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
 * <p>References a specific atomic statement within a source document, used to link
 * policy elements back to their source material.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyStatementReference">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyStatementReference {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyStatementReference() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyStatementReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyStatementReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the document containing the referenced
   * statement.</p>
   */
  inline const Aws::String& GetDocumentId() const { return m_documentId; }
  inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
  template <typename DocumentIdT = Aws::String>
  void SetDocumentId(DocumentIdT&& value) {
    m_documentIdHasBeenSet = true;
    m_documentId = std::forward<DocumentIdT>(value);
  }
  template <typename DocumentIdT = Aws::String>
  AutomatedReasoningPolicyStatementReference& WithDocumentId(DocumentIdT&& value) {
    SetDocumentId(std::forward<DocumentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the specific atomic statement being referenced.</p>
   */
  inline const Aws::String& GetStatementId() const { return m_statementId; }
  inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }
  template <typename StatementIdT = Aws::String>
  void SetStatementId(StatementIdT&& value) {
    m_statementIdHasBeenSet = true;
    m_statementId = std::forward<StatementIdT>(value);
  }
  template <typename StatementIdT = Aws::String>
  AutomatedReasoningPolicyStatementReference& WithStatementId(StatementIdT&& value) {
    SetStatementId(std::forward<StatementIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_documentId;

  Aws::String m_statementId;
  bool m_documentIdHasBeenSet = false;
  bool m_statementIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
