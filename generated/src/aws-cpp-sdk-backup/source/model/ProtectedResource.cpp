/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ProtectedResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

ProtectedResource::ProtectedResource() : 
    m_resourceArnHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_lastBackupTimeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_lastBackupVaultArnHasBeenSet(false),
    m_lastRecoveryPointArnHasBeenSet(false)
{
}

ProtectedResource::ProtectedResource(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_lastBackupTimeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_lastBackupVaultArnHasBeenSet(false),
    m_lastRecoveryPointArnHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectedResource& ProtectedResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastBackupTime"))
  {
    m_lastBackupTime = jsonValue.GetDouble("LastBackupTime");

    m_lastBackupTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceName"))
  {
    m_resourceName = jsonValue.GetString("ResourceName");

    m_resourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastBackupVaultArn"))
  {
    m_lastBackupVaultArn = jsonValue.GetString("LastBackupVaultArn");

    m_lastBackupVaultArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRecoveryPointArn"))
  {
    m_lastRecoveryPointArn = jsonValue.GetString("LastRecoveryPointArn");

    m_lastRecoveryPointArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectedResource::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_lastBackupTimeHasBeenSet)
  {
   payload.WithDouble("LastBackupTime", m_lastBackupTime.SecondsWithMSPrecision());
  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("ResourceName", m_resourceName);

  }

  if(m_lastBackupVaultArnHasBeenSet)
  {
   payload.WithString("LastBackupVaultArn", m_lastBackupVaultArn);

  }

  if(m_lastRecoveryPointArnHasBeenSet)
  {
   payload.WithString("LastRecoveryPointArn", m_lastRecoveryPointArn);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
