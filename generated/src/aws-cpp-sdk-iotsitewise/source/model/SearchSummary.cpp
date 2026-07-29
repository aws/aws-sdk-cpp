/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/SearchSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

SearchSummary::SearchSummary(JsonView jsonValue) { *this = jsonValue; }

SearchSummary& SearchSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("searchId")) {
    m_searchId = jsonValue.GetString("searchId");
    m_searchIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workspaceName")) {
    m_workspaceName = jsonValue.GetString("workspaceName");
    m_workspaceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SearchStatusMapper::GetSearchStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queryStatement")) {
    m_queryStatement = jsonValue.GetString("queryStatement");
    m_queryStatementHasBeenSet = true;
  }
  if (jsonValue.ValueExists("searchType")) {
    m_searchType = SearchTypeMapper::GetSearchTypeForName(jsonValue.GetString("searchType"));
    m_searchTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groupId")) {
    m_groupId = jsonValue.GetString("groupId");
    m_groupIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchSummary::Jsonize() const {
  JsonValue payload;

  if (m_searchIdHasBeenSet) {
    payload.WithString("searchId", m_searchId);
  }

  if (m_workspaceNameHasBeenSet) {
    payload.WithString("workspaceName", m_workspaceName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SearchStatusMapper::GetNameForSearchStatus(m_status));
  }

  if (m_queryStatementHasBeenSet) {
    payload.WithString("queryStatement", m_queryStatement);
  }

  if (m_searchTypeHasBeenSet) {
    payload.WithString("searchType", SearchTypeMapper::GetNameForSearchType(m_searchType));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_groupIdHasBeenSet) {
    payload.WithString("groupId", m_groupId);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
