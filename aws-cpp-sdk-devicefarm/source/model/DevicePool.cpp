/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/DevicePool.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

DevicePool::DevicePool() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(DevicePoolType::NOT_SET),
    m_typeHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_maxDevices(0),
    m_maxDevicesHasBeenSet(false)
{
}

DevicePool::DevicePool(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(DevicePoolType::NOT_SET),
    m_typeHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_maxDevices(0),
    m_maxDevicesHasBeenSet(false)
{
  *this = jsonValue;
}

DevicePool& DevicePool::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = DevicePoolTypeMapper::GetDevicePoolTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxDevices"))
  {
    m_maxDevices = jsonValue.GetInteger("maxDevices");

    m_maxDevicesHasBeenSet = true;
  }

  return *this;
}

JsonValue DevicePool::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DevicePoolTypeMapper::GetNameForDevicePoolType(m_type));
  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("rules", std::move(rulesJsonList));

  }

  if(m_maxDevicesHasBeenSet)
  {
   payload.WithInteger("maxDevices", m_maxDevices);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
