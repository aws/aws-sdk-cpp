/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/M2ManagedApplication.h>
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

M2ManagedApplication::M2ManagedApplication(JsonView jsonValue)
{
  *this = jsonValue;
}

M2ManagedApplication& M2ManagedApplication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runtime"))
  {
    m_runtime = M2ManagedRuntimeMapper::GetM2ManagedRuntimeForName(jsonValue.GetString("runtime"));
    m_runtimeHasBeenSet = true;
  }
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
  return *this;
}

JsonValue M2ManagedApplication::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_runtimeHasBeenSet)
  {
   payload.WithString("runtime", M2ManagedRuntimeMapper::GetNameForM2ManagedRuntime(m_runtime));
  }

  if(m_vpcEndpointServiceNameHasBeenSet)
  {
   payload.WithString("vpcEndpointServiceName", m_vpcEndpointServiceName);

  }

  if(m_listenerPortHasBeenSet)
  {
   payload.WithString("listenerPort", m_listenerPort);

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
