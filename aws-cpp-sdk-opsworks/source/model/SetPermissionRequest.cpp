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
#include <aws/opsworks/model/SetPermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetPermissionRequest::SetPermissionRequest() : 
    m_stackIdHasBeenSet(false),
    m_iamUserArnHasBeenSet(false),
    m_allowSsh(false),
    m_allowSshHasBeenSet(false),
    m_allowSudo(false),
    m_allowSudoHasBeenSet(false),
    m_levelHasBeenSet(false)
{
}

Aws::String SetPermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_iamUserArnHasBeenSet)
  {
   payload.WithString("IamUserArn", m_iamUserArn);

  }

  if(m_allowSshHasBeenSet)
  {
   payload.WithBool("AllowSsh", m_allowSsh);

  }

  if(m_allowSudoHasBeenSet)
  {
   payload.WithBool("AllowSudo", m_allowSudo);

  }

  if(m_levelHasBeenSet)
  {
   payload.WithString("Level", m_level);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SetPermissionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.SetPermission"));
  return headers;

}



