/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ListOnDemandScansRequest.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListOnDemandScansRequest::SerializePayload() const {
  JsonValue payload;

  if (m_resourceIdHasBeenSet) {
    payload.WithString("resourceId", m_resourceId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", OnDemandResourceTypeMapper::GetNameForOnDemandResourceType(m_resourceType));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
