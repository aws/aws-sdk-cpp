/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/grafana/model/UpdateError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ManagedGrafana {
namespace Model {

UpdateError::UpdateError(JsonView jsonValue) { *this = jsonValue; }

UpdateError& UpdateError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetInteger("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("causedBy")) {
    m_causedBy = jsonValue.GetObject("causedBy");
    m_causedByHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateError::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithInteger("code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_causedByHasBeenSet) {
    payload.WithObject("causedBy", m_causedBy.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
