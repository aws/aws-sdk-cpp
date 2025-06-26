/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ProactiveRefreshTokenRenewal.h>
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

ProactiveRefreshTokenRenewal::ProactiveRefreshTokenRenewal(JsonView jsonValue)
{
  *this = jsonValue;
}

ProactiveRefreshTokenRenewal& ProactiveRefreshTokenRenewal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DaysBeforeRenewal"))
  {
    m_daysBeforeRenewal = jsonValue.GetInteger("DaysBeforeRenewal");
    m_daysBeforeRenewalHasBeenSet = true;
  }
  return *this;
}

JsonValue ProactiveRefreshTokenRenewal::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_daysBeforeRenewalHasBeenSet)
  {
   payload.WithInteger("DaysBeforeRenewal", m_daysBeforeRenewal);

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
