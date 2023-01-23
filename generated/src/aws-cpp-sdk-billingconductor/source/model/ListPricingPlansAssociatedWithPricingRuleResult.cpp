/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListPricingPlansAssociatedWithPricingRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPricingPlansAssociatedWithPricingRuleResult::ListPricingPlansAssociatedWithPricingRuleResult()
{
}

ListPricingPlansAssociatedWithPricingRuleResult::ListPricingPlansAssociatedWithPricingRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPricingPlansAssociatedWithPricingRuleResult& ListPricingPlansAssociatedWithPricingRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BillingPeriod"))
  {
    m_billingPeriod = jsonValue.GetString("BillingPeriod");

  }

  if(jsonValue.ValueExists("PricingRuleArn"))
  {
    m_pricingRuleArn = jsonValue.GetString("PricingRuleArn");

  }

  if(jsonValue.ValueExists("PricingPlanArns"))
  {
    Aws::Utils::Array<JsonView> pricingPlanArnsJsonList = jsonValue.GetArray("PricingPlanArns");
    for(unsigned pricingPlanArnsIndex = 0; pricingPlanArnsIndex < pricingPlanArnsJsonList.GetLength(); ++pricingPlanArnsIndex)
    {
      m_pricingPlanArns.push_back(pricingPlanArnsJsonList[pricingPlanArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
