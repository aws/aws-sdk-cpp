/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Changes to the Amazon Redshift cluster that are currently
   * pending.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterPendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterPendingModifiedValues
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterPendingModifiedValues();
    AWS_SECURITYHUB_API AwsRedshiftClusterPendingModifiedValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterPendingModifiedValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The pending or in-progress change to the automated snapshot retention
     * period.</p>
     */
    inline int GetAutomatedSnapshotRetentionPeriod() const{ return m_automatedSnapshotRetentionPeriod; }

    /**
     * <p>The pending or in-progress change to the automated snapshot retention
     * period.</p>
     */
    inline bool AutomatedSnapshotRetentionPeriodHasBeenSet() const { return m_automatedSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The pending or in-progress change to the automated snapshot retention
     * period.</p>
     */
    inline void SetAutomatedSnapshotRetentionPeriod(int value) { m_automatedSnapshotRetentionPeriodHasBeenSet = true; m_automatedSnapshotRetentionPeriod = value; }

    /**
     * <p>The pending or in-progress change to the automated snapshot retention
     * period.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithAutomatedSnapshotRetentionPeriod(int value) { SetAutomatedSnapshotRetentionPeriod(value); return *this;}


    /**
     * <p>The pending or in-progress change to the identifier for the cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The pending or in-progress change to the identifier for the cluster.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The pending or in-progress change to the identifier for the cluster.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The pending or in-progress change to the identifier for the cluster.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The pending or in-progress change to the identifier for the cluster.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The pending or in-progress change to the identifier for the cluster.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The pending or in-progress change to the identifier for the cluster.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The pending or in-progress change to the identifier for the cluster.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The pending or in-progress change to the cluster type.</p>
     */
    inline const Aws::String& GetClusterType() const{ return m_clusterType; }

    /**
     * <p>The pending or in-progress change to the cluster type.</p>
     */
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }

    /**
     * <p>The pending or in-progress change to the cluster type.</p>
     */
    inline void SetClusterType(const Aws::String& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }

    /**
     * <p>The pending or in-progress change to the cluster type.</p>
     */
    inline void SetClusterType(Aws::String&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }

    /**
     * <p>The pending or in-progress change to the cluster type.</p>
     */
    inline void SetClusterType(const char* value) { m_clusterTypeHasBeenSet = true; m_clusterType.assign(value); }

    /**
     * <p>The pending or in-progress change to the cluster type.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithClusterType(const Aws::String& value) { SetClusterType(value); return *this;}

    /**
     * <p>The pending or in-progress change to the cluster type.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithClusterType(Aws::String&& value) { SetClusterType(std::move(value)); return *this;}

    /**
     * <p>The pending or in-progress change to the cluster type.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithClusterType(const char* value) { SetClusterType(value); return *this;}


    /**
     * <p>The pending or in-progress change to the service version.</p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }

    /**
     * <p>The pending or in-progress change to the service version.</p>
     */
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }

    /**
     * <p>The pending or in-progress change to the service version.</p>
     */
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }

    /**
     * <p>The pending or in-progress change to the service version.</p>
     */
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::move(value); }

    /**
     * <p>The pending or in-progress change to the service version.</p>
     */
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }

    /**
     * <p>The pending or in-progress change to the service version.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}

    /**
     * <p>The pending or in-progress change to the service version.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithClusterVersion(Aws::String&& value) { SetClusterVersion(std::move(value)); return *this;}

    /**
     * <p>The pending or in-progress change to the service version.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}


    /**
     * <p>The encryption type for a cluster.</p>
     */
    inline const Aws::String& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * <p>The encryption type for a cluster.</p>
     */
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }

    /**
     * <p>The encryption type for a cluster.</p>
     */
    inline void SetEncryptionType(const Aws::String& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * <p>The encryption type for a cluster.</p>
     */
    inline void SetEncryptionType(Aws::String&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * <p>The encryption type for a cluster.</p>
     */
    inline void SetEncryptionType(const char* value) { m_encryptionTypeHasBeenSet = true; m_encryptionType.assign(value); }

    /**
     * <p>The encryption type for a cluster.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithEncryptionType(const Aws::String& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The encryption type for a cluster.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithEncryptionType(Aws::String&& value) { SetEncryptionType(std::move(value)); return *this;}

    /**
     * <p>The encryption type for a cluster.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithEncryptionType(const char* value) { SetEncryptionType(value); return *this;}


    /**
     * <p>Indicates whether to create the cluster with enhanced VPC routing
     * enabled.</p>
     */
    inline bool GetEnhancedVpcRouting() const{ return m_enhancedVpcRouting; }

    /**
     * <p>Indicates whether to create the cluster with enhanced VPC routing
     * enabled.</p>
     */
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }

    /**
     * <p>Indicates whether to create the cluster with enhanced VPC routing
     * enabled.</p>
     */
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }

    /**
     * <p>Indicates whether to create the cluster with enhanced VPC routing
     * enabled.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}


    /**
     * <p>The name of the maintenance track that the cluster changes to during the next
     * maintenance window.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const{ return m_maintenanceTrackName; }

    /**
     * <p>The name of the maintenance track that the cluster changes to during the next
     * maintenance window.</p>
     */
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }

    /**
     * <p>The name of the maintenance track that the cluster changes to during the next
     * maintenance window.</p>
     */
    inline void SetMaintenanceTrackName(const Aws::String& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = value; }

    /**
     * <p>The name of the maintenance track that the cluster changes to during the next
     * maintenance window.</p>
     */
    inline void SetMaintenanceTrackName(Aws::String&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::move(value); }

    /**
     * <p>The name of the maintenance track that the cluster changes to during the next
     * maintenance window.</p>
     */
    inline void SetMaintenanceTrackName(const char* value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName.assign(value); }

    /**
     * <p>The name of the maintenance track that the cluster changes to during the next
     * maintenance window.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithMaintenanceTrackName(const Aws::String& value) { SetMaintenanceTrackName(value); return *this;}

    /**
     * <p>The name of the maintenance track that the cluster changes to during the next
     * maintenance window.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithMaintenanceTrackName(Aws::String&& value) { SetMaintenanceTrackName(std::move(value)); return *this;}

    /**
     * <p>The name of the maintenance track that the cluster changes to during the next
     * maintenance window.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithMaintenanceTrackName(const char* value) { SetMaintenanceTrackName(value); return *this;}


    /**
     * <p>The pending or in-progress change to the master user password for the
     * cluster.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The pending or in-progress change to the master user password for the
     * cluster.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The pending or in-progress change to the master user password for the
     * cluster.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The pending or in-progress change to the master user password for the
     * cluster.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The pending or in-progress change to the master user password for the
     * cluster.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The pending or in-progress change to the master user password for the
     * cluster.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The pending or in-progress change to the master user password for the
     * cluster.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The pending or in-progress change to the master user password for the
     * cluster.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>The pending or in-progress change to the cluster's node type.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The pending or in-progress change to the cluster's node type.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The pending or in-progress change to the cluster's node type.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The pending or in-progress change to the cluster's node type.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The pending or in-progress change to the cluster's node type.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The pending or in-progress change to the cluster's node type.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The pending or in-progress change to the cluster's node type.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The pending or in-progress change to the cluster's node type.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The pending or in-progress change to the number of nodes in the cluster.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }

    /**
     * <p>The pending or in-progress change to the number of nodes in the cluster.</p>
     */
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }

    /**
     * <p>The pending or in-progress change to the number of nodes in the cluster.</p>
     */
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }

    /**
     * <p>The pending or in-progress change to the number of nodes in the cluster.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}


    /**
     * <p>The pending or in-progress change to whether the cluster can be connected to
     * from the public network.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>The pending or in-progress change to whether the cluster can be connected to
     * from the public network.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>The pending or in-progress change to whether the cluster can be connected to
     * from the public network.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>The pending or in-progress change to whether the cluster can be connected to
     * from the public network.</p>
     */
    inline AwsRedshiftClusterPendingModifiedValues& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}

  private:

    int m_automatedSnapshotRetentionPeriod;
    bool m_automatedSnapshotRetentionPeriodHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    Aws::String m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    bool m_enhancedVpcRouting;
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
