/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DeleteReplicationGroupMemberAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

DeleteReplicationGroupMemberAction::DeleteReplicationGroupMemberAction() : 
    m_regionNameHasBeenSet(false)
{
}

DeleteReplicationGroupMemberAction::DeleteReplicationGroupMemberAction(JsonView jsonValue) : 
    m_regionNameHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteReplicationGroupMemberAction& DeleteReplicationGroupMemberAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");

    m_regionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteReplicationGroupMemberAction::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
