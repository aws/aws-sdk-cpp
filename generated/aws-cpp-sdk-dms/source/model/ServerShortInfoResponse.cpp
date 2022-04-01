/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ServerShortInfoResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

ServerShortInfoResponse::ServerShortInfoResponse() : 
    m_serverIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_serverNameHasBeenSet(false)
{
}

ServerShortInfoResponse::ServerShortInfoResponse(JsonView jsonValue) : 
    m_serverIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_serverNameHasBeenSet(false)
{
  *this = jsonValue;
}

ServerShortInfoResponse& ServerShortInfoResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServerId"))
  {
    m_serverId = jsonValue.GetString("ServerId");

    m_serverIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerName"))
  {
    m_serverName = jsonValue.GetString("ServerName");

    m_serverNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerShortInfoResponse::Jsonize() const
{
  JsonValue payload;

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
