/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/Rule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MailManager
{
namespace Model
{
  class GetRuleSetResult
  {
  public:
    AWS_MAILMANAGER_API GetRuleSetResult() = default;
    AWS_MAILMANAGER_API GetRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the rule set resource.</p>
     */
    inline const Aws::String& GetRuleSetId() const { return m_ruleSetId; }
    template<typename RuleSetIdT = Aws::String>
    void SetRuleSetId(RuleSetIdT&& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = std::forward<RuleSetIdT>(value); }
    template<typename RuleSetIdT = Aws::String>
    GetRuleSetResult& WithRuleSetId(RuleSetIdT&& value) { SetRuleSetId(std::forward<RuleSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule set resource.</p>
     */
    inline const Aws::String& GetRuleSetArn() const { return m_ruleSetArn; }
    template<typename RuleSetArnT = Aws::String>
    void SetRuleSetArn(RuleSetArnT&& value) { m_ruleSetArnHasBeenSet = true; m_ruleSetArn = std::forward<RuleSetArnT>(value); }
    template<typename RuleSetArnT = Aws::String>
    GetRuleSetResult& WithRuleSetArn(RuleSetArnT&& value) { SetRuleSetArn(std::forward<RuleSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the rule set resource.</p>
     */
    inline const Aws::String& GetRuleSetName() const { return m_ruleSetName; }
    template<typename RuleSetNameT = Aws::String>
    void SetRuleSetName(RuleSetNameT&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = std::forward<RuleSetNameT>(value); }
    template<typename RuleSetNameT = Aws::String>
    GetRuleSetResult& WithRuleSetName(RuleSetNameT&& value) { SetRuleSetName(std::forward<RuleSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of when then rule set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    GetRuleSetResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of when the rule set was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationDate() const { return m_lastModificationDate; }
    template<typename LastModificationDateT = Aws::Utils::DateTime>
    void SetLastModificationDate(LastModificationDateT&& value) { m_lastModificationDateHasBeenSet = true; m_lastModificationDate = std::forward<LastModificationDateT>(value); }
    template<typename LastModificationDateT = Aws::Utils::DateTime>
    GetRuleSetResult& WithLastModificationDate(LastModificationDateT&& value) { SetLastModificationDate(std::forward<LastModificationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules contained in the rule set.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const { return m_rules; }
    template<typename RulesT = Aws::Vector<Rule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<Rule>>
    GetRuleSetResult& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = Rule>
    GetRuleSetResult& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRuleSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleSetId;
    bool m_ruleSetIdHasBeenSet = false;

    Aws::String m_ruleSetArn;
    bool m_ruleSetArnHasBeenSet = false;

    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationDate{};
    bool m_lastModificationDateHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
