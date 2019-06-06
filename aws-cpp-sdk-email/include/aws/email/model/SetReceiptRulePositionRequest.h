/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Represents a request to set the position of a receipt rule in a receipt rule
   * set. You use receipt rule sets to receive email with Amazon SES. For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetReceiptRulePositionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API SetReceiptRulePositionRequest : public SESRequest
  {
  public:
    SetReceiptRulePositionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetReceiptRulePosition"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * reposition.</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * reposition.</p>
     */
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * reposition.</p>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * reposition.</p>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::move(value); }

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * reposition.</p>
     */
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * reposition.</p>
     */
    inline SetReceiptRulePositionRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * reposition.</p>
     */
    inline SetReceiptRulePositionRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the receipt rule set that contains the receipt rule to
     * reposition.</p>
     */
    inline SetReceiptRulePositionRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}


    /**
     * <p>The name of the receipt rule to reposition.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the receipt rule to reposition.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the receipt rule to reposition.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the receipt rule to reposition.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the receipt rule to reposition.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the receipt rule to reposition.</p>
     */
    inline SetReceiptRulePositionRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the receipt rule to reposition.</p>
     */
    inline SetReceiptRulePositionRequest& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the receipt rule to reposition.</p>
     */
    inline SetReceiptRulePositionRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>The name of the receipt rule after which to place the specified receipt
     * rule.</p>
     */
    inline const Aws::String& GetAfter() const{ return m_after; }

    /**
     * <p>The name of the receipt rule after which to place the specified receipt
     * rule.</p>
     */
    inline bool AfterHasBeenSet() const { return m_afterHasBeenSet; }

    /**
     * <p>The name of the receipt rule after which to place the specified receipt
     * rule.</p>
     */
    inline void SetAfter(const Aws::String& value) { m_afterHasBeenSet = true; m_after = value; }

    /**
     * <p>The name of the receipt rule after which to place the specified receipt
     * rule.</p>
     */
    inline void SetAfter(Aws::String&& value) { m_afterHasBeenSet = true; m_after = std::move(value); }

    /**
     * <p>The name of the receipt rule after which to place the specified receipt
     * rule.</p>
     */
    inline void SetAfter(const char* value) { m_afterHasBeenSet = true; m_after.assign(value); }

    /**
     * <p>The name of the receipt rule after which to place the specified receipt
     * rule.</p>
     */
    inline SetReceiptRulePositionRequest& WithAfter(const Aws::String& value) { SetAfter(value); return *this;}

    /**
     * <p>The name of the receipt rule after which to place the specified receipt
     * rule.</p>
     */
    inline SetReceiptRulePositionRequest& WithAfter(Aws::String&& value) { SetAfter(std::move(value)); return *this;}

    /**
     * <p>The name of the receipt rule after which to place the specified receipt
     * rule.</p>
     */
    inline SetReceiptRulePositionRequest& WithAfter(const char* value) { SetAfter(value); return *this;}

  private:

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;

    Aws::String m_after;
    bool m_afterHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
