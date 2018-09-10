﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/apigateway/model/GetUsageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUsageResult::GetUsageResult()
{
}

GetUsageResult::GetUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUsageResult& GetUsageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
      Array<JsonView> listOfUsageJsonList = valuesItem.second.AsArray();
      Aws::Vector<Aws::Vector<long long>> listOfUsageList;
      listOfUsageList.reserve((size_t)listOfUsageJsonList.GetLength());
      for(unsigned listOfUsageIndex = 0; listOfUsageIndex < listOfUsageJsonList.GetLength(); ++listOfUsageIndex)
      {
        Array<JsonView> listOfLongJsonList = listOfUsageJsonList[listOfUsageIndex].AsArray();
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
