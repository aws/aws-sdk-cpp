/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ThingConnectivity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ThingConnectivity::ThingConnectivity() : 
    m_connected(false),
    m_connectedHasBeenSet(false),
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_disconnectReasonHasBeenSet(false)
{
}

ThingConnectivity::ThingConnectivity(JsonView jsonValue) : 
    m_connected(false),
    m_connectedHasBeenSet(false),
    m_timestamp(0),
    m_timestampHasBeenSet(false),
    m_disconnectReasonHasBeenSet(false)
{
  *this = jsonValue;
}

ThingConnectivity& ThingConnectivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connected"))
  {
    m_connected = jsonValue.GetBool("connected");

    m_connectedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("disconnectReason"))
  {
    m_disconnectReason = jsonValue.GetString("disconnectReason");

    m_disconnectReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ThingConnectivity::Jsonize() const
{
  JsonValue payload;

  if(m_connectedHasBeenSet)
  {
   payload.WithBool("connected", m_connected);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithInt64("timestamp", m_timestamp);

  }

  if(m_disconnectReasonHasBeenSet)
  {
   payload.WithString("disconnectReason", m_disconnectReason);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
