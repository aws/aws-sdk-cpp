﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/M2NonManagedApplication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

M2NonManagedApplication::M2NonManagedApplication() : 
    m_vpcEndpointServiceNameHasBeenSet(false),
    m_listenerPortHasBeenSet(false),
    m_runtime(M2NonManagedRuntime::NOT_SET),
    m_runtimeHasBeenSet(false),
    m_webAppNameHasBeenSet(false)
{
}

M2NonManagedApplication::M2NonManagedApplication(JsonView jsonValue)
  : M2NonManagedApplication()
{
  *this = jsonValue;
}

M2NonManagedApplication& M2NonManagedApplication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vpcEndpointServiceName"))
  {
    m_vpcEndpointServiceName = jsonValue.GetString("vpcEndpointServiceName");

    m_vpcEndpointServiceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listenerPort"))
  {
    m_listenerPort = jsonValue.GetString("listenerPort");

    m_listenerPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtime"))
  {
    m_runtime = M2NonManagedRuntimeMapper::GetM2NonManagedRuntimeForName(jsonValue.GetString("runtime"));

    m_runtimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("webAppName"))
  {
    m_webAppName = jsonValue.GetString("webAppName");

    m_webAppNameHasBeenSet = true;
  }

  return *this;
}

JsonValue M2NonManagedApplication::Jsonize() const
{
  JsonValue payload;

  if(m_vpcEndpointServiceNameHasBeenSet)
  {
   payload.WithString("vpcEndpointServiceName", m_vpcEndpointServiceName);

  }

  if(m_listenerPortHasBeenSet)
  {
   payload.WithString("listenerPort", m_listenerPort);

  }

  if(m_runtimeHasBeenSet)
  {
   payload.WithString("runtime", M2NonManagedRuntimeMapper::GetNameForM2NonManagedRuntime(m_runtime));
  }

  if(m_webAppNameHasBeenSet)
  {
   payload.WithString("webAppName", m_webAppName);

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
