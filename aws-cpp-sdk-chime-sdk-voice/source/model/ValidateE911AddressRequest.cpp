/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ValidateE911AddressRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ValidateE911AddressRequest::ValidateE911AddressRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_streetNumberHasBeenSet(false),
    m_streetInfoHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_postalCodeHasBeenSet(false)
{
}

Aws::String ValidateE911AddressRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("AwsAccountId", m_awsAccountId);

  }

  if(m_streetNumberHasBeenSet)
  {
   payload.WithString("StreetNumber", m_streetNumber);

  }

  if(m_streetInfoHasBeenSet)
  {
   payload.WithString("StreetInfo", m_streetInfo);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("PostalCode", m_postalCode);

  }

  return payload.View().WriteReadable();
}




