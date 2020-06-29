/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BackupDetails.h>
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

BackupDetails::BackupDetails() : 
    m_backupArnHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_backupSizeBytes(0),
    m_backupSizeBytesHasBeenSet(false),
    m_backupStatus(BackupStatus::NOT_SET),
    m_backupStatusHasBeenSet(false),
    m_backupType(BackupType::NOT_SET),
    m_backupTypeHasBeenSet(false),
    m_backupCreationDateTimeHasBeenSet(false),
    m_backupExpiryDateTimeHasBeenSet(false)
{
}

BackupDetails::BackupDetails(JsonView jsonValue) : 
    m_backupArnHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_backupSizeBytes(0),
    m_backupSizeBytesHasBeenSet(false),
    m_backupStatus(BackupStatus::NOT_SET),
    m_backupStatusHasBeenSet(false),
    m_backupType(BackupType::NOT_SET),
    m_backupTypeHasBeenSet(false),
    m_backupCreationDateTimeHasBeenSet(false),
    m_backupExpiryDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

BackupDetails& BackupDetails::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("BackupSizeBytes"))
  {
    m_backupSizeBytes = jsonValue.GetInt64("BackupSizeBytes");

    m_backupSizeBytesHasBeenSet = true;
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

  return *this;
}

JsonValue BackupDetails::Jsonize() const
{
  JsonValue payload;

  if(m_backupArnHasBeenSet)
  {
   payload.WithString("BackupArn", m_backupArn);

  }

  if(m_backupNameHasBeenSet)
  {
   payload.WithString("BackupName", m_backupName);

  }

  if(m_backupSizeBytesHasBeenSet)
  {
   payload.WithInt64("BackupSizeBytes", m_backupSizeBytes);

  }

  if(m_backupStatusHasBeenSet)
  {
   payload.WithString("BackupStatus", BackupStatusMapper::GetNameForBackupStatus(m_backupStatus));
  }

  if(m_backupTypeHasBeenSet)
  {
   payload.WithString("BackupType", BackupTypeMapper::GetNameForBackupType(m_backupType));
  }

  if(m_backupCreationDateTimeHasBeenSet)
  {
   payload.WithDouble("BackupCreationDateTime", m_backupCreationDateTime.SecondsWithMSPrecision());
  }

  if(m_backupExpiryDateTimeHasBeenSet)
  {
   payload.WithDouble("BackupExpiryDateTime", m_backupExpiryDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
