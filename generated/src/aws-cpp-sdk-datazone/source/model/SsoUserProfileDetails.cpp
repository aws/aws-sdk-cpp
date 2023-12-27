/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SsoUserProfileDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SsoUserProfileDetails::SsoUserProfileDetails() : 
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

SsoUserProfileDetails::SsoUserProfileDetails(JsonView jsonValue) : 
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

SsoUserProfileDetails& SsoUserProfileDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("firstName"))
  {
    m_firstName = jsonValue.GetString("firstName");

    m_firstNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastName"))
  {
    m_lastName = jsonValue.GetString("lastName");

    m_lastNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue SsoUserProfileDetails::Jsonize() const
{
  JsonValue payload;

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("firstName", m_firstName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("lastName", m_lastName);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
