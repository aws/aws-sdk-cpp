/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/UpdatePhoneNumberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePhoneNumberRequest::UpdatePhoneNumberRequest() : 
    m_phoneNumberIdHasBeenSet(false),
    m_productType(PhoneNumberProductType::NOT_SET),
    m_productTypeHasBeenSet(false),
    m_callingNameHasBeenSet(false)
{
}

Aws::String UpdatePhoneNumberRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_productTypeHasBeenSet)
  {
   payload.WithString("ProductType", PhoneNumberProductTypeMapper::GetNameForPhoneNumberProductType(m_productType));
  }

  if(m_callingNameHasBeenSet)
  {
   payload.WithString("CallingName", m_callingName);

  }

  return payload.View().WriteReadable();
}




