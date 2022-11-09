/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Esam.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Esam::Esam() : 
    m_acquisitionPointIdHasBeenSet(false),
    m_adAvailOffset(0),
    m_adAvailOffsetHasBeenSet(false),
    m_passwordParamHasBeenSet(false),
    m_poisEndpointHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_zoneIdentityHasBeenSet(false)
{
}

Esam::Esam(JsonView jsonValue) : 
    m_acquisitionPointIdHasBeenSet(false),
    m_adAvailOffset(0),
    m_adAvailOffsetHasBeenSet(false),
    m_passwordParamHasBeenSet(false),
    m_poisEndpointHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_zoneIdentityHasBeenSet(false)
{
  *this = jsonValue;
}

Esam& Esam::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("acquisitionPointId"))
  {
    m_acquisitionPointId = jsonValue.GetString("acquisitionPointId");

    m_acquisitionPointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("adAvailOffset"))
  {
    m_adAvailOffset = jsonValue.GetInteger("adAvailOffset");

    m_adAvailOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("passwordParam"))
  {
    m_passwordParam = jsonValue.GetString("passwordParam");

    m_passwordParamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("poisEndpoint"))
  {
    m_poisEndpoint = jsonValue.GetString("poisEndpoint");

    m_poisEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("zoneIdentity"))
  {
    m_zoneIdentity = jsonValue.GetString("zoneIdentity");

    m_zoneIdentityHasBeenSet = true;
  }

  return *this;
}

JsonValue Esam::Jsonize() const
{
  JsonValue payload;

  if(m_acquisitionPointIdHasBeenSet)
  {
   payload.WithString("acquisitionPointId", m_acquisitionPointId);

  }

  if(m_adAvailOffsetHasBeenSet)
  {
   payload.WithInteger("adAvailOffset", m_adAvailOffset);

  }

  if(m_passwordParamHasBeenSet)
  {
   payload.WithString("passwordParam", m_passwordParam);

  }

  if(m_poisEndpointHasBeenSet)
  {
   payload.WithString("poisEndpoint", m_poisEndpoint);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  if(m_zoneIdentityHasBeenSet)
  {
   payload.WithString("zoneIdentity", m_zoneIdentity);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
