/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/ControlOperationFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlTower
{
namespace Model
{

ControlOperationFilter::ControlOperationFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ControlOperationFilter& ControlOperationFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("controlIdentifiers"))
  {
    Aws::Utils::Array<JsonView> controlIdentifiersJsonList = jsonValue.GetArray("controlIdentifiers");
    for(unsigned controlIdentifiersIndex = 0; controlIdentifiersIndex < controlIdentifiersJsonList.GetLength(); ++controlIdentifiersIndex)
    {
      m_controlIdentifiers.push_back(controlIdentifiersJsonList[controlIdentifiersIndex].AsString());
    }
    m_controlIdentifiersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("controlOperationTypes"))
  {
    Aws::Utils::Array<JsonView> controlOperationTypesJsonList = jsonValue.GetArray("controlOperationTypes");
    for(unsigned controlOperationTypesIndex = 0; controlOperationTypesIndex < controlOperationTypesJsonList.GetLength(); ++controlOperationTypesIndex)
    {
      m_controlOperationTypes.push_back(ControlOperationTypeMapper::GetControlOperationTypeForName(controlOperationTypesJsonList[controlOperationTypesIndex].AsString()));
    }
    m_controlOperationTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("enabledControlIdentifiers"))
  {
    Aws::Utils::Array<JsonView> enabledControlIdentifiersJsonList = jsonValue.GetArray("enabledControlIdentifiers");
    for(unsigned enabledControlIdentifiersIndex = 0; enabledControlIdentifiersIndex < enabledControlIdentifiersJsonList.GetLength(); ++enabledControlIdentifiersIndex)
    {
      m_enabledControlIdentifiers.push_back(enabledControlIdentifiersJsonList[enabledControlIdentifiersIndex].AsString());
    }
    m_enabledControlIdentifiersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statuses"))
  {
    Aws::Utils::Array<JsonView> statusesJsonList = jsonValue.GetArray("statuses");
    for(unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex)
    {
      m_statuses.push_back(ControlOperationStatusMapper::GetControlOperationStatusForName(statusesJsonList[statusesIndex].AsString()));
    }
    m_statusesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetIdentifiers"))
  {
    Aws::Utils::Array<JsonView> targetIdentifiersJsonList = jsonValue.GetArray("targetIdentifiers");
    for(unsigned targetIdentifiersIndex = 0; targetIdentifiersIndex < targetIdentifiersJsonList.GetLength(); ++targetIdentifiersIndex)
    {
      m_targetIdentifiers.push_back(targetIdentifiersJsonList[targetIdentifiersIndex].AsString());
    }
    m_targetIdentifiersHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlOperationFilter::Jsonize() const
{
  JsonValue payload;

  if(m_controlIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> controlIdentifiersJsonList(m_controlIdentifiers.size());
   for(unsigned controlIdentifiersIndex = 0; controlIdentifiersIndex < controlIdentifiersJsonList.GetLength(); ++controlIdentifiersIndex)
   {
     controlIdentifiersJsonList[controlIdentifiersIndex].AsString(m_controlIdentifiers[controlIdentifiersIndex]);
   }
   payload.WithArray("controlIdentifiers", std::move(controlIdentifiersJsonList));

  }

  if(m_controlOperationTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> controlOperationTypesJsonList(m_controlOperationTypes.size());
   for(unsigned controlOperationTypesIndex = 0; controlOperationTypesIndex < controlOperationTypesJsonList.GetLength(); ++controlOperationTypesIndex)
   {
     controlOperationTypesJsonList[controlOperationTypesIndex].AsString(ControlOperationTypeMapper::GetNameForControlOperationType(m_controlOperationTypes[controlOperationTypesIndex]));
   }
   payload.WithArray("controlOperationTypes", std::move(controlOperationTypesJsonList));

  }

  if(m_enabledControlIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledControlIdentifiersJsonList(m_enabledControlIdentifiers.size());
   for(unsigned enabledControlIdentifiersIndex = 0; enabledControlIdentifiersIndex < enabledControlIdentifiersJsonList.GetLength(); ++enabledControlIdentifiersIndex)
   {
     enabledControlIdentifiersJsonList[enabledControlIdentifiersIndex].AsString(m_enabledControlIdentifiers[enabledControlIdentifiersIndex]);
   }
   payload.WithArray("enabledControlIdentifiers", std::move(enabledControlIdentifiersJsonList));

  }

  if(m_statusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
   for(unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex)
   {
     statusesJsonList[statusesIndex].AsString(ControlOperationStatusMapper::GetNameForControlOperationStatus(m_statuses[statusesIndex]));
   }
   payload.WithArray("statuses", std::move(statusesJsonList));

  }

  if(m_targetIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetIdentifiersJsonList(m_targetIdentifiers.size());
   for(unsigned targetIdentifiersIndex = 0; targetIdentifiersIndex < targetIdentifiersJsonList.GetLength(); ++targetIdentifiersIndex)
   {
     targetIdentifiersJsonList[targetIdentifiersIndex].AsString(m_targetIdentifiers[targetIdentifiersIndex]);
   }
   payload.WithArray("targetIdentifiers", std::move(targetIdentifiersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
