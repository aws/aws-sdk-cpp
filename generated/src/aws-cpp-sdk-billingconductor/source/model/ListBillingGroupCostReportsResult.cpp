/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListBillingGroupCostReportsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBillingGroupCostReportsResult::ListBillingGroupCostReportsResult()
{
}

ListBillingGroupCostReportsResult::ListBillingGroupCostReportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBillingGroupCostReportsResult& ListBillingGroupCostReportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BillingGroupCostReports"))
  {
    Aws::Utils::Array<JsonView> billingGroupCostReportsJsonList = jsonValue.GetArray("BillingGroupCostReports");
    for(unsigned billingGroupCostReportsIndex = 0; billingGroupCostReportsIndex < billingGroupCostReportsJsonList.GetLength(); ++billingGroupCostReportsIndex)
    {
      m_billingGroupCostReports.push_back(billingGroupCostReportsJsonList[billingGroupCostReportsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
