﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/PasswordPolicyType.h>
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

PasswordPolicyType::PasswordPolicyType(JsonView jsonValue)
{
  *this = jsonValue;
}

PasswordPolicyType& PasswordPolicyType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MinimumLength"))
  {
    m_minimumLength = jsonValue.GetInteger("MinimumLength");
    m_minimumLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequireUppercase"))
  {
    m_requireUppercase = jsonValue.GetBool("RequireUppercase");
    m_requireUppercaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequireLowercase"))
  {
    m_requireLowercase = jsonValue.GetBool("RequireLowercase");
    m_requireLowercaseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequireNumbers"))
  {
    m_requireNumbers = jsonValue.GetBool("RequireNumbers");
    m_requireNumbersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequireSymbols"))
  {
    m_requireSymbols = jsonValue.GetBool("RequireSymbols");
    m_requireSymbolsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PasswordHistorySize"))
  {
    m_passwordHistorySize = jsonValue.GetInteger("PasswordHistorySize");
    m_passwordHistorySizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TemporaryPasswordValidityDays"))
  {
    m_temporaryPasswordValidityDays = jsonValue.GetInteger("TemporaryPasswordValidityDays");
    m_temporaryPasswordValidityDaysHasBeenSet = true;
  }
  return *this;
}

JsonValue PasswordPolicyType::Jsonize() const
{
  JsonValue payload;

  if(m_minimumLengthHasBeenSet)
  {
   payload.WithInteger("MinimumLength", m_minimumLength);

  }

  if(m_requireUppercaseHasBeenSet)
  {
   payload.WithBool("RequireUppercase", m_requireUppercase);

  }

  if(m_requireLowercaseHasBeenSet)
  {
   payload.WithBool("RequireLowercase", m_requireLowercase);

  }

  if(m_requireNumbersHasBeenSet)
  {
   payload.WithBool("RequireNumbers", m_requireNumbers);

  }

  if(m_requireSymbolsHasBeenSet)
  {
   payload.WithBool("RequireSymbols", m_requireSymbols);

  }

  if(m_passwordHistorySizeHasBeenSet)
  {
   payload.WithInteger("PasswordHistorySize", m_passwordHistorySize);

  }

  if(m_temporaryPasswordValidityDaysHasBeenSet)
  {
   payload.WithInteger("TemporaryPasswordValidityDays", m_temporaryPasswordValidityDays);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
