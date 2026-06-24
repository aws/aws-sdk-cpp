/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CustomDomainConfigType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

CustomDomainConfigType::CustomDomainConfigType(JsonView jsonValue) { *this = jsonValue; }

CustomDomainConfigType& CustomDomainConfigType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CertificateArn")) {
    m_certificateArn = jsonValue.GetString("CertificateArn");
    m_certificateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SecurityPolicy")) {
    m_securityPolicy = SecurityPolicyTypeMapper::GetSecurityPolicyTypeForName(jsonValue.GetString("SecurityPolicy"));
    m_securityPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomDomainConfigType::Jsonize() const {
  JsonValue payload;

  if (m_certificateArnHasBeenSet) {
    payload.WithString("CertificateArn", m_certificateArn);
  }

  if (m_securityPolicyHasBeenSet) {
    payload.WithString("SecurityPolicy", SecurityPolicyTypeMapper::GetNameForSecurityPolicyType(m_securityPolicy));
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
