/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/DeadLetterConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

DeadLetterConfiguration::DeadLetterConfiguration(JsonView jsonValue) { *this = jsonValue; }

DeadLetterConfiguration& DeadLetterConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TargetType")) {
    m_targetType = TargetTypeMapper::GetTargetTypeForName(jsonValue.GetString("TargetType"));
    m_targetTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxReceiveCount")) {
    m_maxReceiveCount = jsonValue.GetInteger("MaxReceiveCount");
    m_maxReceiveCountHasBeenSet = true;
  }
  return *this;
}

JsonValue DeadLetterConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_targetTypeHasBeenSet) {
    payload.WithString("TargetType", TargetTypeMapper::GetNameForTargetType(m_targetType));
  }

  if (m_maxReceiveCountHasBeenSet) {
    payload.WithInteger("MaxReceiveCount", m_maxReceiveCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
