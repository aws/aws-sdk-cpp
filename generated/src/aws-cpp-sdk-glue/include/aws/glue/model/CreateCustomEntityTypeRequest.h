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
    AWS_GLUE_API CreateCustomEntityTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomEntityType"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the custom pattern that allows it to be retrieved or deleted
     * later. This name must be unique per Amazon Web Services account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the custom pattern that allows it to be retrieved or deleted
     * later. This name must be unique per Amazon Web Services account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the custom pattern that allows it to be retrieved or deleted
     * later. This name must be unique per Amazon Web Services account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the custom pattern that allows it to be retrieved or deleted
     * later. This name must be unique per Amazon Web Services account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the custom pattern that allows it to be retrieved or deleted
     * later. This name must be unique per Amazon Web Services account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the custom pattern that allows it to be retrieved or deleted
     * later. This name must be unique per Amazon Web Services account.</p>
     */
    inline CreateCustomEntityTypeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the custom pattern that allows it to be retrieved or deleted
     * later. This name must be unique per Amazon Web Services account.</p>
     */
    inline CreateCustomEntityTypeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the custom pattern that allows it to be retrieved or deleted
     * later. This name must be unique per Amazon Web Services account.</p>
     */
    inline CreateCustomEntityTypeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A regular expression string that is used for detecting sensitive data in a
     * custom pattern.</p>
     */
    inline const Aws::String& GetRegexString() const{ return m_regexString; }

    /**
     * <p>A regular expression string that is used for detecting sensitive data in a
     * custom pattern.</p>
     */
    inline bool RegexStringHasBeenSet() const { return m_regexStringHasBeenSet; }

    /**
     * <p>A regular expression string that is used for detecting sensitive data in a
     * custom pattern.</p>
     */
    inline void SetRegexString(const Aws::String& value) { m_regexStringHasBeenSet = true; m_regexString = value; }

    /**
     * <p>A regular expression string that is used for detecting sensitive data in a
     * custom pattern.</p>
     */
    inline void SetRegexString(Aws::String&& value) { m_regexStringHasBeenSet = true; m_regexString = std::move(value); }

    /**
     * <p>A regular expression string that is used for detecting sensitive data in a
     * custom pattern.</p>
     */
    inline void SetRegexString(const char* value) { m_regexStringHasBeenSet = true; m_regexString.assign(value); }

    /**
     * <p>A regular expression string that is used for detecting sensitive data in a
     * custom pattern.</p>
     */
    inline CreateCustomEntityTypeRequest& WithRegexString(const Aws::String& value) { SetRegexString(value); return *this;}

    /**
     * <p>A regular expression string that is used for detecting sensitive data in a
     * custom pattern.</p>
     */
    inline CreateCustomEntityTypeRequest& WithRegexString(Aws::String&& value) { SetRegexString(std::move(value)); return *this;}

    /**
     * <p>A regular expression string that is used for detecting sensitive data in a
     * custom pattern.</p>
     */
    inline CreateCustomEntityTypeRequest& WithRegexString(const char* value) { SetRegexString(value); return *this;}


    /**
     * <p>A list of context words. If none of these context words are found within the
     * vicinity of the regular expression the data will not be detected as sensitive
     * data.</p> <p>If no context words are passed only a regular expression is
     * checked.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContextWords() const{ return m_contextWords; }

    /**
     * <p>A list of context words. If none of these context words are found within the
     * vicinity of the regular expression the data will not be detected as sensitive
     * data.</p> <p>If no context words are passed only a regular expression is
     * checked.</p>
     */
    inline bool ContextWordsHasBeenSet() const { return m_contextWordsHasBeenSet; }

    /**
     * <p>A list of context words. If none of these context words are found within the
     * vicinity of the regular expression the data will not be detected as sensitive
     * data.</p> <p>If no context words are passed only a regular expression is
     * checked.</p>
     */
    inline void SetContextWords(const Aws::Vector<Aws::String>& value) { m_contextWordsHasBeenSet = true; m_contextWords = value; }

    /**
     * <p>A list of context words. If none of these context words are found within the
     * vicinity of the regular expression the data will not be detected as sensitive
     * data.</p> <p>If no context words are passed only a regular expression is
     * checked.</p>
     */
    inline void SetContextWords(Aws::Vector<Aws::String>&& value) { m_contextWordsHasBeenSet = true; m_contextWords = std::move(value); }

    /**
     * <p>A list of context words. If none of these context words are found within the
     * vicinity of the regular expression the data will not be detected as sensitive
     * data.</p> <p>If no context words are passed only a regular expression is
     * checked.</p>
     */
    inline CreateCustomEntityTypeRequest& WithContextWords(const Aws::Vector<Aws::String>& value) { SetContextWords(value); return *this;}

    /**
     * <p>A list of context words. If none of these context words are found within the
     * vicinity of the regular expression the data will not be detected as sensitive
     * data.</p> <p>If no context words are passed only a regular expression is
     * checked.</p>
     */
    inline CreateCustomEntityTypeRequest& WithContextWords(Aws::Vector<Aws::String>&& value) { SetContextWords(std::move(value)); return *this;}

    /**
     * <p>A list of context words. If none of these context words are found within the
     * vicinity of the regular expression the data will not be detected as sensitive
     * data.</p> <p>If no context words are passed only a regular expression is
     * checked.</p>
     */
    inline CreateCustomEntityTypeRequest& AddContextWords(const Aws::String& value) { m_contextWordsHasBeenSet = true; m_contextWords.push_back(value); return *this; }

    /**
     * <p>A list of context words. If none of these context words are found within the
     * vicinity of the regular expression the data will not be detected as sensitive
     * data.</p> <p>If no context words are passed only a regular expression is
     * checked.</p>
     */
    inline CreateCustomEntityTypeRequest& AddContextWords(Aws::String&& value) { m_contextWordsHasBeenSet = true; m_contextWords.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of context words. If none of these context words are found within the
     * vicinity of the regular expression the data will not be detected as sensitive
     * data.</p> <p>If no context words are passed only a regular expression is
     * checked.</p>
     */
    inline CreateCustomEntityTypeRequest& AddContextWords(const char* value) { m_contextWordsHasBeenSet = true; m_contextWords.push_back(value); return *this; }


    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline CreateCustomEntityTypeRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline CreateCustomEntityTypeRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline CreateCustomEntityTypeRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline CreateCustomEntityTypeRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline CreateCustomEntityTypeRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline CreateCustomEntityTypeRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline CreateCustomEntityTypeRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline CreateCustomEntityTypeRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags applied to the custom entity type.</p>
     */
    inline CreateCustomEntityTypeRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
