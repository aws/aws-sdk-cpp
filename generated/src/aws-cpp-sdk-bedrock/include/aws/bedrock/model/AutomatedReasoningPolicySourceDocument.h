/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildDocumentContentType.h>
#include <aws/core/utils/Array.h>
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
 * <p>Represents a source document that was processed during a build workflow.
 * Contains the document content, metadata, and a hash for
 * verification.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicySourceDocument">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicySourceDocument {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicySourceDocument() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicySourceDocument(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicySourceDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The raw content of the source document as a binary blob.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetDocument() const { return m_document; }
  inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
  template <typename DocumentT = Aws::Utils::CryptoBuffer>
  void SetDocument(DocumentT&& value) {
    m_documentHasBeenSet = true;
    m_document = std::forward<DocumentT>(value);
  }
  template <typename DocumentT = Aws::Utils::CryptoBuffer>
  AutomatedReasoningPolicySourceDocument& WithDocument(DocumentT&& value) {
    SetDocument(std::forward<DocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MIME type of the document (e.g., application/pdf, text/plain).</p>
   */
  inline AutomatedReasoningPolicyBuildDocumentContentType GetDocumentContentType() const { return m_documentContentType; }
  inline bool DocumentContentTypeHasBeenSet() const { return m_documentContentTypeHasBeenSet; }
  inline void SetDocumentContentType(AutomatedReasoningPolicyBuildDocumentContentType value) {
    m_documentContentTypeHasBeenSet = true;
    m_documentContentType = value;
  }
  inline AutomatedReasoningPolicySourceDocument& WithDocumentContentType(AutomatedReasoningPolicyBuildDocumentContentType value) {
    SetDocumentContentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the source document for identification purposes.</p>
   */
  inline const Aws::String& GetDocumentName() const { return m_documentName; }
  inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
  template <typename DocumentNameT = Aws::String>
  void SetDocumentName(DocumentNameT&& value) {
    m_documentNameHasBeenSet = true;
    m_documentName = std::forward<DocumentNameT>(value);
  }
  template <typename DocumentNameT = Aws::String>
  AutomatedReasoningPolicySourceDocument& WithDocumentName(DocumentNameT&& value) {
    SetDocumentName(std::forward<DocumentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description providing context about the document's content and
   * purpose.</p>
   */
  inline const Aws::String& GetDocumentDescription() const { return m_documentDescription; }
  inline bool DocumentDescriptionHasBeenSet() const { return m_documentDescriptionHasBeenSet; }
  template <typename DocumentDescriptionT = Aws::String>
  void SetDocumentDescription(DocumentDescriptionT&& value) {
    m_documentDescriptionHasBeenSet = true;
    m_documentDescription = std::forward<DocumentDescriptionT>(value);
  }
  template <typename DocumentDescriptionT = Aws::String>
  AutomatedReasoningPolicySourceDocument& WithDocumentDescription(DocumentDescriptionT&& value) {
    SetDocumentDescription(std::forward<DocumentDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A SHA-256 hash of the document content, used for verification and integrity
   * checking.</p>
   */
  inline const Aws::String& GetDocumentHash() const { return m_documentHash; }
  inline bool DocumentHashHasBeenSet() const { return m_documentHashHasBeenSet; }
  template <typename DocumentHashT = Aws::String>
  void SetDocumentHash(DocumentHashT&& value) {
    m_documentHashHasBeenSet = true;
    m_documentHash = std::forward<DocumentHashT>(value);
  }
  template <typename DocumentHashT = Aws::String>
  AutomatedReasoningPolicySourceDocument& WithDocumentHash(DocumentHashT&& value) {
    SetDocumentHash(std::forward<DocumentHashT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::CryptoBuffer m_document{};

  AutomatedReasoningPolicyBuildDocumentContentType m_documentContentType{AutomatedReasoningPolicyBuildDocumentContentType::NOT_SET};

  Aws::String m_documentName;

  Aws::String m_documentDescription;

  Aws::String m_documentHash;
  bool m_documentHasBeenSet = false;
  bool m_documentContentTypeHasBeenSet = false;
  bool m_documentNameHasBeenSet = false;
  bool m_documentDescriptionHasBeenSet = false;
  bool m_documentHashHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
