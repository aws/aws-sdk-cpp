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
