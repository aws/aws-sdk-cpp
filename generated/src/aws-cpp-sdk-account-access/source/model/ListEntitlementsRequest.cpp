/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/model/ListEntitlementsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccountAccess::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListEntitlementsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_applicationArnHasBeenSet) {
    payload.WithString("applicationArn", m_applicationArn);
  }

  if (m_filterHasBeenSet) {
    payload.WithObject("filter", m_filter.Jsonize());
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}
