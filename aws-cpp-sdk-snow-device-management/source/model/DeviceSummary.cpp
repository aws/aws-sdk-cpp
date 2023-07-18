/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/DeviceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{

DeviceSummary::DeviceSummary() : 
    m_associatedWithJobHasBeenSet(false),
    m_managedDeviceArnHasBeenSet(false),
    m_managedDeviceIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

DeviceSummary::DeviceSummary(JsonView jsonValue) : 
    m_associatedWithJobHasBeenSet(false),
    m_managedDeviceArnHasBeenSet(false),
    m_managedDeviceIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceSummary& DeviceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("associatedWithJob"))
  {
    m_associatedWithJob = jsonValue.GetString("associatedWithJob");

    m_associatedWithJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managedDeviceArn"))
  {
    m_managedDeviceArn = jsonValue.GetString("managedDeviceArn");

    m_managedDeviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("managedDeviceId"))
  {
    m_managedDeviceId = jsonValue.GetString("managedDeviceId");

    m_managedDeviceIdHasBeenSet = true;
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

JsonValue DeviceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_associatedWithJobHasBeenSet)
  {
   payload.WithString("associatedWithJob", m_associatedWithJob);

  }

  if(m_managedDeviceArnHasBeenSet)
  {
   payload.WithString("managedDeviceArn", m_managedDeviceArn);

  }

  if(m_managedDeviceIdHasBeenSet)
  {
   payload.WithString("managedDeviceId", m_managedDeviceId);

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
} // namespace SnowDeviceManagement
} // namespace Aws
