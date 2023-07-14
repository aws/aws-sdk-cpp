/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/Connection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

Connection::Connection() : 
    m_connectionNameHasBeenSet(false),
    m_connectionArnHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_connectionStatus(ConnectionStatus::NOT_SET),
    m_connectionStatusHasBeenSet(false),
    m_hostArnHasBeenSet(false)
{
}

Connection::Connection(JsonView jsonValue) : 
    m_connectionNameHasBeenSet(false),
    m_connectionArnHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_connectionStatus(ConnectionStatus::NOT_SET),
    m_connectionStatusHasBeenSet(false),
    m_hostArnHasBeenSet(false)
{
  *this = jsonValue;
}

Connection& Connection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");

    m_connectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionArn"))
  {
    m_connectionArn = jsonValue.GetString("ConnectionArn");

    m_connectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderType"))
  {
    m_providerType = ProviderTypeMapper::GetProviderTypeForName(jsonValue.GetString("ProviderType"));

    m_providerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionStatus"))
  {
    m_connectionStatus = ConnectionStatusMapper::GetConnectionStatusForName(jsonValue.GetString("ConnectionStatus"));

    m_connectionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostArn"))
  {
    m_hostArn = jsonValue.GetString("HostArn");

    m_hostArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Connection::Jsonize() const
{
  JsonValue payload;

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_connectionArnHasBeenSet)
  {
   payload.WithString("ConnectionArn", m_connectionArn);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("ProviderType", ProviderTypeMapper::GetNameForProviderType(m_providerType));
  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("OwnerAccountId", m_ownerAccountId);

  }

  if(m_connectionStatusHasBeenSet)
  {
   payload.WithString("ConnectionStatus", ConnectionStatusMapper::GetNameForConnectionStatus(m_connectionStatus));
  }

  if(m_hostArnHasBeenSet)
  {
   payload.WithString("HostArn", m_hostArn);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
