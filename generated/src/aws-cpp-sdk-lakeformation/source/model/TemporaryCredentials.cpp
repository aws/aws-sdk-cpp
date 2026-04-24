/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/TemporaryCredentials.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {

TemporaryCredentials::TemporaryCredentials(JsonView jsonValue) { *this = jsonValue; }

TemporaryCredentials& TemporaryCredentials::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccessKeyId")) {
    m_accessKeyId = jsonValue.GetString("AccessKeyId");
    m_accessKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SecretAccessKey")) {
    m_secretAccessKey = jsonValue.GetString("SecretAccessKey");
    m_secretAccessKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SessionToken")) {
    m_sessionToken = jsonValue.GetString("SessionToken");
    m_sessionTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Expiration")) {
    m_expiration = jsonValue.GetDouble("Expiration");
    m_expirationHasBeenSet = true;
  }
  return *this;
}

JsonValue TemporaryCredentials::Jsonize() const {
  JsonValue payload;

  if (m_accessKeyIdHasBeenSet) {
    payload.WithString("AccessKeyId", m_accessKeyId);
  }

  if (m_secretAccessKeyHasBeenSet) {
    payload.WithString("SecretAccessKey", m_secretAccessKey);
  }

  if (m_sessionTokenHasBeenSet) {
    payload.WithString("SessionToken", m_sessionToken);
  }

  if (m_expirationHasBeenSet) {
    payload.WithDouble("Expiration", m_expiration.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
