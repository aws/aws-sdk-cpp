/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/DevicePoolCompatibilityResult.h>
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

DevicePoolCompatibilityResult::DevicePoolCompatibilityResult() : 
    m_deviceHasBeenSet(false),
    m_compatible(false),
    m_compatibleHasBeenSet(false),
    m_incompatibilityMessagesHasBeenSet(false)
{
}

DevicePoolCompatibilityResult::DevicePoolCompatibilityResult(JsonView jsonValue) : 
    m_deviceHasBeenSet(false),
    m_compatible(false),
    m_compatibleHasBeenSet(false),
    m_incompatibilityMessagesHasBeenSet(false)
{
  *this = jsonValue;
}

DevicePoolCompatibilityResult& DevicePoolCompatibilityResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("device"))
  {
    m_device = jsonValue.GetObject("device");

    m_deviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("compatible"))
  {
    m_compatible = jsonValue.GetBool("compatible");

    m_compatibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("incompatibilityMessages"))
  {
    Aws::Utils::Array<JsonView> incompatibilityMessagesJsonList = jsonValue.GetArray("incompatibilityMessages");
    for(unsigned incompatibilityMessagesIndex = 0; incompatibilityMessagesIndex < incompatibilityMessagesJsonList.GetLength(); ++incompatibilityMessagesIndex)
    {
      m_incompatibilityMessages.push_back(incompatibilityMessagesJsonList[incompatibilityMessagesIndex].AsObject());
    }
    m_incompatibilityMessagesHasBeenSet = true;
  }

  return *this;
}

JsonValue DevicePoolCompatibilityResult::Jsonize() const
{
  JsonValue payload;

  if(m_deviceHasBeenSet)
  {
   payload.WithObject("device", m_device.Jsonize());

  }

  if(m_compatibleHasBeenSet)
  {
   payload.WithBool("compatible", m_compatible);

  }

  if(m_incompatibilityMessagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> incompatibilityMessagesJsonList(m_incompatibilityMessages.size());
   for(unsigned incompatibilityMessagesIndex = 0; incompatibilityMessagesIndex < incompatibilityMessagesJsonList.GetLength(); ++incompatibilityMessagesIndex)
   {
     incompatibilityMessagesJsonList[incompatibilityMessagesIndex].AsObject(m_incompatibilityMessages[incompatibilityMessagesIndex].Jsonize());
   }
   payload.WithArray("incompatibilityMessages", std::move(incompatibilityMessagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
