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

#include <aws/ssm/model/StartAssociationsOnceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartAssociationsOnceRequest::StartAssociationsOnceRequest() : 
    m_associationIdsHasBeenSet(false)
{
}

Aws::String StartAssociationsOnceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_associationIdsHasBeenSet)
  {
   Array<JsonValue> associationIdsJsonList(m_associationIds.size());
   for(unsigned associationIdsIndex = 0; associationIdsIndex < associationIdsJsonList.GetLength(); ++associationIdsIndex)
   {
     associationIdsJsonList[associationIdsIndex].AsString(m_associationIds[associationIdsIndex]);
   }
   payload.WithArray("AssociationIds", std::move(associationIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartAssociationsOnceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.StartAssociationsOnce"));
  return headers;

}




