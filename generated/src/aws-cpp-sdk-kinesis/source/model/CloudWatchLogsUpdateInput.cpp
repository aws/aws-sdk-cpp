/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/CloudWatchLogsUpdateInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

CloudWatchLogsUpdateInput::CloudWatchLogsUpdateInput(JsonView jsonValue) { *this = jsonValue; }

CloudWatchLogsUpdateInput& CloudWatchLogsUpdateInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogGroupName")) {
    m_logGroupName = jsonValue.GetString("LogGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogStreamName")) {
    m_logStreamName = jsonValue.GetString("LogStreamName");
    m_logStreamNameHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchLogsUpdateInput::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_logGroupNameHasBeenSet) {
    payload.WithString("LogGroupName", m_logGroupName);
  }

  if (m_logStreamNameHasBeenSet) {
    payload.WithString("LogStreamName", m_logStreamName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
