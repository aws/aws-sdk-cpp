/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/AccountUsage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

AccountUsage::AccountUsage(JsonView jsonValue) { *this = jsonValue; }

AccountUsage& AccountUsage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("functionCount")) {
    m_functionCount = jsonValue.GetInteger("functionCount");
    m_functionCountHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountUsage::Jsonize() const {
  JsonValue payload;

  if (m_functionCountHasBeenSet) {
    payload.WithInteger("functionCount", m_functionCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
