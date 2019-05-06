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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API UpdateRelationalDatabaseRequest : public LightsailRequest
  {
  public:
    UpdateRelationalDatabaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRelationalDatabase"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your database to update.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }

    /**
     * <p>The name of your database to update.</p>
     */
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name of your database to update.</p>
     */
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }

    /**
     * <p>The name of your database to update.</p>
     */
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }

    /**
     * <p>The name of your database to update.</p>
     */
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }

    /**
     * <p>The name of your database to update.</p>
     */
    inline UpdateRelationalDatabaseRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name of your database to update.</p>
     */
    inline UpdateRelationalDatabaseRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of your database to update.</p>
     */
    inline UpdateRelationalDatabaseRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}


    /**
     * <p>The password for the master user of your database. The password can include
     * any printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain 8 to 41 characters.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The password for the master user of your database. The password can include
     * any printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain 8 to 41 characters.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The password for the master user of your database. The password can include
     * any printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain 8 to 41 characters.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The password for the master user of your database. The password can include
     * any printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain 8 to 41 characters.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The password for the master user of your database. The password can include
     * any printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain 8 to 41 characters.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The password for the master user of your database. The password can include
     * any printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain 8 to 41 characters.</p>
     */
    inline UpdateRelationalDatabaseRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The password for the master user of your database. The password can include
     * any printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain 8 to 41 characters.</p>
     */
    inline UpdateRelationalDatabaseRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the master user of your database. The password can include
     * any printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain 8 to 41 characters.</p>
     */
    inline UpdateRelationalDatabaseRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>When <code>true</code>, the master user password is changed to a new strong
     * password generated by Lightsail.</p> <p>Use the <code>get relational database
     * master user password</code> operation to get the new password.</p>
     */
    inline bool GetRotateMasterUserPassword() const{ return m_rotateMasterUserPassword; }

    /**
     * <p>When <code>true</code>, the master user password is changed to a new strong
     * password generated by Lightsail.</p> <p>Use the <code>get relational database
     * master user password</code> operation to get the new password.</p>
     */
    inline bool RotateMasterUserPasswordHasBeenSet() const { return m_rotateMasterUserPasswordHasBeenSet; }

    /**
     * <p>When <code>true</code>, the master user password is changed to a new strong
     * password generated by Lightsail.</p> <p>Use the <code>get relational database
     * master user password</code> operation to get the new password.</p>
     */
    inline void SetRotateMasterUserPassword(bool value) { m_rotateMasterUserPasswordHasBeenSet = true; m_rotateMasterUserPassword = value; }

    /**
     * <p>When <code>true</code>, the master user password is changed to a new strong
     * password generated by Lightsail.</p> <p>Use the <code>get relational database
     * master user password</code> operation to get the new password.</p>
     */
    inline UpdateRelationalDatabaseRequest& WithRotateMasterUserPassword(bool value) { SetRotateMasterUserPassword(value); return *this;}


    /**
     * <p>The daily time range during which automated backups are created for your
     * database if automated backups are enabled.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the <code>hh24:mi-hh24:mi</code> format.</p> <p>Example:
     * <code>16:00-16:30</code> </p> </li> <li> <p>Specified in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The daily time range during which automated backups are created for your
     * database if automated backups are enabled.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the <code>hh24:mi-hh24:mi</code> format.</p> <p>Example:
     * <code>16:00-16:30</code> </p> </li> <li> <p>Specified in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The daily time range during which automated backups are created for your
     * database if automated backups are enabled.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the <code>hh24:mi-hh24:mi</code> format.</p> <p>Example:
     * <code>16:00-16:30</code> </p> </li> <li> <p>Specified in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The daily time range during which automated backups are created for your
     * database if automated backups are enabled.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the <code>hh24:mi-hh24:mi</code> format.</p> <p>Example:
     * <code>16:00-16:30</code> </p> </li> <li> <p>Specified in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The daily time range during which automated backups are created for your
     * database if automated backups are enabled.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the <code>hh24:mi-hh24:mi</code> format.</p> <p>Example:
     * <code>16:00-16:30</code> </p> </li> <li> <p>Specified in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The daily time range during which automated backups are created for your
     * database if automated backups are enabled.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the <code>hh24:mi-hh24:mi</code> format.</p> <p>Example:
     * <code>16:00-16:30</code> </p> </li> <li> <p>Specified in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline UpdateRelationalDatabaseRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The daily time range during which automated backups are created for your
     * database if automated backups are enabled.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the <code>hh24:mi-hh24:mi</code> format.</p> <p>Example:
     * <code>16:00-16:30</code> </p> </li> <li> <p>Specified in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline UpdateRelationalDatabaseRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range during which automated backups are created for your
     * database if automated backups are enabled.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the <code>hh24:mi-hh24:mi</code> format.</p> <p>Example:
     * <code>16:00-16:30</code> </p> </li> <li> <p>Specified in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline UpdateRelationalDatabaseRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur on your
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Universal Coordinated Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur on your
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Universal Coordinated Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur on your
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Universal Coordinated Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur on your
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Universal Coordinated Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur on your
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Universal Coordinated Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur on your
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Universal Coordinated Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline UpdateRelationalDatabaseRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur on your
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Universal Coordinated Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline UpdateRelationalDatabaseRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur on your
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each AWS Region, occurring on a random day of the
     * week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Universal Coordinated Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline UpdateRelationalDatabaseRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>When <code>true</code>, enables automated backup retention for your
     * database.</p> <p>Updates are applied during the next maintenance window because
     * this can result in an outage.</p>
     */
    inline bool GetEnableBackupRetention() const{ return m_enableBackupRetention; }

    /**
     * <p>When <code>true</code>, enables automated backup retention for your
     * database.</p> <p>Updates are applied during the next maintenance window because
     * this can result in an outage.</p>
     */
    inline bool EnableBackupRetentionHasBeenSet() const { return m_enableBackupRetentionHasBeenSet; }

    /**
     * <p>When <code>true</code>, enables automated backup retention for your
     * database.</p> <p>Updates are applied during the next maintenance window because
     * this can result in an outage.</p>
     */
    inline void SetEnableBackupRetention(bool value) { m_enableBackupRetentionHasBeenSet = true; m_enableBackupRetention = value; }

    /**
     * <p>When <code>true</code>, enables automated backup retention for your
     * database.</p> <p>Updates are applied during the next maintenance window because
     * this can result in an outage.</p>
     */
    inline UpdateRelationalDatabaseRequest& WithEnableBackupRetention(bool value) { SetEnableBackupRetention(value); return *this;}


    /**
     * <p>When <code>true</code>, disables automated backup retention for your
     * database.</p> <p>Disabling backup retention deletes all automated database
     * backups. Before disabling this, you may want to create a snapshot of your
     * database using the <code>create relational database snapshot</code>
     * operation.</p> <p>Updates are applied during the next maintenance window because
     * this can result in an outage.</p>
     */
    inline bool GetDisableBackupRetention() const{ return m_disableBackupRetention; }

    /**
     * <p>When <code>true</code>, disables automated backup retention for your
     * database.</p> <p>Disabling backup retention deletes all automated database
     * backups. Before disabling this, you may want to create a snapshot of your
     * database using the <code>create relational database snapshot</code>
     * operation.</p> <p>Updates are applied during the next maintenance window because
     * this can result in an outage.</p>
     */
    inline bool DisableBackupRetentionHasBeenSet() const { return m_disableBackupRetentionHasBeenSet; }

    /**
     * <p>When <code>true</code>, disables automated backup retention for your
     * database.</p> <p>Disabling backup retention deletes all automated database
     * backups. Before disabling this, you may want to create a snapshot of your
     * database using the <code>create relational database snapshot</code>
     * operation.</p> <p>Updates are applied during the next maintenance window because
     * this can result in an outage.</p>
     */
    inline void SetDisableBackupRetention(bool value) { m_disableBackupRetentionHasBeenSet = true; m_disableBackupRetention = value; }

    /**
     * <p>When <code>true</code>, disables automated backup retention for your
     * database.</p> <p>Disabling backup retention deletes all automated database
     * backups. Before disabling this, you may want to create a snapshot of your
     * database using the <code>create relational database snapshot</code>
     * operation.</p> <p>Updates are applied during the next maintenance window because
     * this can result in an outage.</p>
     */
    inline UpdateRelationalDatabaseRequest& WithDisableBackupRetention(bool value) { SetDisableBackupRetention(value); return *this;}


    /**
     * <p>Specifies the accessibility options for your database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Specifies the accessibility options for your database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>Specifies the accessibility options for your database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Specifies the accessibility options for your database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline UpdateRelationalDatabaseRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>When <code>true</code>, applies changes immediately. When <code>false</code>,
     * applies changes during the preferred maintenance window. Some changes may cause
     * an outage.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>When <code>true</code>, applies changes immediately. When <code>false</code>,
     * applies changes during the preferred maintenance window. Some changes may cause
     * an outage.</p> <p>Default: <code>false</code> </p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>When <code>true</code>, applies changes immediately. When <code>false</code>,
     * applies changes during the preferred maintenance window. Some changes may cause
     * an outage.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>When <code>true</code>, applies changes immediately. When <code>false</code>,
     * applies changes during the preferred maintenance window. Some changes may cause
     * an outage.</p> <p>Default: <code>false</code> </p>
     */
    inline UpdateRelationalDatabaseRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}

  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;

    bool m_rotateMasterUserPassword;
    bool m_rotateMasterUserPasswordHasBeenSet;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    bool m_enableBackupRetention;
    bool m_enableBackupRetentionHasBeenSet;

    bool m_disableBackupRetention;
    bool m_disableBackupRetentionHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
