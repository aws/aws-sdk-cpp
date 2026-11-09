/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/LogGroupImpact.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

LogGroupImpact::LogGroupImpact(JsonView jsonValue) { *this = jsonValue; }

LogGroupImpact& LogGroupImpact::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logGroupName")) {
    m_logGroupName = jsonValue.GetString("logGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currentRetention")) {
    m_currentRetention = jsonValue.GetString("currentRetention");
    m_currentRetentionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("proposedRetention")) {
    m_proposedRetention = jsonValue.GetString("proposedRetention");
    m_proposedRetentionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("storedBytes")) {
    m_storedBytes = jsonValue.GetInt64("storedBytes");
    m_storedBytesHasBeenSet = true;
  }
  return *this;
}

JsonValue LogGroupImpact::Jsonize() const {
  JsonValue payload;

  if (m_logGroupNameHasBeenSet) {
    payload.WithString("logGroupName", m_logGroupName);
  }

  if (m_currentRetentionHasBeenSet) {
    payload.WithString("currentRetention", m_currentRetention);
  }

  if (m_proposedRetentionHasBeenSet) {
    payload.WithString("proposedRetention", m_proposedRetention);
  }

  if (m_storedBytesHasBeenSet) {
    payload.WithInt64("storedBytes", m_storedBytes);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
