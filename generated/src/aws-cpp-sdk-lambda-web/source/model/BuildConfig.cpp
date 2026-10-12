/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/BuildConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

BuildConfig::BuildConfig(JsonView jsonValue) { *this = jsonValue; }

BuildConfig& BuildConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("codeConfig")) {
    m_codeConfig = jsonValue.GetObject("codeConfig");
    m_codeConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runtimeConfig")) {
    m_runtimeConfig = jsonValue.GetObject("runtimeConfig");
    m_runtimeConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue BuildConfig::Jsonize() const {
  JsonValue payload;

  if (m_codeConfigHasBeenSet) {
    payload.WithObject("codeConfig", m_codeConfig.Jsonize());
  }

  if (m_runtimeConfigHasBeenSet) {
    payload.WithObject("runtimeConfig", m_runtimeConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
