/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/SearchGroupProfilesRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SearchGroupProfilesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_groupTypeHasBeenSet) {
    payload.WithString("groupType", GroupSearchTypeMapper::GetNameForGroupSearchType(m_groupType));
  }

  if (m_searchTextHasBeenSet) {
    payload.WithString("searchText", m_searchText);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
