/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AdvancedSecurityAdditionalFlowsType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

AdvancedSecurityAdditionalFlowsType::AdvancedSecurityAdditionalFlowsType(JsonView jsonValue)
{
  *this = jsonValue;
}

AdvancedSecurityAdditionalFlowsType& AdvancedSecurityAdditionalFlowsType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomAuthMode"))
  {
    m_customAuthMode = AdvancedSecurityEnabledModeTypeMapper::GetAdvancedSecurityEnabledModeTypeForName(jsonValue.GetString("CustomAuthMode"));
    m_customAuthModeHasBeenSet = true;
  }
  return *this;
}

JsonValue AdvancedSecurityAdditionalFlowsType::Jsonize() const
{
  JsonValue payload;

  if(m_customAuthModeHasBeenSet)
  {
   payload.WithString("CustomAuthMode", AdvancedSecurityEnabledModeTypeMapper::GetNameForAdvancedSecurityEnabledModeType(m_customAuthMode));
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
