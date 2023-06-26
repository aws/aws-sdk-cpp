/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Retroactively applies an archive rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ApplyArchiveRuleRequest">AWS
   * API Reference</a></p>
   */
  class ApplyArchiveRuleRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API ApplyArchiveRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ApplyArchiveRule"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon resource name (ARN) of the analyzer.</p>
     */
    inline const Aws::String& GetAnalyzerArn() const{ return m_analyzerArn; }

    /**
     * <p>The Amazon resource name (ARN) of the analyzer.</p>
     */
    inline bool AnalyzerArnHasBeenSet() const { return m_analyzerArnHasBeenSet; }

    /**
     * <p>The Amazon resource name (ARN) of the analyzer.</p>
     */
    inline void SetAnalyzerArn(const Aws::String& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = value; }

    /**
     * <p>The Amazon resource name (ARN) of the analyzer.</p>
     */
    inline void SetAnalyzerArn(Aws::String&& value) { m_analyzerArnHasBeenSet = true; m_analyzerArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) of the analyzer.</p>
     */
    inline void SetAnalyzerArn(const char* value) { m_analyzerArnHasBeenSet = true; m_analyzerArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) of the analyzer.</p>
     */
    inline ApplyArchiveRuleRequest& WithAnalyzerArn(const Aws::String& value) { SetAnalyzerArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the analyzer.</p>
     */
    inline ApplyArchiveRuleRequest& WithAnalyzerArn(Aws::String&& value) { SetAnalyzerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the analyzer.</p>
     */
    inline ApplyArchiveRuleRequest& WithAnalyzerArn(const char* value) { SetAnalyzerArn(value); return *this;}


    /**
     * <p>The name of the rule to apply.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the rule to apply.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the rule to apply.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the rule to apply.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the rule to apply.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the rule to apply.</p>
     */
    inline ApplyArchiveRuleRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the rule to apply.</p>
     */
    inline ApplyArchiveRuleRequest& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule to apply.</p>
     */
    inline ApplyArchiveRuleRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}


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
    inline ApplyArchiveRuleRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A client token.</p>
     */
    inline ApplyArchiveRuleRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A client token.</p>
     */
    inline ApplyArchiveRuleRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_analyzerArn;
    bool m_analyzerArnHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
