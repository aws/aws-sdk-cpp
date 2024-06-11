/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Retrieves an archive rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/GetArchiveRuleRequest">AWS
   * API Reference</a></p>
   */
  class GetArchiveRuleRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API GetArchiveRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetArchiveRule"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the analyzer to retrieve rules from.</p>
     */
    inline const Aws::String& GetAnalyzerName() const{ return m_analyzerName; }
    inline bool AnalyzerNameHasBeenSet() const { return m_analyzerNameHasBeenSet; }
    inline void SetAnalyzerName(const Aws::String& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = value; }
    inline void SetAnalyzerName(Aws::String&& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = std::move(value); }
    inline void SetAnalyzerName(const char* value) { m_analyzerNameHasBeenSet = true; m_analyzerName.assign(value); }
    inline GetArchiveRuleRequest& WithAnalyzerName(const Aws::String& value) { SetAnalyzerName(value); return *this;}
    inline GetArchiveRuleRequest& WithAnalyzerName(Aws::String&& value) { SetAnalyzerName(std::move(value)); return *this;}
    inline GetArchiveRuleRequest& WithAnalyzerName(const char* value) { SetAnalyzerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule to retrieve.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }
    inline GetArchiveRuleRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}
    inline GetArchiveRuleRequest& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}
    inline GetArchiveRuleRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}
    ///@}
  private:

    Aws::String m_analyzerName;
    bool m_analyzerNameHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
