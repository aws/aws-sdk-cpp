/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/Rule.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class UpdateRuleSetRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API UpdateRuleSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRuleSet"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of a rule set you want to update.</p>
     */
    inline const Aws::String& GetRuleSetId() const{ return m_ruleSetId; }
    inline bool RuleSetIdHasBeenSet() const { return m_ruleSetIdHasBeenSet; }
    inline void SetRuleSetId(const Aws::String& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = value; }
    inline void SetRuleSetId(Aws::String&& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = std::move(value); }
    inline void SetRuleSetId(const char* value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId.assign(value); }
    inline UpdateRuleSetRequest& WithRuleSetId(const Aws::String& value) { SetRuleSetId(value); return *this;}
    inline UpdateRuleSetRequest& WithRuleSetId(Aws::String&& value) { SetRuleSetId(std::move(value)); return *this;}
    inline UpdateRuleSetRequest& WithRuleSetId(const char* value) { SetRuleSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the rule set resource.</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }
    inline bool RuleSetNameHasBeenSet() const { return m_ruleSetNameHasBeenSet; }
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::move(value); }
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }
    inline UpdateRuleSetRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}
    inline UpdateRuleSetRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(std::move(value)); return *this;}
    inline UpdateRuleSetRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new set of rules to replace the current rules of the rule set—these rules
     * will override all the rules of the rule set.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }
    inline UpdateRuleSetRequest& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}
    inline UpdateRuleSetRequest& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}
    inline UpdateRuleSetRequest& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }
    inline UpdateRuleSetRequest& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_ruleSetId;
    bool m_ruleSetIdHasBeenSet = false;

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
