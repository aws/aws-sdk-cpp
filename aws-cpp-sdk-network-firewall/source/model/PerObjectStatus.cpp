/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/PerObjectStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

PerObjectStatus::PerObjectStatus() : 
    m_syncStatus(PerObjectSyncStatus::NOT_SET),
    m_syncStatusHasBeenSet(false)
{
}

PerObjectStatus::PerObjectStatus(JsonView jsonValue) : 
    m_syncStatus(PerObjectSyncStatus::NOT_SET),
    m_syncStatusHasBeenSet(false)
{
  *this = jsonValue;
}

PerObjectStatus& PerObjectStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SyncStatus"))
  {
    m_syncStatus = PerObjectSyncStatusMapper::GetPerObjectSyncStatusForName(jsonValue.GetString("SyncStatus"));

    m_syncStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue PerObjectStatus::Jsonize() const
{
  JsonValue payload;

  if(m_syncStatusHasBeenSet)
  {
   payload.WithString("SyncStatus", PerObjectSyncStatusMapper::GetNameForPerObjectSyncStatus(m_syncStatus));
  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
