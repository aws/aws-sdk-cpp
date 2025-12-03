/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/LambdaGraderConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

LambdaGraderConfig::LambdaGraderConfig(JsonView jsonValue) { *this = jsonValue; }

LambdaGraderConfig& LambdaGraderConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lambdaArn")) {
    m_lambdaArn = jsonValue.GetString("lambdaArn");
    m_lambdaArnHasBeenSet = true;
  }
  return *this;
}

JsonValue LambdaGraderConfig::Jsonize() const {
  JsonValue payload;

  if (m_lambdaArnHasBeenSet) {
    payload.WithString("lambdaArn", m_lambdaArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
