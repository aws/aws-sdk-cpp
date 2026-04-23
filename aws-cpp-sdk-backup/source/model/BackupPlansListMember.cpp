/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/backup/model/BackupPlansListMember.h>
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

BackupPlansListMember::BackupPlansListMember() : 
    m_backupPlanArnHasBeenSet(false),
    m_backupPlanIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_deletionDateHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_backupPlanNameHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_lastExecutionDateHasBeenSet(false)
{
}

BackupPlansListMember::BackupPlansListMember(JsonView jsonValue) : 
    m_backupPlanArnHasBeenSet(false),
    m_backupPlanIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_deletionDateHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_backupPlanNameHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_lastExecutionDateHasBeenSet(false)
{
  *this = jsonValue;
}

BackupPlansListMember& BackupPlansListMember::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletionDate"))
  {
    m_deletionDate = jsonValue.GetDouble("DeletionDate");

    m_deletionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");

    m_versionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupPlanName"))
  {
    m_backupPlanName = jsonValue.GetString("BackupPlanName");

    m_backupPlanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastExecutionDate"))
  {
    m_lastExecutionDate = jsonValue.GetDouble("LastExecutionDate");

    m_lastExecutionDateHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupPlansListMember::Jsonize() const
{
  JsonValue payload;

  if(m_backupPlanArnHasBeenSet)
  {
   payload.WithString("BackupPlanArn", m_backupPlanArn);

  }

  if(m_backupPlanIdHasBeenSet)
  {
   payload.WithString("BackupPlanId", m_backupPlanId);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_deletionDateHasBeenSet)
  {
   payload.WithDouble("DeletionDate", m_deletionDate.SecondsWithMSPrecision());
  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  if(m_backupPlanNameHasBeenSet)
  {
   payload.WithString("BackupPlanName", m_backupPlanName);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_lastExecutionDateHasBeenSet)
  {
   payload.WithDouble("LastExecutionDate", m_lastExecutionDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
