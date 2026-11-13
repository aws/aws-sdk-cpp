/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/FunctionRuntimeConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

FunctionRuntimeConfig::FunctionRuntimeConfig(JsonView jsonValue) { *this = jsonValue; }

FunctionRuntimeConfig& FunctionRuntimeConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RuntimeArn")) {
    m_runtimeArn = jsonValue.GetString("RuntimeArn");
    m_runtimeArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuntimeAlias")) {
    m_runtimeAlias = jsonValue.GetString("RuntimeAlias");
    m_runtimeAliasHasBeenSet = true;
  }
  return *this;
}

JsonValue FunctionRuntimeConfig::Jsonize() const {
  JsonValue payload;

  if (m_runtimeArnHasBeenSet) {
    payload.WithString("RuntimeArn", m_runtimeArn);
  }

  if (m_runtimeAliasHasBeenSet) {
    payload.WithString("RuntimeAlias", m_runtimeAlias);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
