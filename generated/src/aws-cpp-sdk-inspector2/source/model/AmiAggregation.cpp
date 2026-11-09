/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/AmiAggregation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

AmiAggregation::AmiAggregation(JsonView jsonValue) { *this = jsonValue; }

AmiAggregation& AmiAggregation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("amis")) {
    Aws::Utils::Array<JsonView> amisJsonList = jsonValue.GetArray("amis");
    for (unsigned amisIndex = 0; amisIndex < amisJsonList.GetLength(); ++amisIndex) {
      m_amis.push_back(amisJsonList[amisIndex].AsObject());
    }
    m_amisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sortOrder")) {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("sortOrder"));
    m_sortOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sortBy")) {
    m_sortBy = AmiSortByMapper::GetAmiSortByForName(jsonValue.GetString("sortBy"));
    m_sortByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanSources")) {
    Aws::Utils::Array<JsonView> scanSourcesJsonList = jsonValue.GetArray("scanSources");
    for (unsigned scanSourcesIndex = 0; scanSourcesIndex < scanSourcesJsonList.GetLength(); ++scanSourcesIndex) {
      m_scanSources.push_back(ScanSourceMapper::GetScanSourceForName(scanSourcesJsonList[scanSourcesIndex].AsString()));
    }
    m_scanSourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue AmiAggregation::Jsonize() const {
  JsonValue payload;

  if (m_amisHasBeenSet) {
    Aws::Utils::Array<JsonValue> amisJsonList(m_amis.size());
    for (unsigned amisIndex = 0; amisIndex < amisJsonList.GetLength(); ++amisIndex) {
      amisJsonList[amisIndex].AsObject(m_amis[amisIndex].Jsonize());
    }
    payload.WithArray("amis", std::move(amisJsonList));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if (m_sortByHasBeenSet) {
    payload.WithString("sortBy", AmiSortByMapper::GetNameForAmiSortBy(m_sortBy));
  }

  if (m_scanSourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> scanSourcesJsonList(m_scanSources.size());
    for (unsigned scanSourcesIndex = 0; scanSourcesIndex < scanSourcesJsonList.GetLength(); ++scanSourcesIndex) {
      scanSourcesJsonList[scanSourcesIndex].AsString(ScanSourceMapper::GetNameForScanSource(m_scanSources[scanSourcesIndex]));
    }
    payload.WithArray("scanSources", std::move(scanSourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
