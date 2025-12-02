/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/WaitSucceededDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

WaitSucceededDetails::WaitSucceededDetails(JsonView jsonValue) { *this = jsonValue; }

WaitSucceededDetails& WaitSucceededDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Duration")) {
    m_duration = jsonValue.GetInteger("Duration");
    m_durationHasBeenSet = true;
  }
  return *this;
}

JsonValue WaitSucceededDetails::Jsonize() const {
  JsonValue payload;

  if (m_durationHasBeenSet) {
    payload.WithInteger("Duration", m_duration);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
