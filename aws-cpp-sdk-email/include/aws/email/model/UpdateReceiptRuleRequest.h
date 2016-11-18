/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/model/ReceiptRule.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to update a receipt rule. You use receipt rules to
   * receive email with Amazon SES. For more information, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API UpdateReceiptRuleRequest : public SESRequest
  {
  public:
    UpdateReceiptRuleRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the receipt rule set to which the receipt rule belongs.</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>The name of the receipt rule set to which the receipt rule belongs.</p>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>The name of the receipt rule set to which the receipt rule belongs.</p>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>The name of the receipt rule set to which the receipt rule belongs.</p>
     */
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    /**
     * <p>The name of the receipt rule set to which the receipt rule belongs.</p>
     */
    inline UpdateReceiptRuleRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>The name of the receipt rule set to which the receipt rule belongs.</p>
     */
    inline UpdateReceiptRuleRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>The name of the receipt rule set to which the receipt rule belongs.</p>
     */
    inline UpdateReceiptRuleRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}

    /**
     * <p>A data structure that contains the updated receipt rule information.</p>
     */
    inline const ReceiptRule& GetRule() const{ return m_rule; }

    /**
     * <p>A data structure that contains the updated receipt rule information.</p>
     */
    inline void SetRule(const ReceiptRule& value) { m_ruleHasBeenSet = true; m_rule = value; }

    /**
     * <p>A data structure that contains the updated receipt rule information.</p>
     */
    inline void SetRule(ReceiptRule&& value) { m_ruleHasBeenSet = true; m_rule = value; }

    /**
     * <p>A data structure that contains the updated receipt rule information.</p>
     */
    inline UpdateReceiptRuleRequest& WithRule(const ReceiptRule& value) { SetRule(value); return *this;}

    /**
     * <p>A data structure that contains the updated receipt rule information.</p>
     */
    inline UpdateReceiptRuleRequest& WithRule(ReceiptRule&& value) { SetRule(value); return *this;}

  private:
    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet;
    ReceiptRule m_rule;
    bool m_ruleHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
