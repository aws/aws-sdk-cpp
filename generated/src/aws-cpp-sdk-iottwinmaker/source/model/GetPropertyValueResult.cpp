/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iottwinmaker/model/GetPropertyValueResult.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPropertyValueResult::GetPropertyValueResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetPropertyValueResult& GetPropertyValueResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("propertyValues")) {
    Aws::Map<Aws::String, JsonView> propertyValuesJsonMap = jsonValue.GetObject("propertyValues").GetAllObjects();
    for (auto& propertyValuesItem : propertyValuesJsonMap) {
      m_propertyValues[propertyValuesItem.first] = propertyValuesItem.second.AsObject();
    }
    m_propertyValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tabularPropertyValues")) {
    Aws::Utils::Array<JsonView> tabularPropertyValuesJsonList = jsonValue.GetArray("tabularPropertyValues");
    for (unsigned tabularPropertyValuesIndex = 0; tabularPropertyValuesIndex < tabularPropertyValuesJsonList.GetLength();
         ++tabularPropertyValuesIndex) {
      Aws::Utils::Array<JsonView> tabularPropertyValue2JsonList = tabularPropertyValuesJsonList[tabularPropertyValuesIndex].AsArray();
      Aws::Vector<Aws::Map<Aws::String, DataValue>> tabularPropertyValue2List;
      tabularPropertyValue2List.reserve((size_t)tabularPropertyValue2JsonList.GetLength());
      for (unsigned tabularPropertyValue2Index = 0; tabularPropertyValue2Index < tabularPropertyValue2JsonList.GetLength();
           ++tabularPropertyValue2Index) {
        Aws::Map<Aws::String, JsonView> propertyTableValue3JsonMap =
            tabularPropertyValue2JsonList[tabularPropertyValue2Index].GetAllObjects();
        Aws::Map<Aws::String, DataValue> propertyTableValue3Map;
        for (auto& propertyTableValue3Item : propertyTableValue3JsonMap) {
          propertyTableValue3Map[propertyTableValue3Item.first] = propertyTableValue3Item.second.AsObject();
        }
        tabularPropertyValue2List.push_back(std::move(propertyTableValue3Map));
      }
      m_tabularPropertyValues.push_back(std::move(tabularPropertyValue2List));
    }
    m_tabularPropertyValuesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
