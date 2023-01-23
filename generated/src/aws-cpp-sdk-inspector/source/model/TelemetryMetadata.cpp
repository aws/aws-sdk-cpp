/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/TelemetryMetadata.h>
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

TelemetryMetadata::TelemetryMetadata() : 
    m_messageTypeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_dataSize(0),
    m_dataSizeHasBeenSet(false)
{
}

TelemetryMetadata::TelemetryMetadata(JsonView jsonValue) : 
    m_messageTypeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_dataSize(0),
    m_dataSizeHasBeenSet(false)
{
  *this = jsonValue;
}

TelemetryMetadata& TelemetryMetadata::operator =(JsonView jsonValue)
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

JsonValue TelemetryMetadata::Jsonize() const
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
