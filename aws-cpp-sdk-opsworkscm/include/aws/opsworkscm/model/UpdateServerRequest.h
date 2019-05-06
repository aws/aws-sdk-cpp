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
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKSCM_API UpdateServerRequest : public OpsWorksCMRequest
  {
  public:
    UpdateServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Setting DisableAutomatedBackup to <code>true</code> disables automated or
     * scheduled backups. Automated backups are enabled by default. </p>
     */
    inline bool GetDisableAutomatedBackup() const{ return m_disableAutomatedBackup; }

    /**
     * <p>Setting DisableAutomatedBackup to <code>true</code> disables automated or
     * scheduled backups. Automated backups are enabled by default. </p>
     */
    inline bool DisableAutomatedBackupHasBeenSet() const { return m_disableAutomatedBackupHasBeenSet; }

    /**
     * <p>Setting DisableAutomatedBackup to <code>true</code> disables automated or
     * scheduled backups. Automated backups are enabled by default. </p>
     */
    inline void SetDisableAutomatedBackup(bool value) { m_disableAutomatedBackupHasBeenSet = true; m_disableAutomatedBackup = value; }

    /**
     * <p>Setting DisableAutomatedBackup to <code>true</code> disables automated or
     * scheduled backups. Automated backups are enabled by default. </p>
     */
    inline UpdateServerRequest& WithDisableAutomatedBackup(bool value) { SetDisableAutomatedBackup(value); return *this;}


    /**
     * <p>Sets the number of automated backups that you want to keep. </p>
     */
    inline int GetBackupRetentionCount() const{ return m_backupRetentionCount; }

    /**
     * <p>Sets the number of automated backups that you want to keep. </p>
     */
    inline bool BackupRetentionCountHasBeenSet() const { return m_backupRetentionCountHasBeenSet; }

    /**
     * <p>Sets the number of automated backups that you want to keep. </p>
     */
    inline void SetBackupRetentionCount(int value) { m_backupRetentionCountHasBeenSet = true; m_backupRetentionCount = value; }

    /**
     * <p>Sets the number of automated backups that you want to keep. </p>
     */
    inline UpdateServerRequest& WithBackupRetentionCount(int value) { SetBackupRetentionCount(value); return *this;}


    /**
     * <p>The name of the server to update. </p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the server to update. </p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name of the server to update. </p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the server to update. </p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the server to update. </p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the server to update. </p>
     */
    inline UpdateServerRequest& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the server to update. </p>
     */
    inline UpdateServerRequest& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the server to update. </p>
     */
    inline UpdateServerRequest& WithServerName(const char* value) { SetServerName(value); return *this;}


    
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    
    inline UpdateServerRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    
    inline UpdateServerRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    
    inline UpdateServerRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    
    inline UpdateServerRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    
    inline UpdateServerRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    
    inline UpdateServerRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}

  private:

    bool m_disableAutomatedBackup;
    bool m_disableAutomatedBackupHasBeenSet;

    int m_backupRetentionCount;
    bool m_backupRetentionCountHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
