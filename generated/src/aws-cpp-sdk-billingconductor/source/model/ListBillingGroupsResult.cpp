/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListBillingGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBillingGroupsResult::ListBillingGroupsResult()
{
}

ListBillingGroupsResult::ListBillingGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBillingGroupsResult& ListBillingGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BillingGroups"))
  {
    Aws::Utils::Array<JsonView> billingGroupsJsonList = jsonValue.GetArray("BillingGroups");
    for(unsigned billingGroupsIndex = 0; billingGroupsIndex < billingGroupsJsonList.GetLength(); ++billingGroupsIndex)
    {
      m_billingGroups.push_back(billingGroupsJsonList[billingGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
