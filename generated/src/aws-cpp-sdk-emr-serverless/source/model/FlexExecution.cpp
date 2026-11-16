/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/emr-serverless/model/FlexExecution.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMRServerless {
namespace Model {

FlexExecution::FlexExecution(JsonView jsonValue) { *this = jsonValue; }

FlexExecution& FlexExecution::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  return *this;
}

JsonValue FlexExecution::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("enabled", m_enabled);
  }

  return payload;
}

}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
