/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceLevelObjectiveSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

ServiceLevelObjectiveSummary::ServiceLevelObjectiveSummary() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_keyAttributesHasBeenSet(false),
    m_operationNameHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

ServiceLevelObjectiveSummary::ServiceLevelObjectiveSummary(JsonView jsonValue)
  : ServiceLevelObjectiveSummary()
{
  *this = jsonValue;
}

ServiceLevelObjectiveSummary& ServiceLevelObjectiveSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyAttributes"))
  {
    Aws::Map<Aws::String, JsonView> keyAttributesJsonMap = jsonValue.GetObject("KeyAttributes").GetAllObjects();
    for(auto& keyAttributesItem : keyAttributesJsonMap)
    {
      m_keyAttributes[keyAttributesItem.first] = keyAttributesItem.second.AsString();
    }
    m_keyAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OperationName"))
  {
    m_operationName = jsonValue.GetString("OperationName");

    m_operationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceLevelObjectiveSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_keyAttributesHasBeenSet)
  {
   JsonValue keyAttributesJsonMap;
   for(auto& keyAttributesItem : m_keyAttributes)
   {
     keyAttributesJsonMap.WithString(keyAttributesItem.first, keyAttributesItem.second);
   }
   payload.WithObject("KeyAttributes", std::move(keyAttributesJsonMap));

  }

  if(m_operationNameHasBeenSet)
  {
   payload.WithString("OperationName", m_operationName);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
