/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/UpdateUserProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserProfileRequest::UpdateUserProfileRequest() : 
    m_iamUserArnHasBeenSet(false),
    m_sshUsernameHasBeenSet(false),
    m_sshPublicKeyHasBeenSet(false),
    m_allowSelfManagement(false),
    m_allowSelfManagementHasBeenSet(false)
{
}

Aws::String UpdateUserProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_iamUserArnHasBeenSet)
  {
   payload.WithString("IamUserArn", m_iamUserArn);

  }

  if(m_sshUsernameHasBeenSet)
  {
   payload.WithString("SshUsername", m_sshUsername);

  }

  if(m_sshPublicKeyHasBeenSet)
  {
   payload.WithString("SshPublicKey", m_sshPublicKey);

  }

  if(m_allowSelfManagementHasBeenSet)
  {
   payload.WithBool("AllowSelfManagement", m_allowSelfManagement);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateUserProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.UpdateUserProfile"));
  return headers;

}




