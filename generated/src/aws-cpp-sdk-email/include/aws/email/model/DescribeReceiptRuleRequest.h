﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to return the details of a receipt rule. You use receipt
   * rules to receive email with Amazon SES. For more information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeReceiptRuleRequest">AWS
   * API Reference</a></p>
   */
  class DescribeReceiptRuleRequest : public SESRequest
  {
  public:
    AWS_SES_API DescribeReceiptRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReceiptRule"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the receipt rule set that the receipt rule belongs to.</p>
     */
    inline const Aws::String& GetRuleSetName() const { return m_ruleSetName; }
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }
    template<typename RuleSetNameT = Aws::String>
    void SetRuleSetName(RuleSetNameT&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::forward<RuleSetNameT>(value); }
    template<typename RuleSetNameT = Aws::String>
    DescribeReceiptRuleRequest& WithRuleSetName(RuleSetNameT&& value) { SetRuleSetName(std::forward<RuleSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the receipt rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    DescribeReceiptRuleRequest& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
