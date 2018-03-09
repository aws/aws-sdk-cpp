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

#include <aws/cognito-idp/model/SoftwareTokenMfaSettingsType.h>
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

SoftwareTokenMfaSettingsType::SoftwareTokenMfaSettingsType() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_preferredMfa(false),
    m_preferredMfaHasBeenSet(false)
{
}

SoftwareTokenMfaSettingsType::SoftwareTokenMfaSettingsType(const JsonValue& jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_preferredMfa(false),
    m_preferredMfaHasBeenSet(false)
{
  *this = jsonValue;
}

SoftwareTokenMfaSettingsType& SoftwareTokenMfaSettingsType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredMfa"))
  {
    m_preferredMfa = jsonValue.GetBool("PreferredMfa");

    m_preferredMfaHasBeenSet = true;
  }

  return *this;
}

JsonValue SoftwareTokenMfaSettingsType::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_preferredMfaHasBeenSet)
  {
   payload.WithBool("PreferredMfa", m_preferredMfa);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
