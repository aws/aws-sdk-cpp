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
#include <aws/acm/model/ListCertificatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListCertificatesRequest::ListCertificatesRequest() : 
    m_certificateStatusesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String ListCertificatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateStatusesHasBeenSet)
  {
   Array<JsonValue> certificateStatusesJsonList(m_certificateStatuses.size());
   for(unsigned certificateStatusesIndex = 0; certificateStatusesIndex < certificateStatusesJsonList.GetLength(); ++certificateStatusesIndex)
   {
     certificateStatusesJsonList[certificateStatusesIndex].AsString(CertificateStatusMapper::GetNameForCertificateStatus(m_certificateStatuses[certificateStatusesIndex]));
   }
   payload.WithArray("CertificateStatuses", std::move(certificateStatusesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxItemsHasBeenSet)
  {
   payload.WithInteger("MaxItems", m_maxItems);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListCertificatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.ListCertificates"));
  return headers;

}



