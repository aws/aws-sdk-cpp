/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceRegistry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ServiceRegistry::ServiceRegistry() : 
    m_registryArnHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_containerPort(0),
    m_containerPortHasBeenSet(false)
{
}

ServiceRegistry::ServiceRegistry(JsonView jsonValue) : 
    m_registryArnHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_containerPort(0),
    m_containerPortHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceRegistry& ServiceRegistry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("registryArn"))
  {
    m_registryArn = jsonValue.GetString("registryArn");

    m_registryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerName"))
  {
    m_containerName = jsonValue.GetString("containerName");

    m_containerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerPort"))
  {
    m_containerPort = jsonValue.GetInteger("containerPort");

    m_containerPortHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceRegistry::Jsonize() const
{
  JsonValue payload;

  if(m_registryArnHasBeenSet)
  {
   payload.WithString("registryArn", m_registryArn);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("containerName", m_containerName);

  }

  if(m_containerPortHasBeenSet)
  {
   payload.WithInteger("containerPort", m_containerPort);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
