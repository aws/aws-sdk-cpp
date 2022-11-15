/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ContainerInstanceHealthStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ContainerInstanceHealthStatus::ContainerInstanceHealthStatus() : 
    m_overallStatus(InstanceHealthCheckState::NOT_SET),
    m_overallStatusHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

ContainerInstanceHealthStatus::ContainerInstanceHealthStatus(JsonView jsonValue) : 
    m_overallStatus(InstanceHealthCheckState::NOT_SET),
    m_overallStatusHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerInstanceHealthStatus& ContainerInstanceHealthStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("overallStatus"))
  {
    m_overallStatus = InstanceHealthCheckStateMapper::GetInstanceHealthCheckStateForName(jsonValue.GetString("overallStatus"));

    m_overallStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("details"))
  {
    Aws::Utils::Array<JsonView> detailsJsonList = jsonValue.GetArray("details");
    for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
    {
      m_details.push_back(detailsJsonList[detailsIndex].AsObject());
    }
    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerInstanceHealthStatus::Jsonize() const
{
  JsonValue payload;

  if(m_overallStatusHasBeenSet)
  {
   payload.WithString("overallStatus", InstanceHealthCheckStateMapper::GetNameForInstanceHealthCheckState(m_overallStatus));
  }

  if(m_detailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> detailsJsonList(m_details.size());
   for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
   {
     detailsJsonList[detailsIndex].AsObject(m_details[detailsIndex].Jsonize());
   }
   payload.WithArray("details", std::move(detailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
