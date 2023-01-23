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
   * <p>Represents a request to update a receipt rule. You use receipt rules to
   * receive email with Amazon SES. For more information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateReceiptRuleRequest">AWS
   * API Reference</a></p>
   */
  class UpdateReceiptRuleRequest : public SESRequest
  {
  public:
    AWS_SES_API UpdateReceiptRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReceiptRule"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the receipt rule set that the receipt rule belongs to.</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>The name of the receipt rule set that the receipt rule belongs to.</p>
     */
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }

    /**
     * <p>The name of the receipt rule set that the receipt rule belongs to.</p>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>The name of the receipt rule set that the receipt rule belongs to.</p>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::move(value); }

    /**
     * <p>The name of the receipt rule set that the receipt rule belongs to.</p>
     */
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    /**
     * <p>The name of the receipt rule set that the receipt rule belongs to.</p>
     */
    inline UpdateReceiptRuleRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>The name of the receipt rule set that the receipt rule belongs to.</p>
     */
    inline UpdateReceiptRuleRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the receipt rule set that the receipt rule belongs to.</p>
     */
    inline UpdateReceiptRuleRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}


    /**
     * <p>A data structure that contains the updated receipt rule information.</p>
     */
    inline const ReceiptRule& GetRule() const{ return m_rule; }

    /**
     * <p>A data structure that contains the updated receipt rule information.</p>
     */
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }

    /**
     * <p>A data structure that contains the updated receipt rule information.</p>
     */
    inline void SetRule(const ReceiptRule& value) { m_ruleHasBeenSet = true; m_rule = value; }

    /**
     * <p>A data structure that contains the updated receipt rule information.</p>
     */
    inline void SetRule(ReceiptRule&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }

    /**
     * <p>A data structure that contains the updated receipt rule information.</p>
     */
    inline UpdateReceiptRuleRequest& WithRule(const ReceiptRule& value) { SetRule(value); return *this;}

    /**
     * <p>A data structure that contains the updated receipt rule information.</p>
     */
    inline UpdateReceiptRuleRequest& WithRule(ReceiptRule&& value) { SetRule(std::move(value)); return *this;}

  private:

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet = false;

    ReceiptRule m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
