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

#include <aws/cognito-idp/model/SmsMfaConfigType.h>
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

SmsMfaConfigType::SmsMfaConfigType() : 
    m_smsAuthenticationMessageHasBeenSet(false),
    m_smsConfigurationHasBeenSet(false)
{
}

SmsMfaConfigType::SmsMfaConfigType(const JsonValue& jsonValue) : 
    m_smsAuthenticationMessageHasBeenSet(false),
    m_smsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SmsMfaConfigType& SmsMfaConfigType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SmsAuthenticationMessage"))
  {
    m_smsAuthenticationMessage = jsonValue.GetString("SmsAuthenticationMessage");

    m_smsAuthenticationMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SmsConfiguration"))
  {
    m_smsConfiguration = jsonValue.GetObject("SmsConfiguration");

    m_smsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SmsMfaConfigType::Jsonize() const
{
  JsonValue payload;

  if(m_smsAuthenticationMessageHasBeenSet)
  {
   payload.WithString("SmsAuthenticationMessage", m_smsAuthenticationMessage);

  }

  if(m_smsConfigurationHasBeenSet)
  {
   payload.WithObject("SmsConfiguration", m_smsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
