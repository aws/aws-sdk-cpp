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
   * <p>Represents a request to create a receipt rule set by cloning an existing one.
   * You use receipt rule sets to receive email with Amazon SES. For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CloneReceiptRuleSetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API CloneReceiptRuleSetRequest : public SESRequest
  {
  public:
    CloneReceiptRuleSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CloneReceiptRuleSet"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li> <p>This
     * value can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_),
     * or dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p>
     * </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li> <p>This
     * value can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_),
     * or dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p>
     * </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li> <p>This
     * value can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_),
     * or dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p>
     * </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li> <p>This
     * value can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_),
     * or dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p>
     * </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::move(value); }

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li> <p>This
     * value can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_),
     * or dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p>
     * </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li> <p>This
     * value can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_),
     * or dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p>
     * </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline CloneReceiptRuleSetRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li> <p>This
     * value can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_),
     * or dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p>
     * </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline CloneReceiptRuleSetRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule set to create. The name must:</p> <ul> <li> <p>This
     * value can only contain ASCII letters (a-z, A-Z), numbers (0-9), underscores (_),
     * or dashes (-).</p> </li> <li> <p>Start and end with a letter or number.</p>
     * </li> <li> <p>Contain less than 64 characters.</p> </li> </ul>
     */
    inline CloneReceiptRuleSetRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}


    /**
     * <p>The name of the rule set to clone.</p>
     */
    inline const Aws::String& GetOriginalRuleSetName() const{ return m_originalRuleSetName; }

    /**
     * <p>The name of the rule set to clone.</p>
     */
    inline bool OriginalRuleSetNameHasBeenSet() const { return m_originalRuleSetNameHasBeenSet; }

    /**
     * <p>The name of the rule set to clone.</p>
     */
    inline void SetOriginalRuleSetName(const Aws::String& value) { m_originalRuleSetNameHasBeenSet = true; m_originalRuleSetName = value; }

    /**
     * <p>The name of the rule set to clone.</p>
     */
    inline void SetOriginalRuleSetName(Aws::String&& value) { m_originalRuleSetNameHasBeenSet = true; m_originalRuleSetName = std::move(value); }

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
    inline CloneReceiptRuleSetRequest& WithOriginalRuleSetName(Aws::String&& value) { SetOriginalRuleSetName(std::move(value)); return *this;}

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
