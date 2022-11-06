/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ListCertificatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListCertificatesRequest::ListCertificatesRequest() : 
    m_certificateStatusesHasBeenSet(false),
    m_includesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_sortBy(SortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

Aws::String ListCertificatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateStatusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificateStatusesJsonList(m_certificateStatuses.size());
   for(unsigned certificateStatusesIndex = 0; certificateStatusesIndex < certificateStatusesJsonList.GetLength(); ++certificateStatusesIndex)
   {
     certificateStatusesJsonList[certificateStatusesIndex].AsString(CertificateStatusMapper::GetNameForCertificateStatus(m_certificateStatuses[certificateStatusesIndex]));
   }
   payload.WithArray("CertificateStatuses", std::move(certificateStatusesJsonList));

  }

  if(m_includesHasBeenSet)
  {
   payload.WithObject("Includes", m_includes.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxItemsHasBeenSet)
  {
   payload.WithInteger("MaxItems", m_maxItems);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", SortByMapper::GetNameForSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListCertificatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.ListCertificates"));
  return headers;

}




