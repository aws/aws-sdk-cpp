/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/CapacityProvider.h>
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

CapacityProvider::CapacityProvider() : 
    m_capacityProviderArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(CapacityProviderStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_autoScalingGroupProviderHasBeenSet(false),
    m_updateStatus(CapacityProviderUpdateStatus::NOT_SET),
    m_updateStatusHasBeenSet(false),
    m_updateStatusReasonHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CapacityProvider::CapacityProvider(JsonView jsonValue) : 
    m_capacityProviderArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(CapacityProviderStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_autoScalingGroupProviderHasBeenSet(false),
    m_updateStatus(CapacityProviderUpdateStatus::NOT_SET),
    m_updateStatusHasBeenSet(false),
    m_updateStatusReasonHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityProvider& CapacityProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("capacityProviderArn"))
  {
    m_capacityProviderArn = jsonValue.GetString("capacityProviderArn");

    m_capacityProviderArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = CapacityProviderStatusMapper::GetCapacityProviderStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoScalingGroupProvider"))
  {
    m_autoScalingGroupProvider = jsonValue.GetObject("autoScalingGroupProvider");

    m_autoScalingGroupProviderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateStatus"))
  {
    m_updateStatus = CapacityProviderUpdateStatusMapper::GetCapacityProviderUpdateStatusForName(jsonValue.GetString("updateStatus"));

    m_updateStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateStatusReason"))
  {
    m_updateStatusReason = jsonValue.GetString("updateStatusReason");

    m_updateStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityProvider::Jsonize() const
{
  JsonValue payload;

  if(m_capacityProviderArnHasBeenSet)
  {
   payload.WithString("capacityProviderArn", m_capacityProviderArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CapacityProviderStatusMapper::GetNameForCapacityProviderStatus(m_status));
  }

  if(m_autoScalingGroupProviderHasBeenSet)
  {
   payload.WithObject("autoScalingGroupProvider", m_autoScalingGroupProvider.Jsonize());

  }

  if(m_updateStatusHasBeenSet)
  {
   payload.WithString("updateStatus", CapacityProviderUpdateStatusMapper::GetNameForCapacityProviderUpdateStatus(m_updateStatus));
  }

  if(m_updateStatusReasonHasBeenSet)
  {
   payload.WithString("updateStatusReason", m_updateStatusReason);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
