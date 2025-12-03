/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GraderConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

GraderConfig::GraderConfig(JsonView jsonValue) { *this = jsonValue; }

GraderConfig& GraderConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lambdaGrader")) {
    m_lambdaGrader = jsonValue.GetObject("lambdaGrader");
    m_lambdaGraderHasBeenSet = true;
  }
  return *this;
}

JsonValue GraderConfig::Jsonize() const {
  JsonValue payload;

  if (m_lambdaGraderHasBeenSet) {
    payload.WithObject("lambdaGrader", m_lambdaGrader.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
