/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/UpdatePricingRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePricingRuleResult::UpdatePricingRuleResult() : 
    m_scope(PricingRuleScope::NOT_SET),
    m_type(PricingRuleType::NOT_SET),
    m_modifierPercentage(0.0),
    m_associatedPricingPlanCount(0),
    m_lastModifiedTime(0)
{
}

UpdatePricingRuleResult::UpdatePricingRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_scope(PricingRuleScope::NOT_SET),
    m_type(PricingRuleType::NOT_SET),
    m_modifierPercentage(0.0),
    m_associatedPricingPlanCount(0),
    m_lastModifiedTime(0)
{
  *this = result;
}

UpdatePricingRuleResult& UpdatePricingRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = PricingRuleScopeMapper::GetPricingRuleScopeForName(jsonValue.GetString("Scope"));

  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = PricingRuleTypeMapper::GetPricingRuleTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("ModifierPercentage"))
  {
    m_modifierPercentage = jsonValue.GetDouble("ModifierPercentage");

  }

  if(jsonValue.ValueExists("Service"))
  {
    m_service = jsonValue.GetString("Service");

  }

  if(jsonValue.ValueExists("AssociatedPricingPlanCount"))
  {
    m_associatedPricingPlanCount = jsonValue.GetInt64("AssociatedPricingPlanCount");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("LastModifiedTime");

  }

  if(jsonValue.ValueExists("BillingEntity"))
  {
    m_billingEntity = jsonValue.GetString("BillingEntity");

  }

  if(jsonValue.ValueExists("Tiering"))
  {
    m_tiering = jsonValue.GetObject("Tiering");

  }



  return *this;
}
