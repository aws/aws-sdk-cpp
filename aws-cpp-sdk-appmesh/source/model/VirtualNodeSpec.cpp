/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualNodeSpec.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

VirtualNodeSpec::VirtualNodeSpec() : 
    m_backendDefaultsHasBeenSet(false),
    m_backendsHasBeenSet(false),
    m_listenersHasBeenSet(false),
    m_loggingHasBeenSet(false),
    m_serviceDiscoveryHasBeenSet(false)
{
}

VirtualNodeSpec::VirtualNodeSpec(JsonView jsonValue) : 
    m_backendDefaultsHasBeenSet(false),
    m_backendsHasBeenSet(false),
    m_listenersHasBeenSet(false),
    m_loggingHasBeenSet(false),
    m_serviceDiscoveryHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualNodeSpec& VirtualNodeSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("backendDefaults"))
  {
    m_backendDefaults = jsonValue.GetObject("backendDefaults");

    m_backendDefaultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("backends"))
  {
    Aws::Utils::Array<JsonView> backendsJsonList = jsonValue.GetArray("backends");
    for(unsigned backendsIndex = 0; backendsIndex < backendsJsonList.GetLength(); ++backendsIndex)
    {
      m_backends.push_back(backendsJsonList[backendsIndex].AsObject());
    }
    m_backendsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listeners"))
  {
    Aws::Utils::Array<JsonView> listenersJsonList = jsonValue.GetArray("listeners");
    for(unsigned listenersIndex = 0; listenersIndex < listenersJsonList.GetLength(); ++listenersIndex)
    {
      m_listeners.push_back(listenersJsonList[listenersIndex].AsObject());
    }
    m_listenersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logging"))
  {
    m_logging = jsonValue.GetObject("logging");

    m_loggingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceDiscovery"))
  {
    m_serviceDiscovery = jsonValue.GetObject("serviceDiscovery");

    m_serviceDiscoveryHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualNodeSpec::Jsonize() const
{
  JsonValue payload;

  if(m_backendDefaultsHasBeenSet)
  {
   payload.WithObject("backendDefaults", m_backendDefaults.Jsonize());

  }

  if(m_backendsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> backendsJsonList(m_backends.size());
   for(unsigned backendsIndex = 0; backendsIndex < backendsJsonList.GetLength(); ++backendsIndex)
   {
     backendsJsonList[backendsIndex].AsObject(m_backends[backendsIndex].Jsonize());
   }
   payload.WithArray("backends", std::move(backendsJsonList));

  }

  if(m_listenersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> listenersJsonList(m_listeners.size());
   for(unsigned listenersIndex = 0; listenersIndex < listenersJsonList.GetLength(); ++listenersIndex)
   {
     listenersJsonList[listenersIndex].AsObject(m_listeners[listenersIndex].Jsonize());
   }
   payload.WithArray("listeners", std::move(listenersJsonList));

  }

  if(m_loggingHasBeenSet)
  {
   payload.WithObject("logging", m_logging.Jsonize());

  }

  if(m_serviceDiscoveryHasBeenSet)
  {
   payload.WithObject("serviceDiscovery", m_serviceDiscovery.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
