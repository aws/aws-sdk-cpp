/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/EcsInferenceAcceleratorOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

EcsInferenceAcceleratorOverride::EcsInferenceAcceleratorOverride() : 
    m_deviceNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
}

EcsInferenceAcceleratorOverride::EcsInferenceAcceleratorOverride(JsonView jsonValue) : 
    m_deviceNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

EcsInferenceAcceleratorOverride& EcsInferenceAcceleratorOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deviceName"))
  {
    m_deviceName = jsonValue.GetString("deviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceType"))
  {
    m_deviceType = jsonValue.GetString("deviceType");

    m_deviceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue EcsInferenceAcceleratorOverride::Jsonize() const
{
  JsonValue payload;

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("deviceName", m_deviceName);

  }

  if(m_deviceTypeHasBeenSet)
  {
   payload.WithString("deviceType", m_deviceType);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
