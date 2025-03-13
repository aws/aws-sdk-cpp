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
    AWS_KENDRA_API ExpandedResultItem() = default;
    AWS_KENDRA_API ExpandedResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ExpandedResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the expanded result.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ExpandedResultItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idenitifier of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const { return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    template<typename DocumentIdT = Aws::String>
    void SetDocumentId(DocumentIdT&& value) { m_documentIdHasBeenSet = true; m_documentId = std::forward<DocumentIdT>(value); }
    template<typename DocumentIdT = Aws::String>
    ExpandedResultItem& WithDocumentId(DocumentIdT&& value) { SetDocumentId(std::forward<DocumentIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TextWithHighlights& GetDocumentTitle() const { return m_documentTitle; }
    inline bool DocumentTitleHasBeenSet() const { return m_documentTitleHasBeenSet; }
    template<typename DocumentTitleT = TextWithHighlights>
    void SetDocumentTitle(DocumentTitleT&& value) { m_documentTitleHasBeenSet = true; m_documentTitle = std::forward<DocumentTitleT>(value); }
    template<typename DocumentTitleT = TextWithHighlights>
    ExpandedResultItem& WithDocumentTitle(DocumentTitleT&& value) { SetDocumentTitle(std::forward<DocumentTitleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TextWithHighlights& GetDocumentExcerpt() const { return m_documentExcerpt; }
    inline bool DocumentExcerptHasBeenSet() const { return m_documentExcerptHasBeenSet; }
    template<typename DocumentExcerptT = TextWithHighlights>
    void SetDocumentExcerpt(DocumentExcerptT&& value) { m_documentExcerptHasBeenSet = true; m_documentExcerpt = std::forward<DocumentExcerptT>(value); }
    template<typename DocumentExcerptT = TextWithHighlights>
    ExpandedResultItem& WithDocumentExcerpt(DocumentExcerptT&& value) { SetDocumentExcerpt(std::forward<DocumentExcerptT>(value)); return *this;}
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
    ExpandedResultItem& WithDocumentURI(DocumentURIT&& value) { SetDocumentURI(std::forward<DocumentURIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of document attributes assigned to a document in the search results.
     * For example, the document author ("_author") or the source URI ("_source_uri")
     * of the document.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetDocumentAttributes() const { return m_documentAttributes; }
    inline bool DocumentAttributesHasBeenSet() const { return m_documentAttributesHasBeenSet; }
    template<typename DocumentAttributesT = Aws::Vector<DocumentAttribute>>
    void SetDocumentAttributes(DocumentAttributesT&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes = std::forward<DocumentAttributesT>(value); }
    template<typename DocumentAttributesT = Aws::Vector<DocumentAttribute>>
    ExpandedResultItem& WithDocumentAttributes(DocumentAttributesT&& value) { SetDocumentAttributes(std::forward<DocumentAttributesT>(value)); return *this;}
    template<typename DocumentAttributesT = DocumentAttribute>
    ExpandedResultItem& AddDocumentAttributes(DocumentAttributesT&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.emplace_back(std::forward<DocumentAttributesT>(value)); return *this; }
    ///@}
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
