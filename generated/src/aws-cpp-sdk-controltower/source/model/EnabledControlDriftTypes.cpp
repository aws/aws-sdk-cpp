/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledControlDriftTypes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ControlTower {
namespace Model {

EnabledControlDriftTypes::EnabledControlDriftTypes(JsonView jsonValue) { *this = jsonValue; }

EnabledControlDriftTypes& EnabledControlDriftTypes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inheritance")) {
    m_inheritance = jsonValue.GetObject("inheritance");
    m_inheritanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resource")) {
    m_resource = jsonValue.GetObject("resource");
    m_resourceHasBeenSet = true;
  }
  return *this;
}

JsonValue EnabledControlDriftTypes::Jsonize() const {
  JsonValue payload;

  if (m_inheritanceHasBeenSet) {
    payload.WithObject("inheritance", m_inheritance.Jsonize());
  }

  if (m_resourceHasBeenSet) {
    payload.WithObject("resource", m_resource.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ControlTower
}  // namespace Aws
