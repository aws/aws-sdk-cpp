/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/AssociatePhoneNumberWithUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociatePhoneNumberWithUserRequest::AssociatePhoneNumberWithUserRequest() : 
    m_accountIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_e164PhoneNumberHasBeenSet(false)
{
}

Aws::String AssociatePhoneNumberWithUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_e164PhoneNumberHasBeenSet)
  {
   payload.WithString("E164PhoneNumber", m_e164PhoneNumber);

  }

  return payload.View().WriteReadable();
}




