/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UsernameConfigurationType.h>
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

UsernameConfigurationType::UsernameConfigurationType() : 
    m_caseSensitive(false),
    m_caseSensitiveHasBeenSet(false)
{
}

UsernameConfigurationType::UsernameConfigurationType(JsonView jsonValue) : 
    m_caseSensitive(false),
    m_caseSensitiveHasBeenSet(false)
{
  *this = jsonValue;
}

UsernameConfigurationType& UsernameConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CaseSensitive"))
  {
    m_caseSensitive = jsonValue.GetBool("CaseSensitive");

    m_caseSensitiveHasBeenSet = true;
  }

  return *this;
}

JsonValue UsernameConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_caseSensitiveHasBeenSet)
  {
   payload.WithBool("CaseSensitive", m_caseSensitive);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
