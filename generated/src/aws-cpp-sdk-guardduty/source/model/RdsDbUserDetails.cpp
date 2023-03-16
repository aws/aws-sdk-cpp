/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/RdsDbUserDetails.h>
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

RdsDbUserDetails::RdsDbUserDetails() : 
    m_userHasBeenSet(false),
    m_applicationHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_sslHasBeenSet(false),
    m_authMethodHasBeenSet(false)
{
}

RdsDbUserDetails::RdsDbUserDetails(JsonView jsonValue) : 
    m_userHasBeenSet(false),
    m_applicationHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_sslHasBeenSet(false),
    m_authMethodHasBeenSet(false)
{
  *this = jsonValue;
}

RdsDbUserDetails& RdsDbUserDetails::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("database"))
  {
    m_database = jsonValue.GetString("database");

    m_databaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ssl"))
  {
    m_ssl = jsonValue.GetString("ssl");

    m_sslHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authMethod"))
  {
    m_authMethod = jsonValue.GetString("authMethod");

    m_authMethodHasBeenSet = true;
  }

  return *this;
}

JsonValue RdsDbUserDetails::Jsonize() const
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

  if(m_databaseHasBeenSet)
  {
   payload.WithString("database", m_database);

  }

  if(m_sslHasBeenSet)
  {
   payload.WithString("ssl", m_ssl);

  }

  if(m_authMethodHasBeenSet)
  {
   payload.WithString("authMethod", m_authMethod);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
