/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/SearchCertificatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchCertificatesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_filterStatementHasBeenSet) {
    payload.WithObject("FilterStatement", m_filterStatement.Jsonize());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("SortBy", SearchCertificatesSortByMapper::GetNameForSearchCertificatesSortBy(m_sortBy));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("SortOrder", SearchCertificatesSortOrderMapper::GetNameForSearchCertificatesSortOrder(m_sortOrder));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchCertificatesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.SearchCertificates"));
  return headers;
}
