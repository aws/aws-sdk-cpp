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
    m_backupCreationDateTimeHasBeenSet(false)
{
}

BackupDetails::BackupDetails(const JsonValue& jsonValue) : 
    m_backupArnHasBeenSet(false),
    m_backupNameHasBeenSet(false),
    m_backupSizeBytes(0),
    m_backupSizeBytesHasBeenSet(false),
    m_backupStatus(BackupStatus::NOT_SET),
    m_backupStatusHasBeenSet(false),
    m_backupCreationDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

BackupDetails& BackupDetails::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("BackupCreationDateTime"))
  {
    m_backupCreationDateTime = jsonValue.GetDouble("BackupCreationDateTime");

    m_backupCreationDateTimeHasBeenSet = true;
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

  if(m_backupCreationDateTimeHasBeenSet)
  {
   payload.WithDouble("BackupCreationDateTime", m_backupCreationDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
