/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/EntityDisplayData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

EntityDisplayData::EntityDisplayData() : 
    m_userNameHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_identifiedUserNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false)
{
}

EntityDisplayData::EntityDisplayData(JsonView jsonValue) : 
    m_userNameHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_identifiedUserNameHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false)
{
  *this = jsonValue;
}

EntityDisplayData& EntityDisplayData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentifiedUserName"))
  {
    m_identifiedUserName = jsonValue.GetString("IdentifiedUserName");

    m_identifiedUserNameHasBeenSet = true;
  }

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

JsonValue EntityDisplayData::Jsonize() const
{
  JsonValue payload;

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_identifiedUserNameHasBeenSet)
  {
   payload.WithString("IdentifiedUserName", m_identifiedUserName);

  }

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
} // namespace kendra
} // namespace Aws
