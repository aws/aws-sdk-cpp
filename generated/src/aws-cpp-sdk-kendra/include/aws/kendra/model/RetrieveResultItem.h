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
    AWS_KENDRA_API RetrieveResultItem();
    AWS_KENDRA_API RetrieveResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API RetrieveResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the relevant passage result.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline RetrieveResultItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline RetrieveResultItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline RetrieveResultItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the document.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }
    inline RetrieveResultItem& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}
    inline RetrieveResultItem& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}
    inline RetrieveResultItem& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the document.</p>
     */
    inline const Aws::String& GetDocumentTitle() const{ return m_documentTitle; }
    inline bool DocumentTitleHasBeenSet() const { return m_documentTitleHasBeenSet; }
    inline void SetDocumentTitle(const Aws::String& value) { m_documentTitleHasBeenSet = true; m_documentTitle = value; }
    inline void SetDocumentTitle(Aws::String&& value) { m_documentTitleHasBeenSet = true; m_documentTitle = std::move(value); }
    inline void SetDocumentTitle(const char* value) { m_documentTitleHasBeenSet = true; m_documentTitle.assign(value); }
    inline RetrieveResultItem& WithDocumentTitle(const Aws::String& value) { SetDocumentTitle(value); return *this;}
    inline RetrieveResultItem& WithDocumentTitle(Aws::String&& value) { SetDocumentTitle(std::move(value)); return *this;}
    inline RetrieveResultItem& WithDocumentTitle(const char* value) { SetDocumentTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the relevant passage.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline RetrieveResultItem& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline RetrieveResultItem& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline RetrieveResultItem& WithContent(const char* value) { SetContent(value); return *this;}
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
    inline RetrieveResultItem& WithDocumentURI(const Aws::String& value) { SetDocumentURI(value); return *this;}
    inline RetrieveResultItem& WithDocumentURI(Aws::String&& value) { SetDocumentURI(std::move(value)); return *this;}
    inline RetrieveResultItem& WithDocumentURI(const char* value) { SetDocumentURI(value); return *this;}
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
    inline RetrieveResultItem& WithDocumentAttributes(const Aws::Vector<DocumentAttribute>& value) { SetDocumentAttributes(value); return *this;}
    inline RetrieveResultItem& WithDocumentAttributes(Aws::Vector<DocumentAttribute>&& value) { SetDocumentAttributes(std::move(value)); return *this;}
    inline RetrieveResultItem& AddDocumentAttributes(const DocumentAttribute& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.push_back(value); return *this; }
    inline RetrieveResultItem& AddDocumentAttributes(DocumentAttribute&& value) { m_documentAttributesHasBeenSet = true; m_documentAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The confidence score bucket for a retrieved passage result. The confidence
     * bucket provides a relative ranking that indicates how confident Amazon Kendra is
     * that the response is relevant to the query.</p>
     */
    inline const ScoreAttributes& GetScoreAttributes() const{ return m_scoreAttributes; }
    inline bool ScoreAttributesHasBeenSet() const { return m_scoreAttributesHasBeenSet; }
    inline void SetScoreAttributes(const ScoreAttributes& value) { m_scoreAttributesHasBeenSet = true; m_scoreAttributes = value; }
    inline void SetScoreAttributes(ScoreAttributes&& value) { m_scoreAttributesHasBeenSet = true; m_scoreAttributes = std::move(value); }
    inline RetrieveResultItem& WithScoreAttributes(const ScoreAttributes& value) { SetScoreAttributes(value); return *this;}
    inline RetrieveResultItem& WithScoreAttributes(ScoreAttributes&& value) { SetScoreAttributes(std::move(value)); return *this;}
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
