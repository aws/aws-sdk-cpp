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
    AWS_KENDRA_API FeaturedResultsItem();
    AWS_KENDRA_API FeaturedResultsItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API FeaturedResultsItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the featured result.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the featured result.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the featured result.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the featured result.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the featured result.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the featured result.</p>
     */
    inline FeaturedResultsItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the featured result.</p>
     */
    inline FeaturedResultsItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the featured result.</p>
     */
    inline FeaturedResultsItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of document within the featured result response. For example, a
     * response could include a question-answer type that's relevant to the query.</p>
     */
    inline const QueryResultType& GetType() const{ return m_type; }

    /**
     * <p>The type of document within the featured result response. For example, a
     * response could include a question-answer type that's relevant to the query.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of document within the featured result response. For example, a
     * response could include a question-answer type that's relevant to the query.</p>
     */
    inline void SetType(const QueryResultType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of document within the featured result response. For example, a
     * response could include a question-answer type that's relevant to the query.</p>
     */
    inline void SetType(QueryResultType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of document within the featured result response. For example, a
     * response could include a question-answer type that's relevant to the query.</p>
     */
    inline FeaturedResultsItem& WithType(const QueryResultType& value) { SetType(value); return *this;}

    /**
     * <p>The type of document within the featured result response. For example, a
     * response could include a question-answer type that's relevant to the query.</p>
     */
    inline FeaturedResultsItem& WithType(QueryResultType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>One or more additional attributes associated with the featured result.</p>
     */
    inline const Aws::Vector<AdditionalResultAttribute>& GetAdditionalAttributes() const{ return m_additionalAttributes; }

    /**
     * <p>One or more additional attributes associated with the featured result.</p>
     */
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }

    /**
     * <p>One or more additional attributes associated with the featured result.</p>
     */
    inline void SetAdditionalAttributes(const Aws::Vector<AdditionalResultAttribute>& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = value; }

    /**
     * <p>One or more additional attributes associated with the featured result.</p>
     */
    inline void SetAdditionalAttributes(Aws::Vector<AdditionalResultAttribute>&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::move(value); }

    /**
     * <p>One or more additional attributes associated with the featured result.</p>
     */
    inline FeaturedResultsItem& WithAdditionalAttributes(const Aws::Vector<AdditionalResultAttribute>& value) { SetAdditionalAttributes(value); return *this;}

    /**
     * <p>One or more additional attributes associated with the featured result.</p>
     */
    inline FeaturedResultsItem& WithAdditionalAttributes(Aws::Vector<AdditionalResultAttribute>&& value) { SetAdditionalAttributes(std::move(value)); return *this;}

    /**
     * <p>One or more additional attributes associated with the featured result.</p>
     */
    inline FeaturedResultsItem& AddAdditionalAttributes(const AdditionalResultAttribute& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(value); return *this; }

    /**
     * <p>One or more additional attributes associated with the featured result.</p>
     */
    inline FeaturedResultsItem& AddAdditionalAttributes(AdditionalResultAttribute&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the featured document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }

    /**
     * <p>The identifier of the featured document.</p>
     */
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }

    /**
     * <p>The identifier of the featured document.</p>
     */
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }

    /**
     * <p>The identifier of the featured document.</p>
     */
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }

    /**
     * <p>The identifier of the featured document.</p>
     */
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }

    /**
     * <p>The identifier of the featured document.</p>
     */
    inline FeaturedResultsItem& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The identifier of the featured document.</p>
     */
    inline FeaturedResultsItem& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the featured document.</p>
     */
    inline FeaturedResultsItem& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    
    inline const TextWithHighlights& GetDocumentTitle() const{ return m_documentTitle; }

    
    inline bool DocumentTitleHasBeenSet() const { return m_documentTitleHasBeenSet; }

    
    inline void SetDocumentTitle(const TextWithHighlights& value) { m_documentTitleHasBeenSet = true; m_documentTitle = value; }

    
    inline void SetDocumentTitle(TextWithHighlights&& value) { m_documentTitleHasBeenSet = true; m_documentTitle = std::move(value); }

    
    inline FeaturedResultsItem& WithDocumentTitle(const TextWithHighlights& value) { SetDocumentTitle(value); return *this;}

    
    inline FeaturedResultsItem& WithDocumentTitle(TextWithHighlights&& value) { SetDocumentTitle(std::move(value)); return *this;}


    
    inline const TextWithHighlights& GetDocumentExcerpt() const{ return m_documentExcerpt; }

    
    inline bool DocumentExcerptHasBeenSet() const { return m_documentExcerptHasBeenSet; }

    
    inline void SetDocumentExcerpt(const TextWithHighlights& value) { m_documentExcerptHasBeenSet = true; m_documentExcerpt = value; }

    
    inline void SetDocumentExcerpt(TextWithHighlights&& value) { m_documentExcerptHasBeenSet = true; m_documentExcerpt = std::move(value); }

    
    inline FeaturedResultsItem& WithDocumentExcerpt(const TextWithHighlights& value) { SetDocumentExcerpt(value); return *this;}

    
    inline FeaturedResultsItem& WithDocumentExcerpt(TextWithHighlights&& value) { SetDocumentExcerpt(std::move(value)); return *this;}


    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline const Aws::String& GetDocumentURI() const{ return m_documentURI; }

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline bool DocumentURIHasBeenSet() const { return m_documentURIHasBeenSet; }

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline void SetDocumentURI(const Aws::String& value) { m_documentURIHasBeenSet = true; m_documentURI = value; }

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline void SetDocumentURI(Aws::String&& value) { m_documentURIHasBeenSet = true; m_documentURI = std::move(value); }

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline void SetDocumentURI(const char* value) { m_documentURIHasBeenSet = true; m_documentURI.assign(value); }

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline FeaturedResultsItem& WithDocumentURI(const Aws::String& value) { SetDocumentURI(value); return *this;}

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline FeaturedResultsItem& WithDocumentURI(Aws::String&& value) { SetDocumentURI(std::move(value)); return *this;}

    /**
     * <p>The source URI location of the featured document.</p>
     */
    inline FeaturedResultsItem& WithDocumentURI(const char* value) { SetDocumentURI(value); return *this;}


    /**
     * <p>An array of document attributes assigned to a featured document in the search
     * results. For example, the document author (<code>_author</code>) or the source
     * URI (<code>_source_uri</code>) of the document.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetDocumentAttributes() const{ return m_documentAttributes; }

    /**
     * <p>An array of document attributes assigned to a featured document in the search
     * results. For example, the document author (<code>_author</code>) or the source
     * URI (<code>_source_uri</code>) of the document.</p>
     */
    inline bool DocumentAttributesHasBeenSet() const { return m_documentAttributesHasBeenSet; }

    /**
     * <p>An array of document attributes assigned to a featured document in the search
     * results. For example, the document author (<code>_author</code>) or the source
     * URI (<code>_source_uri</code>) of the document.</p>
     */
    inline void SetDocumentAttributes(const Aws::Vector<DocumentAttribute>& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = value; }

    /**
     * <p>An array of document attributes assigned to a featured document in the search
     * results. For example, the document author (<code>_author</code>) or the source
     * URI (<code>_source_uri</code>) of the document.</p>
     */
    inline void SetDocumentAttributes(Aws::Vector<DocumentAttribute>&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = std::move(value); }

    /**
     * <p>An array of document attributes assigned to a featured document in the search
     * results. For example, the document author (<code>_author</code>) or the source
     * URI (<code>_source_uri</code>) of the document.</p>
     */
    inline FeaturedResultsItem& WithDocumentAttributes(const Aws::Vector<DocumentAttribute>& value) { SetDocumentAttributes(value); return *this;}

    /**
     * <p>An array of document attributes assigned to a featured document in the search
     * results. For example, the document author (<code>_author</code>) or the source
     * URI (<code>_source_uri</code>) of the document.</p>
     */
    inline FeaturedResultsItem& WithDocumentAttributes(Aws::Vector<DocumentAttribute>&& value) { SetDocumentAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of document attributes assigned to a featured document in the search
     * results. For example, the document author (<code>_author</code>) or the source
     * URI (<code>_source_uri</code>) of the document.</p>
     */
    inline FeaturedResultsItem& AddDocumentAttributes(const DocumentAttribute& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.push_back(value); return *this; }

    /**
     * <p>An array of document attributes assigned to a featured document in the search
     * results. For example, the document author (<code>_author</code>) or the source
     * URI (<code>_source_uri</code>) of the document.</p>
     */
    inline FeaturedResultsItem& AddDocumentAttributes(DocumentAttribute&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that identifies a particular featured result from a particular query.
     * Use this token to provide click-through feedback for the result. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/submitting-feedback.html">Submitting
     * feedback</a>.</p>
     */
    inline const Aws::String& GetFeedbackToken() const{ return m_feedbackToken; }

    /**
     * <p>A token that identifies a particular featured result from a particular query.
     * Use this token to provide click-through feedback for the result. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/submitting-feedback.html">Submitting
     * feedback</a>.</p>
     */
    inline bool FeedbackTokenHasBeenSet() const { return m_feedbackTokenHasBeenSet; }

    /**
     * <p>A token that identifies a particular featured result from a particular query.
     * Use this token to provide click-through feedback for the result. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/submitting-feedback.html">Submitting
     * feedback</a>.</p>
     */
    inline void SetFeedbackToken(const Aws::String& value) { m_feedbackTokenHasBeenSet = true; m_feedbackToken = value; }

    /**
     * <p>A token that identifies a particular featured result from a particular query.
     * Use this token to provide click-through feedback for the result. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/submitting-feedback.html">Submitting
     * feedback</a>.</p>
     */
    inline void SetFeedbackToken(Aws::String&& value) { m_feedbackTokenHasBeenSet = true; m_feedbackToken = std::move(value); }

    /**
     * <p>A token that identifies a particular featured result from a particular query.
     * Use this token to provide click-through feedback for the result. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/submitting-feedback.html">Submitting
     * feedback</a>.</p>
     */
    inline void SetFeedbackToken(const char* value) { m_feedbackTokenHasBeenSet = true; m_feedbackToken.assign(value); }

    /**
     * <p>A token that identifies a particular featured result from a particular query.
     * Use this token to provide click-through feedback for the result. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/submitting-feedback.html">Submitting
     * feedback</a>.</p>
     */
    inline FeaturedResultsItem& WithFeedbackToken(const Aws::String& value) { SetFeedbackToken(value); return *this;}

    /**
     * <p>A token that identifies a particular featured result from a particular query.
     * Use this token to provide click-through feedback for the result. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/submitting-feedback.html">Submitting
     * feedback</a>.</p>
     */
    inline FeaturedResultsItem& WithFeedbackToken(Aws::String&& value) { SetFeedbackToken(std::move(value)); return *this;}

    /**
     * <p>A token that identifies a particular featured result from a particular query.
     * Use this token to provide click-through feedback for the result. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/submitting-feedback.html">Submitting
     * feedback</a>.</p>
     */
    inline FeaturedResultsItem& WithFeedbackToken(const char* value) { SetFeedbackToken(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    QueryResultType m_type;
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
