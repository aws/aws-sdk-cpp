/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/ConnectCasesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/CaseRuleDetails.h>
#include <utility>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

  /**
   */
  class UpdateCaseRuleRequest : public ConnectCasesRequest
  {
  public:
    AWS_CONNECTCASES_API UpdateCaseRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCaseRule"; }

    AWS_CONNECTCASES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique identifier of a case rule.</p>
     */
    inline const Aws::String& GetCaseRuleId() const{ return m_caseRuleId; }
    inline bool CaseRuleIdHasBeenSet() const { return m_caseRuleIdHasBeenSet; }
    inline void SetCaseRuleId(const Aws::String& value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId = value; }
    inline void SetCaseRuleId(Aws::String&& value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId = std::move(value); }
    inline void SetCaseRuleId(const char* value) { m_caseRuleIdHasBeenSet = true; m_caseRuleId.assign(value); }
    inline UpdateCaseRuleRequest& WithCaseRuleId(const Aws::String& value) { SetCaseRuleId(value); return *this;}
    inline UpdateCaseRuleRequest& WithCaseRuleId(Aws::String&& value) { SetCaseRuleId(std::move(value)); return *this;}
    inline UpdateCaseRuleRequest& WithCaseRuleId(const char* value) { SetCaseRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of a case rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateCaseRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateCaseRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateCaseRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline UpdateCaseRuleRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline UpdateCaseRuleRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline UpdateCaseRuleRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the case rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateCaseRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateCaseRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateCaseRuleRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents what rule type should take place, under what conditions.</p>
     */
    inline const CaseRuleDetails& GetRule() const{ return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    inline void SetRule(const CaseRuleDetails& value) { m_ruleHasBeenSet = true; m_rule = value; }
    inline void SetRule(CaseRuleDetails&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }
    inline UpdateCaseRuleRequest& WithRule(const CaseRuleDetails& value) { SetRule(value); return *this;}
    inline UpdateCaseRuleRequest& WithRule(CaseRuleDetails&& value) { SetRule(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_caseRuleId;
    bool m_caseRuleIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CaseRuleDetails m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
