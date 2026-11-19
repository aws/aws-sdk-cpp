/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ClientMetadataURLType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

ClientMetadataURLType::ClientMetadataURLType(JsonView jsonValue) { *this = jsonValue; }

ClientMetadataURLType& ClientMetadataURLType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("URL")) {
    m_uRL = jsonValue.GetString("URL");
    m_uRLHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CachedDate")) {
    m_cachedDate = jsonValue.GetDouble("CachedDate");
    m_cachedDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpirationDate")) {
    m_expirationDate = jsonValue.GetDouble("ExpirationDate");
    m_expirationDateHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientMetadataURLType::Jsonize() const {
  JsonValue payload;

  if (m_uRLHasBeenSet) {
    payload.WithString("URL", m_uRL);
  }

  if (m_cachedDateHasBeenSet) {
    payload.WithDouble("CachedDate", m_cachedDate.SecondsWithMSPrecision());
  }

  if (m_expirationDateHasBeenSet) {
    payload.WithDouble("ExpirationDate", m_expirationDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
