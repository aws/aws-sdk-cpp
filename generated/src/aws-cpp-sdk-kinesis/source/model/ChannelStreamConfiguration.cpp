/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/ChannelStreamConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

ChannelStreamConfiguration::ChannelStreamConfiguration(JsonView jsonValue) { *this = jsonValue; }

ChannelStreamConfiguration& ChannelStreamConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StreamARN")) {
    m_streamARN = jsonValue.GetString("StreamARN");
    m_streamARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecordConfiguration")) {
    m_recordConfiguration = jsonValue.GetObject("RecordConfiguration");
    m_recordConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelStreamConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_streamARNHasBeenSet) {
    payload.WithString("StreamARN", m_streamARN);
  }

  if (m_recordConfigurationHasBeenSet) {
    payload.WithObject("RecordConfiguration", m_recordConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
