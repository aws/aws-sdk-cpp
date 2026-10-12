/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/RuntimeConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

RuntimeConfig::RuntimeConfig(JsonView jsonValue) { *this = jsonValue; }

RuntimeConfig& RuntimeConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("runtime")) {
    m_runtime = jsonValue.GetString("runtime");
    m_runtimeHasBeenSet = true;
  }
  return *this;
}

JsonValue RuntimeConfig::Jsonize() const {
  JsonValue payload;

  if (m_runtimeHasBeenSet) {
    payload.WithString("runtime", m_runtime);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
