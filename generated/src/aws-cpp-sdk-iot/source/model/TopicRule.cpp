/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TopicRule.h>
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

TopicRule::TopicRule() : 
    m_ruleNameHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_ruleDisabled(false),
    m_ruleDisabledHasBeenSet(false),
    m_awsIotSqlVersionHasBeenSet(false),
    m_errorActionHasBeenSet(false)
{
}

TopicRule::TopicRule(JsonView jsonValue) : 
    m_ruleNameHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_ruleDisabled(false),
    m_ruleDisabledHasBeenSet(false),
    m_awsIotSqlVersionHasBeenSet(false),
    m_errorActionHasBeenSet(false)
{
  *this = jsonValue;
}

TopicRule& TopicRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ruleName"))
  {
    m_ruleName = jsonValue.GetString("ruleName");

    m_ruleNameHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
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

  if(jsonValue.ValueExists("errorAction"))
  {
    m_errorAction = jsonValue.GetObject("errorAction");

    m_errorActionHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicRule::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("ruleName", m_ruleName);

  }

  if(m_sqlHasBeenSet)
  {
   payload.WithString("sql", m_sql);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
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

  if(m_errorActionHasBeenSet)
  {
   payload.WithObject("errorAction", m_errorAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
