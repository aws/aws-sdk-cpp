/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AcrLevelConfigType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

AcrLevelConfigType::AcrLevelConfigType(JsonView jsonValue) { *this = jsonValue; }

AcrLevelConfigType& AcrLevelConfigType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AcrValue")) {
    m_acrValue = jsonValue.GetString("AcrValue");
    m_acrValueHasBeenSet = true;
  }
  return *this;
}

JsonValue AcrLevelConfigType::Jsonize() const {
  JsonValue payload;

  if (m_acrValueHasBeenSet) {
    payload.WithString("AcrValue", m_acrValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
