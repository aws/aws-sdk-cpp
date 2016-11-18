﻿/*
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
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API SetActiveReceiptRuleSetRequest : public SESRequest
  {
  public:
    SetActiveReceiptRuleSetRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the receipt rule set to make active. Setting this value to null
     * disables all email receiving.</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>The name of the receipt rule set to make active. Setting this value to null
     * disables all email receiving.</p>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>The name of the receipt rule set to make active. Setting this value to null
     * disables all email receiving.</p>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

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
    inline SetActiveReceiptRuleSetRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(value); return *this;}

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
