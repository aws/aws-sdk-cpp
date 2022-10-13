/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UserIdentityInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

UserIdentityInfo::UserIdentityInfo() : 
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_secondaryEmailHasBeenSet(false),
    m_mobileHasBeenSet(false)
{
}

UserIdentityInfo::UserIdentityInfo(JsonView jsonValue) : 
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_secondaryEmailHasBeenSet(false),
    m_mobileHasBeenSet(false)
{
  *this = jsonValue;
}

UserIdentityInfo& UserIdentityInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirstName"))
  {
    m_firstName = jsonValue.GetString("FirstName");

    m_firstNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastName"))
  {
    m_lastName = jsonValue.GetString("LastName");

    m_lastNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryEmail"))
  {
    m_secondaryEmail = jsonValue.GetString("SecondaryEmail");

    m_secondaryEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Mobile"))
  {
    m_mobile = jsonValue.GetString("Mobile");

    m_mobileHasBeenSet = true;
  }

  return *this;
}

JsonValue UserIdentityInfo::Jsonize() const
{
  JsonValue payload;

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("FirstName", m_firstName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("LastName", m_lastName);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_secondaryEmailHasBeenSet)
  {
   payload.WithString("SecondaryEmail", m_secondaryEmail);

  }

  if(m_mobileHasBeenSet)
  {
   payload.WithString("Mobile", m_mobile);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
