/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/GetPropertyValueHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPropertyValueHistoryResult::GetPropertyValueHistoryResult()
{
}

GetPropertyValueHistoryResult::GetPropertyValueHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPropertyValueHistoryResult& GetPropertyValueHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("propertyValues"))
  {
    Aws::Utils::Array<JsonView> propertyValuesJsonList = jsonValue.GetArray("propertyValues");
    for(unsigned propertyValuesIndex = 0; propertyValuesIndex < propertyValuesJsonList.GetLength(); ++propertyValuesIndex)
    {
      m_propertyValues.push_back(propertyValuesJsonList[propertyValuesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
