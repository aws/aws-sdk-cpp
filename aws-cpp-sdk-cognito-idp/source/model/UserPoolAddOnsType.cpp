/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

UserPoolAddOnsType::UserPoolAddOnsType(const JsonValue& jsonValue) : 
    m_advancedSecurityMode(AdvancedSecurityModeType::NOT_SET),
    m_advancedSecurityModeHasBeenSet(false)
{
  *this = jsonValue;
}

UserPoolAddOnsType& UserPoolAddOnsType::operator =(const JsonValue& jsonValue)
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
