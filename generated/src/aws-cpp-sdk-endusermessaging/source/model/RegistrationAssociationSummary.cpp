/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/RegistrationAssociationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

RegistrationAssociationSummary::RegistrationAssociationSummary(JsonView jsonValue) { *this = jsonValue; }

RegistrationAssociationSummary& RegistrationAssociationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("registrationId")) {
    m_registrationId = jsonValue.GetString("registrationId");
    m_registrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("registrationType")) {
    m_registrationType = jsonValue.GetString("registrationType");
    m_registrationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("smartMatchUsed")) {
    m_smartMatchUsed = jsonValue.GetBool("smartMatchUsed");
    m_smartMatchUsedHasBeenSet = true;
  }
  return *this;
}

JsonValue RegistrationAssociationSummary::Jsonize() const {
  JsonValue payload;

  if (m_registrationIdHasBeenSet) {
    payload.WithString("registrationId", m_registrationId);
  }

  if (m_registrationTypeHasBeenSet) {
    payload.WithString("registrationType", m_registrationType);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_smartMatchUsedHasBeenSet) {
    payload.WithBool("smartMatchUsed", m_smartMatchUsed);
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
