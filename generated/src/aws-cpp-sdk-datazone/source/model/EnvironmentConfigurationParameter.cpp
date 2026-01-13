/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/EnvironmentConfigurationParameter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

EnvironmentConfigurationParameter::EnvironmentConfigurationParameter(JsonView jsonValue) { *this = jsonValue; }

EnvironmentConfigurationParameter& EnvironmentConfigurationParameter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isEditable")) {
    m_isEditable = jsonValue.GetBool("isEditable");
    m_isEditableHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentConfigurationParameter::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  if (m_isEditableHasBeenSet) {
    payload.WithBool("isEditable", m_isEditable);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
