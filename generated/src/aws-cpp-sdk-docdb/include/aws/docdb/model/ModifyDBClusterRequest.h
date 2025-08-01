/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/CloudwatchLogsExportConfiguration.h>
#include <aws/docdb/model/ServerlessV2ScalingConfiguration.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>ModifyDBCluster</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/ModifyDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class ModifyDBClusterRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API ModifyDBClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBCluster"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The cluster identifier for the cluster that is being modified. This parameter
     * is not case sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing <code>DBCluster</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    ModifyDBClusterRequest& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new cluster identifier for the cluster when renaming a cluster. This
     * value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or
     * contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p>
     */
    inline const Aws::String& GetNewDBClusterIdentifier() const { return m_newDBClusterIdentifier; }
    inline bool NewDBClusterIdentifierHasBeenSet() const { return m_newDBClusterIdentifierHasBeenSet; }
    template<typename NewDBClusterIdentifierT = Aws::String>
    void SetNewDBClusterIdentifier(NewDBClusterIdentifierT&& value) { m_newDBClusterIdentifierHasBeenSet = true; m_newDBClusterIdentifier = std::forward<NewDBClusterIdentifierT>(value); }
    template<typename NewDBClusterIdentifierT = Aws::String>
    ModifyDBClusterRequest& WithNewDBClusterIdentifier(NewDBClusterIdentifierT&& value) { SetNewDBClusterIdentifier(std::forward<NewDBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies whether the changes in this request and any pending
     * changes are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the cluster. If this
     * parameter is set to <code>false</code>, changes to the cluster are applied
     * during the next maintenance window.</p> <p>The <code>ApplyImmediately</code>
     * parameter affects only the <code>NewDBClusterIdentifier</code> and
     * <code>MasterUserPassword</code> values. If you set this parameter value to
     * <code>false</code>, the changes to the <code>NewDBClusterIdentifier</code> and
     * <code>MasterUserPassword</code> values are applied during the next maintenance
     * window. All other changes are applied immediately, regardless of the value of
     * the <code>ApplyImmediately</code> parameter.</p> <p>Default: <code>false</code>
     * </p>
     */
    inline bool GetApplyImmediately() const { return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline ModifyDBClusterRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days for which automated backups are retained. You must specify
     * a minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be a value from 1 to 35.</p> </li> </ul>
     */
    inline int GetBackupRetentionPeriod() const { return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline ModifyDBClusterRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster parameter group to use for the cluster.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const { return m_dBClusterParameterGroupName; }
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }
    template<typename DBClusterParameterGroupNameT = Aws::String>
    void SetDBClusterParameterGroupName(DBClusterParameterGroupNameT&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::forward<DBClusterParameterGroupNameT>(value); }
    template<typename DBClusterParameterGroupNameT = Aws::String>
    ModifyDBClusterRequest& WithDBClusterParameterGroupName(DBClusterParameterGroupNameT&& value) { SetDBClusterParameterGroupName(std::forward<DBClusterParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of virtual private cloud (VPC) security groups that the cluster will
     * belong to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value); }
    template<typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
    ModifyDBClusterRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value)); return *this;}
    template<typename VpcSecurityGroupIdsT = Aws::String>
    ModifyDBClusterRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The port number on which the cluster accepts connections.</p> <p>Constraints:
     * Must be a value from <code>1150</code> to <code>65535</code>. </p> <p>Default:
     * The same port as the original cluster.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline ModifyDBClusterRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except forward slash (/), double quote ("), or the
     * "at" symbol (@).</p> <p>Constraints: Must contain from 8 to 100 characters.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const { return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    template<typename MasterUserPasswordT = Aws::String>
    void SetMasterUserPassword(MasterUserPasswordT&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::forward<MasterUserPasswordT>(value); }
    template<typename MasterUserPasswordT = Aws::String>
    ModifyDBClusterRequest& WithMasterUserPassword(MasterUserPasswordT&& value) { SetMasterUserPassword(std::forward<MasterUserPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.
     * </p> <p>The default is a 30-minute window selected at random from an 8-hour
     * block of time for each Amazon Web Services Region. </p> <p>Constraints:</p> <ul>
     * <li> <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li>
     * <p>Must be in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window.</p> </li> <li> <p>Must be at
     * least 30 minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const { return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    template<typename PreferredBackupWindowT = Aws::String>
    void SetPreferredBackupWindow(PreferredBackupWindowT&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::forward<PreferredBackupWindowT>(value); }
    template<typename PreferredBackupWindowT = Aws::String>
    ModifyDBClusterRequest& WithPreferredBackupWindow(PreferredBackupWindowT&& value) { SetPreferredBackupWindow(std::forward<PreferredBackupWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * </p> <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints:
     * Minimum 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const { return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    void SetPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::forward<PreferredMaintenanceWindowT>(value); }
    template<typename PreferredMaintenanceWindowT = Aws::String>
    ModifyDBClusterRequest& WithPreferredMaintenanceWindow(PreferredMaintenanceWindowT&& value) { SetPreferredMaintenanceWindow(std::forward<PreferredMaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * Amazon CloudWatch Logs for a specific instance or cluster. The
     * <code>EnableLogTypes</code> and <code>DisableLogTypes</code> arrays determine
     * which logs are exported (or not exported) to CloudWatch Logs.</p>
     */
    inline const CloudwatchLogsExportConfiguration& GetCloudwatchLogsExportConfiguration() const { return m_cloudwatchLogsExportConfiguration; }
    inline bool CloudwatchLogsExportConfigurationHasBeenSet() const { return m_cloudwatchLogsExportConfigurationHasBeenSet; }
    template<typename CloudwatchLogsExportConfigurationT = CloudwatchLogsExportConfiguration>
    void SetCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfigurationT&& value) { m_cloudwatchLogsExportConfigurationHasBeenSet = true; m_cloudwatchLogsExportConfiguration = std::forward<CloudwatchLogsExportConfigurationT>(value); }
    template<typename CloudwatchLogsExportConfigurationT = CloudwatchLogsExportConfiguration>
    ModifyDBClusterRequest& WithCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfigurationT&& value) { SetCloudwatchLogsExportConfiguration(std::forward<CloudwatchLogsExportConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for Amazon DocumentDB use the
     * following command:</p> <p> <code>aws docdb describe-db-engine-versions --engine
     * docdb --query "DBEngineVersions[].EngineVersion"</code> </p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    ModifyDBClusterRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether major version upgrades are allowed.</p>
     * <p>Constraints: You must allow major version upgrades when specifying a value
     * for the <code>EngineVersion</code> parameter that is a different major version
     * than the DB cluster's current version.</p>
     */
    inline bool GetAllowMajorVersionUpgrade() const { return m_allowMajorVersionUpgrade; }
    inline bool AllowMajorVersionUpgradeHasBeenSet() const { return m_allowMajorVersionUpgradeHasBeenSet; }
    inline void SetAllowMajorVersionUpgrade(bool value) { m_allowMajorVersionUpgradeHasBeenSet = true; m_allowMajorVersionUpgrade = value; }
    inline ModifyDBClusterRequest& WithAllowMajorVersionUpgrade(bool value) { SetAllowMajorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this cluster can be deleted. If
     * <code>DeletionProtection</code> is enabled, the cluster cannot be deleted unless
     * it is modified and <code>DeletionProtection</code> is disabled.
     * <code>DeletionProtection</code> protects clusters from being accidentally
     * deleted.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline ModifyDBClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type to associate with the DB cluster.</p> <p>For information on
     * storage types for Amazon DocumentDB clusters, see Cluster storage configurations
     * in the <i>Amazon DocumentDB Developer Guide</i>.</p> <p>Valid values for storage
     * type - <code>standard | iopt1</code> </p> <p>Default value is <code>standard
     * </code> </p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    ModifyDBClusterRequest& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the scaling configuration of an Amazon DocumentDB Serverless
     * cluster.</p>
     */
    inline const ServerlessV2ScalingConfiguration& GetServerlessV2ScalingConfiguration() const { return m_serverlessV2ScalingConfiguration; }
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }
    template<typename ServerlessV2ScalingConfigurationT = ServerlessV2ScalingConfiguration>
    void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationT&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::forward<ServerlessV2ScalingConfigurationT>(value); }
    template<typename ServerlessV2ScalingConfigurationT = ServerlessV2ScalingConfiguration>
    ModifyDBClusterRequest& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfigurationT&& value) { SetServerlessV2ScalingConfiguration(std::forward<ServerlessV2ScalingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to manage the master user password with Amazon Web Services
     * Secrets Manager. If the cluster doesn't manage the master user password with
     * Amazon Web Services Secrets Manager, you can turn on this management. In this
     * case, you can't specify <code>MasterUserPassword</code>. If the cluster already
     * manages the master user password with Amazon Web Services Secrets Manager, and
     * you specify that the master user password is not managed with Amazon Web
     * Services Secrets Manager, then you must specify <code>MasterUserPassword</code>.
     * In this case, Amazon DocumentDB deletes the secret and uses the new password for
     * the master user specified by <code>MasterUserPassword</code>.</p>
     */
    inline bool GetManageMasterUserPassword() const { return m_manageMasterUserPassword; }
    inline bool ManageMasterUserPasswordHasBeenSet() const { return m_manageMasterUserPasswordHasBeenSet; }
    inline void SetManageMasterUserPassword(bool value) { m_manageMasterUserPasswordHasBeenSet = true; m_manageMasterUserPassword = value; }
    inline ModifyDBClusterRequest& WithManageMasterUserPassword(bool value) { SetManageMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if both of the following conditions are met:</p>
     * <ul> <li> <p>The cluster doesn't manage the master user password in Amazon Web
     * Services Secrets Manager. If the cluster already manages the master user
     * password in Amazon Web Services Secrets Manager, you can't change the KMS key
     * that is used to encrypt the secret.</p> </li> <li> <p>You are enabling
     * <code>ManageMasterUserPassword</code> to manage the master user password in
     * Amazon Web Services Secrets Manager. If you are turning on
     * <code>ManageMasterUserPassword</code> and don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * </li> </ul> <p>The Amazon Web Services KMS key identifier is the key ARN, key
     * ID, alias ARN, or alias name for the KMS key. To use a KMS key in a different
     * Amazon Web Services account, specify the key ARN or alias ARN.</p> <p>There is a
     * default KMS key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default KMS key for each Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetMasterUserSecretKmsKeyId() const { return m_masterUserSecretKmsKeyId; }
    inline bool MasterUserSecretKmsKeyIdHasBeenSet() const { return m_masterUserSecretKmsKeyIdHasBeenSet; }
    template<typename MasterUserSecretKmsKeyIdT = Aws::String>
    void SetMasterUserSecretKmsKeyId(MasterUserSecretKmsKeyIdT&& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = std::forward<MasterUserSecretKmsKeyIdT>(value); }
    template<typename MasterUserSecretKmsKeyIdT = Aws::String>
    ModifyDBClusterRequest& WithMasterUserSecretKmsKeyId(MasterUserSecretKmsKeyIdT&& value) { SetMasterUserSecretKmsKeyId(std::forward<MasterUserSecretKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to rotate the secret managed by Amazon Web Services Secrets
     * Manager for the master user password.</p> <p>This setting is valid only if the
     * master user password is managed by Amazon DocumentDB in Amazon Web Services
     * Secrets Manager for the cluster. The secret value contains the updated
     * password.</p> <p>Constraint: You must apply the change immediately when rotating
     * the master user password.</p>
     */
    inline bool GetRotateMasterUserPassword() const { return m_rotateMasterUserPassword; }
    inline bool RotateMasterUserPasswordHasBeenSet() const { return m_rotateMasterUserPasswordHasBeenSet; }
    inline void SetRotateMasterUserPassword(bool value) { m_rotateMasterUserPasswordHasBeenSet = true; m_rotateMasterUserPassword = value; }
    inline ModifyDBClusterRequest& WithRotateMasterUserPassword(bool value) { SetRotateMasterUserPassword(value); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_newDBClusterIdentifier;
    bool m_newDBClusterIdentifierHasBeenSet = false;

    bool m_applyImmediately{false};
    bool m_applyImmediatelyHasBeenSet = false;

    int m_backupRetentionPeriod{0};
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    CloudwatchLogsExportConfiguration m_cloudwatchLogsExportConfiguration;
    bool m_cloudwatchLogsExportConfigurationHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_allowMajorVersionUpgrade{false};
    bool m_allowMajorVersionUpgradeHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    ServerlessV2ScalingConfiguration m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    bool m_manageMasterUserPassword{false};
    bool m_manageMasterUserPasswordHasBeenSet = false;

    Aws::String m_masterUserSecretKmsKeyId;
    bool m_masterUserSecretKmsKeyIdHasBeenSet = false;

    bool m_rotateMasterUserPassword{false};
    bool m_rotateMasterUserPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
