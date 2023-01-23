/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BackupSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

BackupSummary::BackupSummary() : 
    m_tableNameHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableArnHasBeenSet(false),
    m_backupArnHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_backupCreationDateTimeHasBeenSet(false),
    m_backupExpiryDateTimeHasBeenSet(false),
    m_backupStatus(BackupStatus::NOT_SET),
    m_backupStatusHasBeenSet(false),
    m_backupType(BackupType::NOT_SET),
    m_backupTypeHasBeenSet(false),
    m_backupSizeBytes(0),
    m_backupSizeBytesHasBeenSet(false)
{
}

BackupSummary::BackupSummary(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_tableArnHasBeenSet(false),
    m_backupArnHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_backupCreationDateTimeHasBeenSet(false),
    m_backupExpiryDateTimeHasBeenSet(false),
    m_backupStatus(BackupStatus::NOT_SET),
    m_backupStatusHasBeenSet(false),
    m_backupType(BackupType::NOT_SET),
    m_backupTypeHasBeenSet(false),
    m_backupSizeBytes(0),
    m_backupSizeBytesHasBeenSet(false)
{
  *this = jsonValue;
}

BackupSummary& BackupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableId"))
  {
    m_tableId = jsonValue.GetString("TableId");

    m_tableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableArn"))
  {
    m_tableArn = jsonValue.GetString("TableArn");

    m_tableArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupArn"))
  {
    m_backupArn = jsonValue.GetString("BackupArn");

    m_backupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupName"))
  {
    m_backupName = jsonValue.GetString("BackupName");

    m_backupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupCreationDateTime"))
  {
    m_backupCreationDateTime = jsonValue.GetDouble("BackupCreationDateTime");

    m_backupCreationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupExpiryDateTime"))
  {
    m_backupExpiryDateTime = jsonValue.GetDouble("BackupExpiryDateTime");

    m_backupExpiryDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupStatus"))
  {
    m_backupStatus = BackupStatusMapper::GetBackupStatusForName(jsonValue.GetString("BackupStatus"));

    m_backupStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupType"))
  {
    m_backupType = BackupTypeMapper::GetBackupTypeForName(jsonValue.GetString("BackupType"));

    m_backupTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupSizeBytes"))
  {
    m_backupSizeBytes = jsonValue.GetInt64("BackupSizeBytes");

    m_backupSizeBytesHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_tableIdHasBeenSet)
  {
   payload.WithString("TableId", m_tableId);

  }

  if(m_tableArnHasBeenSet)
  {
   payload.WithString("TableArn", m_tableArn);

  }

  if(m_backupArnHasBeenSet)
  {
   payload.WithString("BackupArn", m_backupArn);

  }

  if(m_backupNameHasBeenSet)
  {
   payload.WithString("BackupName", m_backupName);

  }

  if(m_backupCreationDateTimeHasBeenSet)
  {
   payload.WithDouble("BackupCreationDateTime", m_backupCreationDateTime.SecondsWithMSPrecision());
  }

  if(m_backupExpiryDateTimeHasBeenSet)
  {
   payload.WithDouble("BackupExpiryDateTime", m_backupExpiryDateTime.SecondsWithMSPrecision());
  }

  if(m_backupStatusHasBeenSet)
  {
   payload.WithString("BackupStatus", BackupStatusMapper::GetNameForBackupStatus(m_backupStatus));
  }

  if(m_backupTypeHasBeenSet)
  {
   payload.WithString("BackupType", BackupTypeMapper::GetNameForBackupType(m_backupType));
  }

  if(m_backupSizeBytesHasBeenSet)
  {
   payload.WithInt64("BackupSizeBytes", m_backupSizeBytes);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
