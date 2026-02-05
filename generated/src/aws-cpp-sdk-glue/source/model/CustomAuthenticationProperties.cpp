/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/CustomAuthenticationProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

CustomAuthenticationProperties::CustomAuthenticationProperties(JsonView jsonValue) { *this = jsonValue; }

CustomAuthenticationProperties& CustomAuthenticationProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AuthenticationParameters")) {
    Aws::Utils::Array<JsonView> authenticationParametersJsonList = jsonValue.GetArray("AuthenticationParameters");
    for (unsigned authenticationParametersIndex = 0; authenticationParametersIndex < authenticationParametersJsonList.GetLength();
         ++authenticationParametersIndex) {
      m_authenticationParameters.push_back(authenticationParametersJsonList[authenticationParametersIndex].AsObject());
    }
    m_authenticationParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomAuthenticationProperties::Jsonize() const {
  JsonValue payload;

  if (m_authenticationParametersHasBeenSet) {
    Aws::Utils::Array<JsonValue> authenticationParametersJsonList(m_authenticationParameters.size());
    for (unsigned authenticationParametersIndex = 0; authenticationParametersIndex < authenticationParametersJsonList.GetLength();
         ++authenticationParametersIndex) {
      authenticationParametersJsonList[authenticationParametersIndex].AsObject(
          m_authenticationParameters[authenticationParametersIndex].Jsonize());
    }
    payload.WithArray("AuthenticationParameters", std::move(authenticationParametersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
