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
#include <aws/iot/model/TopicRulePayload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

TopicRulePayload::TopicRulePayload() : 
    m_sqlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_ruleDisabled(false),
    m_ruleDisabledHasBeenSet(false),
    m_awsIotSqlVersionHasBeenSet(false)
{
}

TopicRulePayload::TopicRulePayload(const JsonValue& jsonValue) : 
    m_sqlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_ruleDisabled(false),
    m_ruleDisabledHasBeenSet(false),
    m_awsIotSqlVersionHasBeenSet(false)
{
  *this = jsonValue;
}

TopicRulePayload& TopicRulePayload::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("sql"))
  {
    m_sql = jsonValue.GetString("sql");

    m_sqlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actions"))
  {
    Array<JsonValue> actionsJsonList = jsonValue.GetArray("actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleDisabled"))
  {
    m_ruleDisabled = jsonValue.GetBool("ruleDisabled");

    m_ruleDisabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsIotSqlVersion"))
  {
    m_awsIotSqlVersion = jsonValue.GetString("awsIotSqlVersion");

    m_awsIotSqlVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicRulePayload::Jsonize() const
{
  JsonValue payload;

  if(m_sqlHasBeenSet)
  {
   payload.WithString("sql", m_sql);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_actionsHasBeenSet)
  {
   Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("actions", std::move(actionsJsonList));

  }

  if(m_ruleDisabledHasBeenSet)
  {
   payload.WithBool("ruleDisabled", m_ruleDisabled);

  }

  if(m_awsIotSqlVersionHasBeenSet)
  {
   payload.WithString("awsIotSqlVersion", m_awsIotSqlVersion);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws