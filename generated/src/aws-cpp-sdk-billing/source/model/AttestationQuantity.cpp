/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/AttestationQuantity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

AttestationQuantity::AttestationQuantity(JsonView jsonValue) { *this = jsonValue; }

AttestationQuantity& AttestationQuantity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attestationVolume")) {
    m_attestationVolume = jsonValue.GetString("attestationVolume");
    m_attestationVolumeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attestationUnit")) {
    m_attestationUnit = jsonValue.GetString("attestationUnit");
    m_attestationUnitHasBeenSet = true;
  }
  return *this;
}

JsonValue AttestationQuantity::Jsonize() const {
  JsonValue payload;

  if (m_attestationVolumeHasBeenSet) {
    payload.WithString("attestationVolume", m_attestationVolume);
  }

  if (m_attestationUnitHasBeenSet) {
    payload.WithString("attestationUnit", m_attestationUnit);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
