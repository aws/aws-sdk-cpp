/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The document ID and its fields/attributes that are used for a query
   * suggestion, if document fields set to use for query suggestions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SourceDocument">AWS
   * API Reference</a></p>
   */
  class SourceDocument
  {
  public:
    AWS_KENDRA_API SourceDocument();
    AWS_KENDRA_API SourceDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SourceDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the document used for a query suggestion.</p>
     */
    inline const Aws::String& GetDocumentId() const{ return m_documentId; }

    /**
     * <p>The identifier of the document used for a query suggestion.</p>
     */
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }

    /**
     * <p>The identifier of the document used for a query suggestion.</p>
     */
    inline void SetDocumentId(const Aws::String& value) { m_documentIdHasBeenSet = true; m_documentId = value; }

    /**
     * <p>The identifier of the document used for a query suggestion.</p>
     */
    inline void SetDocumentId(Aws::String&& value) { m_documentIdHasBeenSet = true; m_documentId = std::move(value); }

    /**
     * <p>The identifier of the document used for a query suggestion.</p>
     */
    inline void SetDocumentId(const char* value) { m_documentIdHasBeenSet = true; m_documentId.assign(value); }

    /**
     * <p>The identifier of the document used for a query suggestion.</p>
     */
    inline SourceDocument& WithDocumentId(const Aws::String& value) { SetDocumentId(value); return *this;}

    /**
     * <p>The identifier of the document used for a query suggestion.</p>
     */
    inline SourceDocument& WithDocumentId(Aws::String&& value) { SetDocumentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the document used for a query suggestion.</p>
     */
    inline SourceDocument& WithDocumentId(const char* value) { SetDocumentId(value); return *this;}


    /**
     * <p>The document fields/attributes used for a query suggestion.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuggestionAttributes() const{ return m_suggestionAttributes; }

    /**
     * <p>The document fields/attributes used for a query suggestion.</p>
     */
    inline bool SuggestionAttributesHasBeenSet() const { return m_suggestionAttributesHasBeenSet; }

    /**
     * <p>The document fields/attributes used for a query suggestion.</p>
     */
    inline void SetSuggestionAttributes(const Aws::Vector<Aws::String>& value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes = value; }

    /**
     * <p>The document fields/attributes used for a query suggestion.</p>
     */
    inline void SetSuggestionAttributes(Aws::Vector<Aws::String>&& value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes = std::move(value); }

    /**
     * <p>The document fields/attributes used for a query suggestion.</p>
     */
    inline SourceDocument& WithSuggestionAttributes(const Aws::Vector<Aws::String>& value) { SetSuggestionAttributes(value); return *this;}

    /**
     * <p>The document fields/attributes used for a query suggestion.</p>
     */
    inline SourceDocument& WithSuggestionAttributes(Aws::Vector<Aws::String>&& value) { SetSuggestionAttributes(std::move(value)); return *this;}

    /**
     * <p>The document fields/attributes used for a query suggestion.</p>
     */
    inline SourceDocument& AddSuggestionAttributes(const Aws::String& value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes.push_back(value); return *this; }

    /**
     * <p>The document fields/attributes used for a query suggestion.</p>
     */
    inline SourceDocument& AddSuggestionAttributes(Aws::String&& value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes.push_back(std::move(value)); return *this; }

    /**
     * <p>The document fields/attributes used for a query suggestion.</p>
     */
    inline SourceDocument& AddSuggestionAttributes(const char* value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes.push_back(value); return *this; }


    /**
     * <p>The additional fields/attributes to include in the response. You can use
     * additional fields to provide extra information in the response. Additional
     * fields are not used to based suggestions on.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetAdditionalAttributes() const{ return m_additionalAttributes; }

    /**
     * <p>The additional fields/attributes to include in the response. You can use
     * additional fields to provide extra information in the response. Additional
     * fields are not used to based suggestions on.</p>
     */
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }

    /**
     * <p>The additional fields/attributes to include in the response. You can use
     * additional fields to provide extra information in the response. Additional
     * fields are not used to based suggestions on.</p>
     */
    inline void SetAdditionalAttributes(const Aws::Vector<DocumentAttribute>& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = value; }

    /**
     * <p>The additional fields/attributes to include in the response. You can use
     * additional fields to provide extra information in the response. Additional
     * fields are not used to based suggestions on.</p>
     */
    inline void SetAdditionalAttributes(Aws::Vector<DocumentAttribute>&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::move(value); }

    /**
     * <p>The additional fields/attributes to include in the response. You can use
     * additional fields to provide extra information in the response. Additional
     * fields are not used to based suggestions on.</p>
     */
    inline SourceDocument& WithAdditionalAttributes(const Aws::Vector<DocumentAttribute>& value) { SetAdditionalAttributes(value); return *this;}

    /**
     * <p>The additional fields/attributes to include in the response. You can use
     * additional fields to provide extra information in the response. Additional
     * fields are not used to based suggestions on.</p>
     */
    inline SourceDocument& WithAdditionalAttributes(Aws::Vector<DocumentAttribute>&& value) { SetAdditionalAttributes(std::move(value)); return *this;}

    /**
     * <p>The additional fields/attributes to include in the response. You can use
     * additional fields to provide extra information in the response. Additional
     * fields are not used to based suggestions on.</p>
     */
    inline SourceDocument& AddAdditionalAttributes(const DocumentAttribute& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(value); return *this; }

    /**
     * <p>The additional fields/attributes to include in the response. You can use
     * additional fields to provide extra information in the response. Additional
     * fields are not used to based suggestions on.</p>
     */
    inline SourceDocument& AddAdditionalAttributes(DocumentAttribute&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_documentId;
    bool m_documentIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_suggestionAttributes;
    bool m_suggestionAttributesHasBeenSet = false;

    Aws::Vector<DocumentAttribute> m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
