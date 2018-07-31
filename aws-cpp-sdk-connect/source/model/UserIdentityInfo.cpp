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
    m_emailHasBeenSet(false)
{
}

UserIdentityInfo::UserIdentityInfo(JsonView jsonValue) : 
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_emailHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
