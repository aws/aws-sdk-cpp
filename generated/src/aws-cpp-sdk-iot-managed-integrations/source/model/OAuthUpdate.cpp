/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OAuthUpdate.h>
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

OAuthUpdate::OAuthUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

OAuthUpdate& OAuthUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oAuthCompleteRedirectUrl"))
  {
    m_oAuthCompleteRedirectUrl = jsonValue.GetString("oAuthCompleteRedirectUrl");
    m_oAuthCompleteRedirectUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("proactiveRefreshTokenRenewal"))
  {
    m_proactiveRefreshTokenRenewal = jsonValue.GetObject("proactiveRefreshTokenRenewal");
    m_proactiveRefreshTokenRenewalHasBeenSet = true;
  }
  return *this;
}

JsonValue OAuthUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_oAuthCompleteRedirectUrlHasBeenSet)
  {
   payload.WithString("oAuthCompleteRedirectUrl", m_oAuthCompleteRedirectUrl);

  }

  if(m_proactiveRefreshTokenRenewalHasBeenSet)
  {
   payload.WithObject("proactiveRefreshTokenRenewal", m_proactiveRefreshTokenRenewal.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
