/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/CallbackDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

CallbackDetails::CallbackDetails(JsonView jsonValue) { *this = jsonValue; }

CallbackDetails& CallbackDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CallbackId")) {
    m_callbackId = jsonValue.GetString("CallbackId");
    m_callbackIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Result")) {
    m_result = jsonValue.GetString("Result");
    m_resultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Error")) {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue CallbackDetails::Jsonize() const {
  JsonValue payload;

  if (m_callbackIdHasBeenSet) {
    payload.WithString("CallbackId", m_callbackId);
  }

  if (m_resultHasBeenSet) {
    payload.WithString("Result", m_result);
  }

  if (m_errorHasBeenSet) {
    payload.WithObject("Error", m_error.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
