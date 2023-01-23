/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> associatedS3ResourcesJsonList(m_associatedS3Resources.size());
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




