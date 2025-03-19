/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>An object representing a custom pattern for detecting sensitive data across
   * the columns and rows of your structured data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CustomEntityType">AWS
   * API Reference</a></p>
   */
  class CustomEntityType
  {
  public:
    AWS_GLUE_API CustomEntityType() = default;
    AWS_GLUE_API CustomEntityType(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CustomEntityType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    CustomEntityType& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CustomEntityType& WithRegexString(RegexStringT&& value) { SetRegexString(std::forward<RegexStringT>(value)); return *this;}
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
    CustomEntityType& WithContextWords(ContextWordsT&& value) { SetContextWords(std::forward<ContextWordsT>(value)); return *this;}
    template<typename ContextWordsT = Aws::String>
    CustomEntityType& AddContextWords(ContextWordsT&& value) { m_contextWordsHasBeenSet = true; m_contextWords.emplace_back(std::forward<ContextWordsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_regexString;
    bool m_regexStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_contextWords;
    bool m_contextWordsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
