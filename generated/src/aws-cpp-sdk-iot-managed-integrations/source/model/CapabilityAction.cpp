/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/CapabilityAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

CapabilityAction::CapabilityAction(JsonView jsonValue)
{
  *this = jsonValue;
}

CapabilityAction& CapabilityAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ref"))
  {
    m_ref = jsonValue.GetString("ref");
    m_refHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionTraceId"))
  {
    m_actionTraceId = jsonValue.GetString("actionTraceId");
    m_actionTraceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameters"))
  {
    m_parameters = jsonValue.GetObject("parameters");
    m_parametersHasBeenSet = true;
  }
  return *this;
}

JsonValue CapabilityAction::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_refHasBeenSet)
  {
   payload.WithString("ref", m_ref);

  }

  if(m_actionTraceIdHasBeenSet)
  {
   payload.WithString("actionTraceId", m_actionTraceId);

  }

  if(m_parametersHasBeenSet)
  {
    if(!m_parameters.View().IsNull())
    {
       payload.WithObject("parameters", JsonValue(m_parameters.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
