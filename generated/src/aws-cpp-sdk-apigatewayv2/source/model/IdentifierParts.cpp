/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/IdentifierParts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

IdentifierParts::IdentifierParts(JsonView jsonValue) { *this = jsonValue; }

IdentifierParts& IdentifierParts::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("method")) {
    m_method = jsonValue.GetString("method");
    m_methodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("path")) {
    m_path = jsonValue.GetString("path");
    m_pathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("restApiId")) {
    m_restApiId = jsonValue.GetString("restApiId");
    m_restApiIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stage")) {
    m_stage = jsonValue.GetString("stage");
    m_stageHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentifierParts::Jsonize() const {
  JsonValue payload;

  if (m_methodHasBeenSet) {
    payload.WithString("method", m_method);
  }

  if (m_pathHasBeenSet) {
    payload.WithString("path", m_path);
  }

  if (m_restApiIdHasBeenSet) {
    payload.WithString("restApiId", m_restApiId);
  }

  if (m_stageHasBeenSet) {
    payload.WithString("stage", m_stage);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
