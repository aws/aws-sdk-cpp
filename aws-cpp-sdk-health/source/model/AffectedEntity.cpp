/*
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

#include <aws/health/model/AffectedEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

AffectedEntity::AffectedEntity() : 
    m_entityArnHasBeenSet(false),
    m_eventArnHasBeenSet(false),
    m_entityValueHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_statusCode(EntityStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

AffectedEntity::AffectedEntity(const JsonValue& jsonValue) : 
    m_entityArnHasBeenSet(false),
    m_eventArnHasBeenSet(false),
    m_entityValueHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_statusCode(EntityStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

AffectedEntity& AffectedEntity::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("entityArn"))
  {
    m_entityArn = jsonValue.GetString("entityArn");

    m_entityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventArn"))
  {
    m_eventArn = jsonValue.GetString("eventArn");

    m_eventArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityValue"))
  {
    m_entityValue = jsonValue.GetString("entityValue");

    m_entityValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = EntityStatusCodeMapper::GetEntityStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonValue> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue AffectedEntity::Jsonize() const
{
  JsonValue payload;

  if(m_entityArnHasBeenSet)
  {
   payload.WithString("entityArn", m_entityArn);

  }

  if(m_eventArnHasBeenSet)
  {
   payload.WithString("eventArn", m_eventArn);

  }

  if(m_entityValueHasBeenSet)
  {
   payload.WithString("entityValue", m_entityValue);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", EntityStatusCodeMapper::GetNameForEntityStatusCode(m_statusCode));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws