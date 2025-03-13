/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/UpdatePricingRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePricingRuleResult::UpdatePricingRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdatePricingRuleResult& UpdatePricingRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = PricingRuleScopeMapper::GetPricingRuleScopeForName(jsonValue.GetString("Scope"));
    m_scopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = PricingRuleTypeMapper::GetPricingRuleTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModifierPercentage"))
  {
    m_modifierPercentage = jsonValue.GetDouble("ModifierPercentage");
    m_modifierPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Service"))
  {
    m_service = jsonValue.GetString("Service");
    m_serviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociatedPricingPlanCount"))
  {
    m_associatedPricingPlanCount = jsonValue.GetInt64("AssociatedPricingPlanCount");
    m_associatedPricingPlanCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BillingEntity"))
  {
    m_billingEntity = jsonValue.GetString("BillingEntity");
    m_billingEntityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tiering"))
  {
    m_tiering = jsonValue.GetObject("Tiering");
    m_tieringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UsageType"))
  {
    m_usageType = jsonValue.GetString("UsageType");
    m_usageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operation"))
  {
    m_operation = jsonValue.GetString("Operation");
    m_operationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
