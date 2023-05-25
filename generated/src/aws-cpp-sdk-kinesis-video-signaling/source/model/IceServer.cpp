/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-signaling/model/IceServer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideoSignalingChannels
{
namespace Model
{

IceServer::IceServer() : 
    m_urisHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_ttl(0),
    m_ttlHasBeenSet(false)
{
}

IceServer::IceServer(JsonView jsonValue) : 
    m_urisHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_ttl(0),
    m_ttlHasBeenSet(false)
{
  *this = jsonValue;
}

IceServer& IceServer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uris"))
  {
    Aws::Utils::Array<JsonView> urisJsonList = jsonValue.GetArray("Uris");
    for(unsigned urisIndex = 0; urisIndex < urisJsonList.GetLength(); ++urisIndex)
    {
      m_uris.push_back(urisJsonList[urisIndex].AsString());
    }
    m_urisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Password"))
  {
    m_password = jsonValue.GetString("Password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ttl"))
  {
    m_ttl = jsonValue.GetInteger("Ttl");

    m_ttlHasBeenSet = true;
  }

  return *this;
}

JsonValue IceServer::Jsonize() const
{
  JsonValue payload;

  if(m_urisHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> urisJsonList(m_uris.size());
   for(unsigned urisIndex = 0; urisIndex < urisJsonList.GetLength(); ++urisIndex)
   {
     urisJsonList[urisIndex].AsString(m_uris[urisIndex]);
   }
   payload.WithArray("Uris", std::move(urisJsonList));

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_ttlHasBeenSet)
  {
   payload.WithInteger("Ttl", m_ttl);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideoSignalingChannels
} // namespace Aws
