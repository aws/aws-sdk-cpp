/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/ListSearchesFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

ListSearchesFilters::ListSearchesFilters(JsonView jsonValue) { *this = jsonValue; }

ListSearchesFilters& ListSearchesFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("statusFilter")) {
    Aws::Utils::Array<JsonView> statusFilterJsonList = jsonValue.GetArray("statusFilter");
    for (unsigned statusFilterIndex = 0; statusFilterIndex < statusFilterJsonList.GetLength(); ++statusFilterIndex) {
      m_statusFilter.push_back(SearchStatusMapper::GetSearchStatusForName(statusFilterJsonList[statusFilterIndex].AsString()));
    }
    m_statusFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAfter")) {
    m_startedAfter = jsonValue.GetDouble("startedAfter");
    m_startedAfterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedBefore")) {
    m_startedBefore = jsonValue.GetDouble("startedBefore");
    m_startedBeforeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groupIdFilter")) {
    Aws::Utils::Array<JsonView> groupIdFilterJsonList = jsonValue.GetArray("groupIdFilter");
    for (unsigned groupIdFilterIndex = 0; groupIdFilterIndex < groupIdFilterJsonList.GetLength(); ++groupIdFilterIndex) {
      m_groupIdFilter.push_back(groupIdFilterJsonList[groupIdFilterIndex].AsString());
    }
    m_groupIdFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("searchTypeFilter")) {
    Aws::Utils::Array<JsonView> searchTypeFilterJsonList = jsonValue.GetArray("searchTypeFilter");
    for (unsigned searchTypeFilterIndex = 0; searchTypeFilterIndex < searchTypeFilterJsonList.GetLength(); ++searchTypeFilterIndex) {
      m_searchTypeFilter.push_back(SearchTypeMapper::GetSearchTypeForName(searchTypeFilterJsonList[searchTypeFilterIndex].AsString()));
    }
    m_searchTypeFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue ListSearchesFilters::Jsonize() const {
  JsonValue payload;

  if (m_statusFilterHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusFilterJsonList(m_statusFilter.size());
    for (unsigned statusFilterIndex = 0; statusFilterIndex < statusFilterJsonList.GetLength(); ++statusFilterIndex) {
      statusFilterJsonList[statusFilterIndex].AsString(SearchStatusMapper::GetNameForSearchStatus(m_statusFilter[statusFilterIndex]));
    }
    payload.WithArray("statusFilter", std::move(statusFilterJsonList));
  }

  if (m_startedAfterHasBeenSet) {
    payload.WithDouble("startedAfter", m_startedAfter.SecondsWithMSPrecision());
  }

  if (m_startedBeforeHasBeenSet) {
    payload.WithDouble("startedBefore", m_startedBefore.SecondsWithMSPrecision());
  }

  if (m_groupIdFilterHasBeenSet) {
    Aws::Utils::Array<JsonValue> groupIdFilterJsonList(m_groupIdFilter.size());
    for (unsigned groupIdFilterIndex = 0; groupIdFilterIndex < groupIdFilterJsonList.GetLength(); ++groupIdFilterIndex) {
      groupIdFilterJsonList[groupIdFilterIndex].AsString(m_groupIdFilter[groupIdFilterIndex]);
    }
    payload.WithArray("groupIdFilter", std::move(groupIdFilterJsonList));
  }

  if (m_searchTypeFilterHasBeenSet) {
    Aws::Utils::Array<JsonValue> searchTypeFilterJsonList(m_searchTypeFilter.size());
    for (unsigned searchTypeFilterIndex = 0; searchTypeFilterIndex < searchTypeFilterJsonList.GetLength(); ++searchTypeFilterIndex) {
      searchTypeFilterJsonList[searchTypeFilterIndex].AsString(
          SearchTypeMapper::GetNameForSearchType(m_searchTypeFilter[searchTypeFilterIndex]));
    }
    payload.WithArray("searchTypeFilter", std::move(searchTypeFilterJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
