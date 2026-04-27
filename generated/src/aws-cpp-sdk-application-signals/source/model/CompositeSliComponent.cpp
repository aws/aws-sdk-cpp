/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/CompositeSliComponent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

CompositeSliComponent::CompositeSliComponent(JsonView jsonValue) { *this = jsonValue; }

CompositeSliComponent& CompositeSliComponent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OperationName")) {
    m_operationName = jsonValue.GetString("OperationName");
    m_operationNameHasBeenSet = true;
  }
  return *this;
}

JsonValue CompositeSliComponent::Jsonize() const {
  JsonValue payload;

  if (m_operationNameHasBeenSet) {
    payload.WithString("OperationName", m_operationName);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
