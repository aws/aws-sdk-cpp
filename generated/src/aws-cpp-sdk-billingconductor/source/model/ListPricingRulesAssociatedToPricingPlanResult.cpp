/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListPricingRulesAssociatedToPricingPlanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPricingRulesAssociatedToPricingPlanResult::ListPricingRulesAssociatedToPricingPlanResult()
{
}

ListPricingRulesAssociatedToPricingPlanResult::ListPricingRulesAssociatedToPricingPlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPricingRulesAssociatedToPricingPlanResult& ListPricingRulesAssociatedToPricingPlanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BillingPeriod"))
  {
    m_billingPeriod = jsonValue.GetString("BillingPeriod");

  }

  if(jsonValue.ValueExists("PricingPlanArn"))
  {
    m_pricingPlanArn = jsonValue.GetString("PricingPlanArn");

  }

  if(jsonValue.ValueExists("PricingRuleArns"))
  {
    Aws::Utils::Array<JsonView> pricingRuleArnsJsonList = jsonValue.GetArray("PricingRuleArns");
    for(unsigned pricingRuleArnsIndex = 0; pricingRuleArnsIndex < pricingRuleArnsJsonList.GetLength(); ++pricingRuleArnsIndex)
    {
      m_pricingRuleArns.push_back(pricingRuleArnsJsonList[pricingRuleArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
