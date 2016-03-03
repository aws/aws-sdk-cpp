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

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   */
  class AWS_SES_API CloneReceiptRuleSetRequest : public SESRequest
  {
  public:
    CloneReceiptRuleSetRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline CloneReceiptRuleSetRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline CloneReceiptRuleSetRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li>Contain only
     * ASCII letters (a-z, A-Z), numbers (0-9), periods (.), underscores (_), or dashes
     * (-).</li> <li>Start and end with a letter or number.</li> <li>Contain less than
     * 64 characters.</li> </ul>
     */
    inline CloneReceiptRuleSetRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}

    /**
     * <p>The name of the rule set to clone.</p>
     */
    inline const Aws::String& GetOriginalRuleSetName() const{ return m_originalRuleSetName; }

    /**
     * <p>The name of the rule set to clone.</p>
     */
    inline void SetOriginalRuleSetName(const Aws::String& value) { m_originalRuleSetNameHasBeenSet = true; m_originalRuleSetName = value; }

    /**
     * <p>The name of the rule set to clone.</p>
     */
    inline void SetOriginalRuleSetName(Aws::String&& value) { m_originalRuleSetNameHasBeenSet = true; m_originalRuleSetName = value; }

    /**
     * <p>The name of the rule set to clone.</p>
     */
    inline void SetOriginalRuleSetName(const char* value) { m_originalRuleSetNameHasBeenSet = true; m_originalRuleSetName.assign(value); }

    /**
     * <p>The name of the rule set to clone.</p>
     */
    inline CloneReceiptRuleSetRequest& WithOriginalRuleSetName(const Aws::String& value) { SetOriginalRuleSetName(value); return *this;}

    /**
     * <p>The name of the rule set to clone.</p>
     */
    inline CloneReceiptRuleSetRequest& WithOriginalRuleSetName(Aws::String&& value) { SetOriginalRuleSetName(value); return *this;}

    /**
     * <p>The name of the rule set to clone.</p>
     */
    inline CloneReceiptRuleSetRequest& WithOriginalRuleSetName(const char* value) { SetOriginalRuleSetName(value); return *this;}

  private:
    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet;
    Aws::String m_originalRuleSetName;
    bool m_originalRuleSetNameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
