/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/ExecutionDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

ExecutionDetails::ExecutionDetails(JsonView jsonValue) { *this = jsonValue; }

ExecutionDetails& ExecutionDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InputPayload")) {
    m_inputPayload = jsonValue.GetString("InputPayload");
    m_inputPayloadHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionDetails::Jsonize() const {
  JsonValue payload;

  if (m_inputPayloadHasBeenSet) {
    payload.WithString("InputPayload", m_inputPayload);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
