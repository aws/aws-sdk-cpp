/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/AttributeError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

AttributeError::AttributeError(JsonView jsonValue) { *this = jsonValue; }

AttributeError& AttributeError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attributeIdentifier")) {
    m_attributeIdentifier = jsonValue.GetString("attributeIdentifier");
    m_attributeIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue AttributeError::Jsonize() const {
  JsonValue payload;

  if (m_attributeIdentifierHasBeenSet) {
    payload.WithString("attributeIdentifier", m_attributeIdentifier);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
