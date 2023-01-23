/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/Identity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

Identity::Identity() : 
    m_userHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_iamUserHasBeenSet(false),
    m_iamRoleHasBeenSet(false)
{
}

Identity::Identity(JsonView jsonValue) : 
    m_userHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_iamUserHasBeenSet(false),
    m_iamRoleHasBeenSet(false)
{
  *this = jsonValue;
}

Identity& Identity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetObject("user");

    m_userHasBeenSet = true;
  }

  if(jsonValue.ValueExists("group"))
  {
    m_group = jsonValue.GetObject("group");

    m_groupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iamUser"))
  {
    m_iamUser = jsonValue.GetObject("iamUser");

    m_iamUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iamRole"))
  {
    m_iamRole = jsonValue.GetObject("iamRole");

    m_iamRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue Identity::Jsonize() const
{
  JsonValue payload;

  if(m_userHasBeenSet)
  {
   payload.WithObject("user", m_user.Jsonize());

  }

  if(m_groupHasBeenSet)
  {
   payload.WithObject("group", m_group.Jsonize());

  }

  if(m_iamUserHasBeenSet)
  {
   payload.WithObject("iamUser", m_iamUser.Jsonize());

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithObject("iamRole", m_iamRole.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
