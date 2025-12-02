/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/AggregateLogGroupSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

AggregateLogGroupSummary::AggregateLogGroupSummary(JsonView jsonValue) { *this = jsonValue; }

AggregateLogGroupSummary& AggregateLogGroupSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logGroupCount")) {
    m_logGroupCount = jsonValue.GetInteger("logGroupCount");
    m_logGroupCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("groupingIdentifiers")) {
    Aws::Utils::Array<JsonView> groupingIdentifiersJsonList = jsonValue.GetArray("groupingIdentifiers");
    for (unsigned groupingIdentifiersIndex = 0; groupingIdentifiersIndex < groupingIdentifiersJsonList.GetLength();
         ++groupingIdentifiersIndex) {
      m_groupingIdentifiers.push_back(groupingIdentifiersJsonList[groupingIdentifiersIndex].AsObject());
    }
    m_groupingIdentifiersHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregateLogGroupSummary::Jsonize() const {
  JsonValue payload;

  if (m_logGroupCountHasBeenSet) {
    payload.WithInteger("logGroupCount", m_logGroupCount);
  }

  if (m_groupingIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> groupingIdentifiersJsonList(m_groupingIdentifiers.size());
    for (unsigned groupingIdentifiersIndex = 0; groupingIdentifiersIndex < groupingIdentifiersJsonList.GetLength();
         ++groupingIdentifiersIndex) {
      groupingIdentifiersJsonList[groupingIdentifiersIndex].AsObject(m_groupingIdentifiers[groupingIdentifiersIndex].Jsonize());
    }
    payload.WithArray("groupingIdentifiers", std::move(groupingIdentifiersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
