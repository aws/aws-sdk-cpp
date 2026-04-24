/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/WaitOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

WaitOptions::WaitOptions(JsonView jsonValue) { *this = jsonValue; }

WaitOptions& WaitOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WaitSeconds")) {
    m_waitSeconds = jsonValue.GetInteger("WaitSeconds");
    m_waitSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue WaitOptions::Jsonize() const {
  JsonValue payload;

  if (m_waitSecondsHasBeenSet) {
    payload.WithInteger("WaitSeconds", m_waitSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
