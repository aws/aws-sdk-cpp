/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/ReplicationGroupStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

ReplicationGroupStatus::ReplicationGroupStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

ReplicationGroupStatus& ReplicationGroupStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("keyspaceStatus"))
  {
    m_keyspaceStatus = KeyspaceStatusMapper::GetKeyspaceStatusForName(jsonValue.GetString("keyspaceStatus"));
    m_keyspaceStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tablesReplicationProgress"))
  {
    m_tablesReplicationProgress = jsonValue.GetString("tablesReplicationProgress");
    m_tablesReplicationProgressHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationGroupStatus::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_keyspaceStatusHasBeenSet)
  {
   payload.WithString("keyspaceStatus", KeyspaceStatusMapper::GetNameForKeyspaceStatus(m_keyspaceStatus));
  }

  if(m_tablesReplicationProgressHasBeenSet)
  {
   payload.WithString("tablesReplicationProgress", m_tablesReplicationProgress);

  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
