/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/TextWithHighlights.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> A single expanded result in a collapsed group of search results.</p> <p>An
   * expanded result item contains information about an expanded result document
   * within a collapsed group of search results. This includes the original location
   * of the document, a list of attributes assigned to the document, and relevant
   * text from the document that satisfies the query. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ExpandedResultItem">AWS
   * API Reference</a></p>
   */
  class ExpandedResultItem
  {
  public:
    AWS_KENDRA_API ExpandedResultItem();
    AWS_KENDRA_API ExpandedResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ExpandedResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the expanded result.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the expanded result.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the expanded result.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the expanded result.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the expanded result.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the expanded result.</p>
     */
    inline ExpandedResultItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the expanded result.</p>
     */
    inline ExpandedResultItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the expanded result.</p>
     */
    inline ExpandedResultItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The idenitifier of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }

    /**
     * <p>The idenitifier of the document.</p>
     */
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }

    /**
     * <p>The idenitifier of the document.</p>
     */
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }

    /**
     * <p>The idenitifier of the document.</p>
     */
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }

    /**
     * <p>The idenitifier of the document.</p>
     */
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }

    /**
     * <p>The idenitifier of the document.</p>
     */
    inline ExpandedResultItem& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The idenitifier of the document.</p>
     */
    inline ExpandedResultItem& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The idenitifier of the document.</p>
     */
    inline ExpandedResultItem& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    
    inline const TextWithHighlights& GetDocumentTitle() const{ return m_documentTitle; }

    
    inline bool DocumentTitleHasBeenSet() const { return m_documentTitleHasBeenSet; }

    
    inline void SetDocumentTitle(const TextWithHighlights& value) { m_documentTitleHasBeenSet = true; m_documentTitle = value; }

    
    inline void SetDocumentTitle(TextWithHighlights&& value) { m_documentTitleHasBeenSet = true; m_documentTitle = std::move(value); }

    
    inline ExpandedResultItem& WithDocumentTitle(const TextWithHighlights& value) { SetDocumentTitle(value); return *this;}

    
    inline ExpandedResultItem& WithDocumentTitle(TextWithHighlights&& value) { SetDocumentTitle(std::move(value)); return *this;}


    
    inline const TextWithHighlights& GetDocumentExcerpt() const{ return m_documentExcerpt; }

    
    inline bool DocumentExcerptHasBeenSet() const { return m_documentExcerptHasBeenSet; }

    
    inline void SetDocumentExcerpt(const TextWithHighlights& value) { m_documentExcerptHasBeenSet = true; m_documentExcerpt = value; }

    
    inline void SetDocumentExcerpt(TextWithHighlights&& value) { m_documentExcerptHasBeenSet = true; m_documentExcerpt = std::move(value); }

    
    inline ExpandedResultItem& WithDocumentExcerpt(const TextWithHighlights& value) { SetDocumentExcerpt(value); return *this;}

    
    inline ExpandedResultItem& WithDocumentExcerpt(TextWithHighlights&& value) { SetDocumentExcerpt(std::move(value)); return *this;}


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
    inline ExpandedResultItem& WithDocumentURI(const Aws::String& value) { SetDocumentURI(value); return *this;}

    /**
     * <p>The URI of the original location of the document.</p>
     */
    inline ExpandedResultItem& WithDocumentURI(Aws::String&& value) { SetDocumentURI(std::move(value)); return *this;}

    /**
     * <p>The URI of the original location of the document.</p>
     */
    inline ExpandedResultItem& WithDocumentURI(const char* value) { SetDocumentURI(value); return *this;}


    /**
     * <p>An array of document attributes assigned to a document in the search results.
     * For example, the document author ("_author") or the source URI ("_source_uri")
     * of the document.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetDocumentAttributes() const{ return m_documentAttributes; }

    /**
     * <p>An array of document attributes assigned to a document in the search results.
     * For example, the document author ("_author") or the source URI ("_source_uri")
     * of the document.</p>
     */
    inline bool DocumentAttributesHasBeenSet() const { return m_documentAttributesHasBeenSet; }

    /**
     * <p>An array of document attributes assigned to a document in the search results.
     * For example, the document author ("_author") or the source URI ("_source_uri")
     * of the document.</p>
     */
    inline void SetDocumentAttributes(const Aws::Vector<DocumentAttribute>& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = value; }

    /**
     * <p>An array of document attributes assigned to a document in the search results.
     * For example, the document author ("_author") or the source URI ("_source_uri")
     * of the document.</p>
     */
    inline void SetDocumentAttributes(Aws::Vector<DocumentAttribute>&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = std::move(value); }

    /**
     * <p>An array of document attributes assigned to a document in the search results.
     * For example, the document author ("_author") or the source URI ("_source_uri")
     * of the document.</p>
     */
    inline ExpandedResultItem& WithDocumentAttributes(const Aws::Vector<DocumentAttribute>& value) { SetDocumentAttributes(value); return *this;}

    /**
     * <p>An array of document attributes assigned to a document in the search results.
     * For example, the document author ("_author") or the source URI ("_source_uri")
     * of the document.</p>
     */
    inline ExpandedResultItem& WithDocumentAttributes(Aws::Vector<DocumentAttribute>&& value) { SetDocumentAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of document attributes assigned to a document in the search results.
     * For example, the document author ("_author") or the source URI ("_source_uri")
     * of the document.</p>
     */
    inline ExpandedResultItem& AddDocumentAttributes(const DocumentAttribute& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.push_back(value); return *this; }

    /**
     * <p>An array of document attributes assigned to a document in the search results.
     * For example, the document author ("_author") or the source URI ("_source_uri")
     * of the document.</p>
     */
    inline ExpandedResultItem& AddDocumentAttributes(DocumentAttribute&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

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
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
