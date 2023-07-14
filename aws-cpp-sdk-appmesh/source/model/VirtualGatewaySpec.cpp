﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/VirtualGatewaySpec.h>
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

VirtualGatewaySpec::VirtualGatewaySpec() : 
    m_backendDefaultsHasBeenSet(false),
    m_listenersHasBeenSet(false),
    m_loggingHasBeenSet(false)
{
}

VirtualGatewaySpec::VirtualGatewaySpec(JsonView jsonValue) : 
    m_backendDefaultsHasBeenSet(false),
    m_listenersHasBeenSet(false),
    m_loggingHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualGatewaySpec& VirtualGatewaySpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("backendDefaults"))
  {
    m_backendDefaults = jsonValue.GetObject("backendDefaults");

    m_backendDefaultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listeners"))
  {
    Array<JsonView> listenersJsonList = jsonValue.GetArray("listeners");
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

  return *this;
}

JsonValue VirtualGatewaySpec::Jsonize() const
{
  JsonValue payload;

  if(m_backendDefaultsHasBeenSet)
  {
   payload.WithObject("backendDefaults", m_backendDefaults.Jsonize());

  }

  if(m_listenersHasBeenSet)
  {
   Array<JsonValue> listenersJsonList(m_listeners.size());
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

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
