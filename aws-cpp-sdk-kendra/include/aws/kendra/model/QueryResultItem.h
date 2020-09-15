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
#include <aws/kendra/model/ScoreAttributes.h>
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
  class AWS_KENDRA_API QueryResultItem
  {
  public:
    QueryResultItem();
    QueryResultItem(Aws::Utils::Json::JsonView jsonValue);
    QueryResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the query result.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the query result.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the query result.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the query result.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the query result.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the query result.</p>
     */
    inline QueryResultItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the query result.</p>
     */
    inline QueryResultItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the query result.</p>
     */
    inline QueryResultItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of document. </p>
     */
    inline const QueryResultType& GetType() const{ return m_type; }

    /**
     * <p>The type of document. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of document. </p>
     */
    inline void SetType(const QueryResultType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of document. </p>
     */
    inline void SetType(QueryResultType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of document. </p>
     */
    inline QueryResultItem& WithType(const QueryResultType& value) { SetType(value); return *this;}

    /**
     * <p>The type of document. </p>
     */
    inline QueryResultItem& WithType(QueryResultType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>One or more additional attributes associated with the query result.</p>
     */
    inline const Aws::Vector<AdditionalResultAttribute>& GetAdditionalAttributes() const{ return m_additionalAttributes; }

    /**
     * <p>One or more additional attributes associated with the query result.</p>
     */
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }

    /**
     * <p>One or more additional attributes associated with the query result.</p>
     */
    inline void SetAdditionalAttributes(const Aws::Vector<AdditionalResultAttribute>& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = value; }

    /**
     * <p>One or more additional attributes associated with the query result.</p>
     */
    inline void SetAdditionalAttributes(Aws::Vector<AdditionalResultAttribute>&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::move(value); }

    /**
     * <p>One or more additional attributes associated with the query result.</p>
     */
    inline QueryResultItem& WithAdditionalAttributes(const Aws::Vector<AdditionalResultAttribute>& value) { SetAdditionalAttributes(value); return *this;}

    /**
     * <p>One or more additional attributes associated with the query result.</p>
     */
    inline QueryResultItem& WithAdditionalAttributes(Aws::Vector<AdditionalResultAttribute>&& value) { SetAdditionalAttributes(std::move(value)); return *this;}

    /**
     * <p>One or more additional attributes associated with the query result.</p>
     */
    inline QueryResultItem& AddAdditionalAttributes(const AdditionalResultAttribute& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(value); return *this; }

    /**
     * <p>One or more additional attributes associated with the query result.</p>
     */
    inline QueryResultItem& AddAdditionalAttributes(AdditionalResultAttribute&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier for the document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }

    /**
     * <p>The unique identifier for the document.</p>
     */
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }

    /**
     * <p>The unique identifier for the document.</p>
     */
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }

    /**
     * <p>The unique identifier for the document.</p>
     */
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }

    /**
     * <p>The unique identifier for the document.</p>
     */
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }

    /**
     * <p>The unique identifier for the document.</p>
     */
    inline QueryResultItem& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The unique identifier for the document.</p>
     */
    inline QueryResultItem& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the document.</p>
     */
    inline QueryResultItem& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    /**
     * <p>The title of the document. Contains the text of the title and information for
     * highlighting the relevant terms in the title.</p>
     */
    inline const TextWithHighlights& GetDocumentTitle() const{ return m_documentTitle; }

    /**
     * <p>The title of the document. Contains the text of the title and information for
     * highlighting the relevant terms in the title.</p>
     */
    inline bool DocumentTitleHasBeenSet() const { return m_documentTitleHasBeenSet; }

    /**
     * <p>The title of the document. Contains the text of the title and information for
     * highlighting the relevant terms in the title.</p>
     */
    inline void SetDocumentTitle(const TextWithHighlights& value) { m_documentTitleHasBeenSet = true; m_documentTitle = value; }

    /**
     * <p>The title of the document. Contains the text of the title and information for
     * highlighting the relevant terms in the title.</p>
     */
    inline void SetDocumentTitle(TextWithHighlights&& value) { m_documentTitleHasBeenSet = true; m_documentTitle = std::move(value); }

    /**
     * <p>The title of the document. Contains the text of the title and information for
     * highlighting the relevant terms in the title.</p>
     */
    inline QueryResultItem& WithDocumentTitle(const TextWithHighlights& value) { SetDocumentTitle(value); return *this;}

    /**
     * <p>The title of the document. Contains the text of the title and information for
     * highlighting the relevant terms in the title.</p>
     */
    inline QueryResultItem& WithDocumentTitle(TextWithHighlights&& value) { SetDocumentTitle(std::move(value)); return *this;}


    /**
     * <p>An extract of the text in the document. Contains information about
     * highlighting the relevant terms in the excerpt.</p>
     */
    inline const TextWithHighlights& GetDocumentExcerpt() const{ return m_documentExcerpt; }

    /**
     * <p>An extract of the text in the document. Contains information about
     * highlighting the relevant terms in the excerpt.</p>
     */
    inline bool DocumentExcerptHasBeenSet() const { return m_documentExcerptHasBeenSet; }

    /**
     * <p>An extract of the text in the document. Contains information about
     * highlighting the relevant terms in the excerpt.</p>
     */
    inline void SetDocumentExcerpt(const TextWithHighlights& value) { m_documentExcerptHasBeenSet = true; m_documentExcerpt = value; }

    /**
     * <p>An extract of the text in the document. Contains information about
     * highlighting the relevant terms in the excerpt.</p>
     */
    inline void SetDocumentExcerpt(TextWithHighlights&& value) { m_documentExcerptHasBeenSet = true; m_documentExcerpt = std::move(value); }

    /**
     * <p>An extract of the text in the document. Contains information about
     * highlighting the relevant terms in the excerpt.</p>
     */
    inline QueryResultItem& WithDocumentExcerpt(const TextWithHighlights& value) { SetDocumentExcerpt(value); return *this;}

    /**
     * <p>An extract of the text in the document. Contains information about
     * highlighting the relevant terms in the excerpt.</p>
     */
    inline QueryResultItem& WithDocumentExcerpt(TextWithHighlights&& value) { SetDocumentExcerpt(std::move(value)); return *this;}


    /**
     * <p>The URI of the original location of the document.</p>
     */
    inline const Aws::String& GetDocumentURI() const{ return m_documentURI; }

    /**
     * <p>The URI of the original location of the document.</p>
     */
    inline bool DocumentURIHasBeenSet() const { return m_documentURIHasBeenSet; }

    /**
     * <p>The URI of the original location of the document.</p>
     */
    inline void SetDocumentURI(const Aws::String& value) { m_documentURIHasBeenSet = true; m_documentURI = value; }

    /**
     * <p>The URI of the original location of the document.</p>
     */
    inline void SetDocumentURI(Aws::String&& value) { m_documentURIHasBeenSet = true; m_documentURI = std::move(value); }

    /**
     * <p>The URI of the original location of the document.</p>
     */
    inline void SetDocumentURI(const char* value) { m_documentURIHasBeenSet = true; m_documentURI.assign(value); }

    /**
     * <p>The URI of the original location of the document.</p>
     */
    inline QueryResultItem& WithDocumentURI(const Aws::String& value) { SetDocumentURI(value); return *this;}

    /**
     * <p>The URI of the original location of the document.</p>
     */
    inline QueryResultItem& WithDocumentURI(Aws::String&& value) { SetDocumentURI(std::move(value)); return *this;}

    /**
     * <p>The URI of the original location of the document.</p>
     */
    inline QueryResultItem& WithDocumentURI(const char* value) { SetDocumentURI(value); return *this;}


    /**
     * <p>An array of document attributes for the document that the query result maps
     * to. For example, the document author (Author) or the source URI (SourceUri) of
     * the document.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetDocumentAttributes() const{ return m_documentAttributes; }

    /**
     * <p>An array of document attributes for the document that the query result maps
     * to. For example, the document author (Author) or the source URI (SourceUri) of
     * the document.</p>
     */
    inline bool DocumentAttributesHasBeenSet() const { return m_documentAttributesHasBeenSet; }

    /**
     * <p>An array of document attributes for the document that the query result maps
     * to. For example, the document author (Author) or the source URI (SourceUri) of
     * the document.</p>
     */
    inline void SetDocumentAttributes(const Aws::Vector<DocumentAttribute>& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = value; }

    /**
     * <p>An array of document attributes for the document that the query result maps
     * to. For example, the document author (Author) or the source URI (SourceUri) of
     * the document.</p>
     */
    inline void SetDocumentAttributes(Aws::Vector<DocumentAttribute>&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = std::move(value); }

    /**
     * <p>An array of document attributes for the document that the query result maps
     * to. For example, the document author (Author) or the source URI (SourceUri) of
     * the document.</p>
     */
    inline QueryResultItem& WithDocumentAttributes(const Aws::Vector<DocumentAttribute>& value) { SetDocumentAttributes(value); return *this;}

    /**
     * <p>An array of document attributes for the document that the query result maps
     * to. For example, the document author (Author) or the source URI (SourceUri) of
     * the document.</p>
     */
    inline QueryResultItem& WithDocumentAttributes(Aws::Vector<DocumentAttribute>&& value) { SetDocumentAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of document attributes for the document that the query result maps
     * to. For example, the document author (Author) or the source URI (SourceUri) of
     * the document.</p>
     */
    inline QueryResultItem& AddDocumentAttributes(const DocumentAttribute& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.push_back(value); return *this; }

    /**
     * <p>An array of document attributes for the document that the query result maps
     * to. For example, the document author (Author) or the source URI (SourceUri) of
     * the document.</p>
     */
    inline QueryResultItem& AddDocumentAttributes(DocumentAttribute&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates the confidence that Amazon Kendra has that a result matches the
     * query that you provided. Each result is placed into a bin that indicates the
     * confidence, <code>VERY_HIGH</code>, <code>HIGH</code>, <code>MEDIUM</code> and
     * <code>LOW</code>. You can use the score to determine if a response meets the
     * confidence needed for your application.</p> <p>The field is only set to
     * <code>LOW</code> when the <code>Type</code> field is set to
     * <code>DOCUMENT</code> and Amazon Kendra is not confident that the result matches
     * the query.</p>
     */
    inline const ScoreAttributes& GetScoreAttributes() const{ return m_scoreAttributes; }

    /**
     * <p>Indicates the confidence that Amazon Kendra has that a result matches the
     * query that you provided. Each result is placed into a bin that indicates the
     * confidence, <code>VERY_HIGH</code>, <code>HIGH</code>, <code>MEDIUM</code> and
     * <code>LOW</code>. You can use the score to determine if a response meets the
     * confidence needed for your application.</p> <p>The field is only set to
     * <code>LOW</code> when the <code>Type</code> field is set to
     * <code>DOCUMENT</code> and Amazon Kendra is not confident that the result matches
     * the query.</p>
     */
    inline bool ScoreAttributesHasBeenSet() const { return m_scoreAttributesHasBeenSet; }

    /**
     * <p>Indicates the confidence that Amazon Kendra has that a result matches the
     * query that you provided. Each result is placed into a bin that indicates the
     * confidence, <code>VERY_HIGH</code>, <code>HIGH</code>, <code>MEDIUM</code> and
     * <code>LOW</code>. You can use the score to determine if a response meets the
     * confidence needed for your application.</p> <p>The field is only set to
     * <code>LOW</code> when the <code>Type</code> field is set to
     * <code>DOCUMENT</code> and Amazon Kendra is not confident that the result matches
     * the query.</p>
     */
    inline void SetScoreAttributes(const ScoreAttributes& value) { m_scoreAttributesHasBeenSet = true; m_scoreAttributes = value; }

    /**
     * <p>Indicates the confidence that Amazon Kendra has that a result matches the
     * query that you provided. Each result is placed into a bin that indicates the
     * confidence, <code>VERY_HIGH</code>, <code>HIGH</code>, <code>MEDIUM</code> and
     * <code>LOW</code>. You can use the score to determine if a response meets the
     * confidence needed for your application.</p> <p>The field is only set to
     * <code>LOW</code> when the <code>Type</code> field is set to
     * <code>DOCUMENT</code> and Amazon Kendra is not confident that the result matches
     * the query.</p>
     */
    inline void SetScoreAttributes(ScoreAttributes&& value) { m_scoreAttributesHasBeenSet = true; m_scoreAttributes = std::move(value); }

    /**
     * <p>Indicates the confidence that Amazon Kendra has that a result matches the
     * query that you provided. Each result is placed into a bin that indicates the
     * confidence, <code>VERY_HIGH</code>, <code>HIGH</code>, <code>MEDIUM</code> and
     * <code>LOW</code>. You can use the score to determine if a response meets the
     * confidence needed for your application.</p> <p>The field is only set to
     * <code>LOW</code> when the <code>Type</code> field is set to
     * <code>DOCUMENT</code> and Amazon Kendra is not confident that the result matches
     * the query.</p>
     */
    inline QueryResultItem& WithScoreAttributes(const ScoreAttributes& value) { SetScoreAttributes(value); return *this;}

    /**
     * <p>Indicates the confidence that Amazon Kendra has that a result matches the
     * query that you provided. Each result is placed into a bin that indicates the
     * confidence, <code>VERY_HIGH</code>, <code>HIGH</code>, <code>MEDIUM</code> and
     * <code>LOW</code>. You can use the score to determine if a response meets the
     * confidence needed for your application.</p> <p>The field is only set to
     * <code>LOW</code> when the <code>Type</code> field is set to
     * <code>DOCUMENT</code> and Amazon Kendra is not confident that the result matches
     * the query.</p>
     */
    inline QueryResultItem& WithScoreAttributes(ScoreAttributes&& value) { SetScoreAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    QueryResultType m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<AdditionalResultAttribute> m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet;

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet;

    TextWithHighlights m_documentTitle;
    bool m_documentTitleHasBeenSet;

    TextWithHighlights m_documentExcerpt;
    bool m_documentExcerptHasBeenSet;

    Aws::String m_documentURI;
    bool m_documentURIHasBeenSet;

    Aws::Vector<DocumentAttribute> m_documentAttributes;
    bool m_documentAttributesHasBeenSet;

    ScoreAttributes m_scoreAttributes;
    bool m_scoreAttributesHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
