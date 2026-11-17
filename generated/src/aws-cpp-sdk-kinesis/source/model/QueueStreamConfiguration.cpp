/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/QueueStreamConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

QueueStreamConfiguration::QueueStreamConfiguration(JsonView jsonValue) { *this = jsonValue; }

QueueStreamConfiguration& QueueStreamConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StreamARN")) {
    m_streamARN = jsonValue.GetString("StreamARN");
    m_streamARNHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartingPosition")) {
    m_startingPosition = jsonValue.GetObject("StartingPosition");
    m_startingPositionHasBeenSet = true;
  }
  return *this;
}

JsonValue QueueStreamConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_streamARNHasBeenSet) {
    payload.WithString("StreamARN", m_streamARN);
  }

  if (m_startingPositionHasBeenSet) {
    payload.WithObject("StartingPosition", m_startingPosition.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
