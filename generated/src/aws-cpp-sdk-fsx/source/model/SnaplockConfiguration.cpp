/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/SnaplockConfiguration.h>
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

SnaplockConfiguration::SnaplockConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SnaplockConfiguration& SnaplockConfiguration::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("SnaplockType"))
  {
    m_snaplockType = SnaplockTypeMapper::GetSnaplockTypeForName(jsonValue.GetString("SnaplockType"));
    m_snaplockTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeAppendModeEnabled"))
  {
    m_volumeAppendModeEnabled = jsonValue.GetBool("VolumeAppendModeEnabled");
    m_volumeAppendModeEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue SnaplockConfiguration::Jsonize() const
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

  if(m_snaplockTypeHasBeenSet)
  {
   payload.WithString("SnaplockType", SnaplockTypeMapper::GetNameForSnaplockType(m_snaplockType));
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
