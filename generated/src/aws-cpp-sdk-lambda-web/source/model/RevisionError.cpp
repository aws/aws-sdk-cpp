/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/RevisionError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {

RevisionError::RevisionError(JsonView jsonValue) { *this = jsonValue; }

RevisionError& RevisionError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attribute")) {
    m_attribute = jsonValue.GetString("attribute");
    m_attributeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = jsonValue.GetString("errorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue RevisionError::Jsonize() const {
  JsonValue payload;

  if (m_attributeHasBeenSet) {
    payload.WithString("attribute", m_attribute);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", m_errorCode);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
