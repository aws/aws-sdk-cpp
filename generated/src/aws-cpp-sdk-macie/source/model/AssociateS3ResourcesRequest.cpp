/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie/model/AssociateS3ResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateS3ResourcesRequest::AssociateS3ResourcesRequest() : 
    m_memberAccountIdHasBeenSet(false),
    m_s3ResourcesHasBeenSet(false)
{
}

Aws::String AssociateS3ResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_memberAccountIdHasBeenSet)
  {
   payload.WithString("memberAccountId", m_memberAccountId);

  }

  if(m_s3ResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3ResourcesJsonList(m_s3Resources.size());
   for(unsigned s3ResourcesIndex = 0; s3ResourcesIndex < s3ResourcesJsonList.GetLength(); ++s3ResourcesIndex)
   {
     s3ResourcesJsonList[s3ResourcesIndex].AsObject(m_s3Resources[s3ResourcesIndex].Jsonize());
   }
   payload.WithArray("s3Resources", std::move(s3ResourcesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateS3ResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MacieService.AssociateS3Resources"));
  return headers;

}




