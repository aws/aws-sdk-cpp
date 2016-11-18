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
#include <aws/codecommit/model/UpdateRepositoryNameRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRepositoryNameRequest::UpdateRepositoryNameRequest() : 
    m_oldNameHasBeenSet(false),
    m_newNameHasBeenSet(false)
{
}

Aws::String UpdateRepositoryNameRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_oldNameHasBeenSet)
  {
   payload.WithString("oldName", m_oldName);

  }

  if(m_newNameHasBeenSet)
  {
   payload.WithString("newName", m_newName);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRepositoryNameRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdateRepositoryName"));
  return headers;

}



