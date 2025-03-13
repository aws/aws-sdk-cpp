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
    AWS_KENDRA_API SourceDocument() = default;
    AWS_KENDRA_API SourceDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SourceDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the document used for a query suggestion.</p>
     */
    inline const Aws::String& GetDocumentId() const { return m_documentId; }
    inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
    template<typename DocumentIdT = Aws::String>
    void SetDocumentId(DocumentIdT&& value) { m_documentIdHasBeenSet = true; m_documentId = std::forward<DocumentIdT>(value); }
    template<typename DocumentIdT = Aws::String>
    SourceDocument& WithDocumentId(DocumentIdT&& value) { SetDocumentId(std::forward<DocumentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document fields/attributes used for a query suggestion.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuggestionAttributes() const { return m_suggestionAttributes; }
    inline bool SuggestionAttributesHasBeenSet() const { return m_suggestionAttributesHasBeenSet; }
    template<typename SuggestionAttributesT = Aws::Vector<Aws::String>>
    void SetSuggestionAttributes(SuggestionAttributesT&& value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes = std::forward<SuggestionAttributesT>(value); }
    template<typename SuggestionAttributesT = Aws::Vector<Aws::String>>
    SourceDocument& WithSuggestionAttributes(SuggestionAttributesT&& value) { SetSuggestionAttributes(std::forward<SuggestionAttributesT>(value)); return *this;}
    template<typename SuggestionAttributesT = Aws::String>
    SourceDocument& AddSuggestionAttributes(SuggestionAttributesT&& value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes.emplace_back(std::forward<SuggestionAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The additional fields/attributes to include in the response. You can use
     * additional fields to provide extra information in the response. Additional
     * fields are not used to based suggestions on.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetAdditionalAttributes() const { return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    template<typename AdditionalAttributesT = Aws::Vector<DocumentAttribute>>
    void SetAdditionalAttributes(AdditionalAttributesT&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::forward<AdditionalAttributesT>(value); }
    template<typename AdditionalAttributesT = Aws::Vector<DocumentAttribute>>
    SourceDocument& WithAdditionalAttributes(AdditionalAttributesT&& value) { SetAdditionalAttributes(std::forward<AdditionalAttributesT>(value)); return *this;}
    template<typename AdditionalAttributesT = DocumentAttribute>
    SourceDocument& AddAdditionalAttributes(AdditionalAttributesT&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.emplace_back(std::forward<AdditionalAttributesT>(value)); return *this; }
    ///@}
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
