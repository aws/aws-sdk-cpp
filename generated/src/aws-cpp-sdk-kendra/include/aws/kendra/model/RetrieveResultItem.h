/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ScoreAttributes.h>
#include <aws/kendra/model/DocumentAttribute.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>A single retrieved relevant passage result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/RetrieveResultItem">AWS
   * API Reference</a></p>
   */
  class RetrieveResultItem
  {
  public:
    AWS_KENDRA_API RetrieveResultItem() = default;
    AWS_KENDRA_API RetrieveResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API RetrieveResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the relevant passage result.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RetrieveResultItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const { return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    template<typename DocumentIdT = Aws::String>
    void SetDocumentId(DocumentIdT&& value) { m_documentIdHasBeenSet = true; m_documentId = std::forward<DocumentIdT>(value); }
    template<typename DocumentIdT = Aws::String>
    RetrieveResultItem& WithDocumentId(DocumentIdT&& value) { SetDocumentId(std::forward<DocumentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the document.</p>
     */
    inline const Aws::String& GetDocumentTitle() const { return m_documentTitle; }
    inline bool DocumentTitleHasBeenSet() const { return m_documentTitleHasBeenSet; }
    template<typename DocumentTitleT = Aws::String>
    void SetDocumentTitle(DocumentTitleT&& value) { m_documentTitleHasBeenSet = true; m_documentTitle = std::forward<DocumentTitleT>(value); }
    template<typename DocumentTitleT = Aws::String>
    RetrieveResultItem& WithDocumentTitle(DocumentTitleT&& value) { SetDocumentTitle(std::forward<DocumentTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the relevant passage.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    RetrieveResultItem& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the original location of the document.</p>
     */
    inline const Aws::String& GetDocumentURI() const { return m_documentURI; }
    inline bool DocumentURIHasBeenSet() const { return m_documentURIHasBeenSet; }
    template<typename DocumentURIT = Aws::String>
    void SetDocumentURI(DocumentURIT&& value) { m_documentURIHasBeenSet = true; m_documentURI = std::forward<DocumentURIT>(value); }
    template<typename DocumentURIT = Aws::String>
    RetrieveResultItem& WithDocumentURI(DocumentURIT&& value) { SetDocumentURI(std::forward<DocumentURIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of document fields/attributes assigned to a document in the search
     * results. For example, the document author (<code>_author</code>) or the source
     * URI (<code>_source_uri</code>) of the document.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetDocumentAttributes() const { return m_documentAttributes; }
    inline bool DocumentAttributesHasBeenSet() const { return m_documentAttributesHasBeenSet; }
    template<typename DocumentAttributesT = Aws::Vector<DocumentAttribute>>
    void SetDocumentAttributes(DocumentAttributesT&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = std::forward<DocumentAttributesT>(value); }
    template<typename DocumentAttributesT = Aws::Vector<DocumentAttribute>>
    RetrieveResultItem& WithDocumentAttributes(DocumentAttributesT&& value) { SetDocumentAttributes(std::forward<DocumentAttributesT>(value)); return *this;}
    template<typename DocumentAttributesT = DocumentAttribute>
    RetrieveResultItem& AddDocumentAttributes(DocumentAttributesT&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.emplace_back(std::forward<DocumentAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The confidence score bucket for a retrieved passage result. The confidence
     * bucket provides a relative ranking that indicates how confident Amazon Kendra is
     * that the response is relevant to the query.</p>
     */
    inline const ScoreAttributes& GetScoreAttributes() const { return m_scoreAttributes; }
    inline bool ScoreAttributesHasBeenSet() const { return m_scoreAttributesHasBeenSet; }
    template<typename ScoreAttributesT = ScoreAttributes>
    void SetScoreAttributes(ScoreAttributesT&& value) { m_scoreAttributesHasBeenSet = true; m_scoreAttributes = std::forward<ScoreAttributesT>(value); }
    template<typename ScoreAttributesT = ScoreAttributes>
    RetrieveResultItem& WithScoreAttributes(ScoreAttributesT&& value) { SetScoreAttributes(std::forward<ScoreAttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    Aws::String m_documentTitle;
    bool m_documentTitleHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_documentURI;
    bool m_documentURIHasBeenSet = false;

    Aws::Vector<DocumentAttribute> m_documentAttributes;
    bool m_documentAttributesHasBeenSet = false;

    ScoreAttributes m_scoreAttributes;
    bool m_scoreAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
