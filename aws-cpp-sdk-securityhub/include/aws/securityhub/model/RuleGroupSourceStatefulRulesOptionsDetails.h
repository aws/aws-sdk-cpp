/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A rule option for a stateful rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceStatefulRulesOptionsDetails">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceStatefulRulesOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesOptionsDetails();
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A keyword to look for.</p>
     */
    inline const Aws::String& GetKeyword() const{ return m_keyword; }

    /**
     * <p>A keyword to look for.</p>
     */
    inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }

    /**
     * <p>A keyword to look for.</p>
     */
    inline void SetKeyword(const Aws::String& value) { m_keywordHasBeenSet = true; m_keyword = value; }

    /**
     * <p>A keyword to look for.</p>
     */
    inline void SetKeyword(Aws::String&& value) { m_keywordHasBeenSet = true; m_keyword = std::move(value); }

    /**
     * <p>A keyword to look for.</p>
     */
    inline void SetKeyword(const char* value) { m_keywordHasBeenSet = true; m_keyword.assign(value); }

    /**
     * <p>A keyword to look for.</p>
     */
    inline RuleGroupSourceStatefulRulesOptionsDetails& WithKeyword(const Aws::String& value) { SetKeyword(value); return *this;}

    /**
     * <p>A keyword to look for.</p>
     */
    inline RuleGroupSourceStatefulRulesOptionsDetails& WithKeyword(Aws::String&& value) { SetKeyword(std::move(value)); return *this;}

    /**
     * <p>A keyword to look for.</p>
     */
    inline RuleGroupSourceStatefulRulesOptionsDetails& WithKeyword(const char* value) { SetKeyword(value); return *this;}


    /**
     * <p>A list of settings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSettings() const{ return m_settings; }

    /**
     * <p>A list of settings.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>A list of settings.</p>
     */
    inline void SetSettings(const Aws::Vector<Aws::String>& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>A list of settings.</p>
     */
    inline void SetSettings(Aws::Vector<Aws::String>&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>A list of settings.</p>
     */
    inline RuleGroupSourceStatefulRulesOptionsDetails& WithSettings(const Aws::Vector<Aws::String>& value) { SetSettings(value); return *this;}

    /**
     * <p>A list of settings.</p>
     */
    inline RuleGroupSourceStatefulRulesOptionsDetails& WithSettings(Aws::Vector<Aws::String>&& value) { SetSettings(std::move(value)); return *this;}

    /**
     * <p>A list of settings.</p>
     */
    inline RuleGroupSourceStatefulRulesOptionsDetails& AddSettings(const Aws::String& value) { m_settingsHasBeenSet = true; m_settings.push_back(value); return *this; }

    /**
     * <p>A list of settings.</p>
     */
    inline RuleGroupSourceStatefulRulesOptionsDetails& AddSettings(Aws::String&& value) { m_settingsHasBeenSet = true; m_settings.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of settings.</p>
     */
    inline RuleGroupSourceStatefulRulesOptionsDetails& AddSettings(const char* value) { m_settingsHasBeenSet = true; m_settings.push_back(value); return *this; }

  private:

    Aws::String m_keyword;
    bool m_keywordHasBeenSet = false;

    Aws::Vector<Aws::String> m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
