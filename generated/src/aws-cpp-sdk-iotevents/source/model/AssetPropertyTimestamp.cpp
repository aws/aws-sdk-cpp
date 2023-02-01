/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AssetPropertyTimestamp.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

AssetPropertyTimestamp::AssetPropertyTimestamp() : 
    m_timeInSecondsHasBeenSet(false),
    m_offsetInNanosHasBeenSet(false)
{
}

AssetPropertyTimestamp::AssetPropertyTimestamp(JsonView jsonValue) : 
    m_timeInSecondsHasBeenSet(false),
    m_offsetInNanosHasBeenSet(false)
{
  *this = jsonValue;
}

AssetPropertyTimestamp& AssetPropertyTimestamp::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeInSeconds"))
  {
    m_timeInSeconds = jsonValue.GetString("timeInSeconds");

    m_timeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offsetInNanos"))
  {
    m_offsetInNanos = jsonValue.GetString("offsetInNanos");

    m_offsetInNanosHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetPropertyTimestamp::Jsonize() const
{
  JsonValue payload;

  if(m_timeInSecondsHasBeenSet)
  {
   payload.WithString("timeInSeconds", m_timeInSeconds);

  }

  if(m_offsetInNanosHasBeenSet)
  {
   payload.WithString("offsetInNanos", m_offsetInNanos);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
