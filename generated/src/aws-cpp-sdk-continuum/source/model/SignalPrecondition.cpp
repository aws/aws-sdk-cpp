/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalPrecondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

SignalPrecondition::SignalPrecondition(JsonView jsonValue) { *this = jsonValue; }

SignalPrecondition& SignalPrecondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetBool("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("basis")) {
    m_basis = SignalBasisMapper::GetSignalBasisForName(jsonValue.GetString("basis"));
    m_basisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("missingInfo")) {
    m_missingInfo = jsonValue.GetString("missingInfo");
    m_missingInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue SignalPrecondition::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithBool("value", m_value);
  }

  if (m_basisHasBeenSet) {
    payload.WithString("basis", SignalBasisMapper::GetNameForSignalBasis(m_basis));
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  if (m_missingInfoHasBeenSet) {
    payload.WithString("missingInfo", m_missingInfo);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
