/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/ResourceTagParameter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

ResourceTagParameter::ResourceTagParameter(JsonView jsonValue) { *this = jsonValue; }

ResourceTagParameter& ResourceTagParameter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isValueEditable")) {
    m_isValueEditable = jsonValue.GetBool("isValueEditable");
    m_isValueEditableHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceTagParameter::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  if (m_isValueEditableHasBeenSet) {
    payload.WithBool("isValueEditable", m_isValueEditable);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
