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
    AWS_CHIMESDKMEDIAPIPELINES_API KeywordMatchConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API KeywordMatchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API KeywordMatchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the keyword match rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the keyword match rule.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the keyword match rule.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the keyword match rule.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the keyword match rule.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the keyword match rule.</p>
     */
    inline KeywordMatchConfiguration& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the keyword match rule.</p>
     */
    inline KeywordMatchConfiguration& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the keyword match rule.</p>
     */
    inline KeywordMatchConfiguration& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>The keywords or phrases that you want to match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeywords() const{ return m_keywords; }

    /**
     * <p>The keywords or phrases that you want to match.</p>
     */
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }

    /**
     * <p>The keywords or phrases that you want to match.</p>
     */
    inline void SetKeywords(const Aws::Vector<Aws::String>& value) { m_keywordsHasBeenSet = true; m_keywords = value; }

    /**
     * <p>The keywords or phrases that you want to match.</p>
     */
    inline void SetKeywords(Aws::Vector<Aws::String>&& value) { m_keywordsHasBeenSet = true; m_keywords = std::move(value); }

    /**
     * <p>The keywords or phrases that you want to match.</p>
     */
    inline KeywordMatchConfiguration& WithKeywords(const Aws::Vector<Aws::String>& value) { SetKeywords(value); return *this;}

    /**
     * <p>The keywords or phrases that you want to match.</p>
     */
    inline KeywordMatchConfiguration& WithKeywords(Aws::Vector<Aws::String>&& value) { SetKeywords(std::move(value)); return *this;}

    /**
     * <p>The keywords or phrases that you want to match.</p>
     */
    inline KeywordMatchConfiguration& AddKeywords(const Aws::String& value) { m_keywordsHasBeenSet = true; m_keywords.push_back(value); return *this; }

    /**
     * <p>The keywords or phrases that you want to match.</p>
     */
    inline KeywordMatchConfiguration& AddKeywords(Aws::String&& value) { m_keywordsHasBeenSet = true; m_keywords.push_back(std::move(value)); return *this; }

    /**
     * <p>The keywords or phrases that you want to match.</p>
     */
    inline KeywordMatchConfiguration& AddKeywords(const char* value) { m_keywordsHasBeenSet = true; m_keywords.push_back(value); return *this; }


    /**
     * <p>Matches keywords or phrases on their presence or absence. If set to
     * <code>TRUE</code>, the rule matches when all the specified keywords or phrases
     * are absent. Default: <code>FALSE</code>.</p>
     */
    inline bool GetNegate() const{ return m_negate; }

    /**
     * <p>Matches keywords or phrases on their presence or absence. If set to
     * <code>TRUE</code>, the rule matches when all the specified keywords or phrases
     * are absent. Default: <code>FALSE</code>.</p>
     */
    inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }

    /**
     * <p>Matches keywords or phrases on their presence or absence. If set to
     * <code>TRUE</code>, the rule matches when all the specified keywords or phrases
     * are absent. Default: <code>FALSE</code>.</p>
     */
    inline void SetNegate(bool value) { m_negateHasBeenSet = true; m_negate = value; }

    /**
     * <p>Matches keywords or phrases on their presence or absence. If set to
     * <code>TRUE</code>, the rule matches when all the specified keywords or phrases
     * are absent. Default: <code>FALSE</code>.</p>
     */
    inline KeywordMatchConfiguration& WithNegate(bool value) { SetNegate(value); return *this;}

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_keywords;
    bool m_keywordsHasBeenSet = false;

    bool m_negate;
    bool m_negateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
