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

PasswordPolicyType::PasswordPolicyType() : 
    m_minimumLength(0),
    m_minimumLengthHasBeenSet(false),
    m_requireUppercase(false),
    m_requireUppercaseHasBeenSet(false),
    m_requireLowercase(false),
    m_requireLowercaseHasBeenSet(false),
    m_requireNumbers(false),
    m_requireNumbersHasBeenSet(false),
    m_requireSymbols(false),
    m_requireSymbolsHasBeenSet(false),
    m_temporaryPasswordValidityDays(0),
    m_temporaryPasswordValidityDaysHasBeenSet(false)
{
}

PasswordPolicyType::PasswordPolicyType(JsonView jsonValue) : 
    m_minimumLength(0),
    m_minimumLengthHasBeenSet(false),
    m_requireUppercase(false),
    m_requireUppercaseHasBeenSet(false),
    m_requireLowercase(false),
    m_requireLowercaseHasBeenSet(false),
    m_requireNumbers(false),
    m_requireNumbersHasBeenSet(false),
    m_requireSymbols(false),
    m_requireSymbolsHasBeenSet(false),
    m_temporaryPasswordValidityDays(0),
    m_temporaryPasswordValidityDaysHasBeenSet(false)
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

  if(m_temporaryPasswordValidityDaysHasBeenSet)
  {
   payload.WithInteger("TemporaryPasswordValidityDays", m_temporaryPasswordValidityDays);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
