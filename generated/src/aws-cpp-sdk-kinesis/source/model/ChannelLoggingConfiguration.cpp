/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/ChannelLoggingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

ChannelLoggingConfiguration::ChannelLoggingConfiguration(JsonView jsonValue) { *this = jsonValue; }

ChannelLoggingConfiguration& ChannelLoggingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CloudWatchLogs")) {
    m_cloudWatchLogs = jsonValue.GetObject("CloudWatchLogs");
    m_cloudWatchLogsHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelLoggingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_cloudWatchLogsHasBeenSet) {
    payload.WithObject("CloudWatchLogs", m_cloudWatchLogs.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
