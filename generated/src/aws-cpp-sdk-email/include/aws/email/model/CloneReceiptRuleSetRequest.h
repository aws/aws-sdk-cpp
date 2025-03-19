/**
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
   * <p>Represents a request to create a receipt rule set by cloning an existing one.
   * You use receipt rule sets to receive email with Amazon SES. For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CloneReceiptRuleSetRequest">AWS
   * API Reference</a></p>
   */
  class CloneReceiptRuleSetRequest : public SESRequest
  {
  public:
    AWS_SES_API CloneReceiptRuleSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CloneReceiptRuleSet"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the rule set to create. The name must meet the following
     * requirements:</p> <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers
     * (0-9), underscores (_), or dashes (-).</p> </li> <li> <p>Start and end with a
     * letter or number.</p> </li> <li> <p>Contain 64 characters or fewer.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetRuleSetName() const { return m_ruleSetName; }
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }
    template<typename RuleSetNameT = Aws::String>
    void SetRuleSetName(RuleSetNameT&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::forward<RuleSetNameT>(value); }
    template<typename RuleSetNameT = Aws::String>
    CloneReceiptRuleSetRequest& WithRuleSetName(RuleSetNameT&& value) { SetRuleSetName(std::forward<RuleSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule set to clone.</p>
     */
    inline const Aws::String& GetOriginalRuleSetName() const { return m_originalRuleSetName; }
    inline bool OriginalRuleSetNameHasBeenSet() const { return m_originalRuleSetNameHasBeenSet; }
    template<typename OriginalRuleSetNameT = Aws::String>
    void SetOriginalRuleSetName(OriginalRuleSetNameT&& value) { m_originalRuleSetNameHasBeenSet = true; m_originalRuleSetName = std::forward<OriginalRuleSetNameT>(value); }
    template<typename OriginalRuleSetNameT = Aws::String>
    CloneReceiptRuleSetRequest& WithOriginalRuleSetName(OriginalRuleSetNameT&& value) { SetOriginalRuleSetName(std::forward<OriginalRuleSetNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet = false;

    Aws::String m_originalRuleSetName;
    bool m_originalRuleSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
