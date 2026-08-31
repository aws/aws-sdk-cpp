/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/ChannelStreamIdentifier.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

ChannelStreamIdentifier::ChannelStreamIdentifier(JsonView jsonValue) { *this = jsonValue; }

ChannelStreamIdentifier& ChannelStreamIdentifier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StreamARN")) {
    m_streamARN = jsonValue.GetString("StreamARN");
    m_streamARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StreamCreationTimestamp")) {
    m_streamCreationTimestamp = jsonValue.GetDouble("StreamCreationTimestamp");
    m_streamCreationTimestampHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelStreamIdentifier::Jsonize() const {
  JsonValue payload;

  if (m_streamARNHasBeenSet) {
    payload.WithString("StreamARN", m_streamARN);
  }

  if (m_streamCreationTimestampHasBeenSet) {
    payload.WithDouble("StreamCreationTimestamp", m_streamCreationTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
