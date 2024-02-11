/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/UpdateProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateProfileRequest::UpdateProfileRequest() : 
    m_profileIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_businessNameHasBeenSet(false)
{
}

Aws::String UpdateProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("profileId", m_profileId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  if(m_phoneHasBeenSet)
  {
   payload.WithString("phone", m_phone);

  }

  if(m_businessNameHasBeenSet)
  {
   payload.WithString("businessName", m_businessName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "B2BI.UpdateProfile"));
  return headers;

}




