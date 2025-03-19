/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UserPoolAddOnsType.h>
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

UserPoolAddOnsType::UserPoolAddOnsType(JsonView jsonValue)
{
  *this = jsonValue;
}

UserPoolAddOnsType& UserPoolAddOnsType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdvancedSecurityMode"))
  {
    m_advancedSecurityMode = AdvancedSecurityModeTypeMapper::GetAdvancedSecurityModeTypeForName(jsonValue.GetString("AdvancedSecurityMode"));
    m_advancedSecurityModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdvancedSecurityAdditionalFlows"))
  {
    m_advancedSecurityAdditionalFlows = jsonValue.GetObject("AdvancedSecurityAdditionalFlows");
    m_advancedSecurityAdditionalFlowsHasBeenSet = true;
  }
  return *this;
}

JsonValue UserPoolAddOnsType::Jsonize() const
{
  JsonValue payload;

  if(m_advancedSecurityModeHasBeenSet)
  {
   payload.WithString("AdvancedSecurityMode", AdvancedSecurityModeTypeMapper::GetNameForAdvancedSecurityModeType(m_advancedSecurityMode));
  }

  if(m_advancedSecurityAdditionalFlowsHasBeenSet)
  {
   payload.WithObject("AdvancedSecurityAdditionalFlows", m_advancedSecurityAdditionalFlows.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
