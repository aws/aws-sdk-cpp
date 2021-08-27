/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>ModifyDBInstance</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyDBInstanceMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API ModifyDBInstanceRequest : public DocDBRequest
  {
  public:
    ModifyDBInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBInstance"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * <code>DBInstance</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * <code>DBInstance</code>.</p> </li> </ul>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * <code>DBInstance</code>.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * <code>DBInstance</code>.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * <code>DBInstance</code>.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * <code>DBInstance</code>.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * <code>DBInstance</code>.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * <code>DBInstance</code>.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The new compute and memory capacity of the instance; for example,
     * <code>db.r5.large</code>. Not all instance classes are available in all AWS
     * Regions. </p> <p>If you modify the instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request. </p> <p>Default: Uses existing setting.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The new compute and memory capacity of the instance; for example,
     * <code>db.r5.large</code>. Not all instance classes are available in all AWS
     * Regions. </p> <p>If you modify the instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request. </p> <p>Default: Uses existing setting.</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>The new compute and memory capacity of the instance; for example,
     * <code>db.r5.large</code>. Not all instance classes are available in all AWS
     * Regions. </p> <p>If you modify the instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request. </p> <p>Default: Uses existing setting.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The new compute and memory capacity of the instance; for example,
     * <code>db.r5.large</code>. Not all instance classes are available in all AWS
     * Regions. </p> <p>If you modify the instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request. </p> <p>Default: Uses existing setting.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The new compute and memory capacity of the instance; for example,
     * <code>db.r5.large</code>. Not all instance classes are available in all AWS
     * Regions. </p> <p>If you modify the instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request. </p> <p>Default: Uses existing setting.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The new compute and memory capacity of the instance; for example,
     * <code>db.r5.large</code>. Not all instance classes are available in all AWS
     * Regions. </p> <p>If you modify the instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request. </p> <p>Default: Uses existing setting.</p>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The new compute and memory capacity of the instance; for example,
     * <code>db.r5.large</code>. Not all instance classes are available in all AWS
     * Regions. </p> <p>If you modify the instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request. </p> <p>Default: Uses existing setting.</p>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The new compute and memory capacity of the instance; for example,
     * <code>db.r5.large</code>. Not all instance classes are available in all AWS
     * Regions. </p> <p>If you modify the instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request. </p> <p>Default: Uses existing setting.</p>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>Specifies whether the modifications in this request and any pending
     * modifications are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the instance. </p> <p> If
     * this parameter is set to <code>false</code>, changes to the instance are applied
     * during the next maintenance window. Some parameter changes can cause an outage
     * and are applied on the next reboot.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>Specifies whether the modifications in this request and any pending
     * modifications are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the instance. </p> <p> If
     * this parameter is set to <code>false</code>, changes to the instance are applied
     * during the next maintenance window. Some parameter changes can cause an outage
     * and are applied on the next reboot.</p> <p>Default: <code>false</code> </p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>Specifies whether the modifications in this request and any pending
     * modifications are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the instance. </p> <p> If
     * this parameter is set to <code>false</code>, changes to the instance are applied
     * during the next maintenance window. Some parameter changes can cause an outage
     * and are applied on the next reboot.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>Specifies whether the modifications in this request and any pending
     * modifications are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the instance. </p> <p> If
     * this parameter is set to <code>false</code>, changes to the instance are applied
     * during the next maintenance window. Some parameter changes can cause an outage
     * and are applied on the next reboot.</p> <p>Default: <code>false</code> </p>
     */
    inline ModifyDBInstanceRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}


    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter doesn't result in an
     * outage except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, changing this
     * parameter causes a reboot of the instance. If you are moving this window to the
     * current time, there must be at least 30 minutes between the current time and end
     * of the window to ensure that pending changes are applied.</p> <p>Default: Uses
     * existing setting.</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Must be at
     * least 30 minutes.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter doesn't result in an
     * outage except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, changing this
     * parameter causes a reboot of the instance. If you are moving this window to the
     * current time, there must be at least 30 minutes between the current time and end
     * of the window to ensure that pending changes are applied.</p> <p>Default: Uses
     * existing setting.</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Must be at
     * least 30 minutes.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter doesn't result in an
     * outage except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, changing this
     * parameter causes a reboot of the instance. If you are moving this window to the
     * current time, there must be at least 30 minutes between the current time and end
     * of the window to ensure that pending changes are applied.</p> <p>Default: Uses
     * existing setting.</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Must be at
     * least 30 minutes.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter doesn't result in an
     * outage except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, changing this
     * parameter causes a reboot of the instance. If you are moving this window to the
     * current time, there must be at least 30 minutes between the current time and end
     * of the window to ensure that pending changes are applied.</p> <p>Default: Uses
     * existing setting.</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Must be at
     * least 30 minutes.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter doesn't result in an
     * outage except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, changing this
     * parameter causes a reboot of the instance. If you are moving this window to the
     * current time, there must be at least 30 minutes between the current time and end
     * of the window to ensure that pending changes are applied.</p> <p>Default: Uses
     * existing setting.</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Must be at
     * least 30 minutes.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter doesn't result in an
     * outage except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, changing this
     * parameter causes a reboot of the instance. If you are moving this window to the
     * current time, there must be at least 30 minutes between the current time and end
     * of the window to ensure that pending changes are applied.</p> <p>Default: Uses
     * existing setting.</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Must be at
     * least 30 minutes.</p>
     */
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter doesn't result in an
     * outage except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, changing this
     * parameter causes a reboot of the instance. If you are moving this window to the
     * current time, there must be at least 30 minutes between the current time and end
     * of the window to ensure that pending changes are applied.</p> <p>Default: Uses
     * existing setting.</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Must be at
     * least 30 minutes.</p>
     */
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter doesn't result in an
     * outage except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, changing this
     * parameter causes a reboot of the instance. If you are moving this window to the
     * current time, there must be at least 30 minutes between the current time and end
     * of the window to ensure that pending changes are applied.</p> <p>Default: Uses
     * existing setting.</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints: Must be at
     * least 30 minutes.</p>
     */
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>Indicates that minor version upgrades are applied automatically to the
     * instance during the maintenance window. Changing this parameter doesn't result
     * in an outage except in the following case, and the change is asynchronously
     * applied as soon as possible. An outage results if this parameter is set to
     * <code>true</code> during the maintenance window, and a newer minor version is
     * available, and Amazon DocumentDB has enabled automatic patching for that engine
     * version. </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>Indicates that minor version upgrades are applied automatically to the
     * instance during the maintenance window. Changing this parameter doesn't result
     * in an outage except in the following case, and the change is asynchronously
     * applied as soon as possible. An outage results if this parameter is set to
     * <code>true</code> during the maintenance window, and a newer minor version is
     * available, and Amazon DocumentDB has enabled automatic patching for that engine
     * version. </p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>Indicates that minor version upgrades are applied automatically to the
     * instance during the maintenance window. Changing this parameter doesn't result
     * in an outage except in the following case, and the change is asynchronously
     * applied as soon as possible. An outage results if this parameter is set to
     * <code>true</code> during the maintenance window, and a newer minor version is
     * available, and Amazon DocumentDB has enabled automatic patching for that engine
     * version. </p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>Indicates that minor version upgrades are applied automatically to the
     * instance during the maintenance window. Changing this parameter doesn't result
     * in an outage except in the following case, and the change is asynchronously
     * applied as soon as possible. An outage results if this parameter is set to
     * <code>true</code> during the maintenance window, and a newer minor version is
     * available, and Amazon DocumentDB has enabled automatic patching for that engine
     * version. </p>
     */
    inline ModifyDBInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p> The new instance identifier for the instance when renaming an instance. When
     * you change the instance identifier, an instance reboot occurs immediately if you
     * set <code>Apply Immediately</code> to <code>true</code>. It occurs during the
     * next maintenance window if you set <code>Apply Immediately</code> to
     * <code>false</code>. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     * <p>Example: <code>mydbinstance</code> </p>
     */
    inline const Aws::String& GetNewDBInstanceIdentifier() const{ return m_newDBInstanceIdentifier; }

    /**
     * <p> The new instance identifier for the instance when renaming an instance. When
     * you change the instance identifier, an instance reboot occurs immediately if you
     * set <code>Apply Immediately</code> to <code>true</code>. It occurs during the
     * next maintenance window if you set <code>Apply Immediately</code> to
     * <code>false</code>. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     * <p>Example: <code>mydbinstance</code> </p>
     */
    inline bool NewDBInstanceIdentifierHasBeenSet() const { return m_newDBInstanceIdentifierHasBeenSet; }

    /**
     * <p> The new instance identifier for the instance when renaming an instance. When
     * you change the instance identifier, an instance reboot occurs immediately if you
     * set <code>Apply Immediately</code> to <code>true</code>. It occurs during the
     * next maintenance window if you set <code>Apply Immediately</code> to
     * <code>false</code>. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     * <p>Example: <code>mydbinstance</code> </p>
     */
    inline void SetNewDBInstanceIdentifier(const Aws::String& value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier = value; }

    /**
     * <p> The new instance identifier for the instance when renaming an instance. When
     * you change the instance identifier, an instance reboot occurs immediately if you
     * set <code>Apply Immediately</code> to <code>true</code>. It occurs during the
     * next maintenance window if you set <code>Apply Immediately</code> to
     * <code>false</code>. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     * <p>Example: <code>mydbinstance</code> </p>
     */
    inline void SetNewDBInstanceIdentifier(Aws::String&& value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier = std::move(value); }

    /**
     * <p> The new instance identifier for the instance when renaming an instance. When
     * you change the instance identifier, an instance reboot occurs immediately if you
     * set <code>Apply Immediately</code> to <code>true</code>. It occurs during the
     * next maintenance window if you set <code>Apply Immediately</code> to
     * <code>false</code>. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     * <p>Example: <code>mydbinstance</code> </p>
     */
    inline void SetNewDBInstanceIdentifier(const char* value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier.assign(value); }

    /**
     * <p> The new instance identifier for the instance when renaming an instance. When
     * you change the instance identifier, an instance reboot occurs immediately if you
     * set <code>Apply Immediately</code> to <code>true</code>. It occurs during the
     * next maintenance window if you set <code>Apply Immediately</code> to
     * <code>false</code>. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     * <p>Example: <code>mydbinstance</code> </p>
     */
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(const Aws::String& value) { SetNewDBInstanceIdentifier(value); return *this;}

    /**
     * <p> The new instance identifier for the instance when renaming an instance. When
     * you change the instance identifier, an instance reboot occurs immediately if you
     * set <code>Apply Immediately</code> to <code>true</code>. It occurs during the
     * next maintenance window if you set <code>Apply Immediately</code> to
     * <code>false</code>. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     * <p>Example: <code>mydbinstance</code> </p>
     */
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(Aws::String&& value) { SetNewDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p> The new instance identifier for the instance when renaming an instance. When
     * you change the instance identifier, an instance reboot occurs immediately if you
     * set <code>Apply Immediately</code> to <code>true</code>. It occurs during the
     * next maintenance window if you set <code>Apply Immediately</code> to
     * <code>false</code>. This value is stored as a lowercase string. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens.</p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens.</p> </li> </ul>
     * <p>Example: <code>mydbinstance</code> </p>
     */
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(const char* value) { SetNewDBInstanceIdentifier(value); return *this;}


    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }

    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }

    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }

    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline void SetCACertificateIdentifier(Aws::String&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::move(value); }

    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }

    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline ModifyDBInstanceRequest& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}

    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline ModifyDBInstanceRequest& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline ModifyDBInstanceRequest& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}


    /**
     * <p>A value that specifies the order in which an Amazon DocumentDB replica is
     * promoted to the primary instance after a failure of the existing primary
     * instance.</p> <p>Default: 1</p> <p>Valid values: 0-15</p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }

    /**
     * <p>A value that specifies the order in which an Amazon DocumentDB replica is
     * promoted to the primary instance after a failure of the existing primary
     * instance.</p> <p>Default: 1</p> <p>Valid values: 0-15</p>
     */
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }

    /**
     * <p>A value that specifies the order in which an Amazon DocumentDB replica is
     * promoted to the primary instance after a failure of the existing primary
     * instance.</p> <p>Default: 1</p> <p>Valid values: 0-15</p>
     */
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }

    /**
     * <p>A value that specifies the order in which an Amazon DocumentDB replica is
     * promoted to the primary instance after a failure of the existing primary
     * instance.</p> <p>Default: 1</p> <p>Valid values: 0-15</p>
     */
    inline ModifyDBInstanceRequest& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    Aws::String m_newDBInstanceIdentifier;
    bool m_newDBInstanceIdentifierHasBeenSet;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet;

    int m_promotionTier;
    bool m_promotionTierHasBeenSet;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
