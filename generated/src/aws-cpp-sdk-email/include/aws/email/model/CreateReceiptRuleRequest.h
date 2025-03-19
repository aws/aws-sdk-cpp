/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/ReceiptRule.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to create a receipt rule. You use receipt rules to
   * receive email with Amazon SES. For more information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptRuleRequest">AWS
   * API Reference</a></p>
   */
  class CreateReceiptRuleRequest : public SESRequest
  {
  public:
    AWS_SES_API CreateReceiptRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReceiptRule"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the rule set where the receipt rule is added.</p>
     */
    inline const Aws::String& GetRuleSetName() const { return m_ruleSetName; }
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }
    template<typename RuleSetNameT = Aws::String>
    void SetRuleSetName(RuleSetNameT&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::forward<RuleSetNameT>(value); }
    template<typename RuleSetNameT = Aws::String>
    CreateReceiptRuleRequest& WithRuleSetName(RuleSetNameT&& value) { SetRuleSetName(std::forward<RuleSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing rule after which the new rule is placed. If this
     * parameter is null, the new rule is inserted at the beginning of the rule
     * list.</p>
     */
    inline const Aws::String& GetAfter() const { return m_after; }
    inline bool AfterHasBeenSet() const { return m_afterHasBeenSet; }
    template<typename AfterT = Aws::String>
    void SetAfter(AfterT&& value) { m_afterHasBeenSet = true; m_after = std::forward<AfterT>(value); }
    template<typename AfterT = Aws::String>
    CreateReceiptRuleRequest& WithAfter(AfterT&& value) { SetAfter(std::forward<AfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A data structure that contains the specified rule's name, actions,
     * recipients, domains, enabled status, scan status, and TLS policy.</p>
     */
    inline const ReceiptRule& GetRule() const { return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    template<typename RuleT = ReceiptRule>
    void SetRule(RuleT&& value) { m_ruleHasBeenSet = true; m_rule = std::forward<RuleT>(value); }
    template<typename RuleT = ReceiptRule>
    CreateReceiptRuleRequest& WithRule(RuleT&& value) { SetRule(std::forward<RuleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet = false;

    Aws::String m_after;
    bool m_afterHasBeenSet = false;

    ReceiptRule m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
