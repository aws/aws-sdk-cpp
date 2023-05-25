/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/LoginAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

LoginAttribute::LoginAttribute() : 
    m_userHasBeenSet(false),
    m_applicationHasBeenSet(false),
    m_failedLoginAttempts(0),
    m_failedLoginAttemptsHasBeenSet(false),
    m_successfulLoginAttempts(0),
    m_successfulLoginAttemptsHasBeenSet(false)
{
}

LoginAttribute::LoginAttribute(JsonView jsonValue) : 
    m_userHasBeenSet(false),
    m_applicationHasBeenSet(false),
    m_failedLoginAttempts(0),
    m_failedLoginAttemptsHasBeenSet(false),
    m_successfulLoginAttempts(0),
    m_successfulLoginAttemptsHasBeenSet(false)
{
  *this = jsonValue;
}

LoginAttribute& LoginAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetString("user");

    m_userHasBeenSet = true;
  }

  if(jsonValue.ValueExists("application"))
  {
    m_application = jsonValue.GetString("application");

    m_applicationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failedLoginAttempts"))
  {
    m_failedLoginAttempts = jsonValue.GetInteger("failedLoginAttempts");

    m_failedLoginAttemptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("successfulLoginAttempts"))
  {
    m_successfulLoginAttempts = jsonValue.GetInteger("successfulLoginAttempts");

    m_successfulLoginAttemptsHasBeenSet = true;
  }

  return *this;
}

JsonValue LoginAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_userHasBeenSet)
  {
   payload.WithString("user", m_user);

  }

  if(m_applicationHasBeenSet)
  {
   payload.WithString("application", m_application);

  }

  if(m_failedLoginAttemptsHasBeenSet)
  {
   payload.WithInteger("failedLoginAttempts", m_failedLoginAttempts);

  }

  if(m_successfulLoginAttemptsHasBeenSet)
  {
   payload.WithInteger("successfulLoginAttempts", m_successfulLoginAttempts);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
