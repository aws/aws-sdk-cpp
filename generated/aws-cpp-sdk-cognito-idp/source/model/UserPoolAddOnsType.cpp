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

UserPoolAddOnsType::UserPoolAddOnsType() : 
    m_advancedSecurityMode(AdvancedSecurityModeType::NOT_SET),
    m_advancedSecurityModeHasBeenSet(false)
{
}

UserPoolAddOnsType::UserPoolAddOnsType(JsonView jsonValue) : 
    m_advancedSecurityMode(AdvancedSecurityModeType::NOT_SET),
    m_advancedSecurityModeHasBeenSet(false)
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

  return *this;
}

JsonValue UserPoolAddOnsType::Jsonize() const
{
  JsonValue payload;

  if(m_advancedSecurityModeHasBeenSet)
  {
   payload.WithString("AdvancedSecurityMode", AdvancedSecurityModeTypeMapper::GetNameForAdvancedSecurityModeType(m_advancedSecurityMode));
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
