/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/AcceleratorEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

AcceleratorEvent::AcceleratorEvent() : 
    m_messageHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

AcceleratorEvent::AcceleratorEvent(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

AcceleratorEvent& AcceleratorEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue AcceleratorEvent::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
