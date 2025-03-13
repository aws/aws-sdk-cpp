/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/SignalFetchInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

SignalFetchInformation::SignalFetchInformation(JsonView jsonValue)
{
  *this = jsonValue;
}

SignalFetchInformation& SignalFetchInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fullyQualifiedName"))
  {
    m_fullyQualifiedName = jsonValue.GetString("fullyQualifiedName");
    m_fullyQualifiedNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signalFetchConfig"))
  {
    m_signalFetchConfig = jsonValue.GetObject("signalFetchConfig");
    m_signalFetchConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conditionLanguageVersion"))
  {
    m_conditionLanguageVersion = jsonValue.GetInteger("conditionLanguageVersion");
    m_conditionLanguageVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsString());
    }
    m_actionsHasBeenSet = true;
  }
  return *this;
}

JsonValue SignalFetchInformation::Jsonize() const
{
  JsonValue payload;

  if(m_fullyQualifiedNameHasBeenSet)
  {
   payload.WithString("fullyQualifiedName", m_fullyQualifiedName);

  }

  if(m_signalFetchConfigHasBeenSet)
  {
   payload.WithObject("signalFetchConfig", m_signalFetchConfig.Jsonize());

  }

  if(m_conditionLanguageVersionHasBeenSet)
  {
   payload.WithInteger("conditionLanguageVersion", m_conditionLanguageVersion);

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsString(m_actions[actionsIndex]);
   }
   payload.WithArray("actions", std::move(actionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
