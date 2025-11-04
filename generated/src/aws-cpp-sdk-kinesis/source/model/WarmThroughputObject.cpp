/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/WarmThroughputObject.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

WarmThroughputObject::WarmThroughputObject(JsonView jsonValue) { *this = jsonValue; }

WarmThroughputObject& WarmThroughputObject::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TargetMiBps")) {
    m_targetMiBps = jsonValue.GetInteger("TargetMiBps");
    m_targetMiBpsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentMiBps")) {
    m_currentMiBps = jsonValue.GetInteger("CurrentMiBps");
    m_currentMiBpsHasBeenSet = true;
  }
  return *this;
}

JsonValue WarmThroughputObject::Jsonize() const {
  JsonValue payload;

  if (m_targetMiBpsHasBeenSet) {
    payload.WithInteger("TargetMiBps", m_targetMiBps);
  }

  if (m_currentMiBpsHasBeenSet) {
    payload.WithInteger("CurrentMiBps", m_currentMiBps);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
