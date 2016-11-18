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

IncompatibilityMessage::IncompatibilityMessage() : 
    m_messageHasBeenSet(false),
    m_type(DeviceAttribute::NOT_SET),
    m_typeHasBeenSet(false)
{
}

IncompatibilityMessage::IncompatibilityMessage(const JsonValue& jsonValue) : 
    m_messageHasBeenSet(false),
    m_type(DeviceAttribute::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

IncompatibilityMessage& IncompatibilityMessage::operator =(const JsonValue& jsonValue)
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