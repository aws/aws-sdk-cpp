/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/UserGroupResolutionConfiguration.h>
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

UserGroupResolutionConfiguration::UserGroupResolutionConfiguration() : 
    m_userGroupResolutionMode(UserGroupResolutionMode::NOT_SET),
    m_userGroupResolutionModeHasBeenSet(false)
{
}

UserGroupResolutionConfiguration::UserGroupResolutionConfiguration(JsonView jsonValue) : 
    m_userGroupResolutionMode(UserGroupResolutionMode::NOT_SET),
    m_userGroupResolutionModeHasBeenSet(false)
{
  *this = jsonValue;
}

UserGroupResolutionConfiguration& UserGroupResolutionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserGroupResolutionMode"))
  {
    m_userGroupResolutionMode = UserGroupResolutionModeMapper::GetUserGroupResolutionModeForName(jsonValue.GetString("UserGroupResolutionMode"));

    m_userGroupResolutionModeHasBeenSet = true;
  }

  return *this;
}

JsonValue UserGroupResolutionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_userGroupResolutionModeHasBeenSet)
  {
   payload.WithString("UserGroupResolutionMode", UserGroupResolutionModeMapper::GetNameForUserGroupResolutionMode(m_userGroupResolutionMode));
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
