/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/BackupSelectionsListMember.h>
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

BackupSelectionsListMember::BackupSelectionsListMember() : 
    m_selectionIdHasBeenSet(false),
    m_selectionNameHasBeenSet(false),
    m_backupPlanIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
}

BackupSelectionsListMember::BackupSelectionsListMember(JsonView jsonValue) : 
    m_selectionIdHasBeenSet(false),
    m_selectionNameHasBeenSet(false),
    m_backupPlanIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

BackupSelectionsListMember& BackupSelectionsListMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectionId"))
  {
    m_selectionId = jsonValue.GetString("SelectionId");

    m_selectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectionName"))
  {
    m_selectionName = jsonValue.GetString("SelectionName");

    m_selectionNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupSelectionsListMember::Jsonize() const
{
  JsonValue payload;

  if(m_selectionIdHasBeenSet)
  {
   payload.WithString("SelectionId", m_selectionId);

  }

  if(m_selectionNameHasBeenSet)
  {
   payload.WithString("SelectionName", m_selectionName);

  }

  if(m_backupPlanIdHasBeenSet)
  {
   payload.WithString("BackupPlanId", m_backupPlanId);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
