/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/DescribeContainerInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeContainerInstancesResult::DescribeContainerInstancesResult()
{
}

DescribeContainerInstancesResult::DescribeContainerInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeContainerInstancesResult& DescribeContainerInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("containerInstances"))
  {
    Aws::Utils::Array<JsonView> containerInstancesJsonList = jsonValue.GetArray("containerInstances");
    for(unsigned containerInstancesIndex = 0; containerInstancesIndex < containerInstancesJsonList.GetLength(); ++containerInstancesIndex)
    {
      m_containerInstances.push_back(containerInstancesJsonList[containerInstancesIndex].AsObject());
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



  return *this;
}
