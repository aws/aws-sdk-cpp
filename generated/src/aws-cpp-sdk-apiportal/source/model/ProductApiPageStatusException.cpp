/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ProductApiPageStatusException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

ProductApiPageStatusException::ProductApiPageStatusException(JsonView jsonValue) { *this = jsonValue; }

ProductApiPageStatusException& ProductApiPageStatusException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("exception")) {
    m_exception = ProductApiPageStatusExceptionTypeMapper::GetProductApiPageStatusExceptionTypeForName(jsonValue.GetString("exception"));
    m_exceptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductApiPageStatusException::Jsonize() const {
  JsonValue payload;

  if (m_exceptionHasBeenSet) {
    payload.WithString("exception", ProductApiPageStatusExceptionTypeMapper::GetNameForProductApiPageStatusExceptionType(m_exception));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
