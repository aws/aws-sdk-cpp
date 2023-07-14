/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/WorkloadShareSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

WorkloadShareSummary::WorkloadShareSummary() : 
    m_shareIdHasBeenSet(false),
    m_sharedWithHasBeenSet(false),
    m_permissionType(PermissionType::NOT_SET),
    m_permissionTypeHasBeenSet(false),
    m_status(ShareStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

WorkloadShareSummary::WorkloadShareSummary(JsonView jsonValue) : 
    m_shareIdHasBeenSet(false),
    m_sharedWithHasBeenSet(false),
    m_permissionType(PermissionType::NOT_SET),
    m_permissionTypeHasBeenSet(false),
    m_status(ShareStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

WorkloadShareSummary& WorkloadShareSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShareId"))
  {
    m_shareId = jsonValue.GetString("ShareId");

    m_shareIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharedWith"))
  {
    m_sharedWith = jsonValue.GetString("SharedWith");

    m_sharedWithHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PermissionType"))
  {
    m_permissionType = PermissionTypeMapper::GetPermissionTypeForName(jsonValue.GetString("PermissionType"));

    m_permissionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ShareStatusMapper::GetShareStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkloadShareSummary::Jsonize() const
{
  JsonValue payload;

  if(m_shareIdHasBeenSet)
  {
   payload.WithString("ShareId", m_shareId);

  }

  if(m_sharedWithHasBeenSet)
  {
   payload.WithString("SharedWith", m_sharedWith);

  }

  if(m_permissionTypeHasBeenSet)
  {
   payload.WithString("PermissionType", PermissionTypeMapper::GetNameForPermissionType(m_permissionType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ShareStatusMapper::GetNameForShareStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
