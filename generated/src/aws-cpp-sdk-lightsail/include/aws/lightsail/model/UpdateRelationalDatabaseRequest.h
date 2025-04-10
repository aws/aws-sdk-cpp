﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateRelationalDatabaseRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API UpdateRelationalDatabaseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRelationalDatabase"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of your Lightsail database resource to update.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const { return m_relationalDatabaseName; }
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }
    template<typename RelationalDatabaseNameT = Aws::String>
    void SetRelationalDatabaseName(RelationalDatabaseNameT&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::forward<RelationalDatabaseNameT>(value); }
    template<typename RelationalDatabaseNameT = Aws::String>
    UpdateRelationalDatabaseRequest& WithRelationalDatabaseName(RelationalDatabaseNameT&& value) { SetRelationalDatabaseName(std::forward<RelationalDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p>My<b>SQL</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>PostgreSQL</b>
     * </p> <p>Constraints: Must contain from 8 to 128 characters.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const { return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    template<typename MasterUserPasswordT = Aws::String>
    void SetMasterUserPassword(MasterUserPasswordT&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::forward<MasterUserPasswordT>(value); }
    template<typename MasterUserPasswordT = Aws::String>
    UpdateRelationalDatabaseRequest& WithMasterUserPassword(MasterUserPasswordT&& value) { SetMasterUserPassword(std::forward<MasterUserPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, the master user password is changed to a new strong
     * password generated by Lightsail.</p> <p>Use the <code>get relational database
     * master user password</code> operation to get the new password.</p>
     */
    inline bool GetRotateMasterUserPassword() const { return m_rotateMasterUserPassword; }
    inline bool RotateMasterUserPasswordHasBeenSet() const { return m_rotateMasterUserPasswordHasBeenSet; }
    inline void SetRotateMasterUserPassword(bool value) { m_rotateMasterUserPasswordHasBeenSet = true; m_rotateMasterUserPassword = value; }
    inline UpdateRelationalDatabaseRequest& WithRotateMasterUserPassword(bool value) { SetRotateMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range during which automated backups are created for your
     * database if automated backups are enabled.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the <code>hh24:mi-hh24:mi</code> format.</p> <p>Example:
     * <code>16:00-16:30</code> </p> </li> <li> <p>Specified in Coordinated Universal
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    UpdateRelationalDatabaseRequest& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range during which system maintenance can occur on your
     * database.</p> <p>The default is a 30-minute window selected at random from an
     * 8-hour block of time for each Amazon Web Services Region, occurring on a random
     * day of the week.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * <code>ddd:hh24:mi-ddd:hh24:mi</code> format.</p> </li> <li> <p>Valid days: Mon,
     * Tue, Wed, Thu, Fri, Sat, Sun.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> <li> <p>Specified in Coordinated Universal Time (UTC).</p> </li> <li>
     * <p>Example: <code>Tue:17:00-Tue:17:30</code> </p> </li> </ul>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    UpdateRelationalDatabaseRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, enables automated backup retention for your
     * database.</p> <p>Updates are applied during the next maintenance window because
     * this can result in an outage.</p>
     */
    inline bool GetEnableBackupRetention() const { return m_enableBackupRetention; }
    inline bool EnableBackupRetentionHasBeenSet() const { return m_enableBackupRetentionHasBeenSet; }
    inline void SetEnableBackupRetention(bool value) { m_enableBackupRetentionHasBeenSet = true; m_enableBackupRetention = value; }
    inline UpdateRelationalDatabaseRequest& WithEnableBackupRetention(bool value) { SetEnableBackupRetention(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, disables automated backup retention for your
     * database.</p> <p>Disabling backup retention deletes all automated database
     * backups. Before disabling this, you may want to create a snapshot of your
     * database using the <code>create relational database snapshot</code>
     * operation.</p> <p>Updates are applied during the next maintenance window because
     * this can result in an outage.</p>
     */
    inline bool GetDisableBackupRetention() const { return m_disableBackupRetention; }
    inline bool DisableBackupRetentionHasBeenSet() const { return m_disableBackupRetentionHasBeenSet; }
    inline void SetDisableBackupRetention(bool value) { m_disableBackupRetentionHasBeenSet = true; m_disableBackupRetention = value; }
    inline UpdateRelationalDatabaseRequest& WithDisableBackupRetention(bool value) { SetDisableBackupRetention(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the accessibility options for your database. A value of
     * <code>true</code> specifies a database that is available to resources outside of
     * your Lightsail account. A value of <code>false</code> specifies a database that
     * is available only to your Lightsail resources in the same region as your
     * database.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline UpdateRelationalDatabaseRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, applies changes immediately. When <code>false</code>,
     * applies changes during the preferred maintenance window. Some changes may cause
     * an outage.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetApplyImmediately() const { return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline UpdateRelationalDatabaseRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the certificate that needs to be associated with the database.</p>
     */
    inline const Aws::String& GetCaCertificateIdentifier() const { return m_caCertificateIdentifier; }
    inline bool CaCertificateIdentifierHasBeenSet() const { return m_caCertificateIdentifierHasBeenSet; }
    template<typename CaCertificateIdentifierT = Aws::String>
    void SetCaCertificateIdentifier(CaCertificateIdentifierT&& value) { m_caCertificateIdentifierHasBeenSet = true; m_caCertificateIdentifier = std::forward<CaCertificateIdentifierT>(value); }
    template<typename CaCertificateIdentifierT = Aws::String>
    UpdateRelationalDatabaseRequest& WithCaCertificateIdentifier(CaCertificateIdentifierT&& value) { SetCaCertificateIdentifier(std::forward<CaCertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is used to update the major version of the database. Enter the
     * <code>blueprintId</code> for the major version that you want to update to.</p>
     * <p>Use the <a
     * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetRelationalDatabaseBlueprints.html">GetRelationalDatabaseBlueprints</a>
     * action to get a list of available blueprint IDs.</p>
     */
    inline const Aws::String& GetRelationalDatabaseBlueprintId() const { return m_relationalDatabaseBlueprintId; }
    inline bool RelationalDatabaseBlueprintIdHasBeenSet() const { return m_relationalDatabaseBlueprintIdHasBeenSet; }
    template<typename RelationalDatabaseBlueprintIdT = Aws::String>
    void SetRelationalDatabaseBlueprintId(RelationalDatabaseBlueprintIdT&& value) { m_relationalDatabaseBlueprintIdHasBeenSet = true; m_relationalDatabaseBlueprintId = std::forward<RelationalDatabaseBlueprintIdT>(value); }
    template<typename RelationalDatabaseBlueprintIdT = Aws::String>
    UpdateRelationalDatabaseRequest& WithRelationalDatabaseBlueprintId(RelationalDatabaseBlueprintIdT&& value) { SetRelationalDatabaseBlueprintId(std::forward<RelationalDatabaseBlueprintIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    bool m_rotateMasterUserPassword{false};
    bool m_rotateMasterUserPasswordHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_enableBackupRetention{false};
    bool m_enableBackupRetentionHasBeenSet = false;

    bool m_disableBackupRetention{false};
    bool m_disableBackupRetentionHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    bool m_applyImmediately{false};
    bool m_applyImmediatelyHasBeenSet = false;

    Aws::String m_caCertificateIdentifier;
    bool m_caCertificateIdentifierHasBeenSet = false;

    Aws::String m_relationalDatabaseBlueprintId;
    bool m_relationalDatabaseBlueprintIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
