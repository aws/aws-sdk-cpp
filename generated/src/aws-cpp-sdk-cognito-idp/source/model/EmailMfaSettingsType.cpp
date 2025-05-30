﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/EmailMfaSettingsType.h>
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

EmailMfaSettingsType::EmailMfaSettingsType(JsonView jsonValue)
{
  *this = jsonValue;
}

EmailMfaSettingsType& EmailMfaSettingsType::operator =(JsonView jsonValue)
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

JsonValue EmailMfaSettingsType::Jsonize() const
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
