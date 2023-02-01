/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateApiKeyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateApiKeyResult::CreateApiKeyResult() : 
    m_enabled(false)
{
}

CreateApiKeyResult::CreateApiKeyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_enabled(false)
{
  *this = result;
}

CreateApiKeyResult& CreateApiKeyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
    Aws::Utils::Array<JsonView> stageKeysJsonList = jsonValue.GetArray("stageKeys");
    for(unsigned stageKeysIndex = 0; stageKeysIndex < stageKeysJsonList.GetLength(); ++stageKeysIndex)
    {
      m_stageKeys.push_back(stageKeysJsonList[stageKeysIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
