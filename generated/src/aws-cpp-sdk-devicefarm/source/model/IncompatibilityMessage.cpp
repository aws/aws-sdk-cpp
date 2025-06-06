﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/IncompatibilityMessage.h>
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

IncompatibilityMessage::IncompatibilityMessage(JsonView jsonValue)
{
  *this = jsonValue;
}

IncompatibilityMessage& IncompatibilityMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = DeviceAttributeMapper::GetDeviceAttributeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue IncompatibilityMessage::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DeviceAttributeMapper::GetNameForDeviceAttribute(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
