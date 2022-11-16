/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetPropertyValueResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPropertyValueResult::GetPropertyValueResult()
{
}

GetPropertyValueResult::GetPropertyValueResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPropertyValueResult& GetPropertyValueResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("propertyValues"))
  {
    Aws::Map<Aws::String, JsonView> propertyValuesJsonMap = jsonValue.GetObject("propertyValues").GetAllObjects();
    for(auto& propertyValuesItem : propertyValuesJsonMap)
    {
      m_propertyValues[propertyValuesItem.first] = propertyValuesItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("tabularPropertyValues"))
  {
    Aws::Utils::Array<JsonView> tabularPropertyValuesJsonList = jsonValue.GetArray("tabularPropertyValues");
    for(unsigned tabularPropertyValuesIndex = 0; tabularPropertyValuesIndex < tabularPropertyValuesJsonList.GetLength(); ++tabularPropertyValuesIndex)
    {
      Aws::Utils::Array<JsonView> tabularPropertyValueJsonList = tabularPropertyValuesJsonList[tabularPropertyValuesIndex].AsArray();
      Aws::Vector<Aws::Map<Aws::String, DataValue>> tabularPropertyValueList;
      tabularPropertyValueList.reserve((size_t)tabularPropertyValueJsonList.GetLength());
      for(unsigned tabularPropertyValueIndex = 0; tabularPropertyValueIndex < tabularPropertyValueJsonList.GetLength(); ++tabularPropertyValueIndex)
      {
        Aws::Map<Aws::String, JsonView> propertyTableValueJsonMap = tabularPropertyValueJsonList[tabularPropertyValueIndex].GetAllObjects();
        Aws::Map<Aws::String, DataValue> propertyTableValueMap;
        for(auto& propertyTableValueItem : propertyTableValueJsonMap)
        {
          propertyTableValueMap[propertyTableValueItem.first] = propertyTableValueItem.second.AsObject();
        }
        tabularPropertyValueList.push_back(std::move(propertyTableValueMap));
      }
      m_tabularPropertyValues.push_back(std::move(tabularPropertyValueList));
    }
  }



  return *this;
}
