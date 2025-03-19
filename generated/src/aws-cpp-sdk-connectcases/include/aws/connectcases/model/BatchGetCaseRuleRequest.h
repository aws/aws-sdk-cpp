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
    AWS_CONNECTCASES_API BatchGetCaseRuleRequest() = default;

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
    inline const Aws::Vector<CaseRuleIdentifier>& GetCaseRules() const { return m_caseRules; }
    inline bool CaseRulesHasBeenSet() const { return m_caseRulesHasBeenSet; }
    template<typename CaseRulesT = Aws::Vector<CaseRuleIdentifier>>
    void SetCaseRules(CaseRulesT&& value) { m_caseRulesHasBeenSet = true; m_caseRules = std::forward<CaseRulesT>(value); }
    template<typename CaseRulesT = Aws::Vector<CaseRuleIdentifier>>
    BatchGetCaseRuleRequest& WithCaseRules(CaseRulesT&& value) { SetCaseRules(std::forward<CaseRulesT>(value)); return *this;}
    template<typename CaseRulesT = CaseRuleIdentifier>
    BatchGetCaseRuleRequest& AddCaseRules(CaseRulesT&& value) { m_caseRulesHasBeenSet = true; m_caseRules.emplace_back(std::forward<CaseRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique identifier of a Cases domain.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    BatchGetCaseRuleRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
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
