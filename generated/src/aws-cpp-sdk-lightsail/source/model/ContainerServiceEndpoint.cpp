/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServiceEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

ContainerServiceEndpoint::ContainerServiceEndpoint() : 
    m_containerNameHasBeenSet(false),
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_healthCheckHasBeenSet(false)
{
}

ContainerServiceEndpoint::ContainerServiceEndpoint(JsonView jsonValue) : 
    m_containerNameHasBeenSet(false),
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_healthCheckHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerServiceEndpoint& ContainerServiceEndpoint::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("healthCheck"))
  {
    m_healthCheck = jsonValue.GetObject("healthCheck");

    m_healthCheckHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerServiceEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("containerName", m_containerName);

  }

  if(m_containerPortHasBeenSet)
  {
   payload.WithInteger("containerPort", m_containerPort);

  }

  if(m_healthCheckHasBeenSet)
  {
   payload.WithObject("healthCheck", m_healthCheck.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
