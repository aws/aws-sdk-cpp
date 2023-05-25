/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/GroupOwnerSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

GroupOwnerSetting::GroupOwnerSetting() : 
    m_autoAddGroupOwner(false),
    m_autoAddGroupOwnerHasBeenSet(false),
    m_groupOwnerHasBeenSet(false)
{
}

GroupOwnerSetting::GroupOwnerSetting(JsonView jsonValue) : 
    m_autoAddGroupOwner(false),
    m_autoAddGroupOwnerHasBeenSet(false),
    m_groupOwnerHasBeenSet(false)
{
  *this = jsonValue;
}

GroupOwnerSetting& GroupOwnerSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoAddGroupOwner"))
  {
    m_autoAddGroupOwner = jsonValue.GetBool("AutoAddGroupOwner");

    m_autoAddGroupOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupOwner"))
  {
    m_groupOwner = jsonValue.GetString("GroupOwner");

    m_groupOwnerHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupOwnerSetting::Jsonize() const
{
  JsonValue payload;

  if(m_autoAddGroupOwnerHasBeenSet)
  {
   payload.WithBool("AutoAddGroupOwner", m_autoAddGroupOwner);

  }

  if(m_groupOwnerHasBeenSet)
  {
   payload.WithString("GroupOwner", m_groupOwner);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
