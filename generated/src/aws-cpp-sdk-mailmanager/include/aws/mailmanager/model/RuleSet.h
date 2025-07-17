/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MailManager
{
namespace Model
{

  /**
   * <p>A rule set contains a list of rules that are evaluated in order. Each rule is
   * evaluated sequentially for each email.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleSet">AWS
   * API Reference</a></p>
   */
  class RuleSet
  {
  public:
    AWS_MAILMANAGER_API RuleSet() = default;
    AWS_MAILMANAGER_API RuleSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the rule set.</p>
     */
    inline const Aws::String& GetRuleSetId() const { return m_ruleSetId; }
    inline bool RuleSetIdHasBeenSet() const { return m_ruleSetIdHasBeenSet; }
    template<typename RuleSetIdT = Aws::String>
    void SetRuleSetId(RuleSetIdT&& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = std::forward<RuleSetIdT>(value); }
    template<typename RuleSetIdT = Aws::String>
    RuleSet& WithRuleSetId(RuleSetIdT&& value) { SetRuleSetId(std::forward<RuleSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the rule set.</p>
     */
    inline const Aws::String& GetRuleSetName() const { return m_ruleSetName; }
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }
    template<typename RuleSetNameT = Aws::String>
    void SetRuleSetName(RuleSetNameT&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::forward<RuleSetNameT>(value); }
    template<typename RuleSetNameT = Aws::String>
    RuleSet& WithRuleSetName(RuleSetNameT&& value) { SetRuleSetName(std::forward<RuleSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modification date of the rule set.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationDate() const { return m_lastModificationDate; }
    inline bool LastModificationDateHasBeenSet() const { return m_lastModificationDateHasBeenSet; }
    template<typename LastModificationDateT = Aws::Utils::DateTime>
    void SetLastModificationDate(LastModificationDateT&& value) { m_lastModificationDateHasBeenSet = true; m_lastModificationDate = std::forward<LastModificationDateT>(value); }
    template<typename LastModificationDateT = Aws::Utils::DateTime>
    RuleSet& WithLastModificationDate(LastModificationDateT&& value) { SetLastModificationDate(std::forward<LastModificationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleSetId;
    bool m_ruleSetIdHasBeenSet = false;

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationDate{};
    bool m_lastModificationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
