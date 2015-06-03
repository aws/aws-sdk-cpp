/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p></p>
  */
  class AWS_RDS_API PromoteReadReplicaRequest : public RDSRequest
  {
  public:
    PromoteReadReplicaRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The DB instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing Read Replica DB instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <copy>mydbinstance</copy></p>
    */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    /*
     <p> The DB instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing Read Replica DB instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <copy>mydbinstance</copy></p>
    */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifier = value; }

    /*
     <p> The DB instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing Read Replica DB instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <copy>mydbinstance</copy></p>
    */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifier.assign(value); }

    /*
     <p> The DB instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing Read Replica DB instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <copy>mydbinstance</copy></p>
    */
    inline PromoteReadReplicaRequest&  WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The DB instance identifier. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul> <li>Must be the identifier for an existing Read Replica DB instance</li> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <copy>mydbinstance</copy></p>
    */
    inline PromoteReadReplicaRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The number of days to retain automated backups. Setting this parameter to a positive number enables backups. Setting this parameter to 0 disables automated backups. </p> <p> Default: 1 </p> <p>Constraints:</p> <ul> <li>Must be a value from 0 to 8</li> </ul>
    */
    inline long GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    /*
     <p> The number of days to retain automated backups. Setting this parameter to a positive number enables backups. Setting this parameter to 0 disables automated backups. </p> <p> Default: 1 </p> <p>Constraints:</p> <ul> <li>Must be a value from 0 to 8</li> </ul>
    */
    inline void SetBackupRetentionPeriod(long value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /*
     <p> The number of days to retain automated backups. Setting this parameter to a positive number enables backups. Setting this parameter to 0 disables automated backups. </p> <p> Default: 1 </p> <p>Constraints:</p> <ul> <li>Must be a value from 0 to 8</li> </ul>
    */
    inline PromoteReadReplicaRequest&  WithBackupRetentionPeriod(long value) { SetBackupRetentionPeriod(value); return *this;}

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, using the <code>BackupRetentionPeriod</code> parameter. </p> <p> Default: A 30-minute window selected at random from an 8-hour block of time per region. See the Amazon RDS User Guide for the time blocks for each region from which the default backup windows are assigned. </p> <p> Constraints: Must be in the format <code>hh24:mi-hh24:mi</code>. Times should be Universal Time Coordinated (UTC). Must not conflict with the preferred maintenance window. Must be at least 30 minutes. </p>
    */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }
    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, using the <code>BackupRetentionPeriod</code> parameter. </p> <p> Default: A 30-minute window selected at random from an 8-hour block of time per region. See the Amazon RDS User Guide for the time blocks for each region from which the default backup windows are assigned. </p> <p> Constraints: Must be in the format <code>hh24:mi-hh24:mi</code>. Times should be Universal Time Coordinated (UTC). Must not conflict with the preferred maintenance window. Must be at least 30 minutes. </p>
    */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, using the <code>BackupRetentionPeriod</code> parameter. </p> <p> Default: A 30-minute window selected at random from an 8-hour block of time per region. See the Amazon RDS User Guide for the time blocks for each region from which the default backup windows are assigned. </p> <p> Constraints: Must be in the format <code>hh24:mi-hh24:mi</code>. Times should be Universal Time Coordinated (UTC). Must not conflict with the preferred maintenance window. Must be at least 30 minutes. </p>
    */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, using the <code>BackupRetentionPeriod</code> parameter. </p> <p> Default: A 30-minute window selected at random from an 8-hour block of time per region. See the Amazon RDS User Guide for the time blocks for each region from which the default backup windows are assigned. </p> <p> Constraints: Must be in the format <code>hh24:mi-hh24:mi</code>. Times should be Universal Time Coordinated (UTC). Must not conflict with the preferred maintenance window. Must be at least 30 minutes. </p>
    */
    inline PromoteReadReplicaRequest&  WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /*
     <p> The daily time range during which automated backups are created if automated backups are enabled, using the <code>BackupRetentionPeriod</code> parameter. </p> <p> Default: A 30-minute window selected at random from an 8-hour block of time per region. See the Amazon RDS User Guide for the time blocks for each region from which the default backup windows are assigned. </p> <p> Constraints: Must be in the format <code>hh24:mi-hh24:mi</code>. Times should be Universal Time Coordinated (UTC). Must not conflict with the preferred maintenance window. Must be at least 30 minutes. </p>
    */
    inline PromoteReadReplicaRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}

  private:
    Aws::String m_dBInstanceIdentifier;
    long m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;
    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
