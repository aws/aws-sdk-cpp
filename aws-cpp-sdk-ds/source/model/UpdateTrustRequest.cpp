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

#include <aws/ds/model/UpdateTrustRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTrustRequest::UpdateTrustRequest() : 
    m_trustIdHasBeenSet(false),
    m_selectiveAuth(SelectiveAuth::NOT_SET),
    m_selectiveAuthHasBeenSet(false)
{
}

Aws::String UpdateTrustRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trustIdHasBeenSet)
  {
   payload.WithString("TrustId", m_trustId);

  }

  if(m_selectiveAuthHasBeenSet)
  {
   payload.WithString("SelectiveAuth", SelectiveAuthMapper::GetNameForSelectiveAuth(m_selectiveAuth));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTrustRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.UpdateTrust"));
  return headers;

}




