/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateCustomEntityTypeRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateCustomEntityTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomEntityType"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the custom pattern that allows it to be retrieved or deleted
     * later. This name must be unique per Amazon Web Services account.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateCustomEntityTypeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression string that is used for detecting sensitive data in a
     * custom pattern.</p>
     */
    inline const Aws::String& GetRegexString() const { return m_regexString; }
    inline bool RegexStringHasBeenSet() const { return m_regexStringHasBeenSet; }
    template<typename RegexStringT = Aws::String>
    void SetRegexString(RegexStringT&& value) { m_regexStringHasBeenSet = true; m_regexString = std::forward<RegexStringT>(value); }
    template<typename RegexStringT = Aws::String>
    CreateCustomEntityTypeRequest& WithRegexString(RegexStringT&& value) { SetRegexString(std::forward<RegexStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of context words. If none of these context words are found within the
     * vicinity of the regular expression the data will not be detected as sensitive
     * data.</p> <p>If no context words are passed only a regular expression is
     * checked.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContextWords() const { return m_contextWords; }
    inline bool ContextWordsHasBeenSet() const { return m_contextWordsHasBeenSet; }
    template<typename ContextWordsT = Aws::Vector<Aws::String>>
    void SetContextWords(ContextWordsT&& value) { m_contextWordsHasBeenSet = true; m_contextWords = std::forward<ContextWordsT>(value); }
    template<typename ContextWordsT = Aws::Vector<Aws::String>>
    CreateCustomEntityTypeRequest& WithContextWords(ContextWordsT&& value) { SetContextWords(std::forward<ContextWordsT>(value)); return *this;}
    template<typename ContextWordsT = Aws::String>
    CreateCustomEntityTypeRequest& AddContextWords(ContextWordsT&& value) { m_contextWordsHasBeenSet = true; m_contextWords.emplace_back(std::forward<ContextWordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateCustomEntityTypeRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateCustomEntityTypeRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_regexString;
    bool m_regexStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_contextWords;
    bool m_contextWordsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
