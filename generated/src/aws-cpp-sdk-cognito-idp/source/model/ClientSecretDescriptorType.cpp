/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ClientSecretDescriptorType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

ClientSecretDescriptorType::ClientSecretDescriptorType(JsonView jsonValue) { *this = jsonValue; }

ClientSecretDescriptorType& ClientSecretDescriptorType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ClientSecretId")) {
    m_clientSecretId = jsonValue.GetString("ClientSecretId");
    m_clientSecretIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientSecretValue")) {
    m_clientSecretValue = jsonValue.GetString("ClientSecretValue");
    m_clientSecretValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientSecretCreateDate")) {
    m_clientSecretCreateDate = jsonValue.GetDouble("ClientSecretCreateDate");
    m_clientSecretCreateDateHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientSecretDescriptorType::Jsonize() const {
  JsonValue payload;

  if (m_clientSecretIdHasBeenSet) {
    payload.WithString("ClientSecretId", m_clientSecretId);
  }

  if (m_clientSecretValueHasBeenSet) {
    payload.WithString("ClientSecretValue", m_clientSecretValue);
  }

  if (m_clientSecretCreateDateHasBeenSet) {
    payload.WithDouble("ClientSecretCreateDate", m_clientSecretCreateDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
