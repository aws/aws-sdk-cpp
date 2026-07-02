/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/LimitType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

LimitType::LimitType(JsonView jsonValue) { *this = jsonValue; }

LimitType& LimitType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LimitDefinition")) {
    m_limitDefinition = jsonValue.GetObject("LimitDefinition");
    m_limitDefinitionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProvisionedLimitValue")) {
    m_provisionedLimitValue = jsonValue.GetInteger("ProvisionedLimitValue");
    m_provisionedLimitValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FreeLimitValue")) {
    m_freeLimitValue = jsonValue.GetInteger("FreeLimitValue");
    m_freeLimitValueHasBeenSet = true;
  }
  return *this;
}

JsonValue LimitType::Jsonize() const {
  JsonValue payload;

  if (m_limitDefinitionHasBeenSet) {
    payload.WithObject("LimitDefinition", m_limitDefinition.Jsonize());
  }

  if (m_provisionedLimitValueHasBeenSet) {
    payload.WithInteger("ProvisionedLimitValue", m_provisionedLimitValue);
  }

  if (m_freeLimitValueHasBeenSet) {
    payload.WithInteger("FreeLimitValue", m_freeLimitValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
