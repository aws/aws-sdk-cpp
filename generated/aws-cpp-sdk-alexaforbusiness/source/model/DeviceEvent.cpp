/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DeviceEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

DeviceEvent::DeviceEvent() : 
    m_type(DeviceEventType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

DeviceEvent::DeviceEvent(JsonView jsonValue) : 
    m_type(DeviceEventType::NOT_SET),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceEvent& DeviceEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = DeviceEventTypeMapper::GetDeviceEventTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceEvent::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", DeviceEventTypeMapper::GetNameForDeviceEventType(m_type));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
