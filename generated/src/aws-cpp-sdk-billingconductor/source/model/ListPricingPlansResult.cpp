/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListPricingPlansResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPricingPlansResult::ListPricingPlansResult()
{
}

ListPricingPlansResult::ListPricingPlansResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPricingPlansResult& ListPricingPlansResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BillingPeriod"))
  {
    m_billingPeriod = jsonValue.GetString("BillingPeriod");

  }

  if(jsonValue.ValueExists("PricingPlans"))
  {
    Aws::Utils::Array<JsonView> pricingPlansJsonList = jsonValue.GetArray("PricingPlans");
    for(unsigned pricingPlansIndex = 0; pricingPlansIndex < pricingPlansJsonList.GetLength(); ++pricingPlansIndex)
    {
      m_pricingPlans.push_back(pricingPlansJsonList[pricingPlansIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
