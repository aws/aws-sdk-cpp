/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/ContextSucceededDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

ContextSucceededDetails::ContextSucceededDetails(JsonView jsonValue) { *this = jsonValue; }

ContextSucceededDetails& ContextSucceededDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Result")) {
    m_result = jsonValue.GetObject("Result");
    m_resultHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextSucceededDetails::Jsonize() const {
  JsonValue payload;

  if (m_resultHasBeenSet) {
    payload.WithObject("Result", m_result.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
