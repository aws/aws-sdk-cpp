/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/RuleDetail.h>
#include <aws/datazone/model/RuleScope.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class UpdateRuleRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRule"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The description of the rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detail of the rule.</p>
     */
    inline const RuleDetail& GetDetail() const{ return m_detail; }
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
    inline void SetDetail(const RuleDetail& value) { m_detailHasBeenSet = true; m_detail = value; }
    inline void SetDetail(RuleDetail&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }
    inline UpdateRuleRequest& WithDetail(const RuleDetail& value) { SetDetail(value); return *this;}
    inline UpdateRuleRequest& WithDetail(RuleDetail&& value) { SetDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain in which a rule is to be updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline UpdateRuleRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline UpdateRuleRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline UpdateRuleRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the rule that is to be updated</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateRuleRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateRuleRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateRuleRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to update this rule in the child domain units.</p>
     */
    inline bool GetIncludeChildDomainUnits() const{ return m_includeChildDomainUnits; }
    inline bool IncludeChildDomainUnitsHasBeenSet() const { return m_includeChildDomainUnitsHasBeenSet; }
    inline void SetIncludeChildDomainUnits(bool value) { m_includeChildDomainUnitsHasBeenSet = true; m_includeChildDomainUnits = value; }
    inline UpdateRuleRequest& WithIncludeChildDomainUnits(bool value) { SetIncludeChildDomainUnits(value); return *this;}
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
    inline UpdateRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateRuleRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scrope of the rule.</p>
     */
    inline const RuleScope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const RuleScope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(RuleScope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline UpdateRuleRequest& WithScope(const RuleScope& value) { SetScope(value); return *this;}
    inline UpdateRuleRequest& WithScope(RuleScope&& value) { SetScope(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RuleDetail m_detail;
    bool m_detailHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    bool m_includeChildDomainUnits;
    bool m_includeChildDomainUnitsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleScope m_scope;
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
