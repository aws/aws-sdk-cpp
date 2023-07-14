/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/Websocket.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

Websocket::Websocket() : 
    m_urlHasBeenSet(false),
    m_connectionExpiryHasBeenSet(false)
{
}

Websocket::Websocket(JsonView jsonValue) : 
    m_urlHasBeenSet(false),
    m_connectionExpiryHasBeenSet(false)
{
  *this = jsonValue;
}

Websocket& Websocket::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionExpiry"))
  {
    m_connectionExpiry = jsonValue.GetString("ConnectionExpiry");

    m_connectionExpiryHasBeenSet = true;
  }

  return *this;
}

JsonValue Websocket::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_connectionExpiryHasBeenSet)
  {
   payload.WithString("ConnectionExpiry", m_connectionExpiry);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
