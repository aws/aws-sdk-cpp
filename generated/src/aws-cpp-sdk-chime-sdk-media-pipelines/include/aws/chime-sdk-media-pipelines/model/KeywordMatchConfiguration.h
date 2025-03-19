/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>A structure that contains the settings for a keyword match
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/KeywordMatchConfiguration">AWS
   * API Reference</a></p>
   */
  class KeywordMatchConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API KeywordMatchConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API KeywordMatchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API KeywordMatchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the keyword match rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    KeywordMatchConfiguration& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The keywords or phrases that you want to match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeywords() const { return m_keywords; }
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }
    template<typename KeywordsT = Aws::Vector<Aws::String>>
    void SetKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords = std::forward<KeywordsT>(value); }
    template<typename KeywordsT = Aws::Vector<Aws::String>>
    KeywordMatchConfiguration& WithKeywords(KeywordsT&& value) { SetKeywords(std::forward<KeywordsT>(value)); return *this;}
    template<typename KeywordsT = Aws::String>
    KeywordMatchConfiguration& AddKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords.emplace_back(std::forward<KeywordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Matches keywords or phrases on their presence or absence. If set to
     * <code>TRUE</code>, the rule matches when all the specified keywords or phrases
     * are absent. Default: <code>FALSE</code>.</p>
     */
    inline bool GetNegate() const { return m_negate; }
    inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }
    inline void SetNegate(bool value) { m_negateHasBeenSet = true; m_negate = value; }
    inline KeywordMatchConfiguration& WithNegate(bool value) { SetNegate(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_keywords;
    bool m_keywordsHasBeenSet = false;

    bool m_negate{false};
    bool m_negateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
