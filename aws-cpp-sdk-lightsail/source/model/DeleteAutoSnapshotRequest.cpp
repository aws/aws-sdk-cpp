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

#include <aws/lightsail/model/DeleteAutoSnapshotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAutoSnapshotRequest::DeleteAutoSnapshotRequest() : 
    m_resourceNameHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

Aws::String DeleteAutoSnapshotRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  if(m_dateHasBeenSet)
  {
   payload.WithString("date", m_date);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAutoSnapshotRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.DeleteAutoSnapshot"));
  return headers;

}




