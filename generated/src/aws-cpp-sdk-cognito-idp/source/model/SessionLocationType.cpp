/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SessionLocationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

SessionLocationType::SessionLocationType(JsonView jsonValue) { *this = jsonValue; }

SessionLocationType& SessionLocationType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("City")) {
    m_city = jsonValue.GetString("City");
    m_cityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Country")) {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionLocationType::Jsonize() const {
  JsonValue payload;

  if (m_cityHasBeenSet) {
    payload.WithString("City", m_city);
  }

  if (m_countryHasBeenSet) {
    payload.WithString("Country", m_country);
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
