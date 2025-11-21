/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/StatusException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

StatusException::StatusException(JsonView jsonValue) { *this = jsonValue; }

StatusException& StatusException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("exception")) {
    m_exception = jsonValue.GetString("exception");
    m_exceptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue StatusException::Jsonize() const {
  JsonValue payload;

  if (m_exceptionHasBeenSet) {
    payload.WithString("exception", m_exception);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
