/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeleteGitHubAccountTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteGitHubAccountTokenRequest::DeleteGitHubAccountTokenRequest() : 
    m_tokenNameHasBeenSet(false)
{
}

Aws::String DeleteGitHubAccountTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tokenNameHasBeenSet)
  {
   payload.WithString("tokenName", m_tokenName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteGitHubAccountTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.DeleteGitHubAccountToken"));
  return headers;

}




