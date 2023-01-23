/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/UpdateUsageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateUsageResult::UpdateUsageResult()
{
}

UpdateUsageResult::UpdateUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateUsageResult& UpdateUsageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("usagePlanId"))
  {
    m_usagePlanId = jsonValue.GetString("usagePlanId");

  }

  if(jsonValue.ValueExists("startDate"))
  {
    m_startDate = jsonValue.GetString("startDate");

  }

  if(jsonValue.ValueExists("endDate"))
  {
    m_endDate = jsonValue.GetString("endDate");

  }

  if(jsonValue.ValueExists("position"))
  {
    m_position = jsonValue.GetString("position");

  }

  if(jsonValue.ValueExists("values"))
  {
    Aws::Map<Aws::String, JsonView> valuesJsonMap = jsonValue.GetObject("values").GetAllObjects();
    for(auto& valuesItem : valuesJsonMap)
    {
      Aws::Utils::Array<JsonView> listOfUsageJsonList = valuesItem.second.AsArray();
      Aws::Vector<Aws::Vector<long long>> listOfUsageList;
      listOfUsageList.reserve((size_t)listOfUsageJsonList.GetLength());
      for(unsigned listOfUsageIndex = 0; listOfUsageIndex < listOfUsageJsonList.GetLength(); ++listOfUsageIndex)
      {
        Aws::Utils::Array<JsonView> listOfLongJsonList = listOfUsageJsonList[listOfUsageIndex].AsArray();
        Aws::Vector<long long> listOfLongList;
        listOfLongList.reserve((size_t)listOfLongJsonList.GetLength());
        for(unsigned listOfLongIndex = 0; listOfLongIndex < listOfLongJsonList.GetLength(); ++listOfLongIndex)
        {
          listOfLongList.push_back(listOfLongJsonList[listOfLongIndex].AsInt64());
        }
        listOfUsageList.push_back(std::move(listOfLongList));
      }
      m_items[valuesItem.first] = std::move(listOfUsageList);
    }
  }



  return *this;
}
