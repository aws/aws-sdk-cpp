/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/CodeConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

CodeConfig::CodeConfig(JsonView jsonValue) { *this = jsonValue; }

CodeConfig& CodeConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Object")) {
    m_s3Object = jsonValue.GetObject("s3Object");
    m_s3ObjectHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeConfig::Jsonize() const {
  JsonValue payload;

  if (m_s3ObjectHasBeenSet) {
    payload.WithObject("s3Object", m_s3Object.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
