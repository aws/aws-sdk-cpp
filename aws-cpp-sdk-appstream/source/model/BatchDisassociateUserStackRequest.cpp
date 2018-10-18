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

#include <aws/appstream/model/BatchDisassociateUserStackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDisassociateUserStackRequest::BatchDisassociateUserStackRequest() : 
    m_userStackAssociationsHasBeenSet(false)
{
}

Aws::String BatchDisassociateUserStackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userStackAssociationsHasBeenSet)
  {
   Array<JsonValue> userStackAssociationsJsonList(m_userStackAssociations.size());
   for(unsigned userStackAssociationsIndex = 0; userStackAssociationsIndex < userStackAssociationsJsonList.GetLength(); ++userStackAssociationsIndex)
   {
     userStackAssociationsJsonList[userStackAssociationsIndex].AsObject(m_userStackAssociations[userStackAssociationsIndex].Jsonize());
   }
   payload.WithArray("UserStackAssociations", std::move(userStackAssociationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDisassociateUserStackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.BatchDisassociateUserStack"));
  return headers;

}




