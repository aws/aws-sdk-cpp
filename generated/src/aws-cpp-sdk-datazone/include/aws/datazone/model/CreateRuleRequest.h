/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/datazone/model/RuleAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/RuleDetail.h>
#include <aws/datazone/model/RuleScope.h>
#include <aws/datazone/model/RuleTarget.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateRuleRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRule"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The action of the rule.</p>
     */
    inline const RuleAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const RuleAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(RuleAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline CreateRuleRequest& WithAction(const RuleAction& value) { SetAction(value); return *this;}
    inline CreateRuleRequest& WithAction(RuleAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateRuleRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateRuleRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateRuleRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detail of the rule.</p>
     */
    inline const RuleDetail& GetDetail() const{ return m_detail; }
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
    inline void SetDetail(const RuleDetail& value) { m_detailHasBeenSet = true; m_detail = value; }
    inline void SetDetail(RuleDetail&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }
    inline CreateRuleRequest& WithDetail(const RuleDetail& value) { SetDetail(value); return *this;}
    inline CreateRuleRequest& WithDetail(RuleDetail&& value) { SetDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where the rule is created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline CreateRuleRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline CreateRuleRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline CreateRuleRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateRuleRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope of the rule.</p>
     */
    inline const RuleScope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const RuleScope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(RuleScope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline CreateRuleRequest& WithScope(const RuleScope& value) { SetScope(value); return *this;}
    inline CreateRuleRequest& WithScope(RuleScope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target of the rule.</p>
     */
    inline const RuleTarget& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const RuleTarget& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(RuleTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline CreateRuleRequest& WithTarget(const RuleTarget& value) { SetTarget(value); return *this;}
    inline CreateRuleRequest& WithTarget(RuleTarget&& value) { SetTarget(std::move(value)); return *this;}
    ///@}
  private:

    RuleAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RuleDetail m_detail;
    bool m_detailHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleScope m_scope;
    bool m_scopeHasBeenSet = false;

    RuleTarget m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
