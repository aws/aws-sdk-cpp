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
    m_connectionStatusHasBeenSet(false)
{
}

Connection::Connection(JsonView jsonValue) : 
    m_connectionNameHasBeenSet(false),
    m_connectionArnHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_connectionStatus(ConnectionStatus::NOT_SET),
    m_connectionStatusHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
