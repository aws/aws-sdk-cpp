/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UserIdentityInfoLite.h>
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

UserIdentityInfoLite::UserIdentityInfoLite() : 
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false)
{
}

UserIdentityInfoLite::UserIdentityInfoLite(JsonView jsonValue) : 
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false)
{
  *this = jsonValue;
}

UserIdentityInfoLite& UserIdentityInfoLite::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue UserIdentityInfoLite::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
