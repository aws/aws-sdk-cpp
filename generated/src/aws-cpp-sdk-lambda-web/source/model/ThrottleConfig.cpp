/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/ThrottleConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

ThrottleConfig::ThrottleConfig(JsonView jsonValue) { *this = jsonValue; }

ThrottleConfig& ThrottleConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("rateLimit")) {
    m_rateLimit = jsonValue.GetInteger("rateLimit");
    m_rateLimitHasBeenSet = true;
  }
  return *this;
}

JsonValue ThrottleConfig::Jsonize() const {
  JsonValue payload;

  if (m_rateLimitHasBeenSet) {
    payload.WithInteger("rateLimit", m_rateLimit);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
