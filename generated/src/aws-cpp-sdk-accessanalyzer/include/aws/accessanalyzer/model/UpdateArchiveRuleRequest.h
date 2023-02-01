/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/accessanalyzer/model/Criterion.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Updates the specified archive rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UpdateArchiveRuleRequest">AWS
   * API Reference</a></p>
   */
  class UpdateArchiveRuleRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API UpdateArchiveRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateArchiveRule"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the analyzer to update the archive rules for.</p>
     */
    inline const Aws::String& GetAnalyzerName() const{ return m_analyzerName; }

    /**
     * <p>The name of the analyzer to update the archive rules for.</p>
     */
    inline bool AnalyzerNameHasBeenSet() const { return m_analyzerNameHasBeenSet; }

    /**
     * <p>The name of the analyzer to update the archive rules for.</p>
     */
    inline void SetAnalyzerName(const Aws::String& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = value; }

    /**
     * <p>The name of the analyzer to update the archive rules for.</p>
     */
    inline void SetAnalyzerName(Aws::String&& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = std::move(value); }

    /**
     * <p>The name of the analyzer to update the archive rules for.</p>
     */
    inline void SetAnalyzerName(const char* value) { m_analyzerNameHasBeenSet = true; m_analyzerName.assign(value); }

    /**
     * <p>The name of the analyzer to update the archive rules for.</p>
     */
    inline UpdateArchiveRuleRequest& WithAnalyzerName(const Aws::String& value) { SetAnalyzerName(value); return *this;}

    /**
     * <p>The name of the analyzer to update the archive rules for.</p>
     */
    inline UpdateArchiveRuleRequest& WithAnalyzerName(Aws::String&& value) { SetAnalyzerName(std::move(value)); return *this;}

    /**
     * <p>The name of the analyzer to update the archive rules for.</p>
     */
    inline UpdateArchiveRuleRequest& WithAnalyzerName(const char* value) { SetAnalyzerName(value); return *this;}


    /**
     * <p>The name of the rule to update.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the rule to update.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the rule to update.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the rule to update.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the rule to update.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the rule to update.</p>
     */
    inline UpdateArchiveRuleRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the rule to update.</p>
     */
    inline UpdateArchiveRuleRequest& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule to update.</p>
     */
    inline UpdateArchiveRuleRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>A filter to match for the rules to update. Only rules that match the filter
     * are updated.</p>
     */
    inline const Aws::Map<Aws::String, Criterion>& GetFilter() const{ return m_filter; }

    /**
     * <p>A filter to match for the rules to update. Only rules that match the filter
     * are updated.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>A filter to match for the rules to update. Only rules that match the filter
     * are updated.</p>
     */
    inline void SetFilter(const Aws::Map<Aws::String, Criterion>& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>A filter to match for the rules to update. Only rules that match the filter
     * are updated.</p>
     */
    inline void SetFilter(Aws::Map<Aws::String, Criterion>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>A filter to match for the rules to update. Only rules that match the filter
     * are updated.</p>
     */
    inline UpdateArchiveRuleRequest& WithFilter(const Aws::Map<Aws::String, Criterion>& value) { SetFilter(value); return *this;}

    /**
     * <p>A filter to match for the rules to update. Only rules that match the filter
     * are updated.</p>
     */
    inline UpdateArchiveRuleRequest& WithFilter(Aws::Map<Aws::String, Criterion>&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>A filter to match for the rules to update. Only rules that match the filter
     * are updated.</p>
     */
    inline UpdateArchiveRuleRequest& AddFilter(const Aws::String& key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }

    /**
     * <p>A filter to match for the rules to update. Only rules that match the filter
     * are updated.</p>
     */
    inline UpdateArchiveRuleRequest& AddFilter(Aws::String&& key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), value); return *this; }

    /**
     * <p>A filter to match for the rules to update. Only rules that match the filter
     * are updated.</p>
     */
    inline UpdateArchiveRuleRequest& AddFilter(const Aws::String& key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A filter to match for the rules to update. Only rules that match the filter
     * are updated.</p>
     */
    inline UpdateArchiveRuleRequest& AddFilter(Aws::String&& key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A filter to match for the rules to update. Only rules that match the filter
     * are updated.</p>
     */
    inline UpdateArchiveRuleRequest& AddFilter(const char* key, Criterion&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A filter to match for the rules to update. Only rules that match the filter
     * are updated.</p>
     */
    inline UpdateArchiveRuleRequest& AddFilter(const char* key, const Criterion& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }


    /**
     * <p>A client token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A client token.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A client token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A client token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A client token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A client token.</p>
     */
    inline UpdateArchiveRuleRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A client token.</p>
     */
    inline UpdateArchiveRuleRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A client token.</p>
     */
    inline UpdateArchiveRuleRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_analyzerName;
    bool m_analyzerNameHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::Map<Aws::String, Criterion> m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
