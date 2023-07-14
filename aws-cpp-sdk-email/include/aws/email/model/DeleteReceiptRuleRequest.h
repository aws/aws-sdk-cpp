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
   * <p>Represents a request to delete a receipt rule. You use receipt rules to
   * receive email with Amazon SES. For more information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptRuleRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API DeleteReceiptRuleRequest : public SESRequest
  {
  public:
    DeleteReceiptRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteReceiptRule"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * delete.</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * delete.</p>
     */
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * delete.</p>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * delete.</p>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::move(value); }

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * delete.</p>
     */
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * delete.</p>
     */
    inline DeleteReceiptRuleRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * delete.</p>
     */
    inline DeleteReceiptRuleRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * delete.</p>
     */
    inline DeleteReceiptRuleRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}


    /**
     * <p>The name of the receipt rule to delete.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the receipt rule to delete.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the receipt rule to delete.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the receipt rule to delete.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the receipt rule to delete.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the receipt rule to delete.</p>
     */
    inline DeleteReceiptRuleRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the receipt rule to delete.</p>
     */
    inline DeleteReceiptRuleRequest& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the receipt rule to delete.</p>
     */
    inline DeleteReceiptRuleRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}

  private:

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
