/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListPricingRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPricingRulesResult::ListPricingRulesResult()
{
}

ListPricingRulesResult::ListPricingRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPricingRulesResult& ListPricingRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BillingPeriod"))
  {
    m_billingPeriod = jsonValue.GetString("BillingPeriod");

  }

  if(jsonValue.ValueExists("PricingRules"))
  {
    Aws::Utils::Array<JsonView> pricingRulesJsonList = jsonValue.GetArray("PricingRules");
    for(unsigned pricingRulesIndex = 0; pricingRulesIndex < pricingRulesJsonList.GetLength(); ++pricingRulesIndex)
    {
      m_pricingRules.push_back(pricingRulesJsonList[pricingRulesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
