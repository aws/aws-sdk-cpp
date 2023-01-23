/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

TeamMember::TeamMember(JsonView jsonValue) : 
    m_userArnHasBeenSet(false),
    m_projectRoleHasBeenSet(false),
    m_remoteAccessAllowed(false),
    m_remoteAccessAllowedHasBeenSet(false)
{
  *this = jsonValue;
}

TeamMember& TeamMember::operator =(JsonView jsonValue)
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
