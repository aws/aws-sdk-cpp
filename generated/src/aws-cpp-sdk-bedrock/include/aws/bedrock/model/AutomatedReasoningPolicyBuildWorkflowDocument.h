/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildDocumentContentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Represents a source document used in the policy build workflow, containing
   * the content and metadata needed for policy generation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyBuildWorkflowDocument">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyBuildWorkflowDocument
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowDocument() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The actual content of the source document that will be analyzed to extract
     * policy rules and concepts.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetDocument() const { return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    template<typename DocumentT = Aws::Utils::CryptoBuffer>
    void SetDocument(DocumentT&& value) { m_documentHasBeenSet = true; m_document = std::forward<DocumentT>(value); }
    template<typename DocumentT = Aws::Utils::CryptoBuffer>
    AutomatedReasoningPolicyBuildWorkflowDocument& WithDocument(DocumentT&& value) { SetDocument(std::forward<DocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the document content (e.g., text/plain, application/pdf,
     * text/markdown).</p>
     */
    inline AutomatedReasoningPolicyBuildDocumentContentType GetDocumentContentType() const { return m_documentContentType; }
    inline bool DocumentContentTypeHasBeenSet() const { return m_documentContentTypeHasBeenSet; }
    inline void SetDocumentContentType(AutomatedReasoningPolicyBuildDocumentContentType value) { m_documentContentTypeHasBeenSet = true; m_documentContentType = value; }
    inline AutomatedReasoningPolicyBuildWorkflowDocument& WithDocumentContentType(AutomatedReasoningPolicyBuildDocumentContentType value) { SetDocumentContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive name for the document that helps identify its purpose and
     * content.</p>
     */
    inline const Aws::String& GetDocumentName() const { return m_documentName; }
    inline bool DocumentNameHasBeenSet() const { return m_documentNameHasBeenSet; }
    template<typename DocumentNameT = Aws::String>
    void SetDocumentName(DocumentNameT&& value) { m_documentNameHasBeenSet = true; m_documentName = std::forward<DocumentNameT>(value); }
    template<typename DocumentNameT = Aws::String>
    AutomatedReasoningPolicyBuildWorkflowDocument& WithDocumentName(DocumentNameT&& value) { SetDocumentName(std::forward<DocumentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the document's content and how it should be used in
     * the policy generation process.</p>
     */
    inline const Aws::String& GetDocumentDescription() const { return m_documentDescription; }
    inline bool DocumentDescriptionHasBeenSet() const { return m_documentDescriptionHasBeenSet; }
    template<typename DocumentDescriptionT = Aws::String>
    void SetDocumentDescription(DocumentDescriptionT&& value) { m_documentDescriptionHasBeenSet = true; m_documentDescription = std::forward<DocumentDescriptionT>(value); }
    template<typename DocumentDescriptionT = Aws::String>
    AutomatedReasoningPolicyBuildWorkflowDocument& WithDocumentDescription(DocumentDescriptionT&& value) { SetDocumentDescription(std::forward<DocumentDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::CryptoBuffer m_document{};
    bool m_documentHasBeenSet = false;

    AutomatedReasoningPolicyBuildDocumentContentType m_documentContentType{AutomatedReasoningPolicyBuildDocumentContentType::NOT_SET};
    bool m_documentContentTypeHasBeenSet = false;

    Aws::String m_documentName;
    bool m_documentNameHasBeenSet = false;

    Aws::String m_documentDescription;
    bool m_documentDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
