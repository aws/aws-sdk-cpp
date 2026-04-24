/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/StepFailedDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

StepFailedDetails::StepFailedDetails(JsonView jsonValue) { *this = jsonValue; }

StepFailedDetails& StepFailedDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Error")) {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RetryDetails")) {
    m_retryDetails = jsonValue.GetObject("RetryDetails");
    m_retryDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue StepFailedDetails::Jsonize() const {
  JsonValue payload;

  if (m_errorHasBeenSet) {
    payload.WithObject("Error", m_error.Jsonize());
  }

  if (m_retryDetailsHasBeenSet) {
    payload.WithObject("RetryDetails", m_retryDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
