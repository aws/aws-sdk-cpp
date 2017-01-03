﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/model/UpdateApiKeyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateApiKeyResult::UpdateApiKeyResult() : 
    m_enabled(false)
{
}

UpdateApiKeyResult::UpdateApiKeyResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_enabled(false)
{
  *this = result;
}

UpdateApiKeyResult& UpdateApiKeyResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("customerId"))
  {
    m_customerId = jsonValue.GetString("customerId");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

  }

  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("lastUpdatedDate");

  }

  if(jsonValue.ValueExists("stageKeys"))
  {
    Array<JsonValue> stageKeysJsonList = jsonValue.GetArray("stageKeys");
    for(unsigned stageKeysIndex = 0; stageKeysIndex < stageKeysJsonList.GetLength(); ++stageKeysIndex)
    {
      m_stageKeys.push_back(stageKeysJsonList[stageKeysIndex].AsString());
    }
  }



  return *this;
}
