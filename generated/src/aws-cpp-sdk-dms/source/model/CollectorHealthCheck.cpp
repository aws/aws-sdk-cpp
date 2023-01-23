/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CollectorHealthCheck.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

CollectorHealthCheck::CollectorHealthCheck() : 
    m_collectorStatus(CollectorStatus::NOT_SET),
    m_collectorStatusHasBeenSet(false),
    m_localCollectorS3Access(false),
    m_localCollectorS3AccessHasBeenSet(false),
    m_webCollectorS3Access(false),
    m_webCollectorS3AccessHasBeenSet(false),
    m_webCollectorGrantedRoleBasedAccess(false),
    m_webCollectorGrantedRoleBasedAccessHasBeenSet(false)
{
}

CollectorHealthCheck::CollectorHealthCheck(JsonView jsonValue) : 
    m_collectorStatus(CollectorStatus::NOT_SET),
    m_collectorStatusHasBeenSet(false),
    m_localCollectorS3Access(false),
    m_localCollectorS3AccessHasBeenSet(false),
    m_webCollectorS3Access(false),
    m_webCollectorS3AccessHasBeenSet(false),
    m_webCollectorGrantedRoleBasedAccess(false),
    m_webCollectorGrantedRoleBasedAccessHasBeenSet(false)
{
  *this = jsonValue;
}

CollectorHealthCheck& CollectorHealthCheck::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CollectorStatus"))
  {
    m_collectorStatus = CollectorStatusMapper::GetCollectorStatusForName(jsonValue.GetString("CollectorStatus"));

    m_collectorStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalCollectorS3Access"))
  {
    m_localCollectorS3Access = jsonValue.GetBool("LocalCollectorS3Access");

    m_localCollectorS3AccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebCollectorS3Access"))
  {
    m_webCollectorS3Access = jsonValue.GetBool("WebCollectorS3Access");

    m_webCollectorS3AccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebCollectorGrantedRoleBasedAccess"))
  {
    m_webCollectorGrantedRoleBasedAccess = jsonValue.GetBool("WebCollectorGrantedRoleBasedAccess");

    m_webCollectorGrantedRoleBasedAccessHasBeenSet = true;
  }

  return *this;
}

JsonValue CollectorHealthCheck::Jsonize() const
{
  JsonValue payload;

  if(m_collectorStatusHasBeenSet)
  {
   payload.WithString("CollectorStatus", CollectorStatusMapper::GetNameForCollectorStatus(m_collectorStatus));
  }

  if(m_localCollectorS3AccessHasBeenSet)
  {
   payload.WithBool("LocalCollectorS3Access", m_localCollectorS3Access);

  }

  if(m_webCollectorS3AccessHasBeenSet)
  {
   payload.WithBool("WebCollectorS3Access", m_webCollectorS3Access);

  }

  if(m_webCollectorGrantedRoleBasedAccessHasBeenSet)
  {
   payload.WithBool("WebCollectorGrantedRoleBasedAccess", m_webCollectorGrantedRoleBasedAccess);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
