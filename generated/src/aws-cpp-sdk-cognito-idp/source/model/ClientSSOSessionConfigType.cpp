/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ClientSSOSessionConfigType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

ClientSSOSessionConfigType::ClientSSOSessionConfigType(JsonView jsonValue) { *this = jsonValue; }

ClientSSOSessionConfigType& ClientSSOSessionConfigType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MaxValidityMinutes")) {
    m_maxValidityMinutes = jsonValue.GetInteger("MaxValidityMinutes");
    m_maxValidityMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientSSOSessionConfigType::Jsonize() const {
  JsonValue payload;

  if (m_maxValidityMinutesHasBeenSet) {
    payload.WithInteger("MaxValidityMinutes", m_maxValidityMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
