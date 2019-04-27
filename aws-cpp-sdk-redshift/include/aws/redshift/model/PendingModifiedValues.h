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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes cluster attributes that are in a pending state. A change to one or
   * more the attributes was requested and is in progress or will be
   * applied.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/PendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API PendingModifiedValues
  {
  public:
    PendingModifiedValues();
    PendingModifiedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    PendingModifiedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The pending or in-progress change of the master user password for the
     * cluster.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The pending or in-progress change of the master user password for the
     * cluster.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The pending or in-progress change of the master user password for the
     * cluster.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The pending or in-progress change of the master user password for the
     * cluster.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The pending or in-progress change of the master user password for the
     * cluster.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The pending or in-progress change of the master user password for the
     * cluster.</p>
     */
    inline PendingModifiedValues& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The pending or in-progress change of the master user password for the
     * cluster.</p>
     */
    inline PendingModifiedValues& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The pending or in-progress change of the master user password for the
     * cluster.</p>
     */
    inline PendingModifiedValues& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>The pending or in-progress change of the cluster's node type.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The pending or in-progress change of the cluster's node type.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The pending or in-progress change of the cluster's node type.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The pending or in-progress change of the cluster's node type.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The pending or in-progress change of the cluster's node type.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The pending or in-progress change of the cluster's node type.</p>
     */
    inline PendingModifiedValues& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The pending or in-progress change of the cluster's node type.</p>
     */
    inline PendingModifiedValues& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The pending or in-progress change of the cluster's node type.</p>
     */
    inline PendingModifiedValues& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The pending or in-progress change of the number of nodes in the cluster.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }

    /**
     * <p>The pending or in-progress change of the number of nodes in the cluster.</p>
     */
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }

    /**
     * <p>The pending or in-progress change of the number of nodes in the cluster.</p>
     */
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }

    /**
     * <p>The pending or in-progress change of the number of nodes in the cluster.</p>
     */
    inline PendingModifiedValues& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}


    /**
     * <p>The pending or in-progress change of the cluster type.</p>
     */
    inline const Aws::String& GetClusterType() const{ return m_clusterType; }

    /**
     * <p>The pending or in-progress change of the cluster type.</p>
     */
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }

    /**
     * <p>The pending or in-progress change of the cluster type.</p>
     */
    inline void SetClusterType(const Aws::String& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }

    /**
     * <p>The pending or in-progress change of the cluster type.</p>
     */
    inline void SetClusterType(Aws::String&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }

    /**
     * <p>The pending or in-progress change of the cluster type.</p>
     */
    inline void SetClusterType(const char* value) { m_clusterTypeHasBeenSet = true; m_clusterType.assign(value); }

    /**
     * <p>The pending or in-progress change of the cluster type.</p>
     */
    inline PendingModifiedValues& WithClusterType(const Aws::String& value) { SetClusterType(value); return *this;}

    /**
     * <p>The pending or in-progress change of the cluster type.</p>
     */
    inline PendingModifiedValues& WithClusterType(Aws::String&& value) { SetClusterType(std::move(value)); return *this;}

    /**
     * <p>The pending or in-progress change of the cluster type.</p>
     */
    inline PendingModifiedValues& WithClusterType(const char* value) { SetClusterType(value); return *this;}


    /**
     * <p>The pending or in-progress change of the service version.</p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }

    /**
     * <p>The pending or in-progress change of the service version.</p>
     */
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }

    /**
     * <p>The pending or in-progress change of the service version.</p>
     */
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }

    /**
     * <p>The pending or in-progress change of the service version.</p>
     */
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::move(value); }

    /**
     * <p>The pending or in-progress change of the service version.</p>
     */
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }

    /**
     * <p>The pending or in-progress change of the service version.</p>
     */
    inline PendingModifiedValues& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}

    /**
     * <p>The pending or in-progress change of the service version.</p>
     */
    inline PendingModifiedValues& WithClusterVersion(Aws::String&& value) { SetClusterVersion(std::move(value)); return *this;}

    /**
     * <p>The pending or in-progress change of the service version.</p>
     */
    inline PendingModifiedValues& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}


    /**
     * <p>The pending or in-progress change of the automated snapshot retention
     * period.</p>
     */
    inline int GetAutomatedSnapshotRetentionPeriod() const{ return m_automatedSnapshotRetentionPeriod; }

    /**
     * <p>The pending or in-progress change of the automated snapshot retention
     * period.</p>
     */
    inline bool AutomatedSnapshotRetentionPeriodHasBeenSet() const { return m_automatedSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The pending or in-progress change of the automated snapshot retention
     * period.</p>
     */
    inline void SetAutomatedSnapshotRetentionPeriod(int value) { m_automatedSnapshotRetentionPeriodHasBeenSet = true; m_automatedSnapshotRetentionPeriod = value; }

    /**
     * <p>The pending or in-progress change of the automated snapshot retention
     * period.</p>
     */
    inline PendingModifiedValues& WithAutomatedSnapshotRetentionPeriod(int value) { SetAutomatedSnapshotRetentionPeriod(value); return *this;}


    /**
     * <p>The pending or in-progress change of the new identifier for the cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The pending or in-progress change of the new identifier for the cluster.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The pending or in-progress change of the new identifier for the cluster.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The pending or in-progress change of the new identifier for the cluster.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The pending or in-progress change of the new identifier for the cluster.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The pending or in-progress change of the new identifier for the cluster.</p>
     */
    inline PendingModifiedValues& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The pending or in-progress change of the new identifier for the cluster.</p>
     */
    inline PendingModifiedValues& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The pending or in-progress change of the new identifier for the cluster.</p>
     */
    inline PendingModifiedValues& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The pending or in-progress change of the ability to connect to the cluster
     * from the public network.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>The pending or in-progress change of the ability to connect to the cluster
     * from the public network.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>The pending or in-progress change of the ability to connect to the cluster
     * from the public network.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>The pending or in-progress change of the ability to connect to the cluster
     * from the public network.</p>
     */
    inline PendingModifiedValues& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline bool GetEnhancedVpcRouting() const{ return m_enhancedVpcRouting; }

    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }

    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }

    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline PendingModifiedValues& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}


    /**
     * <p>The name of the maintenance track that the cluster will change to during the
     * next maintenance window.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const{ return m_maintenanceTrackName; }

    /**
     * <p>The name of the maintenance track that the cluster will change to during the
     * next maintenance window.</p>
     */
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }

    /**
     * <p>The name of the maintenance track that the cluster will change to during the
     * next maintenance window.</p>
     */
    inline void SetMaintenanceTrackName(const Aws::String& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = value; }

    /**
     * <p>The name of the maintenance track that the cluster will change to during the
     * next maintenance window.</p>
     */
    inline void SetMaintenanceTrackName(Aws::String&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::move(value); }

    /**
     * <p>The name of the maintenance track that the cluster will change to during the
     * next maintenance window.</p>
     */
    inline void SetMaintenanceTrackName(const char* value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName.assign(value); }

    /**
     * <p>The name of the maintenance track that the cluster will change to during the
     * next maintenance window.</p>
     */
    inline PendingModifiedValues& WithMaintenanceTrackName(const Aws::String& value) { SetMaintenanceTrackName(value); return *this;}

    /**
     * <p>The name of the maintenance track that the cluster will change to during the
     * next maintenance window.</p>
     */
    inline PendingModifiedValues& WithMaintenanceTrackName(Aws::String&& value) { SetMaintenanceTrackName(std::move(value)); return *this;}

    /**
     * <p>The name of the maintenance track that the cluster will change to during the
     * next maintenance window.</p>
     */
    inline PendingModifiedValues& WithMaintenanceTrackName(const char* value) { SetMaintenanceTrackName(value); return *this;}


    /**
     * <p>The encryption type for a cluster. Possible values are: KMS and None. For the
     * China region the possible values are None, and Legacy. </p>
     */
    inline const Aws::String& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * <p>The encryption type for a cluster. Possible values are: KMS and None. For the
     * China region the possible values are None, and Legacy. </p>
     */
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }

    /**
     * <p>The encryption type for a cluster. Possible values are: KMS and None. For the
     * China region the possible values are None, and Legacy. </p>
     */
    inline void SetEncryptionType(const Aws::String& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * <p>The encryption type for a cluster. Possible values are: KMS and None. For the
     * China region the possible values are None, and Legacy. </p>
     */
    inline void SetEncryptionType(Aws::String&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * <p>The encryption type for a cluster. Possible values are: KMS and None. For the
     * China region the possible values are None, and Legacy. </p>
     */
    inline void SetEncryptionType(const char* value) { m_encryptionTypeHasBeenSet = true; m_encryptionType.assign(value); }

    /**
     * <p>The encryption type for a cluster. Possible values are: KMS and None. For the
     * China region the possible values are None, and Legacy. </p>
     */
    inline PendingModifiedValues& WithEncryptionType(const Aws::String& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The encryption type for a cluster. Possible values are: KMS and None. For the
     * China region the possible values are None, and Legacy. </p>
     */
    inline PendingModifiedValues& WithEncryptionType(Aws::String&& value) { SetEncryptionType(std::move(value)); return *this;}

    /**
     * <p>The encryption type for a cluster. Possible values are: KMS and None. For the
     * China region the possible values are None, and Legacy. </p>
     */
    inline PendingModifiedValues& WithEncryptionType(const char* value) { SetEncryptionType(value); return *this;}

  private:

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet;

    Aws::String m_clusterType;
    bool m_clusterTypeHasBeenSet;

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet;

    int m_automatedSnapshotRetentionPeriod;
    bool m_automatedSnapshotRetentionPeriodHasBeenSet;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    bool m_enhancedVpcRouting;
    bool m_enhancedVpcRoutingHasBeenSet;

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet;

    Aws::String m_encryptionType;
    bool m_encryptionTypeHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
