/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/AuthConfigUpdate.h>
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

AuthConfigUpdate::AuthConfigUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthConfigUpdate& AuthConfigUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oAuthUpdate"))
  {
    m_oAuthUpdate = jsonValue.GetObject("oAuthUpdate");
    m_oAuthUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthConfigUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_oAuthUpdateHasBeenSet)
  {
   payload.WithObject("oAuthUpdate", m_oAuthUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
