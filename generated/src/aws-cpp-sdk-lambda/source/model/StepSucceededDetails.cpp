/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/StepSucceededDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

StepSucceededDetails::StepSucceededDetails(JsonView jsonValue) { *this = jsonValue; }

StepSucceededDetails& StepSucceededDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Result")) {
    m_result = jsonValue.GetObject("Result");
    m_resultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RetryDetails")) {
    m_retryDetails = jsonValue.GetObject("RetryDetails");
    m_retryDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue StepSucceededDetails::Jsonize() const {
  JsonValue payload;

  if (m_resultHasBeenSet) {
    payload.WithObject("Result", m_result.Jsonize());
  }

  if (m_retryDetailsHasBeenSet) {
    payload.WithObject("RetryDetails", m_retryDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
