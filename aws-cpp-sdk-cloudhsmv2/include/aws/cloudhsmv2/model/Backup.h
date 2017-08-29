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
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudhsmv2/model/BackupState.h>
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
namespace CloudHSMV2
{
namespace Model
{

  /**
   * <p>Contains information about a backup of an AWS CloudHSM cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/Backup">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDHSMV2_API Backup
  {
  public:
    Backup();
    Backup(const Aws::Utils::Json::JsonValue& jsonValue);
    Backup& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline Backup& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline Backup& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the backup.</p>
     */
    inline Backup& WithBackupId(const char* value) { SetBackupId(value); return *this;}


    /**
     * <p>The state of the backup.</p>
     */
    inline const BackupState& GetBackupState() const{ return m_backupState; }

    /**
     * <p>The state of the backup.</p>
     */
    inline void SetBackupState(const BackupState& value) { m_backupStateHasBeenSet = true; m_backupState = value; }

    /**
     * <p>The state of the backup.</p>
     */
    inline void SetBackupState(BackupState&& value) { m_backupStateHasBeenSet = true; m_backupState = std::move(value); }

    /**
     * <p>The state of the backup.</p>
     */
    inline Backup& WithBackupState(const BackupState& value) { SetBackupState(value); return *this;}

    /**
     * <p>The state of the backup.</p>
     */
    inline Backup& WithBackupState(BackupState&& value) { SetBackupState(std::move(value)); return *this;}


    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline Backup& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline Backup& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the cluster that was backed up.</p>
     */
    inline Backup& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The date and time when the backup was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }

    /**
     * <p>The date and time when the backup was created.</p>
     */
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }

    /**
     * <p>The date and time when the backup was created.</p>
     */
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::move(value); }

    /**
     * <p>The date and time when the backup was created.</p>
     */
    inline Backup& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}

    /**
     * <p>The date and time when the backup was created.</p>
     */
    inline Backup& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet;

    BackupState m_backupState;
    bool m_backupStateHasBeenSet;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
