/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/AttributeFilter.h>
#include <aws/kendra/model/UserContext.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides the configuration information for the document fields/attributes
   * that you want to base query suggestions on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AttributeSuggestionsGetConfig">AWS
   * API Reference</a></p>
   */
  class AttributeSuggestionsGetConfig
  {
  public:
    AWS_KENDRA_API AttributeSuggestionsGetConfig();
    AWS_KENDRA_API AttributeSuggestionsGetConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AttributeSuggestionsGetConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of document field/attribute keys or field names to use for query
     * suggestions. If the content within any of the fields match what your user starts
     * typing as their query, then the field content is returned as a query
     * suggestion.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuggestionAttributes() const{ return m_suggestionAttributes; }
    inline bool SuggestionAttributesHasBeenSet() const { return m_suggestionAttributesHasBeenSet; }
    inline void SetSuggestionAttributes(const Aws::Vector<Aws::String>& value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes = value; }
    inline void SetSuggestionAttributes(Aws::Vector<Aws::String>&& value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes = std::move(value); }
    inline AttributeSuggestionsGetConfig& WithSuggestionAttributes(const Aws::Vector<Aws::String>& value) { SetSuggestionAttributes(value); return *this;}
    inline AttributeSuggestionsGetConfig& WithSuggestionAttributes(Aws::Vector<Aws::String>&& value) { SetSuggestionAttributes(std::move(value)); return *this;}
    inline AttributeSuggestionsGetConfig& AddSuggestionAttributes(const Aws::String& value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes.push_back(value); return *this; }
    inline AttributeSuggestionsGetConfig& AddSuggestionAttributes(Aws::String&& value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes.push_back(std::move(value)); return *this; }
    inline AttributeSuggestionsGetConfig& AddSuggestionAttributes(const char* value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of additional document field/attribute keys or field names to
     * include in the response. You can use additional fields to provide extra
     * information in the response. Additional fields are not used to based suggestions
     * on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalResponseAttributes() const{ return m_additionalResponseAttributes; }
    inline bool AdditionalResponseAttributesHasBeenSet() const { return m_additionalResponseAttributesHasBeenSet; }
    inline void SetAdditionalResponseAttributes(const Aws::Vector<Aws::String>& value) { m_additionalResponseAttributesHasBeenSet = true; m_additionalResponseAttributes = value; }
    inline void SetAdditionalResponseAttributes(Aws::Vector<Aws::String>&& value) { m_additionalResponseAttributesHasBeenSet = true; m_additionalResponseAttributes = std::move(value); }
    inline AttributeSuggestionsGetConfig& WithAdditionalResponseAttributes(const Aws::Vector<Aws::String>& value) { SetAdditionalResponseAttributes(value); return *this;}
    inline AttributeSuggestionsGetConfig& WithAdditionalResponseAttributes(Aws::Vector<Aws::String>&& value) { SetAdditionalResponseAttributes(std::move(value)); return *this;}
    inline AttributeSuggestionsGetConfig& AddAdditionalResponseAttributes(const Aws::String& value) { m_additionalResponseAttributesHasBeenSet = true; m_additionalResponseAttributes.push_back(value); return *this; }
    inline AttributeSuggestionsGetConfig& AddAdditionalResponseAttributes(Aws::String&& value) { m_additionalResponseAttributesHasBeenSet = true; m_additionalResponseAttributes.push_back(std::move(value)); return *this; }
    inline AttributeSuggestionsGetConfig& AddAdditionalResponseAttributes(const char* value) { m_additionalResponseAttributesHasBeenSet = true; m_additionalResponseAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the search results based on document fields/attributes.</p>
     */
    inline const AttributeFilter& GetAttributeFilter() const{ return m_attributeFilter; }
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
    inline void SetAttributeFilter(const AttributeFilter& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = value; }
    inline void SetAttributeFilter(AttributeFilter&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::move(value); }
    inline AttributeSuggestionsGetConfig& WithAttributeFilter(const AttributeFilter& value) { SetAttributeFilter(value); return *this;}
    inline AttributeSuggestionsGetConfig& WithAttributeFilter(AttributeFilter&& value) { SetAttributeFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies user context filtering so that only users who are given access to
     * certain documents see these document in their search results.</p>
     */
    inline const UserContext& GetUserContext() const{ return m_userContext; }
    inline bool UserContextHasBeenSet() const { return m_userContextHasBeenSet; }
    inline void SetUserContext(const UserContext& value) { m_userContextHasBeenSet = true; m_userContext = value; }
    inline void SetUserContext(UserContext&& value) { m_userContextHasBeenSet = true; m_userContext = std::move(value); }
    inline AttributeSuggestionsGetConfig& WithUserContext(const UserContext& value) { SetUserContext(value); return *this;}
    inline AttributeSuggestionsGetConfig& WithUserContext(UserContext&& value) { SetUserContext(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_suggestionAttributes;
    bool m_suggestionAttributesHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalResponseAttributes;
    bool m_additionalResponseAttributesHasBeenSet = false;

    AttributeFilter m_attributeFilter;
    bool m_attributeFilterHasBeenSet = false;

    UserContext m_userContext;
    bool m_userContextHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
