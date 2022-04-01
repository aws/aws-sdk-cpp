/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GroupNameAndArn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

GroupNameAndArn::GroupNameAndArn() : 
    m_groupNameHasBeenSet(false),
    m_groupArnHasBeenSet(false)
{
}

GroupNameAndArn::GroupNameAndArn(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_groupArnHasBeenSet(false)
{
  *this = jsonValue;
}

GroupNameAndArn& GroupNameAndArn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupName"))
  {
    m_groupName = jsonValue.GetString("groupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupArn"))
  {
    m_groupArn = jsonValue.GetString("groupArn");

    m_groupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupNameAndArn::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

  }

  if(m_groupArnHasBeenSet)
  {
   payload.WithString("groupArn", m_groupArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
