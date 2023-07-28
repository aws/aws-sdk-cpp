/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateSnaplockConfiguration.h>
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

CreateSnaplockConfiguration::CreateSnaplockConfiguration() : 
    m_auditLogVolume(false),
    m_auditLogVolumeHasBeenSet(false),
    m_autocommitPeriodHasBeenSet(false),
    m_privilegedDelete(PrivilegedDelete::NOT_SET),
    m_privilegedDeleteHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_snaplockType(SnaplockType::NOT_SET),
    m_snaplockTypeHasBeenSet(false),
    m_volumeAppendModeEnabled(false),
    m_volumeAppendModeEnabledHasBeenSet(false)
{
}

CreateSnaplockConfiguration::CreateSnaplockConfiguration(JsonView jsonValue) : 
    m_auditLogVolume(false),
    m_auditLogVolumeHasBeenSet(false),
    m_autocommitPeriodHasBeenSet(false),
    m_privilegedDelete(PrivilegedDelete::NOT_SET),
    m_privilegedDeleteHasBeenSet(false),
    m_retentionPeriodHasBeenSet(false),
    m_snaplockType(SnaplockType::NOT_SET),
    m_snaplockTypeHasBeenSet(false),
    m_volumeAppendModeEnabled(false),
    m_volumeAppendModeEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

CreateSnaplockConfiguration& CreateSnaplockConfiguration::operator =(JsonView jsonValue)
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

JsonValue CreateSnaplockConfiguration::Jsonize() const
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
