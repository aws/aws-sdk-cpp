/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/gamelift/model/GameSessionConnectionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

GameSessionConnectionInfo::GameSessionConnectionInfo() : 
    m_gameSessionArnHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_matchedPlayerSessionsHasBeenSet(false)
{
}

GameSessionConnectionInfo::GameSessionConnectionInfo(JsonView jsonValue) : 
    m_gameSessionArnHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_matchedPlayerSessionsHasBeenSet(false)
{
  *this = jsonValue;
}

GameSessionConnectionInfo& GameSessionConnectionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GameSessionArn"))
  {
    m_gameSessionArn = jsonValue.GetString("GameSessionArn");

    m_gameSessionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsName"))
  {
    m_dnsName = jsonValue.GetString("DnsName");

    m_dnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MatchedPlayerSessions"))
  {
    Array<JsonView> matchedPlayerSessionsJsonList = jsonValue.GetArray("MatchedPlayerSessions");
    for(unsigned matchedPlayerSessionsIndex = 0; matchedPlayerSessionsIndex < matchedPlayerSessionsJsonList.GetLength(); ++matchedPlayerSessionsIndex)
    {
      m_matchedPlayerSessions.push_back(matchedPlayerSessionsJsonList[matchedPlayerSessionsIndex].AsObject());
    }
    m_matchedPlayerSessionsHasBeenSet = true;
  }

  return *this;
}

JsonValue GameSessionConnectionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_gameSessionArnHasBeenSet)
  {
   payload.WithString("GameSessionArn", m_gameSessionArn);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_dnsNameHasBeenSet)
  {
   payload.WithString("DnsName", m_dnsName);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_matchedPlayerSessionsHasBeenSet)
  {
   Array<JsonValue> matchedPlayerSessionsJsonList(m_matchedPlayerSessions.size());
   for(unsigned matchedPlayerSessionsIndex = 0; matchedPlayerSessionsIndex < matchedPlayerSessionsJsonList.GetLength(); ++matchedPlayerSessionsIndex)
   {
     matchedPlayerSessionsJsonList[matchedPlayerSessionsIndex].AsObject(m_matchedPlayerSessions[matchedPlayerSessionsIndex].Jsonize());
   }
   payload.WithArray("MatchedPlayerSessions", std::move(matchedPlayerSessionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
