/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/ContextOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

ContextOptions::ContextOptions(JsonView jsonValue) { *this = jsonValue; }

ContextOptions& ContextOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ReplayChildren")) {
    m_replayChildren = jsonValue.GetBool("ReplayChildren");
    m_replayChildrenHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextOptions::Jsonize() const {
  JsonValue payload;

  if (m_replayChildrenHasBeenSet) {
    payload.WithBool("ReplayChildren", m_replayChildren);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
