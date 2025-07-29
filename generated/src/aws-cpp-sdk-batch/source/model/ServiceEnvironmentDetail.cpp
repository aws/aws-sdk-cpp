/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceEnvironmentDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ServiceEnvironmentDetail::ServiceEnvironmentDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceEnvironmentDetail& ServiceEnvironmentDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceEnvironmentName"))
  {
    m_serviceEnvironmentName = jsonValue.GetString("serviceEnvironmentName");
    m_serviceEnvironmentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceEnvironmentArn"))
  {
    m_serviceEnvironmentArn = jsonValue.GetString("serviceEnvironmentArn");
    m_serviceEnvironmentArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceEnvironmentType"))
  {
    m_serviceEnvironmentType = ServiceEnvironmentTypeMapper::GetServiceEnvironmentTypeForName(jsonValue.GetString("serviceEnvironmentType"));
    m_serviceEnvironmentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = ServiceEnvironmentStateMapper::GetServiceEnvironmentStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ServiceEnvironmentStatusMapper::GetServiceEnvironmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("capacityLimits"))
  {
    Aws::Utils::Array<JsonView> capacityLimitsJsonList = jsonValue.GetArray("capacityLimits");
    for(unsigned capacityLimitsIndex = 0; capacityLimitsIndex < capacityLimitsJsonList.GetLength(); ++capacityLimitsIndex)
    {
      m_capacityLimits.push_back(capacityLimitsJsonList[capacityLimitsIndex].AsObject());
    }
    m_capacityLimitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceEnvironmentDetail::Jsonize() const
{
  JsonValue payload;

  if(m_serviceEnvironmentNameHasBeenSet)
  {
   payload.WithString("serviceEnvironmentName", m_serviceEnvironmentName);

  }

  if(m_serviceEnvironmentArnHasBeenSet)
  {
   payload.WithString("serviceEnvironmentArn", m_serviceEnvironmentArn);

  }

  if(m_serviceEnvironmentTypeHasBeenSet)
  {
   payload.WithString("serviceEnvironmentType", ServiceEnvironmentTypeMapper::GetNameForServiceEnvironmentType(m_serviceEnvironmentType));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ServiceEnvironmentStateMapper::GetNameForServiceEnvironmentState(m_state));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ServiceEnvironmentStatusMapper::GetNameForServiceEnvironmentStatus(m_status));
  }

  if(m_capacityLimitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capacityLimitsJsonList(m_capacityLimits.size());
   for(unsigned capacityLimitsIndex = 0; capacityLimitsIndex < capacityLimitsJsonList.GetLength(); ++capacityLimitsIndex)
   {
     capacityLimitsJsonList[capacityLimitsIndex].AsObject(m_capacityLimits[capacityLimitsIndex].Jsonize());
   }
   payload.WithArray("capacityLimits", std::move(capacityLimitsJsonList));

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
} // namespace Batch
} // namespace Aws
