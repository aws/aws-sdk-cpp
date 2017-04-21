/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/codestar/model/CreateUserProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStar::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUserProfileRequest::CreateUserProfileRequest() : 
    m_userArnHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_sshPublicKeyHasBeenSet(false)
{
}

Aws::String CreateUserProfileRequest::SerializePayload() const
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateUserProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeStar_20170419.CreateUserProfile"));
  return headers;

}




