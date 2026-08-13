/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ValidationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

ValidationConfiguration::ValidationConfiguration(JsonView jsonValue) { *this = jsonValue; }

ValidationConfiguration& ValidationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ValidationMethod")) {
    m_validationMethod = ValidationMethodMapper::GetValidationMethodForName(jsonValue.GetString("ValidationMethod"));
    m_validationMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ValidationChallenge")) {
    m_validationChallenge = jsonValue.GetObject("ValidationChallenge");
    m_validationChallengeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ValidationStatus")) {
    m_validationStatus = DomainStatusMapper::GetDomainStatusForName(jsonValue.GetString("ValidationStatus"));
    m_validationStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_validationMethodHasBeenSet) {
    payload.WithString("ValidationMethod", ValidationMethodMapper::GetNameForValidationMethod(m_validationMethod));
  }

  if (m_validationChallengeHasBeenSet) {
    payload.WithObject("ValidationChallenge", m_validationChallenge.Jsonize());
  }

  if (m_validationStatusHasBeenSet) {
    payload.WithString("ValidationStatus", DomainStatusMapper::GetNameForDomainStatus(m_validationStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
