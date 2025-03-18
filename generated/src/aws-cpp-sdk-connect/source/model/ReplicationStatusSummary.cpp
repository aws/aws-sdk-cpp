/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ReplicationStatusSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ReplicationStatusSummary::ReplicationStatusSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ReplicationStatusSummary& ReplicationStatusSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplicationStatus"))
  {
    m_replicationStatus = InstanceReplicationStatusMapper::GetInstanceReplicationStatusForName(jsonValue.GetString("ReplicationStatus"));
    m_replicationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplicationStatusReason"))
  {
    m_replicationStatusReason = jsonValue.GetString("ReplicationStatusReason");
    m_replicationStatusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationStatusSummary::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_replicationStatusHasBeenSet)
  {
   payload.WithString("ReplicationStatus", InstanceReplicationStatusMapper::GetNameForInstanceReplicationStatus(m_replicationStatus));
  }

  if(m_replicationStatusReasonHasBeenSet)
  {
   payload.WithString("ReplicationStatusReason", m_replicationStatusReason);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
