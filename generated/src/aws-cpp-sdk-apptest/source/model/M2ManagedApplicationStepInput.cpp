/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/M2ManagedApplicationStepInput.h>
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

M2ManagedApplicationStepInput::M2ManagedApplicationStepInput(JsonView jsonValue)
{
  *this = jsonValue;
}

M2ManagedApplicationStepInput& M2ManagedApplicationStepInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runtime"))
  {
    m_runtime = jsonValue.GetString("runtime");
    m_runtimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcEndpointServiceName"))
  {
    m_vpcEndpointServiceName = jsonValue.GetString("vpcEndpointServiceName");
    m_vpcEndpointServiceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("listenerPort"))
  {
    m_listenerPort = jsonValue.GetInteger("listenerPort");
    m_listenerPortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = M2ManagedActionTypeMapper::GetM2ManagedActionTypeForName(jsonValue.GetString("actionType"));
    m_actionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("properties"))
  {
    m_properties = jsonValue.GetObject("properties");
    m_propertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue M2ManagedApplicationStepInput::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_runtimeHasBeenSet)
  {
   payload.WithString("runtime", m_runtime);

  }

  if(m_vpcEndpointServiceNameHasBeenSet)
  {
   payload.WithString("vpcEndpointServiceName", m_vpcEndpointServiceName);

  }

  if(m_listenerPortHasBeenSet)
  {
   payload.WithInteger("listenerPort", m_listenerPort);

  }

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("actionType", M2ManagedActionTypeMapper::GetNameForM2ManagedActionType(m_actionType));
  }

  if(m_propertiesHasBeenSet)
  {
   payload.WithObject("properties", m_properties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
