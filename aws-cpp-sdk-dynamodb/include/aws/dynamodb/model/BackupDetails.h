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

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/BackupStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Contains the details of the backup created for the table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BackupDetails">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API BackupDetails
  {
  public:
    BackupDetails();
    BackupDetails(const Aws::Utils::Json::JsonValue& jsonValue);
    BackupDetails& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN associated with the backup.</p>
     */
    inline const Aws::String& GetBackupArn() const{ return m_backupArn; }

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline void SetBackupArn(const Aws::String& value) { m_backupArnHasBeenSet = true; m_backupArn = value; }

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline void SetBackupArn(Aws::String&& value) { m_backupArnHasBeenSet = true; m_backupArn = std::move(value); }

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline void SetBackupArn(const char* value) { m_backupArnHasBeenSet = true; m_backupArn.assign(value); }

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline BackupDetails& WithBackupArn(const Aws::String& value) { SetBackupArn(value); return *this;}

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline BackupDetails& WithBackupArn(Aws::String&& value) { SetBackupArn(std::move(value)); return *this;}

    /**
     * <p>ARN associated with the backup.</p>
     */
    inline BackupDetails& WithBackupArn(const char* value) { SetBackupArn(value); return *this;}


    /**
     * <p>Name of the requested backup.</p>
     */
    inline const Aws::String& GetBackupName() const{ return m_backupName; }

    /**
     * <p>Name of the requested backup.</p>
     */
    inline void SetBackupName(const Aws::String& value) { m_backupNameHasBeenSet = true; m_backupName = value; }

    /**
     * <p>Name of the requested backup.</p>
     */
    inline void SetBackupName(Aws::String&& value) { m_backupNameHasBeenSet = true; m_backupName = std::move(value); }

    /**
     * <p>Name of the requested backup.</p>
     */
    inline void SetBackupName(const char* value) { m_backupNameHasBeenSet = true; m_backupName.assign(value); }

    /**
     * <p>Name of the requested backup.</p>
     */
    inline BackupDetails& WithBackupName(const Aws::String& value) { SetBackupName(value); return *this;}

    /**
     * <p>Name of the requested backup.</p>
     */
    inline BackupDetails& WithBackupName(Aws::String&& value) { SetBackupName(std::move(value)); return *this;}

    /**
     * <p>Name of the requested backup.</p>
     */
    inline BackupDetails& WithBackupName(const char* value) { SetBackupName(value); return *this;}


    /**
     * <p>Size of the backup in bytes.</p>
     */
    inline long long GetBackupSizeBytes() const{ return m_backupSizeBytes; }

    /**
     * <p>Size of the backup in bytes.</p>
     */
    inline void SetBackupSizeBytes(long long value) { m_backupSizeBytesHasBeenSet = true; m_backupSizeBytes = value; }

    /**
     * <p>Size of the backup in bytes.</p>
     */
    inline BackupDetails& WithBackupSizeBytes(long long value) { SetBackupSizeBytes(value); return *this;}


    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED. </p>
     */
    inline const BackupStatus& GetBackupStatus() const{ return m_backupStatus; }

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED. </p>
     */
    inline void SetBackupStatus(const BackupStatus& value) { m_backupStatusHasBeenSet = true; m_backupStatus = value; }

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED. </p>
     */
    inline void SetBackupStatus(BackupStatus&& value) { m_backupStatusHasBeenSet = true; m_backupStatus = std::move(value); }

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED. </p>
     */
    inline BackupDetails& WithBackupStatus(const BackupStatus& value) { SetBackupStatus(value); return *this;}

    /**
     * <p>Backup can be in one of the following states: CREATING, ACTIVE, DELETED. </p>
     */
    inline BackupDetails& WithBackupStatus(BackupStatus&& value) { SetBackupStatus(std::move(value)); return *this;}


    /**
     * <p>Time at which the backup was created. This is the request time of the backup.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetBackupCreationDateTime() const{ return m_backupCreationDateTime; }

    /**
     * <p>Time at which the backup was created. This is the request time of the backup.
     * </p>
     */
    inline void SetBackupCreationDateTime(const Aws::Utils::DateTime& value) { m_backupCreationDateTimeHasBeenSet = true; m_backupCreationDateTime = value; }

    /**
     * <p>Time at which the backup was created. This is the request time of the backup.
     * </p>
     */
    inline void SetBackupCreationDateTime(Aws::Utils::DateTime&& value) { m_backupCreationDateTimeHasBeenSet = true; m_backupCreationDateTime = std::move(value); }

    /**
     * <p>Time at which the backup was created. This is the request time of the backup.
     * </p>
     */
    inline BackupDetails& WithBackupCreationDateTime(const Aws::Utils::DateTime& value) { SetBackupCreationDateTime(value); return *this;}

    /**
     * <p>Time at which the backup was created. This is the request time of the backup.
     * </p>
     */
    inline BackupDetails& WithBackupCreationDateTime(Aws::Utils::DateTime&& value) { SetBackupCreationDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_backupArn;
    bool m_backupArnHasBeenSet;

    Aws::String m_backupName;
    bool m_backupNameHasBeenSet;

    long long m_backupSizeBytes;
    bool m_backupSizeBytesHasBeenSet;

    BackupStatus m_backupStatus;
    bool m_backupStatusHasBeenSet;

    Aws::Utils::DateTime m_backupCreationDateTime;
    bool m_backupCreationDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
