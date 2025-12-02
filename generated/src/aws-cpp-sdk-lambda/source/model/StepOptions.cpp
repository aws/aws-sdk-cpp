/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/StepOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

StepOptions::StepOptions(JsonView jsonValue) { *this = jsonValue; }

StepOptions& StepOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NextAttemptDelaySeconds")) {
    m_nextAttemptDelaySeconds = jsonValue.GetInteger("NextAttemptDelaySeconds");
    m_nextAttemptDelaySecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue StepOptions::Jsonize() const {
  JsonValue payload;

  if (m_nextAttemptDelaySecondsHasBeenSet) {
    payload.WithInteger("NextAttemptDelaySeconds", m_nextAttemptDelaySeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
