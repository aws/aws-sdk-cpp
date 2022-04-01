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
   * <p>Represents a request to set a receipt rule set as the active receipt rule
   * set. You use receipt rule sets to receive email with Amazon SES. For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetActiveReceiptRuleSetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API SetActiveReceiptRuleSetRequest : public SESRequest
  {
  public:
    SetActiveReceiptRuleSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetActiveReceiptRuleSet"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the receipt rule set to make active. Setting this value to null
     * disables all email receiving.</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>The name of the receipt rule set to make active. Setting this value to null
     * disables all email receiving.</p>
     */
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }

    /**
     * <p>The name of the receipt rule set to make active. Setting this value to null
     * disables all email receiving.</p>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>The name of the receipt rule set to make active. Setting this value to null
     * disables all email receiving.</p>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::move(value); }

    /**
     * <p>The name of the receipt rule set to make active. Setting this value to null
     * disables all email receiving.</p>
     */
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    /**
     * <p>The name of the receipt rule set to make active. Setting this value to null
     * disables all email receiving.</p>
     */
    inline SetActiveReceiptRuleSetRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>The name of the receipt rule set to make active. Setting this value to null
     * disables all email receiving.</p>
     */
    inline SetActiveReceiptRuleSetRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the receipt rule set to make active. Setting this value to null
     * disables all email receiving.</p>
     */
    inline SetActiveReceiptRuleSetRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}

  private:

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
