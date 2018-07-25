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

#include <aws/macie/model/DisassociateS3ResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateS3ResourcesRequest::DisassociateS3ResourcesRequest() : 
    m_memberAccountIdHasBeenSet(false),
    m_associatedS3ResourcesHasBeenSet(false)
{
}

Aws::String DisassociateS3ResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_memberAccountIdHasBeenSet)
  {
   payload.WithString("memberAccountId", m_memberAccountId);

  }

  if(m_associatedS3ResourcesHasBeenSet)
  {
   Array<JsonValue> associatedS3ResourcesJsonList(m_associatedS3Resources.size());
   for(unsigned associatedS3ResourcesIndex = 0; associatedS3ResourcesIndex < associatedS3ResourcesJsonList.GetLength(); ++associatedS3ResourcesIndex)
   {
     associatedS3ResourcesJsonList[associatedS3ResourcesIndex].AsObject(m_associatedS3Resources[associatedS3ResourcesIndex].Jsonize());
   }
   payload.WithArray("associatedS3Resources", std::move(associatedS3ResourcesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateS3ResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MacieService.DisassociateS3Resources"));
  return headers;

}




