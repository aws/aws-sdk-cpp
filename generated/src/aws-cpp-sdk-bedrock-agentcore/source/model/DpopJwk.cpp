/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/DpopJwk.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

DpopJwk::DpopJwk(JsonView jsonValue) { *this = jsonValue; }

DpopJwk& DpopJwk::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kty")) {
    m_kty = JwkKeyTypeMapper::GetJwkKeyTypeForName(jsonValue.GetString("kty"));
    m_ktyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("crv")) {
    m_crv = JwkEllipticCurveMapper::GetJwkEllipticCurveForName(jsonValue.GetString("crv"));
    m_crvHasBeenSet = true;
  }
  if (jsonValue.ValueExists("x")) {
    m_x = jsonValue.GetString("x");
    m_xHasBeenSet = true;
  }
  if (jsonValue.ValueExists("y")) {
    m_y = jsonValue.GetString("y");
    m_yHasBeenSet = true;
  }
  return *this;
}

JsonValue DpopJwk::Jsonize() const {
  JsonValue payload;

  if (m_ktyHasBeenSet) {
    payload.WithString("kty", JwkKeyTypeMapper::GetNameForJwkKeyType(m_kty));
  }

  if (m_crvHasBeenSet) {
    payload.WithString("crv", JwkEllipticCurveMapper::GetNameForJwkEllipticCurve(m_crv));
  }

  if (m_xHasBeenSet) {
    payload.WithString("x", m_x);
  }

  if (m_yHasBeenSet) {
    payload.WithString("y", m_y);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
