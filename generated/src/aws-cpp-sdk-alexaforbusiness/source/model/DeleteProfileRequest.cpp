/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/DeleteProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteProfileRequest::DeleteProfileRequest() : 
    m_profileArnHasBeenSet(false)
{
}

Aws::String DeleteProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileArnHasBeenSet)
  {
   payload.WithString("ProfileArn", m_profileArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.DeleteProfile"));
  return headers;

}




