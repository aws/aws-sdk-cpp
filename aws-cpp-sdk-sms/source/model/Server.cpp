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

#include <aws/sms/model/Server.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

Server::Server() : 
    m_serverIdHasBeenSet(false),
    m_serverType(ServerType::NOT_SET),
    m_serverTypeHasBeenSet(false),
    m_vmServerHasBeenSet(false),
    m_replicationJobIdHasBeenSet(false),
    m_replicationJobTerminated(false),
    m_replicationJobTerminatedHasBeenSet(false)
{
}

Server::Server(const JsonValue& jsonValue) : 
    m_serverIdHasBeenSet(false),
    m_serverType(ServerType::NOT_SET),
    m_serverTypeHasBeenSet(false),
    m_vmServerHasBeenSet(false),
    m_replicationJobIdHasBeenSet(false),
    m_replicationJobTerminated(false),
    m_replicationJobTerminatedHasBeenSet(false)
{
  *this = jsonValue;
}

Server& Server::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("serverId"))
  {
    m_serverId = jsonValue.GetString("serverId");

    m_serverIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverType"))
  {
    m_serverType = ServerTypeMapper::GetServerTypeForName(jsonValue.GetString("serverType"));

    m_serverTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vmServer"))
  {
    m_vmServer = jsonValue.GetObject("vmServer");

    m_vmServerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationJobId"))
  {
    m_replicationJobId = jsonValue.GetString("replicationJobId");

    m_replicationJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationJobTerminated"))
  {
    m_replicationJobTerminated = jsonValue.GetBool("replicationJobTerminated");

    m_replicationJobTerminatedHasBeenSet = true;
  }

  return *this;
}

JsonValue Server::Jsonize() const
{
  JsonValue payload;

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("serverId", m_serverId);

  }

  if(m_serverTypeHasBeenSet)
  {
   payload.WithString("serverType", ServerTypeMapper::GetNameForServerType(m_serverType));
  }

  if(m_vmServerHasBeenSet)
  {
   payload.WithObject("vmServer", m_vmServer.Jsonize());

  }

  if(m_replicationJobIdHasBeenSet)
  {
   payload.WithString("replicationJobId", m_replicationJobId);

  }

  if(m_replicationJobTerminatedHasBeenSet)
  {
   payload.WithBool("replicationJobTerminated", m_replicationJobTerminated);

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
