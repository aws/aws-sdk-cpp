/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAnnotatedChunk.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyAtomicStatement.h>
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
 * <p>Represents a source document that was analyzed during fidelity report
 * generation, including the document's metadata and its content broken down into
 * atomic statements.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyReportSourceDocument">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyReportSourceDocument {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyReportSourceDocument() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyReportSourceDocument(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyReportSourceDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the source document that was analyzed.</p>
   */
  inline const Aws::String& GetDocumentName() const { return m_documentName; }
  inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
  template <typename DocumentNameT = Aws::String>
  void SetDocumentName(DocumentNameT&& value) {
    m_documentNameHasBeenSet = true;
    m_documentName = std::forward<DocumentNameT>(value);
  }
  template <typename DocumentNameT = Aws::String>
  AutomatedReasoningPolicyReportSourceDocument& WithDocumentName(DocumentNameT&& value) {
    SetDocumentName(std::forward<DocumentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A SHA-256 hash of the document content, used for verification and ensuring
   * the document hasn't changed since analysis.</p>
   */
  inline const Aws::String& GetDocumentHash() const { return m_documentHash; }
  inline bool DocumentHashHasBeenSet() const { return m_documentHashHasBeenSet; }
  template <typename DocumentHashT = Aws::String>
  void SetDocumentHash(DocumentHashT&& value) {
    m_documentHashHasBeenSet = true;
    m_documentHash = std::forward<DocumentHashT>(value);
  }
  template <typename DocumentHashT = Aws::String>
  AutomatedReasoningPolicyReportSourceDocument& WithDocumentHash(DocumentHashT&& value) {
    SetDocumentHash(std::forward<DocumentHashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for this document within the fidelity report.</p>
   */
  inline const Aws::String& GetDocumentId() const { return m_documentId; }
  inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
  template <typename DocumentIdT = Aws::String>
  void SetDocumentId(DocumentIdT&& value) {
    m_documentIdHasBeenSet = true;
    m_documentId = std::forward<DocumentIdT>(value);
  }
  template <typename DocumentIdT = Aws::String>
  AutomatedReasoningPolicyReportSourceDocument& WithDocumentId(DocumentIdT&& value) {
    SetDocumentId(std::forward<DocumentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of atomic statements extracted from this document, representing the
   * fundamental units of meaning used for grounding.</p>
   */
  inline const Aws::Vector<AutomatedReasoningPolicyAtomicStatement>& GetAtomicStatements() const { return m_atomicStatements; }
  inline bool AtomicStatementsHasBeenSet() const { return m_atomicStatementsHasBeenSet; }
  template <typename AtomicStatementsT = Aws::Vector<AutomatedReasoningPolicyAtomicStatement>>
  void SetAtomicStatements(AtomicStatementsT&& value) {
    m_atomicStatementsHasBeenSet = true;
    m_atomicStatements = std::forward<AtomicStatementsT>(value);
  }
  template <typename AtomicStatementsT = Aws::Vector<AutomatedReasoningPolicyAtomicStatement>>
  AutomatedReasoningPolicyReportSourceDocument& WithAtomicStatements(AtomicStatementsT&& value) {
    SetAtomicStatements(std::forward<AtomicStatementsT>(value));
    return *this;
  }
  template <typename AtomicStatementsT = AutomatedReasoningPolicyAtomicStatement>
  AutomatedReasoningPolicyReportSourceDocument& AddAtomicStatements(AtomicStatementsT&& value) {
    m_atomicStatementsHasBeenSet = true;
    m_atomicStatements.emplace_back(std::forward<AtomicStatementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The document's content organized into annotated chunks with line number
   * information for precise referencing.</p>
   */
  inline const Aws::Vector<AutomatedReasoningPolicyAnnotatedChunk>& GetDocumentContent() const { return m_documentContent; }
  inline bool DocumentContentHasBeenSet() const { return m_documentContentHasBeenSet; }
  template <typename DocumentContentT = Aws::Vector<AutomatedReasoningPolicyAnnotatedChunk>>
  void SetDocumentContent(DocumentContentT&& value) {
    m_documentContentHasBeenSet = true;
    m_documentContent = std::forward<DocumentContentT>(value);
  }
  template <typename DocumentContentT = Aws::Vector<AutomatedReasoningPolicyAnnotatedChunk>>
  AutomatedReasoningPolicyReportSourceDocument& WithDocumentContent(DocumentContentT&& value) {
    SetDocumentContent(std::forward<DocumentContentT>(value));
    return *this;
  }
  template <typename DocumentContentT = AutomatedReasoningPolicyAnnotatedChunk>
  AutomatedReasoningPolicyReportSourceDocument& AddDocumentContent(DocumentContentT&& value) {
    m_documentContentHasBeenSet = true;
    m_documentContent.emplace_back(std::forward<DocumentContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_documentName;

  Aws::String m_documentHash;

  Aws::String m_documentId;

  Aws::Vector<AutomatedReasoningPolicyAtomicStatement> m_atomicStatements;

  Aws::Vector<AutomatedReasoningPolicyAnnotatedChunk> m_documentContent;
  bool m_documentNameHasBeenSet = false;
  bool m_documentHashHasBeenSet = false;
  bool m_documentIdHasBeenSet = false;
  bool m_atomicStatementsHasBeenSet = false;
  bool m_documentContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
