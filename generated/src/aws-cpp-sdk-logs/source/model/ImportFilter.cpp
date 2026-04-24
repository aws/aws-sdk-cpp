/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/ImportFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

ImportFilter::ImportFilter(JsonView jsonValue) { *this = jsonValue; }

ImportFilter& ImportFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startEventTime")) {
    m_startEventTime = jsonValue.GetInt64("startEventTime");
    m_startEventTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endEventTime")) {
    m_endEventTime = jsonValue.GetInt64("endEventTime");
    m_endEventTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportFilter::Jsonize() const {
  JsonValue payload;

  if (m_startEventTimeHasBeenSet) {
    payload.WithInt64("startEventTime", m_startEventTime);
  }

  if (m_endEventTimeHasBeenSet) {
    payload.WithInt64("endEventTime", m_endEventTime);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
