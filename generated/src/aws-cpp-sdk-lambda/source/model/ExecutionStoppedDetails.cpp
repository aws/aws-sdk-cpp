/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/ExecutionStoppedDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

ExecutionStoppedDetails::ExecutionStoppedDetails(JsonView jsonValue) { *this = jsonValue; }

ExecutionStoppedDetails& ExecutionStoppedDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Error")) {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionStoppedDetails::Jsonize() const {
  JsonValue payload;

  if (m_errorHasBeenSet) {
    payload.WithObject("Error", m_error.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
