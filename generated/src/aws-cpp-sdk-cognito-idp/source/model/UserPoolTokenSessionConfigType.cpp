/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UserPoolTokenSessionConfigType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

UserPoolTokenSessionConfigType::UserPoolTokenSessionConfigType(JsonView jsonValue) { *this = jsonValue; }

UserPoolTokenSessionConfigType& UserPoolTokenSessionConfigType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MaxPerUser")) {
    m_maxPerUser = jsonValue.GetInteger("MaxPerUser");
    m_maxPerUserHasBeenSet = true;
  }
  return *this;
}

JsonValue UserPoolTokenSessionConfigType::Jsonize() const {
  JsonValue payload;

  if (m_maxPerUserHasBeenSet) {
    payload.WithInteger("MaxPerUser", m_maxPerUser);
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
