/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DescribeResourceGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeResourceGroupsResult::DescribeResourceGroupsResult()
{
}

DescribeResourceGroupsResult::DescribeResourceGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeResourceGroupsResult& DescribeResourceGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resourceGroups"))
  {
    Aws::Utils::Array<JsonView> resourceGroupsJsonList = jsonValue.GetArray("resourceGroups");
    for(unsigned resourceGroupsIndex = 0; resourceGroupsIndex < resourceGroupsJsonList.GetLength(); ++resourceGroupsIndex)
    {
      m_resourceGroups.push_back(resourceGroupsJsonList[resourceGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("failedItems"))
  {
    Aws::Map<Aws::String, JsonView> failedItemsJsonMap = jsonValue.GetObject("failedItems").GetAllObjects();
    for(auto& failedItemsItem : failedItemsJsonMap)
    {
      m_failedItems[failedItemsItem.first] = failedItemsItem.second.AsObject();
    }
  }



  return *this;
}
