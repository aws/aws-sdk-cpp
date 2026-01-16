/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/launch-wizard/model/DeploymentConditionalField.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LaunchWizard {
namespace Model {

DeploymentConditionalField::DeploymentConditionalField(JsonView jsonValue) { *this = jsonValue; }

DeploymentConditionalField& DeploymentConditionalField::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("comparator")) {
    m_comparator = jsonValue.GetString("comparator");
    m_comparatorHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentConditionalField::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  if (m_comparatorHasBeenSet) {
    payload.WithString("comparator", m_comparator);
  }

  return payload;
}

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
