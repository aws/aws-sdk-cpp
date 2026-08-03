/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/ListVirtualInterfaceRoutesRequest.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListVirtualInterfaceRoutesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_virtualInterfaceIdHasBeenSet) {
    payload.WithString("virtualInterfaceId", m_virtualInterfaceId);
  }

  if (m_filtersHasBeenSet) {
    payload.WithObject("filters", m_filters.Jsonize());
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListVirtualInterfaceRoutesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.ListVirtualInterfaceRoutes"));
  return headers;
}
