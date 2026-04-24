/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AfterContactWorkConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

AfterContactWorkConfig::AfterContactWorkConfig(JsonView jsonValue) { *this = jsonValue; }

AfterContactWorkConfig& AfterContactWorkConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AfterContactWorkTimeLimit")) {
    m_afterContactWorkTimeLimit = jsonValue.GetInteger("AfterContactWorkTimeLimit");
    m_afterContactWorkTimeLimitHasBeenSet = true;
  }
  return *this;
}

JsonValue AfterContactWorkConfig::Jsonize() const {
  JsonValue payload;

  if (m_afterContactWorkTimeLimitHasBeenSet) {
    payload.WithInteger("AfterContactWorkTimeLimit", m_afterContactWorkTimeLimit);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
