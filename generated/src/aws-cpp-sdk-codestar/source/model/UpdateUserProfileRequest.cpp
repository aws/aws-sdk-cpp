/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar/model/UpdateUserProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStar::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserProfileRequest::UpdateUserProfileRequest() : 
    m_userArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_sshPublicKeyHasBeenSet(false)
{
}

Aws::String UpdateUserProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userArnHasBeenSet)
  {
   payload.WithString("userArn", m_userArn);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("emailAddress", m_emailAddress);

  }

  if(m_sshPublicKeyHasBeenSet)
  {
   payload.WithString("sshPublicKey", m_sshPublicKey);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateUserProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeStar_20170419.UpdateUserProfile"));
  return headers;

}




