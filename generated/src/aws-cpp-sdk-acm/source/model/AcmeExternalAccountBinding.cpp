/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/AcmeExternalAccountBinding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

AcmeExternalAccountBinding::AcmeExternalAccountBinding(JsonView jsonValue) { *this = jsonValue; }

AcmeExternalAccountBinding& AcmeExternalAccountBinding::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AcmeExternalAccountBindingArn")) {
    m_acmeExternalAccountBindingArn = jsonValue.GetString("AcmeExternalAccountBindingArn");
    m_acmeExternalAccountBindingArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcmeEndpointArn")) {
    m_acmeEndpointArn = jsonValue.GetString("AcmeEndpointArn");
    m_acmeEndpointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetDouble("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RevokedAt")) {
    m_revokedAt = jsonValue.GetDouble("RevokedAt");
    m_revokedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUsedAt")) {
    m_lastUsedAt = jsonValue.GetDouble("LastUsedAt");
    m_lastUsedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AcmeExternalAccountBinding::Jsonize() const {
  JsonValue payload;

  if (m_acmeExternalAccountBindingArnHasBeenSet) {
    payload.WithString("AcmeExternalAccountBindingArn", m_acmeExternalAccountBindingArn);
  }

  if (m_acmeEndpointArnHasBeenSet) {
    payload.WithString("AcmeEndpointArn", m_acmeEndpointArn);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithDouble("ExpiresAt", m_expiresAt.SecondsWithMSPrecision());
  }

  if (m_revokedAtHasBeenSet) {
    payload.WithDouble("RevokedAt", m_revokedAt.SecondsWithMSPrecision());
  }

  if (m_lastUsedAtHasBeenSet) {
    payload.WithDouble("LastUsedAt", m_lastUsedAt.SecondsWithMSPrecision());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
