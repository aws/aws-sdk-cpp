/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SignInPolicyType.h>
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

SignInPolicyType::SignInPolicyType(JsonView jsonValue)
{
  *this = jsonValue;
}

SignInPolicyType& SignInPolicyType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllowedFirstAuthFactors"))
  {
    Aws::Utils::Array<JsonView> allowedFirstAuthFactorsJsonList = jsonValue.GetArray("AllowedFirstAuthFactors");
    for(unsigned allowedFirstAuthFactorsIndex = 0; allowedFirstAuthFactorsIndex < allowedFirstAuthFactorsJsonList.GetLength(); ++allowedFirstAuthFactorsIndex)
    {
      m_allowedFirstAuthFactors.push_back(AuthFactorTypeMapper::GetAuthFactorTypeForName(allowedFirstAuthFactorsJsonList[allowedFirstAuthFactorsIndex].AsString()));
    }
    m_allowedFirstAuthFactorsHasBeenSet = true;
  }
  return *this;
}

JsonValue SignInPolicyType::Jsonize() const
{
  JsonValue payload;

  if(m_allowedFirstAuthFactorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedFirstAuthFactorsJsonList(m_allowedFirstAuthFactors.size());
   for(unsigned allowedFirstAuthFactorsIndex = 0; allowedFirstAuthFactorsIndex < allowedFirstAuthFactorsJsonList.GetLength(); ++allowedFirstAuthFactorsIndex)
   {
     allowedFirstAuthFactorsJsonList[allowedFirstAuthFactorsIndex].AsString(AuthFactorTypeMapper::GetNameForAuthFactorType(m_allowedFirstAuthFactors[allowedFirstAuthFactorsIndex]));
   }
   payload.WithArray("AllowedFirstAuthFactors", std::move(allowedFirstAuthFactorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
