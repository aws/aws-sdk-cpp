/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

SmsMfaConfigType::SmsMfaConfigType(JsonView jsonValue) : 
    m_smsAuthenticationMessageHasBeenSet(false),
    m_smsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SmsMfaConfigType& SmsMfaConfigType::operator =(JsonView jsonValue)
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
