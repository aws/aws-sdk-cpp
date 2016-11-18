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
#include <aws/inspector/model/MessageTypeTelemetry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

MessageTypeTelemetry::MessageTypeTelemetry() : 
    m_messageTypeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_dataSize(0),
    m_dataSizeHasBeenSet(false)
{
}

MessageTypeTelemetry::MessageTypeTelemetry(const JsonValue& jsonValue) : 
    m_messageTypeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_dataSize(0),
    m_dataSizeHasBeenSet(false)
{
  *this = jsonValue;
}

MessageTypeTelemetry& MessageTypeTelemetry::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("messageType"))
  {
    m_messageType = jsonValue.GetString("messageType");

    m_messageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInt64("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSize"))
  {
    m_dataSize = jsonValue.GetInt64("dataSize");

    m_dataSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue MessageTypeTelemetry::Jsonize() const
{
  JsonValue payload;

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("messageType", m_messageType);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInt64("count", m_count);

  }

  if(m_dataSizeHasBeenSet)
  {
   payload.WithInt64("dataSize", m_dataSize);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws