/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/SignalAccessPrecondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

SignalAccessPrecondition::SignalAccessPrecondition(JsonView jsonValue) { *this = jsonValue; }

SignalAccessPrecondition& SignalAccessPrecondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    m_value = SignalAccessLevelMapper::GetSignalAccessLevelForName(jsonValue.GetString("value"));
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

JsonValue SignalAccessPrecondition::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("value", SignalAccessLevelMapper::GetNameForSignalAccessLevel(m_value));
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
