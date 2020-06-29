/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListedServer.h>
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

ListedServer::ListedServer() : 
    m_arnHasBeenSet(false),
    m_identityProviderType(IdentityProviderType::NOT_SET),
    m_identityProviderTypeHasBeenSet(false),
    m_endpointType(EndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_loggingRoleHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_userCount(0),
    m_userCountHasBeenSet(false)
{
}

ListedServer::ListedServer(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_identityProviderType(IdentityProviderType::NOT_SET),
    m_identityProviderTypeHasBeenSet(false),
    m_endpointType(EndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_loggingRoleHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_userCount(0),
    m_userCountHasBeenSet(false)
{
  *this = jsonValue;
}

ListedServer& ListedServer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityProviderType"))
  {
    m_identityProviderType = IdentityProviderTypeMapper::GetIdentityProviderTypeForName(jsonValue.GetString("IdentityProviderType"));

    m_identityProviderTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = EndpointTypeMapper::GetEndpointTypeForName(jsonValue.GetString("EndpointType"));

    m_endpointTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoggingRole"))
  {
    m_loggingRole = jsonValue.GetString("LoggingRole");

    m_loggingRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerId"))
  {
    m_serverId = jsonValue.GetString("ServerId");

    m_serverIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserCount"))
  {
    m_userCount = jsonValue.GetInteger("UserCount");

    m_userCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ListedServer::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_identityProviderTypeHasBeenSet)
  {
   payload.WithString("IdentityProviderType", IdentityProviderTypeMapper::GetNameForIdentityProviderType(m_identityProviderType));
  }

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("EndpointType", EndpointTypeMapper::GetNameForEndpointType(m_endpointType));
  }

  if(m_loggingRoleHasBeenSet)
  {
   payload.WithString("LoggingRole", m_loggingRole);

  }

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StateMapper::GetNameForState(m_state));
  }

  if(m_userCountHasBeenSet)
  {
   payload.WithInteger("UserCount", m_userCount);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
