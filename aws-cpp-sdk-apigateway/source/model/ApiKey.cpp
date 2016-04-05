/*
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
#include <aws/apigateway/model/ApiKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ApiKey::ApiKey() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_stageKeysHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false)
{
}

ApiKey::ApiKey(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_stageKeysHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false)
{
  *this = jsonValue;
}

ApiKey& ApiKey::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stageKeys"))
  {
    Array<JsonValue> stageKeysJsonList = jsonValue.GetArray("stageKeys");
    for(unsigned stageKeysIndex = 0; stageKeysIndex < stageKeysJsonList.GetLength(); ++stageKeysIndex)
    {
      m_stageKeys.push_back(stageKeysJsonList[stageKeysIndex].AsString());
    }
    m_stageKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("lastUpdatedDate");

    m_lastUpdatedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiKey::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_stageKeysHasBeenSet)
  {
   Array<JsonValue> stageKeysJsonList(m_stageKeys.size());
   for(unsigned stageKeysIndex = 0; stageKeysIndex < stageKeysJsonList.GetLength(); ++stageKeysIndex)
   {
     stageKeysJsonList[stageKeysIndex].AsString(m_stageKeys[stageKeysIndex]);
   }
   payload.WithArray("stageKeys", std::move(stageKeysJsonList));

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("createdDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDate", m_lastUpdatedDate.SecondsWithMSPrecision());
  }

  return payload;
}