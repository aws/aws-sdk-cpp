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
    AWS_KENDRA_API AttributeSuggestionsGetConfig() = default;
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
    inline const Aws::Vector<Aws::String>& GetSuggestionAttributes() const { return m_suggestionAttributes; }
    inline bool SuggestionAttributesHasBeenSet() const { return m_suggestionAttributesHasBeenSet; }
    template<typename SuggestionAttributesT = Aws::Vector<Aws::String>>
    void SetSuggestionAttributes(SuggestionAttributesT&& value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes = std::forward<SuggestionAttributesT>(value); }
    template<typename SuggestionAttributesT = Aws::Vector<Aws::String>>
    AttributeSuggestionsGetConfig& WithSuggestionAttributes(SuggestionAttributesT&& value) { SetSuggestionAttributes(std::forward<SuggestionAttributesT>(value)); return *this;}
    template<typename SuggestionAttributesT = Aws::String>
    AttributeSuggestionsGetConfig& AddSuggestionAttributes(SuggestionAttributesT&& value) { m_suggestionAttributesHasBeenSet = true; m_suggestionAttributes.emplace_back(std::forward<SuggestionAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of additional document field/attribute keys or field names to
     * include in the response. You can use additional fields to provide extra
     * information in the response. Additional fields are not used to based suggestions
     * on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalResponseAttributes() const { return m_additionalResponseAttributes; }
    inline bool AdditionalResponseAttributesHasBeenSet() const { return m_additionalResponseAttributesHasBeenSet; }
    template<typename AdditionalResponseAttributesT = Aws::Vector<Aws::String>>
    void SetAdditionalResponseAttributes(AdditionalResponseAttributesT&& value) { m_additionalResponseAttributesHasBeenSet = true; m_additionalResponseAttributes = std::forward<AdditionalResponseAttributesT>(value); }
    template<typename AdditionalResponseAttributesT = Aws::Vector<Aws::String>>
    AttributeSuggestionsGetConfig& WithAdditionalResponseAttributes(AdditionalResponseAttributesT&& value) { SetAdditionalResponseAttributes(std::forward<AdditionalResponseAttributesT>(value)); return *this;}
    template<typename AdditionalResponseAttributesT = Aws::String>
    AttributeSuggestionsGetConfig& AddAdditionalResponseAttributes(AdditionalResponseAttributesT&& value) { m_additionalResponseAttributesHasBeenSet = true; m_additionalResponseAttributes.emplace_back(std::forward<AdditionalResponseAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the search results based on document fields/attributes.</p>
     */
    inline const AttributeFilter& GetAttributeFilter() const { return m_attributeFilter; }
    inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
    template<typename AttributeFilterT = AttributeFilter>
    void SetAttributeFilter(AttributeFilterT&& value) { m_attributeFilterHasBeenSet = true; m_attributeFilter = std::forward<AttributeFilterT>(value); }
    template<typename AttributeFilterT = AttributeFilter>
    AttributeSuggestionsGetConfig& WithAttributeFilter(AttributeFilterT&& value) { SetAttributeFilter(std::forward<AttributeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies user context filtering so that only users who are given access to
     * certain documents see these document in their search results.</p>
     */
    inline const UserContext& GetUserContext() const { return m_userContext; }
    inline bool UserContextHasBeenSet() const { return m_userContextHasBeenSet; }
    template<typename UserContextT = UserContext>
    void SetUserContext(UserContextT&& value) { m_userContextHasBeenSet = true; m_userContext = std::forward<UserContextT>(value); }
    template<typename UserContextT = UserContext>
    AttributeSuggestionsGetConfig& WithUserContext(UserContextT&& value) { SetUserContext(std::forward<UserContextT>(value)); return *this;}
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
