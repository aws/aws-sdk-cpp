/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdatePhoneNumberMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePhoneNumberMetadataRequest::UpdatePhoneNumberMetadataRequest() : 
    m_phoneNumberIdHasBeenSet(false),
    m_phoneNumberDescriptionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdatePhoneNumberMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_phoneNumberDescriptionHasBeenSet)
  {
   payload.WithString("PhoneNumberDescription", m_phoneNumberDescription);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




