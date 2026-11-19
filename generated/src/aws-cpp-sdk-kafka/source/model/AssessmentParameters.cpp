/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/AssessmentParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

AssessmentParameters::AssessmentParameters(JsonView jsonValue) { *this = jsonValue; }

AssessmentParameters& AssessmentParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetInstanceType")) {
    m_targetInstanceType = jsonValue.GetString("targetInstanceType");
    m_targetInstanceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AssessmentParameters::Jsonize() const {
  JsonValue payload;

  if (m_targetInstanceTypeHasBeenSet) {
    payload.WithString("targetInstanceType", m_targetInstanceType);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
