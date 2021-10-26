/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/EndpointAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

EndpointAttributes::EndpointAttributes() : 
    m_deviceTokenHasBeenSet(false),
    m_voipDeviceTokenHasBeenSet(false)
{
}

EndpointAttributes::EndpointAttributes(JsonView jsonValue) : 
    m_deviceTokenHasBeenSet(false),
    m_voipDeviceTokenHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointAttributes& EndpointAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceToken"))
  {
    m_deviceToken = jsonValue.GetString("DeviceToken");

    m_deviceTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoipDeviceToken"))
  {
    m_voipDeviceToken = jsonValue.GetString("VoipDeviceToken");

    m_voipDeviceTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_deviceTokenHasBeenSet)
  {
   payload.WithString("DeviceToken", m_deviceToken);

  }

  if(m_voipDeviceTokenHasBeenSet)
  {
   payload.WithString("VoipDeviceToken", m_voipDeviceToken);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
