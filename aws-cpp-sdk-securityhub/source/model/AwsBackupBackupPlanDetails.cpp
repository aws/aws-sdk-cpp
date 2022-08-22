/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsBackupBackupPlanDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsBackupBackupPlanDetails::AwsBackupBackupPlanDetails() : 
    m_backupPlanHasBeenSet(false),
    m_backupPlanArnHasBeenSet(false),
    m_backupPlanIdHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

AwsBackupBackupPlanDetails::AwsBackupBackupPlanDetails(JsonView jsonValue) : 
    m_backupPlanHasBeenSet(false),
    m_backupPlanArnHasBeenSet(false),
    m_backupPlanIdHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsBackupBackupPlanDetails& AwsBackupBackupPlanDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupPlan"))
  {
    m_backupPlan = jsonValue.GetObject("BackupPlan");

    m_backupPlanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupPlanArn"))
  {
    m_backupPlanArn = jsonValue.GetString("BackupPlanArn");

    m_backupPlanArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupPlanId"))
  {
    m_backupPlanId = jsonValue.GetString("BackupPlanId");

    m_backupPlanIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");

    m_versionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsBackupBackupPlanDetails::Jsonize() const
{
  JsonValue payload;

  if(m_backupPlanHasBeenSet)
  {
   payload.WithObject("BackupPlan", m_backupPlan.Jsonize());

  }

  if(m_backupPlanArnHasBeenSet)
  {
   payload.WithString("BackupPlanArn", m_backupPlanArn);

  }

  if(m_backupPlanIdHasBeenSet)
  {
   payload.WithString("BackupPlanId", m_backupPlanId);

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
