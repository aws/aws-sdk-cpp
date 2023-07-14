/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/SigninDelegateGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

SigninDelegateGroup::SigninDelegateGroup() : 
    m_groupNameHasBeenSet(false)
{
}

SigninDelegateGroup::SigninDelegateGroup(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false)
{
  *this = jsonValue;
}

SigninDelegateGroup& SigninDelegateGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SigninDelegateGroup::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
