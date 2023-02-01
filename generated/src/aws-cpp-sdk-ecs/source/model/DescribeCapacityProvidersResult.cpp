/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DescribeCapacityProvidersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCapacityProvidersResult::DescribeCapacityProvidersResult()
{
}

DescribeCapacityProvidersResult::DescribeCapacityProvidersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCapacityProvidersResult& DescribeCapacityProvidersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("capacityProviders"))
  {
    Aws::Utils::Array<JsonView> capacityProvidersJsonList = jsonValue.GetArray("capacityProviders");
    for(unsigned capacityProvidersIndex = 0; capacityProvidersIndex < capacityProvidersJsonList.GetLength(); ++capacityProvidersIndex)
    {
      m_capacityProviders.push_back(capacityProvidersJsonList[capacityProvidersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("failures"))
  {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("failures");
    for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
    {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
