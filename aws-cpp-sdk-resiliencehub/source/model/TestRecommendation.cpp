/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/TestRecommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

TestRecommendation::TestRecommendation() : 
    m_appComponentNameHasBeenSet(false),
    m_dependsOnAlarmsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_intentHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_prerequisiteHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_risk(TestRisk::NOT_SET),
    m_riskHasBeenSet(false),
    m_type(TestType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

TestRecommendation::TestRecommendation(JsonView jsonValue) : 
    m_appComponentNameHasBeenSet(false),
    m_dependsOnAlarmsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_intentHasBeenSet(false),
    m_itemsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_prerequisiteHasBeenSet(false),
    m_recommendationIdHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_risk(TestRisk::NOT_SET),
    m_riskHasBeenSet(false),
    m_type(TestType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

TestRecommendation& TestRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appComponentName"))
  {
    m_appComponentName = jsonValue.GetString("appComponentName");

    m_appComponentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dependsOnAlarms"))
  {
    Aws::Utils::Array<JsonView> dependsOnAlarmsJsonList = jsonValue.GetArray("dependsOnAlarms");
    for(unsigned dependsOnAlarmsIndex = 0; dependsOnAlarmsIndex < dependsOnAlarmsJsonList.GetLength(); ++dependsOnAlarmsIndex)
    {
      m_dependsOnAlarms.push_back(dependsOnAlarmsJsonList[dependsOnAlarmsIndex].AsString());
    }
    m_dependsOnAlarmsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intent"))
  {
    m_intent = jsonValue.GetString("intent");

    m_intentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("items"))
  {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
    m_itemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prerequisite"))
  {
    m_prerequisite = jsonValue.GetString("prerequisite");

    m_prerequisiteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationId"))
  {
    m_recommendationId = jsonValue.GetString("recommendationId");

    m_recommendationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("referenceId"))
  {
    m_referenceId = jsonValue.GetString("referenceId");

    m_referenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("risk"))
  {
    m_risk = TestRiskMapper::GetTestRiskForName(jsonValue.GetString("risk"));

    m_riskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TestTypeMapper::GetTestTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue TestRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_appComponentNameHasBeenSet)
  {
   payload.WithString("appComponentName", m_appComponentName);

  }

  if(m_dependsOnAlarmsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependsOnAlarmsJsonList(m_dependsOnAlarms.size());
   for(unsigned dependsOnAlarmsIndex = 0; dependsOnAlarmsIndex < dependsOnAlarmsJsonList.GetLength(); ++dependsOnAlarmsIndex)
   {
     dependsOnAlarmsJsonList[dependsOnAlarmsIndex].AsString(m_dependsOnAlarms[dependsOnAlarmsIndex]);
   }
   payload.WithArray("dependsOnAlarms", std::move(dependsOnAlarmsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_intentHasBeenSet)
  {
   payload.WithString("intent", m_intent);

  }

  if(m_itemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
   }
   payload.WithArray("items", std::move(itemsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_prerequisiteHasBeenSet)
  {
   payload.WithString("prerequisite", m_prerequisite);

  }

  if(m_recommendationIdHasBeenSet)
  {
   payload.WithString("recommendationId", m_recommendationId);

  }

  if(m_referenceIdHasBeenSet)
  {
   payload.WithString("referenceId", m_referenceId);

  }

  if(m_riskHasBeenSet)
  {
   payload.WithString("risk", TestRiskMapper::GetNameForTestRisk(m_risk));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TestTypeMapper::GetNameForTestType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
