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

GroupOwnerSetting::GroupOwnerSetting(const JsonValue& jsonValue) : 
    m_autoAddGroupOwner(false),
    m_autoAddGroupOwnerHasBeenSet(false),
    m_groupOwnerHasBeenSet(false)
{
  *this = jsonValue;
}

GroupOwnerSetting& GroupOwnerSetting::operator =(const JsonValue& jsonValue)
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
