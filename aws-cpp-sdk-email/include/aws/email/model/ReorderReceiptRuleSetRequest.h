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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to reorder the receipt rules within a receipt rule set.
   * You use receipt rule sets to receive email with Amazon SES. For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReorderReceiptRuleSetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API ReorderReceiptRuleSetRequest : public SESRequest
  {
  public:
    ReorderReceiptRuleSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReorderReceiptRuleSet"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the receipt rule set to reorder.</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    /**
     * <p>The name of the receipt rule set to reorder.</p>
     */
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }

    /**
     * <p>The name of the receipt rule set to reorder.</p>
     */
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    /**
     * <p>The name of the receipt rule set to reorder.</p>
     */
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::move(value); }

    /**
     * <p>The name of the receipt rule set to reorder.</p>
     */
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    /**
     * <p>The name of the receipt rule set to reorder.</p>
     */
    inline ReorderReceiptRuleSetRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    /**
     * <p>The name of the receipt rule set to reorder.</p>
     */
    inline ReorderReceiptRuleSetRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the receipt rule set to reorder.</p>
     */
    inline ReorderReceiptRuleSetRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}


    /**
     * <p>A list of the specified receipt rule set's receipt rules in the order that
     * you want to put them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleNames() const{ return m_ruleNames; }

    /**
     * <p>A list of the specified receipt rule set's receipt rules in the order that
     * you want to put them.</p>
     */
    inline bool RuleNamesHasBeenSet() const { return m_ruleNamesHasBeenSet; }

    /**
     * <p>A list of the specified receipt rule set's receipt rules in the order that
     * you want to put them.</p>
     */
    inline void SetRuleNames(const Aws::Vector<Aws::String>& value) { m_ruleNamesHasBeenSet = true; m_ruleNames = value; }

    /**
     * <p>A list of the specified receipt rule set's receipt rules in the order that
     * you want to put them.</p>
     */
    inline void SetRuleNames(Aws::Vector<Aws::String>&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames = std::move(value); }

    /**
     * <p>A list of the specified receipt rule set's receipt rules in the order that
     * you want to put them.</p>
     */
    inline ReorderReceiptRuleSetRequest& WithRuleNames(const Aws::Vector<Aws::String>& value) { SetRuleNames(value); return *this;}

    /**
     * <p>A list of the specified receipt rule set's receipt rules in the order that
     * you want to put them.</p>
     */
    inline ReorderReceiptRuleSetRequest& WithRuleNames(Aws::Vector<Aws::String>&& value) { SetRuleNames(std::move(value)); return *this;}

    /**
     * <p>A list of the specified receipt rule set's receipt rules in the order that
     * you want to put them.</p>
     */
    inline ReorderReceiptRuleSetRequest& AddRuleNames(const Aws::String& value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(value); return *this; }

    /**
     * <p>A list of the specified receipt rule set's receipt rules in the order that
     * you want to put them.</p>
     */
    inline ReorderReceiptRuleSetRequest& AddRuleNames(Aws::String&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the specified receipt rule set's receipt rules in the order that
     * you want to put them.</p>
     */
    inline ReorderReceiptRuleSetRequest& AddRuleNames(const char* value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(value); return *this; }

  private:

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet;

    Aws::Vector<Aws::String> m_ruleNames;
    bool m_ruleNamesHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
