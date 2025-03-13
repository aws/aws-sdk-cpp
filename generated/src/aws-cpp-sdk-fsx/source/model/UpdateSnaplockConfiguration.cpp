/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateSnaplockConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

UpdateSnaplockConfiguration::UpdateSnaplockConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateSnaplockConfiguration& UpdateSnaplockConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuditLogVolume"))
  {
    m_auditLogVolume = jsonValue.GetBool("AuditLogVolume");
    m_auditLogVolumeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutocommitPeriod"))
  {
    m_autocommitPeriod = jsonValue.GetObject("AutocommitPeriod");
    m_autocommitPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PrivilegedDelete"))
  {
    m_privilegedDelete = PrivilegedDeleteMapper::GetPrivilegedDeleteForName(jsonValue.GetString("PrivilegedDelete"));
    m_privilegedDeleteHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetObject("RetentionPeriod");
    m_retentionPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeAppendModeEnabled"))
  {
    m_volumeAppendModeEnabled = jsonValue.GetBool("VolumeAppendModeEnabled");
    m_volumeAppendModeEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateSnaplockConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_auditLogVolumeHasBeenSet)
  {
   payload.WithBool("AuditLogVolume", m_auditLogVolume);

  }

  if(m_autocommitPeriodHasBeenSet)
  {
   payload.WithObject("AutocommitPeriod", m_autocommitPeriod.Jsonize());

  }

  if(m_privilegedDeleteHasBeenSet)
  {
   payload.WithString("PrivilegedDelete", PrivilegedDeleteMapper::GetNameForPrivilegedDelete(m_privilegedDelete));
  }

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithObject("RetentionPeriod", m_retentionPeriod.Jsonize());

  }

  if(m_volumeAppendModeEnabledHasBeenSet)
  {
   payload.WithBool("VolumeAppendModeEnabled", m_volumeAppendModeEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
