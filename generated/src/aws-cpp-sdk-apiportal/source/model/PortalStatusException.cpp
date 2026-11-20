/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/PortalStatusException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

PortalStatusException::PortalStatusException(JsonView jsonValue) { *this = jsonValue; }

PortalStatusException& PortalStatusException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("exception")) {
    m_exception = PortalStatusExceptionTypeMapper::GetPortalStatusExceptionTypeForName(jsonValue.GetString("exception"));
    m_exceptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue PortalStatusException::Jsonize() const {
  JsonValue payload;

  if (m_exceptionHasBeenSet) {
    payload.WithString("exception", PortalStatusExceptionTypeMapper::GetNameForPortalStatusExceptionType(m_exception));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
