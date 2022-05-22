/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/UserDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

UserDetails::UserDetails() : 
    m_userNameHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

UserDetails::UserDetails(JsonView jsonValue) : 
    m_userNameHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
  *this = jsonValue;
}

UserDetails& UserDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerId"))
  {
    m_serverId = jsonValue.GetString("ServerId");

    m_serverIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SessionId"))
  {
    m_sessionId = jsonValue.GetString("SessionId");

    m_sessionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue UserDetails::Jsonize() const
{
  JsonValue payload;

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("SessionId", m_sessionId);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
