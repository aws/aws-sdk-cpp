/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

DevicePoolCompatibilityResult::DevicePoolCompatibilityResult(const JsonValue& jsonValue) : 
    m_deviceHasBeenSet(false),
    m_compatible(false),
    m_compatibleHasBeenSet(false),
    m_incompatibilityMessagesHasBeenSet(false)
{
  *this = jsonValue;
}

DevicePoolCompatibilityResult& DevicePoolCompatibilityResult::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> incompatibilityMessagesJsonList = jsonValue.GetArray("incompatibilityMessages");
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
   Array<JsonValue> incompatibilityMessagesJsonList(m_incompatibilityMessages.size());
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