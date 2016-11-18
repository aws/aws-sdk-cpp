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
#include <aws/inspector/model/Telemetry.h>
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

Telemetry::Telemetry() : 
    m_statusHasBeenSet(false),
    m_messageTypeTelemetriesHasBeenSet(false)
{
}

Telemetry::Telemetry(const JsonValue& jsonValue) : 
    m_statusHasBeenSet(false),
    m_messageTypeTelemetriesHasBeenSet(false)
{
  *this = jsonValue;
}

Telemetry& Telemetry::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("messageTypeTelemetries"))
  {
    Array<JsonValue> messageTypeTelemetriesJsonList = jsonValue.GetArray("messageTypeTelemetries");
    for(unsigned messageTypeTelemetriesIndex = 0; messageTypeTelemetriesIndex < messageTypeTelemetriesJsonList.GetLength(); ++messageTypeTelemetriesIndex)
    {
      m_messageTypeTelemetries.push_back(messageTypeTelemetriesJsonList[messageTypeTelemetriesIndex].AsObject());
    }
    m_messageTypeTelemetriesHasBeenSet = true;
  }

  return *this;
}

JsonValue Telemetry::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_messageTypeTelemetriesHasBeenSet)
  {
   Array<JsonValue> messageTypeTelemetriesJsonList(m_messageTypeTelemetries.size());
   for(unsigned messageTypeTelemetriesIndex = 0; messageTypeTelemetriesIndex < messageTypeTelemetriesJsonList.GetLength(); ++messageTypeTelemetriesIndex)
   {
     messageTypeTelemetriesJsonList[messageTypeTelemetriesIndex].AsObject(m_messageTypeTelemetries[messageTypeTelemetriesIndex].Jsonize());
   }
   payload.WithArray("messageTypeTelemetries", std::move(messageTypeTelemetriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws