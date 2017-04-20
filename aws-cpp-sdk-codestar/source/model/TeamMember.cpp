/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codestar/model/TeamMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStar
{
namespace Model
{

TeamMember::TeamMember() : 
    m_userArnHasBeenSet(false),
    m_projectRoleHasBeenSet(false),
    m_remoteAccessAllowed(false),
    m_remoteAccessAllowedHasBeenSet(false)
{
}

TeamMember::TeamMember(const JsonValue& jsonValue) : 
    m_userArnHasBeenSet(false),
    m_projectRoleHasBeenSet(false),
    m_remoteAccessAllowed(false),
    m_remoteAccessAllowedHasBeenSet(false)
{
  *this = jsonValue;
}

TeamMember& TeamMember::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("userArn"))
  {
    m_userArn = jsonValue.GetString("userArn");

    m_userArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectRole"))
  {
    m_projectRole = jsonValue.GetString("projectRole");

    m_projectRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("remoteAccessAllowed"))
  {
    m_remoteAccessAllowed = jsonValue.GetBool("remoteAccessAllowed");

    m_remoteAccessAllowedHasBeenSet = true;
  }

  return *this;
}

JsonValue TeamMember::Jsonize() const
{
  JsonValue payload;

  if(m_userArnHasBeenSet)
  {
   payload.WithString("userArn", m_userArn);

  }

  if(m_projectRoleHasBeenSet)
  {
   payload.WithString("projectRole", m_projectRole);

  }

  if(m_remoteAccessAllowedHasBeenSet)
  {
   payload.WithBool("remoteAccessAllowed", m_remoteAccessAllowed);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStar
} // namespace Aws