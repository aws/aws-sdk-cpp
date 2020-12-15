/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/ListTestCasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTestCasesResult::ListTestCasesResult()
{
}

ListTestCasesResult::ListTestCasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTestCasesResult& ListTestCasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("categories"))
  {
    Array<JsonView> categoriesJsonList = jsonValue.GetArray("categories");
    for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
    {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("rootGroupConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> rootGroupConfigurationJsonMap = jsonValue.GetObject("rootGroupConfiguration").GetAllObjects();
    for(auto& rootGroupConfigurationItem : rootGroupConfigurationJsonMap)
    {
      m_rootGroupConfiguration[rootGroupConfigurationItem.first] = rootGroupConfigurationItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("groupConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> groupConfigurationJsonMap = jsonValue.GetObject("groupConfiguration").GetAllObjects();
    for(auto& groupConfigurationItem : groupConfigurationJsonMap)
    {
      m_groupConfiguration[groupConfigurationItem.first] = groupConfigurationItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
