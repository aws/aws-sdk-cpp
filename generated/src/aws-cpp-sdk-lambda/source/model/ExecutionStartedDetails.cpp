/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/ExecutionStartedDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

ExecutionStartedDetails::ExecutionStartedDetails(JsonView jsonValue) { *this = jsonValue; }

ExecutionStartedDetails& ExecutionStartedDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Input")) {
    m_input = jsonValue.GetObject("Input");
    m_inputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionTimeout")) {
    m_executionTimeout = jsonValue.GetInteger("ExecutionTimeout");
    m_executionTimeoutHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionStartedDetails::Jsonize() const {
  JsonValue payload;

  if (m_inputHasBeenSet) {
    payload.WithObject("Input", m_input.Jsonize());
  }

  if (m_executionTimeoutHasBeenSet) {
    payload.WithInteger("ExecutionTimeout", m_executionTimeout);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
