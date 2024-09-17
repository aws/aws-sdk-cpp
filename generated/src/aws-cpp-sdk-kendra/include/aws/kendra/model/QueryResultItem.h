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
    AWS_KENDRA_API QueryResultItem();
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
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline QueryResultItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline QueryResultItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline QueryResultItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of document within the response. For example, a response could
     * include a question-answer that's relevant to the query.</p>
     */
    inline const QueryResultType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const QueryResultType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(QueryResultType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline QueryResultItem& WithType(const QueryResultType& value) { SetType(value); return *this;}
    inline QueryResultItem& WithType(QueryResultType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>Type</code> of document within the response is
     * <code>ANSWER</code>, then it is either a <code>TABLE</code> answer or
     * <code>TEXT</code> answer. If it's a table answer, a table excerpt is returned in
     * <code>TableExcerpt</code>. If it's a text answer, a text excerpt is returned in
     * <code>DocumentExcerpt</code>.</p>
     */
    inline const QueryResultFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const QueryResultFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(QueryResultFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline QueryResultItem& WithFormat(const QueryResultFormat& value) { SetFormat(value); return *this;}
    inline QueryResultItem& WithFormat(QueryResultFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more additional fields/attributes associated with the query
     * result.</p>
     */
    inline const Aws::Vector<AdditionalResultAttribute>& GetAdditionalAttributes() const{ return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    inline void SetAdditionalAttributes(const Aws::Vector<AdditionalResultAttribute>& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = value; }
    inline void SetAdditionalAttributes(Aws::Vector<AdditionalResultAttribute>&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::move(value); }
    inline QueryResultItem& WithAdditionalAttributes(const Aws::Vector<AdditionalResultAttribute>& value) { SetAdditionalAttributes(value); return *this;}
    inline QueryResultItem& WithAdditionalAttributes(Aws::Vector<AdditionalResultAttribute>&& value) { SetAdditionalAttributes(std::move(value)); return *this;}
    inline QueryResultItem& AddAdditionalAttributes(const AdditionalResultAttribute& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(value); return *this; }
    inline QueryResultItem& AddAdditionalAttributes(AdditionalResultAttribute&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier for the document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }
    inline QueryResultItem& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}
    inline QueryResultItem& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}
    inline QueryResultItem& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the document. Contains the text of the title and information for
     * highlighting the relevant terms in the title.</p>
     */
    inline const TextWithHighlights& GetDocumentTitle() const{ return m_documentTitle; }
    inline bool DocumentTitleHasBeenSet() const { return m_documentTitleHasBeenSet; }
    inline void SetDocumentTitle(const TextWithHighlights& value) { m_documentTitleHasBeenSet = true; m_documentTitle = value; }
    inline void SetDocumentTitle(TextWithHighlights&& value) { m_documentTitleHasBeenSet = true; m_documentTitle = std::move(value); }
    inline QueryResultItem& WithDocumentTitle(const TextWithHighlights& value) { SetDocumentTitle(value); return *this;}
    inline QueryResultItem& WithDocumentTitle(TextWithHighlights&& value) { SetDocumentTitle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An extract of the text in the document. Contains information about
     * highlighting the relevant terms in the excerpt.</p>
     */
    inline const TextWithHighlights& GetDocumentExcerpt() const{ return m_documentExcerpt; }
    inline bool DocumentExcerptHasBeenSet() const { return m_documentExcerptHasBeenSet; }
    inline void SetDocumentExcerpt(const TextWithHighlights& value) { m_documentExcerptHasBeenSet = true; m_documentExcerpt = value; }
    inline void SetDocumentExcerpt(TextWithHighlights&& value) { m_documentExcerptHasBeenSet = true; m_documentExcerpt = std::move(value); }
    inline QueryResultItem& WithDocumentExcerpt(const TextWithHighlights& value) { SetDocumentExcerpt(value); return *this;}
    inline QueryResultItem& WithDocumentExcerpt(TextWithHighlights&& value) { SetDocumentExcerpt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the original location of the document.</p>
     */
    inline const Aws::String& GetDocumentURI() const{ return m_documentURI; }
    inline bool DocumentURIHasBeenSet() const { return m_documentURIHasBeenSet; }
    inline void SetDocumentURI(const Aws::String& value) { m_documentURIHasBeenSet = true; m_documentURI = value; }
    inline void SetDocumentURI(Aws::String&& value) { m_documentURIHasBeenSet = true; m_documentURI = std::move(value); }
    inline void SetDocumentURI(const char* value) { m_documentURIHasBeenSet = true; m_documentURI.assign(value); }
    inline QueryResultItem& WithDocumentURI(const Aws::String& value) { SetDocumentURI(value); return *this;}
    inline QueryResultItem& WithDocumentURI(Aws::String&& value) { SetDocumentURI(std::move(value)); return *this;}
    inline QueryResultItem& WithDocumentURI(const char* value) { SetDocumentURI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of document fields/attributes assigned to a document in the search
     * results. For example, the document author (<code>_author</code>) or the source
     * URI (<code>_source_uri</code>) of the document.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetDocumentAttributes() const{ return m_documentAttributes; }
    inline bool DocumentAttributesHasBeenSet() const { return m_documentAttributesHasBeenSet; }
    inline void SetDocumentAttributes(const Aws::Vector<DocumentAttribute>& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = value; }
    inline void SetDocumentAttributes(Aws::Vector<DocumentAttribute>&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = std::move(value); }
    inline QueryResultItem& WithDocumentAttributes(const Aws::Vector<DocumentAttribute>& value) { SetDocumentAttributes(value); return *this;}
    inline QueryResultItem& WithDocumentAttributes(Aws::Vector<DocumentAttribute>&& value) { SetDocumentAttributes(std::move(value)); return *this;}
    inline QueryResultItem& AddDocumentAttributes(const DocumentAttribute& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.push_back(value); return *this; }
    inline QueryResultItem& AddDocumentAttributes(DocumentAttribute&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.push_back(std::move(value)); return *this; }
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
    inline const ScoreAttributes& GetScoreAttributes() const{ return m_scoreAttributes; }
    inline bool ScoreAttributesHasBeenSet() const { return m_scoreAttributesHasBeenSet; }
    inline void SetScoreAttributes(const ScoreAttributes& value) { m_scoreAttributesHasBeenSet = true; m_scoreAttributes = value; }
    inline void SetScoreAttributes(ScoreAttributes&& value) { m_scoreAttributesHasBeenSet = true; m_scoreAttributes = std::move(value); }
    inline QueryResultItem& WithScoreAttributes(const ScoreAttributes& value) { SetScoreAttributes(value); return *this;}
    inline QueryResultItem& WithScoreAttributes(ScoreAttributes&& value) { SetScoreAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that identifies a particular result from a particular query. Use this
     * token to provide click-through feedback for the result. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/submitting-feedback.html">Submitting
     * feedback</a>.</p>
     */
    inline const Aws::String& GetFeedbackToken() const{ return m_feedbackToken; }
    inline bool FeedbackTokenHasBeenSet() const { return m_feedbackTokenHasBeenSet; }
    inline void SetFeedbackToken(const Aws::String& value) { m_feedbackTokenHasBeenSet = true; m_feedbackToken = value; }
    inline void SetFeedbackToken(Aws::String&& value) { m_feedbackTokenHasBeenSet = true; m_feedbackToken = std::move(value); }
    inline void SetFeedbackToken(const char* value) { m_feedbackTokenHasBeenSet = true; m_feedbackToken.assign(value); }
    inline QueryResultItem& WithFeedbackToken(const Aws::String& value) { SetFeedbackToken(value); return *this;}
    inline QueryResultItem& WithFeedbackToken(Aws::String&& value) { SetFeedbackToken(std::move(value)); return *this;}
    inline QueryResultItem& WithFeedbackToken(const char* value) { SetFeedbackToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An excerpt from a table within a document.</p>
     */
    inline const TableExcerpt& GetTableExcerpt() const{ return m_tableExcerpt; }
    inline bool TableExcerptHasBeenSet() const { return m_tableExcerptHasBeenSet; }
    inline void SetTableExcerpt(const TableExcerpt& value) { m_tableExcerptHasBeenSet = true; m_tableExcerpt = value; }
    inline void SetTableExcerpt(TableExcerpt&& value) { m_tableExcerptHasBeenSet = true; m_tableExcerpt = std::move(value); }
    inline QueryResultItem& WithTableExcerpt(const TableExcerpt& value) { SetTableExcerpt(value); return *this;}
    inline QueryResultItem& WithTableExcerpt(TableExcerpt&& value) { SetTableExcerpt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about a collapsed group of search results.</p>
     */
    inline const CollapsedResultDetail& GetCollapsedResultDetail() const{ return m_collapsedResultDetail; }
    inline bool CollapsedResultDetailHasBeenSet() const { return m_collapsedResultDetailHasBeenSet; }
    inline void SetCollapsedResultDetail(const CollapsedResultDetail& value) { m_collapsedResultDetailHasBeenSet = true; m_collapsedResultDetail = value; }
    inline void SetCollapsedResultDetail(CollapsedResultDetail&& value) { m_collapsedResultDetailHasBeenSet = true; m_collapsedResultDetail = std::move(value); }
    inline QueryResultItem& WithCollapsedResultDetail(const CollapsedResultDetail& value) { SetCollapsedResultDetail(value); return *this;}
    inline QueryResultItem& WithCollapsedResultDetail(CollapsedResultDetail&& value) { SetCollapsedResultDetail(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    QueryResultType m_type;
    bool m_typeHasBeenSet = false;

    QueryResultFormat m_format;
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
