/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReorderReceiptRuleSetRequest">AWS
   * API Reference</a></p>
   */
  class ReorderReceiptRuleSetRequest : public SESRequest
  {
  public:
    AWS_SES_API ReorderReceiptRuleSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReorderReceiptRuleSet"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the receipt rule set to reorder.</p>
     */
    inline const Aws::String& GetRuleSetName() const { return m_ruleSetName; }
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }
    template<typename RuleSetNameT = Aws::String>
    void SetRuleSetName(RuleSetNameT&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::forward<RuleSetNameT>(value); }
    template<typename RuleSetNameT = Aws::String>
    ReorderReceiptRuleSetRequest& WithRuleSetName(RuleSetNameT&& value) { SetRuleSetName(std::forward<RuleSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified receipt rule set's receipt rules, in order.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleNames() const { return m_ruleNames; }
    inline bool RuleNamesHasBeenSet() const { return m_ruleNamesHasBeenSet; }
    template<typename RuleNamesT = Aws::Vector<Aws::String>>
    void SetRuleNames(RuleNamesT&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames = std::forward<RuleNamesT>(value); }
    template<typename RuleNamesT = Aws::Vector<Aws::String>>
    ReorderReceiptRuleSetRequest& WithRuleNames(RuleNamesT&& value) { SetRuleNames(std::forward<RuleNamesT>(value)); return *this;}
    template<typename RuleNamesT = Aws::String>
    ReorderReceiptRuleSetRequest& AddRuleNames(RuleNamesT&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames.emplace_back(std::forward<RuleNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_ruleNames;
    bool m_ruleNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
