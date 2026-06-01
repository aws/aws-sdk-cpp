/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/IssuerConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

IssuerConfigurationType::IssuerConfigurationType(JsonView jsonValue) { *this = jsonValue; }

IssuerConfigurationType& IssuerConfigurationType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = IssuerTypeMapper::GetIssuerTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue IssuerConfigurationType::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", IssuerTypeMapper::GetNameForIssuerType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
