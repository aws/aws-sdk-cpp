/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/codebuild/model/ImportSourceCredentialsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportSourceCredentialsRequest::ImportSourceCredentialsRequest() : 
    m_usernameHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_serverType(ServerType::NOT_SET),
    m_serverTypeHasBeenSet(false),
    m_authType(AuthType::NOT_SET),
    m_authTypeHasBeenSet(false),
    m_shouldOverwrite(false),
    m_shouldOverwriteHasBeenSet(false)
{
}

Aws::String ImportSourceCredentialsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  if(m_serverTypeHasBeenSet)
  {
   payload.WithString("serverType", ServerTypeMapper::GetNameForServerType(m_serverType));
  }

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  if(m_shouldOverwriteHasBeenSet)
  {
   payload.WithBool("shouldOverwrite", m_shouldOverwrite);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportSourceCredentialsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.ImportSourceCredentials"));
  return headers;

}




