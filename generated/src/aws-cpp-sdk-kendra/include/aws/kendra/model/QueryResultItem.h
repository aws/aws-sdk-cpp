/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/QueryResultType.h>
#include <aws/kendra/model/QueryResultFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/TextWithHighlights.h>
#include <aws/kendra/model/ScoreAttributes.h>
#include <aws/kendra/model/TableExcerpt.h>
#include <aws/kendra/model/CollapsedResultDetail.h>
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
   * <p>A single query result.</p> <p>A query result contains information about a
   * document returned by the query. This includes the original location of the
   * document, a list of attributes assigned to the document, and relevant text from
   * the document that satisfies the query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/QueryResultItem">AWS
   * API Reference</a></p>
   */
  class QueryResultItem
  {
  public:
    AWS_KENDRA_API QueryResultItem() = default;
    AWS_KENDRA_API QueryResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API QueryResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the query result item id (<code>Id</code>) and the
     * query result item document id (<code>DocumentId</code>) combined. The value of
     * this field changes with every request, even when you have the same
     * documents.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    QueryResultItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of document within the response. For example, a response could
     * include a question-answer that's relevant to the query.</p>
     */
    inline QueryResultType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(QueryResultType value) { m_typeHasBeenSet = true; m_type = value; }
    inline QueryResultItem& WithType(QueryResultType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>Type</code> of document within the response is
     * <code>ANSWER</code>, then it is either a <code>TABLE</code> answer or
     * <code>TEXT</code> answer. If it's a table answer, a table excerpt is returned in
     * <code>TableExcerpt</code>. If it's a text answer, a text excerpt is returned in
     * <code>DocumentExcerpt</code>.</p>
     */
    inline QueryResultFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(QueryResultFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline QueryResultItem& WithFormat(QueryResultFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more additional fields/attributes associated with the query
     * result.</p>
     */
    inline const Aws::Vector<AdditionalResultAttribute>& GetAdditionalAttributes() const { return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    template<typename AdditionalAttributesT = Aws::Vector<AdditionalResultAttribute>>
    void SetAdditionalAttributes(AdditionalAttributesT&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::forward<AdditionalAttributesT>(value); }
    template<typename AdditionalAttributesT = Aws::Vector<AdditionalResultAttribute>>
    QueryResultItem& WithAdditionalAttributes(AdditionalAttributesT&& value) { SetAdditionalAttributes(std::forward<AdditionalAttributesT>(value)); return *this;}
    template<typename AdditionalAttributesT = AdditionalResultAttribute>
    QueryResultItem& AddAdditionalAttributes(AdditionalAttributesT&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.emplace_back(std::forward<AdditionalAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier for the document.</p>
     */
    inline const Aws::String& GetDocumentId() const { return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    template<typename DocumentIdT = Aws::String>
    void SetDocumentId(DocumentIdT&& value) { m_documentIdHasBeenSet = true; m_documentId = std::forward<DocumentIdT>(value); }
    template<typename DocumentIdT = Aws::String>
    QueryResultItem& WithDocumentId(DocumentIdT&& value) { SetDocumentId(std::forward<DocumentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the document. Contains the text of the title and information for
     * highlighting the relevant terms in the title.</p>
     */
    inline const TextWithHighlights& GetDocumentTitle() const { return m_documentTitle; }
    inline bool DocumentTitleHasBeenSet() const { return m_documentTitleHasBeenSet; }
    template<typename DocumentTitleT = TextWithHighlights>
    void SetDocumentTitle(DocumentTitleT&& value) { m_documentTitleHasBeenSet = true; m_documentTitle = std::forward<DocumentTitleT>(value); }
    template<typename DocumentTitleT = TextWithHighlights>
    QueryResultItem& WithDocumentTitle(DocumentTitleT&& value) { SetDocumentTitle(std::forward<DocumentTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An extract of the text in the document. Contains information about
     * highlighting the relevant terms in the excerpt.</p>
     */
    inline const TextWithHighlights& GetDocumentExcerpt() const { return m_documentExcerpt; }
    inline bool DocumentExcerptHasBeenSet() const { return m_documentExcerptHasBeenSet; }
    template<typename DocumentExcerptT = TextWithHighlights>
    void SetDocumentExcerpt(DocumentExcerptT&& value) { m_documentExcerptHasBeenSet = true; m_documentExcerpt = std::forward<DocumentExcerptT>(value); }
    template<typename DocumentExcerptT = TextWithHighlights>
    QueryResultItem& WithDocumentExcerpt(DocumentExcerptT&& value) { SetDocumentExcerpt(std::forward<DocumentExcerptT>(value)); return *this;}
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
    QueryResultItem& WithDocumentURI(DocumentURIT&& value) { SetDocumentURI(std::forward<DocumentURIT>(value)); return *this;}
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
    QueryResultItem& WithDocumentAttributes(DocumentAttributesT&& value) { SetDocumentAttributes(std::forward<DocumentAttributesT>(value)); return *this;}
    template<typename DocumentAttributesT = DocumentAttribute>
    QueryResultItem& AddDocumentAttributes(DocumentAttributesT&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.emplace_back(std::forward<DocumentAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the confidence level of Amazon Kendra providing a relevant result
     * for the query. Each result is placed into a bin that indicates the confidence,
     * <code>VERY_HIGH</code>, <code>HIGH</code>, <code>MEDIUM</code> and
     * <code>LOW</code>. You can use the score to determine if a response meets the
     * confidence needed for your application.</p> <p>The field is only set to
     * <code>LOW</code> when the <code>Type</code> field is set to
     * <code>DOCUMENT</code> and Amazon Kendra is not confident that the result is
     * relevant to the query.</p>
     */
    inline const ScoreAttributes& GetScoreAttributes() const { return m_scoreAttributes; }
    inline bool ScoreAttributesHasBeenSet() const { return m_scoreAttributesHasBeenSet; }
    template<typename ScoreAttributesT = ScoreAttributes>
    void SetScoreAttributes(ScoreAttributesT&& value) { m_scoreAttributesHasBeenSet = true; m_scoreAttributes = std::forward<ScoreAttributesT>(value); }
    template<typename ScoreAttributesT = ScoreAttributes>
    QueryResultItem& WithScoreAttributes(ScoreAttributesT&& value) { SetScoreAttributes(std::forward<ScoreAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that identifies a particular result from a particular query. Use this
     * token to provide click-through feedback for the result. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/submitting-feedback.html">Submitting
     * feedback</a>.</p>
     */
    inline const Aws::String& GetFeedbackToken() const { return m_feedbackToken; }
    inline bool FeedbackTokenHasBeenSet() const { return m_feedbackTokenHasBeenSet; }
    template<typename FeedbackTokenT = Aws::String>
    void SetFeedbackToken(FeedbackTokenT&& value) { m_feedbackTokenHasBeenSet = true; m_feedbackToken = std::forward<FeedbackTokenT>(value); }
    template<typename FeedbackTokenT = Aws::String>
    QueryResultItem& WithFeedbackToken(FeedbackTokenT&& value) { SetFeedbackToken(std::forward<FeedbackTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An excerpt from a table within a document.</p>
     */
    inline const TableExcerpt& GetTableExcerpt() const { return m_tableExcerpt; }
    inline bool TableExcerptHasBeenSet() const { return m_tableExcerptHasBeenSet; }
    template<typename TableExcerptT = TableExcerpt>
    void SetTableExcerpt(TableExcerptT&& value) { m_tableExcerptHasBeenSet = true; m_tableExcerpt = std::forward<TableExcerptT>(value); }
    template<typename TableExcerptT = TableExcerpt>
    QueryResultItem& WithTableExcerpt(TableExcerptT&& value) { SetTableExcerpt(std::forward<TableExcerptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about a collapsed group of search results.</p>
     */
    inline const CollapsedResultDetail& GetCollapsedResultDetail() const { return m_collapsedResultDetail; }
    inline bool CollapsedResultDetailHasBeenSet() const { return m_collapsedResultDetailHasBeenSet; }
    template<typename CollapsedResultDetailT = CollapsedResultDetail>
    void SetCollapsedResultDetail(CollapsedResultDetailT&& value) { m_collapsedResultDetailHasBeenSet = true; m_collapsedResultDetail = std::forward<CollapsedResultDetailT>(value); }
    template<typename CollapsedResultDetailT = CollapsedResultDetail>
    QueryResultItem& WithCollapsedResultDetail(CollapsedResultDetailT&& value) { SetCollapsedResultDetail(std::forward<CollapsedResultDetailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    QueryResultType m_type{QueryResultType::NOT_SET};
    bool m_typeHasBeenSet = false;

    QueryResultFormat m_format{QueryResultFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

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

    ScoreAttributes m_scoreAttributes;
    bool m_scoreAttributesHasBeenSet = false;

    Aws::String m_feedbackToken;
    bool m_feedbackTokenHasBeenSet = false;

    TableExcerpt m_tableExcerpt;
    bool m_tableExcerptHasBeenSet = false;

    CollapsedResultDetail m_collapsedResultDetail;
    bool m_collapsedResultDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
