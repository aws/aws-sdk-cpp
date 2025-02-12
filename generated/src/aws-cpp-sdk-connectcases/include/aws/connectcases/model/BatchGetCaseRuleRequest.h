/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/CaseRuleIdentifier.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class BatchGetCaseRuleRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API BatchGetCaseRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetCaseRule"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>List of case rule identifiers.</p>
     */
    inline const Aws::Vector<CaseRuleIdentifier>& GetCaseRules() const{ return m_caseRules; }
    inline bool CaseRulesHasBeenSet() const { return m_caseRulesHasBeenSet; }
    inline void SetCaseRules(const Aws::Vector<CaseRuleIdentifier>& value) { m_caseRulesHasBeenSet = true; m_caseRules = value; }
    inline void SetCaseRules(Aws::Vector<CaseRuleIdentifier>&& value) { m_caseRulesHasBeenSet = true; m_caseRules = std::move(value); }
    inline BatchGetCaseRuleRequest& WithCaseRules(const Aws::Vector<CaseRuleIdentifier>& value) { SetCaseRules(value); return *this;}
    inline BatchGetCaseRuleRequest& WithCaseRules(Aws::Vector<CaseRuleIdentifier>&& value) { SetCaseRules(std::move(value)); return *this;}
    inline BatchGetCaseRuleRequest& AddCaseRules(const CaseRuleIdentifier& value) { m_caseRulesHasBeenSet = true; m_caseRules.push_back(value); return *this; }
    inline BatchGetCaseRuleRequest& AddCaseRules(CaseRuleIdentifier&& value) { m_caseRulesHasBeenSet = true; m_caseRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a Cases domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline BatchGetCaseRuleRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline BatchGetCaseRuleRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline BatchGetCaseRuleRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CaseRuleIdentifier> m_caseRules;
    bool m_caseRulesHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
