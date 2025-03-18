/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/QueryResultType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/TextWithHighlights.h>
#include <aws/kendra/model/AdditionalResultAttribute.h>
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
   * <p>A single featured result item. A featured result is displayed at the top of
   * the search results page, placed above all other results for certain queries. If
   * there's an exact match of a query, then certain documents are featured in the
   * search results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/FeaturedResultsItem">AWS
   * API Reference</a></p>
   */
  class FeaturedResultsItem
  {
  public:
    AWS_KENDRA_API FeaturedResultsItem() = default;
    AWS_KENDRA_API FeaturedResultsItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FeaturedResultsItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the featured result.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FeaturedResultsItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of document within the featured result response. For example, a
     * response could include a question-answer type that's relevant to the query.</p>
     */
    inline QueryResultType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(QueryResultType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FeaturedResultsItem& WithType(QueryResultType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more additional attributes associated with the featured result.</p>
     */
    inline const Aws::Vector<AdditionalResultAttribute>& GetAdditionalAttributes() const { return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    template<typename AdditionalAttributesT = Aws::Vector<AdditionalResultAttribute>>
    void SetAdditionalAttributes(AdditionalAttributesT&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::forward<AdditionalAttributesT>(value); }
    template<typename AdditionalAttributesT = Aws::Vector<AdditionalResultAttribute>>
    FeaturedResultsItem& WithAdditionalAttributes(AdditionalAttributesT&& value) { SetAdditionalAttributes(std::forward<AdditionalAttributesT>(value)); return *this;}
    template<typename AdditionalAttributesT = AdditionalResultAttribute>
    FeaturedResultsItem& AddAdditionalAttributes(AdditionalAttributesT&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.emplace_back(std::forward<AdditionalAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the featured document.</p>
     */
    inline const Aws::String& GetDocumentId() const { return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    template<typename DocumentIdT = Aws::String>
    void SetDocumentId(DocumentIdT&& value) { m_documentIdHasBeenSet = true; m_documentId = std::forward<DocumentIdT>(value); }
    template<typename DocumentIdT = Aws::String>
    FeaturedResultsItem& WithDocumentId(DocumentIdT&& value) { SetDocumentId(std::forward<DocumentIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TextWithHighlights& GetDocumentTitle() const { return m_documentTitle; }
    inline bool DocumentTitleHasBeenSet() const { return m_documentTitleHasBeenSet; }
    template<typename DocumentTitleT = TextWithHighlights>
    void SetDocumentTitle(DocumentTitleT&& value) { m_documentTitleHasBeenSet = true; m_documentTitle = std::forward<DocumentTitleT>(value); }
    template<typename DocumentTitleT = TextWithHighlights>
    FeaturedResultsItem& WithDocumentTitle(DocumentTitleT&& value) { SetDocumentTitle(std::forward<DocumentTitleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TextWithHighlights& GetDocumentExcerpt() const { return m_documentExcerpt; }
    inline bool DocumentExcerptHasBeenSet() const { return m_documentExcerptHasBeenSet; }
    template<typename DocumentExcerptT = TextWithHighlights>
    void SetDocumentExcerpt(DocumentExcerptT&& value) { m_documentExcerptHasBeenSet = true; m_documentExcerpt = std::forward<DocumentExcerptT>(value); }
    template<typename DocumentExcerptT = TextWithHighlights>
    FeaturedResultsItem& WithDocumentExcerpt(DocumentExcerptT&& value) { SetDocumentExcerpt(std::forward<DocumentExcerptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline const Aws::String& GetDocumentURI() const { return m_documentURI; }
    inline bool DocumentURIHasBeenSet() const { return m_documentURIHasBeenSet; }
    template<typename DocumentURIT = Aws::String>
    void SetDocumentURI(DocumentURIT&& value) { m_documentURIHasBeenSet = true; m_documentURI = std::forward<DocumentURIT>(value); }
    template<typename DocumentURIT = Aws::String>
    FeaturedResultsItem& WithDocumentURI(DocumentURIT&& value) { SetDocumentURI(std::forward<DocumentURIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of document attributes assigned to a featured document in the search
     * results. For example, the document author (<code>_author</code>) or the source
     * URI (<code>_source_uri</code>) of the document.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetDocumentAttributes() const { return m_documentAttributes; }
    inline bool DocumentAttributesHasBeenSet() const { return m_documentAttributesHasBeenSet; }
    template<typename DocumentAttributesT = Aws::Vector<DocumentAttribute>>
    void SetDocumentAttributes(DocumentAttributesT&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = std::forward<DocumentAttributesT>(value); }
    template<typename DocumentAttributesT = Aws::Vector<DocumentAttribute>>
    FeaturedResultsItem& WithDocumentAttributes(DocumentAttributesT&& value) { SetDocumentAttributes(std::forward<DocumentAttributesT>(value)); return *this;}
    template<typename DocumentAttributesT = DocumentAttribute>
    FeaturedResultsItem& AddDocumentAttributes(DocumentAttributesT&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.emplace_back(std::forward<DocumentAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that identifies a particular featured result from a particular query.
     * Use this token to provide click-through feedback for the result. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/submitting-feedback.html">Submitting
     * feedback</a>.</p>
     */
    inline const Aws::String& GetFeedbackToken() const { return m_feedbackToken; }
    inline bool FeedbackTokenHasBeenSet() const { return m_feedbackTokenHasBeenSet; }
    template<typename FeedbackTokenT = Aws::String>
    void SetFeedbackToken(FeedbackTokenT&& value) { m_feedbackTokenHasBeenSet = true; m_feedbackToken = std::forward<FeedbackTokenT>(value); }
    template<typename FeedbackTokenT = Aws::String>
    FeaturedResultsItem& WithFeedbackToken(FeedbackTokenT&& value) { SetFeedbackToken(std::forward<FeedbackTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    QueryResultType m_type{QueryResultType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<AdditionalResultAttribute> m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    TextWithHighlights m_documentTitle;
    bool m_documentTitleHasBeenSet = false;

    TextWithHighlights m_documentExcerpt;
    bool m_documentExcerptHasBeenSet = false;

    Aws::String m_documentURI;
    bool m_documentURIHasBeenSet = false;

    Aws::Vector<DocumentAttribute> m_documentAttributes;
    bool m_documentAttributesHasBeenSet = false;

    Aws::String m_feedbackToken;
    bool m_feedbackTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
