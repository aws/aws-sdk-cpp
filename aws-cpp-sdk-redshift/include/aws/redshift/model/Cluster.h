/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/redshift/model/Endpoint.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/PendingModifiedValues.h>
#include <aws/redshift/model/RestoreStatus.h>
#include <aws/redshift/model/HsmStatus.h>
#include <aws/redshift/model/ClusterSnapshotCopyStatus.h>
#include <aws/redshift/model/ElasticIpStatus.h>
#include <aws/redshift/model/ClusterSecurityGroupMembership.h>
#include <aws/redshift/model/VpcSecurityGroupMembership.h>
#include <aws/redshift/model/ClusterParameterGroupStatus.h>
#include <aws/redshift/model/ClusterNode.h>
#include <aws/redshift/model/Tag.h>
#include <aws/redshift/model/ClusterIamRole.h>

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
   * <p>Describes a cluster.</p>
   */
  class AWS_REDSHIFT_API Cluster
  {
  public:
    Cluster();
    Cluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    Cluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline Cluster& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline Cluster& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline Cluster& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The node type for the nodes in the cluster.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The node type for the nodes in the cluster.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The node type for the nodes in the cluster.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The node type for the nodes in the cluster.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The node type for the nodes in the cluster.</p>
     */
    inline Cluster& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The node type for the nodes in the cluster.</p>
     */
    inline Cluster& WithNodeType(Aws::String&& value) { SetNodeType(value); return *this;}

    /**
     * <p>The node type for the nodes in the cluster.</p>
     */
    inline Cluster& WithNodeType(const char* value) { SetNodeType(value); return *this;}

    /**
     * <p> The current state of the cluster. Possible values are the following:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>creating</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>final-snapshot</code> </p> </li> <li> <p> <code>hardware-failure</code>
     * </p> </li> <li> <p> <code>incompatible-hsm</code> </p> </li> <li> <p>
     * <code>incompatible-network</code> </p> </li> <li> <p>
     * <code>incompatible-parameters</code> </p> </li> <li> <p>
     * <code>incompatible-restore</code> </p> </li> <li> <p> <code>modifying</code>
     * </p> </li> <li> <p> <code>rebooting</code> </p> </li> <li> <p>
     * <code>renaming</code> </p> </li> <li> <p> <code>resizing</code> </p> </li> <li>
     * <p> <code>rotating-keys</code> </p> </li> <li> <p> <code>storage-full</code>
     * </p> </li> <li> <p> <code>updating-hsm</code> </p> </li> </ul>
     */
    inline const Aws::String& GetClusterStatus() const{ return m_clusterStatus; }

    /**
     * <p> The current state of the cluster. Possible values are the following:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>creating</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>final-snapshot</code> </p> </li> <li> <p> <code>hardware-failure</code>
     * </p> </li> <li> <p> <code>incompatible-hsm</code> </p> </li> <li> <p>
     * <code>incompatible-network</code> </p> </li> <li> <p>
     * <code>incompatible-parameters</code> </p> </li> <li> <p>
     * <code>incompatible-restore</code> </p> </li> <li> <p> <code>modifying</code>
     * </p> </li> <li> <p> <code>rebooting</code> </p> </li> <li> <p>
     * <code>renaming</code> </p> </li> <li> <p> <code>resizing</code> </p> </li> <li>
     * <p> <code>rotating-keys</code> </p> </li> <li> <p> <code>storage-full</code>
     * </p> </li> <li> <p> <code>updating-hsm</code> </p> </li> </ul>
     */
    inline void SetClusterStatus(const Aws::String& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }

    /**
     * <p> The current state of the cluster. Possible values are the following:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>creating</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>final-snapshot</code> </p> </li> <li> <p> <code>hardware-failure</code>
     * </p> </li> <li> <p> <code>incompatible-hsm</code> </p> </li> <li> <p>
     * <code>incompatible-network</code> </p> </li> <li> <p>
     * <code>incompatible-parameters</code> </p> </li> <li> <p>
     * <code>incompatible-restore</code> </p> </li> <li> <p> <code>modifying</code>
     * </p> </li> <li> <p> <code>rebooting</code> </p> </li> <li> <p>
     * <code>renaming</code> </p> </li> <li> <p> <code>resizing</code> </p> </li> <li>
     * <p> <code>rotating-keys</code> </p> </li> <li> <p> <code>storage-full</code>
     * </p> </li> <li> <p> <code>updating-hsm</code> </p> </li> </ul>
     */
    inline void SetClusterStatus(Aws::String&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }

    /**
     * <p> The current state of the cluster. Possible values are the following:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>creating</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>final-snapshot</code> </p> </li> <li> <p> <code>hardware-failure</code>
     * </p> </li> <li> <p> <code>incompatible-hsm</code> </p> </li> <li> <p>
     * <code>incompatible-network</code> </p> </li> <li> <p>
     * <code>incompatible-parameters</code> </p> </li> <li> <p>
     * <code>incompatible-restore</code> </p> </li> <li> <p> <code>modifying</code>
     * </p> </li> <li> <p> <code>rebooting</code> </p> </li> <li> <p>
     * <code>renaming</code> </p> </li> <li> <p> <code>resizing</code> </p> </li> <li>
     * <p> <code>rotating-keys</code> </p> </li> <li> <p> <code>storage-full</code>
     * </p> </li> <li> <p> <code>updating-hsm</code> </p> </li> </ul>
     */
    inline void SetClusterStatus(const char* value) { m_clusterStatusHasBeenSet = true; m_clusterStatus.assign(value); }

    /**
     * <p> The current state of the cluster. Possible values are the following:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>creating</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>final-snapshot</code> </p> </li> <li> <p> <code>hardware-failure</code>
     * </p> </li> <li> <p> <code>incompatible-hsm</code> </p> </li> <li> <p>
     * <code>incompatible-network</code> </p> </li> <li> <p>
     * <code>incompatible-parameters</code> </p> </li> <li> <p>
     * <code>incompatible-restore</code> </p> </li> <li> <p> <code>modifying</code>
     * </p> </li> <li> <p> <code>rebooting</code> </p> </li> <li> <p>
     * <code>renaming</code> </p> </li> <li> <p> <code>resizing</code> </p> </li> <li>
     * <p> <code>rotating-keys</code> </p> </li> <li> <p> <code>storage-full</code>
     * </p> </li> <li> <p> <code>updating-hsm</code> </p> </li> </ul>
     */
    inline Cluster& WithClusterStatus(const Aws::String& value) { SetClusterStatus(value); return *this;}

    /**
     * <p> The current state of the cluster. Possible values are the following:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>creating</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>final-snapshot</code> </p> </li> <li> <p> <code>hardware-failure</code>
     * </p> </li> <li> <p> <code>incompatible-hsm</code> </p> </li> <li> <p>
     * <code>incompatible-network</code> </p> </li> <li> <p>
     * <code>incompatible-parameters</code> </p> </li> <li> <p>
     * <code>incompatible-restore</code> </p> </li> <li> <p> <code>modifying</code>
     * </p> </li> <li> <p> <code>rebooting</code> </p> </li> <li> <p>
     * <code>renaming</code> </p> </li> <li> <p> <code>resizing</code> </p> </li> <li>
     * <p> <code>rotating-keys</code> </p> </li> <li> <p> <code>storage-full</code>
     * </p> </li> <li> <p> <code>updating-hsm</code> </p> </li> </ul>
     */
    inline Cluster& WithClusterStatus(Aws::String&& value) { SetClusterStatus(value); return *this;}

    /**
     * <p> The current state of the cluster. Possible values are the following:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>creating</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>final-snapshot</code> </p> </li> <li> <p> <code>hardware-failure</code>
     * </p> </li> <li> <p> <code>incompatible-hsm</code> </p> </li> <li> <p>
     * <code>incompatible-network</code> </p> </li> <li> <p>
     * <code>incompatible-parameters</code> </p> </li> <li> <p>
     * <code>incompatible-restore</code> </p> </li> <li> <p> <code>modifying</code>
     * </p> </li> <li> <p> <code>rebooting</code> </p> </li> <li> <p>
     * <code>renaming</code> </p> </li> <li> <p> <code>resizing</code> </p> </li> <li>
     * <p> <code>rotating-keys</code> </p> </li> <li> <p> <code>storage-full</code>
     * </p> </li> <li> <p> <code>updating-hsm</code> </p> </li> </ul>
     */
    inline Cluster& WithClusterStatus(const char* value) { SetClusterStatus(value); return *this;}

    /**
     * <p>The status of a modify operation, if any, initiated for the cluster.</p>
     */
    inline const Aws::String& GetModifyStatus() const{ return m_modifyStatus; }

    /**
     * <p>The status of a modify operation, if any, initiated for the cluster.</p>
     */
    inline void SetModifyStatus(const Aws::String& value) { m_modifyStatusHasBeenSet = true; m_modifyStatus = value; }

    /**
     * <p>The status of a modify operation, if any, initiated for the cluster.</p>
     */
    inline void SetModifyStatus(Aws::String&& value) { m_modifyStatusHasBeenSet = true; m_modifyStatus = value; }

    /**
     * <p>The status of a modify operation, if any, initiated for the cluster.</p>
     */
    inline void SetModifyStatus(const char* value) { m_modifyStatusHasBeenSet = true; m_modifyStatus.assign(value); }

    /**
     * <p>The status of a modify operation, if any, initiated for the cluster.</p>
     */
    inline Cluster& WithModifyStatus(const Aws::String& value) { SetModifyStatus(value); return *this;}

    /**
     * <p>The status of a modify operation, if any, initiated for the cluster.</p>
     */
    inline Cluster& WithModifyStatus(Aws::String&& value) { SetModifyStatus(value); return *this;}

    /**
     * <p>The status of a modify operation, if any, initiated for the cluster.</p>
     */
    inline Cluster& WithModifyStatus(const char* value) { SetModifyStatus(value); return *this;}

    /**
     * <p>The master user name for the cluster. This name is used to connect to the
     * database that is specified in the <b>DBName</b> parameter. </p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The master user name for the cluster. This name is used to connect to the
     * database that is specified in the <b>DBName</b> parameter. </p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The master user name for the cluster. This name is used to connect to the
     * database that is specified in the <b>DBName</b> parameter. </p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The master user name for the cluster. This name is used to connect to the
     * database that is specified in the <b>DBName</b> parameter. </p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The master user name for the cluster. This name is used to connect to the
     * database that is specified in the <b>DBName</b> parameter. </p>
     */
    inline Cluster& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The master user name for the cluster. This name is used to connect to the
     * database that is specified in the <b>DBName</b> parameter. </p>
     */
    inline Cluster& WithMasterUsername(Aws::String&& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The master user name for the cluster. This name is used to connect to the
     * database that is specified in the <b>DBName</b> parameter. </p>
     */
    inline Cluster& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The name of the initial database that was created when the cluster was
     * created. This same name is returned for the life of the cluster. If an initial
     * database was not specified, a database named <code>dev</code>dev was created by
     * default. </p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /**
     * <p>The name of the initial database that was created when the cluster was
     * created. This same name is returned for the life of the cluster. If an initial
     * database was not specified, a database named <code>dev</code>dev was created by
     * default. </p>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The name of the initial database that was created when the cluster was
     * created. This same name is returned for the life of the cluster. If an initial
     * database was not specified, a database named <code>dev</code>dev was created by
     * default. </p>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The name of the initial database that was created when the cluster was
     * created. This same name is returned for the life of the cluster. If an initial
     * database was not specified, a database named <code>dev</code>dev was created by
     * default. </p>
     */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /**
     * <p>The name of the initial database that was created when the cluster was
     * created. This same name is returned for the life of the cluster. If an initial
     * database was not specified, a database named <code>dev</code>dev was created by
     * default. </p>
     */
    inline Cluster& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /**
     * <p>The name of the initial database that was created when the cluster was
     * created. This same name is returned for the life of the cluster. If an initial
     * database was not specified, a database named <code>dev</code>dev was created by
     * default. </p>
     */
    inline Cluster& WithDBName(Aws::String&& value) { SetDBName(value); return *this;}

    /**
     * <p>The name of the initial database that was created when the cluster was
     * created. This same name is returned for the life of the cluster. If an initial
     * database was not specified, a database named <code>dev</code>dev was created by
     * default. </p>
     */
    inline Cluster& WithDBName(const char* value) { SetDBName(value); return *this;}

    /**
     * <p>The connection endpoint.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The connection endpoint.</p>
     */
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The connection endpoint.</p>
     */
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The connection endpoint.</p>
     */
    inline Cluster& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The connection endpoint.</p>
     */
    inline Cluster& WithEndpoint(Endpoint&& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The date and time that the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetClusterCreateTime() const{ return m_clusterCreateTime; }

    /**
     * <p>The date and time that the cluster was created.</p>
     */
    inline void SetClusterCreateTime(const Aws::Utils::DateTime& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }

    /**
     * <p>The date and time that the cluster was created.</p>
     */
    inline void SetClusterCreateTime(Aws::Utils::DateTime&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }

    /**
     * <p>The date and time that the cluster was created.</p>
     */
    inline Cluster& WithClusterCreateTime(const Aws::Utils::DateTime& value) { SetClusterCreateTime(value); return *this;}

    /**
     * <p>The date and time that the cluster was created.</p>
     */
    inline Cluster& WithClusterCreateTime(Aws::Utils::DateTime&& value) { SetClusterCreateTime(value); return *this;}

    /**
     * <p>The number of days that automatic cluster snapshots are retained.</p>
     */
    inline int GetAutomatedSnapshotRetentionPeriod() const{ return m_automatedSnapshotRetentionPeriod; }

    /**
     * <p>The number of days that automatic cluster snapshots are retained.</p>
     */
    inline void SetAutomatedSnapshotRetentionPeriod(int value) { m_automatedSnapshotRetentionPeriodHasBeenSet = true; m_automatedSnapshotRetentionPeriod = value; }

    /**
     * <p>The number of days that automatic cluster snapshots are retained.</p>
     */
    inline Cluster& WithAutomatedSnapshotRetentionPeriod(int value) { SetAutomatedSnapshotRetentionPeriod(value); return *this;}

    /**
     * <p>A list of cluster security group that are associated with the cluster. Each
     * security group is represented by an element that contains
     * <code>ClusterSecurityGroup.Name</code> and
     * <code>ClusterSecurityGroup.Status</code> subelements. </p> <p>Cluster security
     * groups are used when the cluster is not created in an Amazon Virtual Private
     * Cloud (VPC). Clusters that are created in a VPC use VPC security groups, which
     * are listed by the <b>VpcSecurityGroups</b> parameter. </p>
     */
    inline const Aws::Vector<ClusterSecurityGroupMembership>& GetClusterSecurityGroups() const{ return m_clusterSecurityGroups; }

    /**
     * <p>A list of cluster security group that are associated with the cluster. Each
     * security group is represented by an element that contains
     * <code>ClusterSecurityGroup.Name</code> and
     * <code>ClusterSecurityGroup.Status</code> subelements. </p> <p>Cluster security
     * groups are used when the cluster is not created in an Amazon Virtual Private
     * Cloud (VPC). Clusters that are created in a VPC use VPC security groups, which
     * are listed by the <b>VpcSecurityGroups</b> parameter. </p>
     */
    inline void SetClusterSecurityGroups(const Aws::Vector<ClusterSecurityGroupMembership>& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = value; }

    /**
     * <p>A list of cluster security group that are associated with the cluster. Each
     * security group is represented by an element that contains
     * <code>ClusterSecurityGroup.Name</code> and
     * <code>ClusterSecurityGroup.Status</code> subelements. </p> <p>Cluster security
     * groups are used when the cluster is not created in an Amazon Virtual Private
     * Cloud (VPC). Clusters that are created in a VPC use VPC security groups, which
     * are listed by the <b>VpcSecurityGroups</b> parameter. </p>
     */
    inline void SetClusterSecurityGroups(Aws::Vector<ClusterSecurityGroupMembership>&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups = value; }

    /**
     * <p>A list of cluster security group that are associated with the cluster. Each
     * security group is represented by an element that contains
     * <code>ClusterSecurityGroup.Name</code> and
     * <code>ClusterSecurityGroup.Status</code> subelements. </p> <p>Cluster security
     * groups are used when the cluster is not created in an Amazon Virtual Private
     * Cloud (VPC). Clusters that are created in a VPC use VPC security groups, which
     * are listed by the <b>VpcSecurityGroups</b> parameter. </p>
     */
    inline Cluster& WithClusterSecurityGroups(const Aws::Vector<ClusterSecurityGroupMembership>& value) { SetClusterSecurityGroups(value); return *this;}

    /**
     * <p>A list of cluster security group that are associated with the cluster. Each
     * security group is represented by an element that contains
     * <code>ClusterSecurityGroup.Name</code> and
     * <code>ClusterSecurityGroup.Status</code> subelements. </p> <p>Cluster security
     * groups are used when the cluster is not created in an Amazon Virtual Private
     * Cloud (VPC). Clusters that are created in a VPC use VPC security groups, which
     * are listed by the <b>VpcSecurityGroups</b> parameter. </p>
     */
    inline Cluster& WithClusterSecurityGroups(Aws::Vector<ClusterSecurityGroupMembership>&& value) { SetClusterSecurityGroups(value); return *this;}

    /**
     * <p>A list of cluster security group that are associated with the cluster. Each
     * security group is represented by an element that contains
     * <code>ClusterSecurityGroup.Name</code> and
     * <code>ClusterSecurityGroup.Status</code> subelements. </p> <p>Cluster security
     * groups are used when the cluster is not created in an Amazon Virtual Private
     * Cloud (VPC). Clusters that are created in a VPC use VPC security groups, which
     * are listed by the <b>VpcSecurityGroups</b> parameter. </p>
     */
    inline Cluster& AddClusterSecurityGroups(const ClusterSecurityGroupMembership& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of cluster security group that are associated with the cluster. Each
     * security group is represented by an element that contains
     * <code>ClusterSecurityGroup.Name</code> and
     * <code>ClusterSecurityGroup.Status</code> subelements. </p> <p>Cluster security
     * groups are used when the cluster is not created in an Amazon Virtual Private
     * Cloud (VPC). Clusters that are created in a VPC use VPC security groups, which
     * are listed by the <b>VpcSecurityGroups</b> parameter. </p>
     */
    inline Cluster& AddClusterSecurityGroups(ClusterSecurityGroupMembership&& value) { m_clusterSecurityGroupsHasBeenSet = true; m_clusterSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Virtual Private Cloud (Amazon VPC) security groups that are
     * associated with the cluster. This parameter is returned only if the cluster is
     * in a VPC.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }

    /**
     * <p>A list of Amazon Virtual Private Cloud (Amazon VPC) security groups that are
     * associated with the cluster. This parameter is returned only if the cluster is
     * in a VPC.</p>
     */
    inline void SetVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }

    /**
     * <p>A list of Amazon Virtual Private Cloud (Amazon VPC) security groups that are
     * associated with the cluster. This parameter is returned only if the cluster is
     * in a VPC.</p>
     */
    inline void SetVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }

    /**
     * <p>A list of Amazon Virtual Private Cloud (Amazon VPC) security groups that are
     * associated with the cluster. This parameter is returned only if the cluster is
     * in a VPC.</p>
     */
    inline Cluster& WithVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p>A list of Amazon Virtual Private Cloud (Amazon VPC) security groups that are
     * associated with the cluster. This parameter is returned only if the cluster is
     * in a VPC.</p>
     */
    inline Cluster& WithVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p>A list of Amazon Virtual Private Cloud (Amazon VPC) security groups that are
     * associated with the cluster. This parameter is returned only if the cluster is
     * in a VPC.</p>
     */
    inline Cluster& AddVpcSecurityGroups(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Virtual Private Cloud (Amazon VPC) security groups that are
     * associated with the cluster. This parameter is returned only if the cluster is
     * in a VPC.</p>
     */
    inline Cluster& AddVpcSecurityGroups(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p>The list of cluster parameter groups that are associated with this cluster.
     * Each parameter group in the list is returned with its status.</p>
     */
    inline const Aws::Vector<ClusterParameterGroupStatus>& GetClusterParameterGroups() const{ return m_clusterParameterGroups; }

    /**
     * <p>The list of cluster parameter groups that are associated with this cluster.
     * Each parameter group in the list is returned with its status.</p>
     */
    inline void SetClusterParameterGroups(const Aws::Vector<ClusterParameterGroupStatus>& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups = value; }

    /**
     * <p>The list of cluster parameter groups that are associated with this cluster.
     * Each parameter group in the list is returned with its status.</p>
     */
    inline void SetClusterParameterGroups(Aws::Vector<ClusterParameterGroupStatus>&& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups = value; }

    /**
     * <p>The list of cluster parameter groups that are associated with this cluster.
     * Each parameter group in the list is returned with its status.</p>
     */
    inline Cluster& WithClusterParameterGroups(const Aws::Vector<ClusterParameterGroupStatus>& value) { SetClusterParameterGroups(value); return *this;}

    /**
     * <p>The list of cluster parameter groups that are associated with this cluster.
     * Each parameter group in the list is returned with its status.</p>
     */
    inline Cluster& WithClusterParameterGroups(Aws::Vector<ClusterParameterGroupStatus>&& value) { SetClusterParameterGroups(value); return *this;}

    /**
     * <p>The list of cluster parameter groups that are associated with this cluster.
     * Each parameter group in the list is returned with its status.</p>
     */
    inline Cluster& AddClusterParameterGroups(const ClusterParameterGroupStatus& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups.push_back(value); return *this; }

    /**
     * <p>The list of cluster parameter groups that are associated with this cluster.
     * Each parameter group in the list is returned with its status.</p>
     */
    inline Cluster& AddClusterParameterGroups(ClusterParameterGroupStatus&& value) { m_clusterParameterGroupsHasBeenSet = true; m_clusterParameterGroups.push_back(value); return *this; }

    /**
     * <p>The name of the subnet group that is associated with the cluster. This
     * parameter is valid only when the cluster is in a VPC.</p>
     */
    inline const Aws::String& GetClusterSubnetGroupName() const{ return m_clusterSubnetGroupName; }

    /**
     * <p>The name of the subnet group that is associated with the cluster. This
     * parameter is valid only when the cluster is in a VPC.</p>
     */
    inline void SetClusterSubnetGroupName(const Aws::String& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = value; }

    /**
     * <p>The name of the subnet group that is associated with the cluster. This
     * parameter is valid only when the cluster is in a VPC.</p>
     */
    inline void SetClusterSubnetGroupName(Aws::String&& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = value; }

    /**
     * <p>The name of the subnet group that is associated with the cluster. This
     * parameter is valid only when the cluster is in a VPC.</p>
     */
    inline void SetClusterSubnetGroupName(const char* value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName.assign(value); }

    /**
     * <p>The name of the subnet group that is associated with the cluster. This
     * parameter is valid only when the cluster is in a VPC.</p>
     */
    inline Cluster& WithClusterSubnetGroupName(const Aws::String& value) { SetClusterSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the subnet group that is associated with the cluster. This
     * parameter is valid only when the cluster is in a VPC.</p>
     */
    inline Cluster& WithClusterSubnetGroupName(Aws::String&& value) { SetClusterSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the subnet group that is associated with the cluster. This
     * parameter is valid only when the cluster is in a VPC.</p>
     */
    inline Cluster& WithClusterSubnetGroupName(const char* value) { SetClusterSubnetGroupName(value); return *this;}

    /**
     * <p>The identifier of the VPC the cluster is in, if the cluster is in a VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier of the VPC the cluster is in, if the cluster is in a VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the VPC the cluster is in, if the cluster is in a VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the VPC the cluster is in, if the cluster is in a VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The identifier of the VPC the cluster is in, if the cluster is in a VPC.</p>
     */
    inline Cluster& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the VPC the cluster is in, if the cluster is in a VPC.</p>
     */
    inline Cluster& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the VPC the cluster is in, if the cluster is in a VPC.</p>
     */
    inline Cluster& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>The name of the Availability Zone in which the cluster is located.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The name of the Availability Zone in which the cluster is located.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The name of the Availability Zone in which the cluster is located.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The name of the Availability Zone in which the cluster is located.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The name of the Availability Zone in which the cluster is located.</p>
     */
    inline Cluster& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The name of the Availability Zone in which the cluster is located.</p>
     */
    inline Cluster& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The name of the Availability Zone in which the cluster is located.</p>
     */
    inline Cluster& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The weekly time range, in Universal Coordinated Time (UTC), during which
     * system maintenance can occur.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range, in Universal Coordinated Time (UTC), during which
     * system maintenance can occur.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range, in Universal Coordinated Time (UTC), during which
     * system maintenance can occur.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range, in Universal Coordinated Time (UTC), during which
     * system maintenance can occur.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range, in Universal Coordinated Time (UTC), during which
     * system maintenance can occur.</p>
     */
    inline Cluster& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range, in Universal Coordinated Time (UTC), during which
     * system maintenance can occur.</p>
     */
    inline Cluster& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range, in Universal Coordinated Time (UTC), during which
     * system maintenance can occur.</p>
     */
    inline Cluster& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>A value that, if present, indicates that changes to the cluster are pending.
     * Specific pending changes are identified by subelements.</p>
     */
    inline const PendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }

    /**
     * <p>A value that, if present, indicates that changes to the cluster are pending.
     * Specific pending changes are identified by subelements.</p>
     */
    inline void SetPendingModifiedValues(const PendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    /**
     * <p>A value that, if present, indicates that changes to the cluster are pending.
     * Specific pending changes are identified by subelements.</p>
     */
    inline void SetPendingModifiedValues(PendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    /**
     * <p>A value that, if present, indicates that changes to the cluster are pending.
     * Specific pending changes are identified by subelements.</p>
     */
    inline Cluster& WithPendingModifiedValues(const PendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}

    /**
     * <p>A value that, if present, indicates that changes to the cluster are pending.
     * Specific pending changes are identified by subelements.</p>
     */
    inline Cluster& WithPendingModifiedValues(PendingModifiedValues&& value) { SetPendingModifiedValues(value); return *this;}

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline Cluster& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline Cluster& WithClusterVersion(Aws::String&& value) { SetClusterVersion(value); return *this;}

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline Cluster& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}

    /**
     * <p>A Boolean value that, if <code>true</code>, indicates that major version
     * upgrades will be applied automatically to the cluster during the maintenance
     * window. </p>
     */
    inline bool GetAllowVersionUpgrade() const{ return m_allowVersionUpgrade; }

    /**
     * <p>A Boolean value that, if <code>true</code>, indicates that major version
     * upgrades will be applied automatically to the cluster during the maintenance
     * window. </p>
     */
    inline void SetAllowVersionUpgrade(bool value) { m_allowVersionUpgradeHasBeenSet = true; m_allowVersionUpgrade = value; }

    /**
     * <p>A Boolean value that, if <code>true</code>, indicates that major version
     * upgrades will be applied automatically to the cluster during the maintenance
     * window. </p>
     */
    inline Cluster& WithAllowVersionUpgrade(bool value) { SetAllowVersionUpgrade(value); return *this;}

    /**
     * <p>The number of compute nodes in the cluster.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }

    /**
     * <p>The number of compute nodes in the cluster.</p>
     */
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }

    /**
     * <p>The number of compute nodes in the cluster.</p>
     */
    inline Cluster& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}

    /**
     * <p>A Boolean value that, if <code>true</code>, indicates that the cluster can be
     * accessed from a public network.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>A Boolean value that, if <code>true</code>, indicates that the cluster can be
     * accessed from a public network.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>A Boolean value that, if <code>true</code>, indicates that the cluster can be
     * accessed from a public network.</p>
     */
    inline Cluster& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}

    /**
     * <p>A Boolean value that, if <code>true</code>, indicates that data in the
     * cluster is encrypted at rest.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>A Boolean value that, if <code>true</code>, indicates that data in the
     * cluster is encrypted at rest.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>A Boolean value that, if <code>true</code>, indicates that data in the
     * cluster is encrypted at rest.</p>
     */
    inline Cluster& WithEncrypted(bool value) { SetEncrypted(value); return *this;}

    /**
     * <p>A value that describes the status of a cluster restore action. This parameter
     * returns null if the cluster was not created by restoring a snapshot.</p>
     */
    inline const RestoreStatus& GetRestoreStatus() const{ return m_restoreStatus; }

    /**
     * <p>A value that describes the status of a cluster restore action. This parameter
     * returns null if the cluster was not created by restoring a snapshot.</p>
     */
    inline void SetRestoreStatus(const RestoreStatus& value) { m_restoreStatusHasBeenSet = true; m_restoreStatus = value; }

    /**
     * <p>A value that describes the status of a cluster restore action. This parameter
     * returns null if the cluster was not created by restoring a snapshot.</p>
     */
    inline void SetRestoreStatus(RestoreStatus&& value) { m_restoreStatusHasBeenSet = true; m_restoreStatus = value; }

    /**
     * <p>A value that describes the status of a cluster restore action. This parameter
     * returns null if the cluster was not created by restoring a snapshot.</p>
     */
    inline Cluster& WithRestoreStatus(const RestoreStatus& value) { SetRestoreStatus(value); return *this;}

    /**
     * <p>A value that describes the status of a cluster restore action. This parameter
     * returns null if the cluster was not created by restoring a snapshot.</p>
     */
    inline Cluster& WithRestoreStatus(RestoreStatus&& value) { SetRestoreStatus(value); return *this;}

    /**
     * <p>A value that reports whether the Amazon Redshift cluster has finished
     * applying any hardware security module (HSM) settings changes specified in a
     * modify cluster command.</p> <p>Values: active, applying</p>
     */
    inline const HsmStatus& GetHsmStatus() const{ return m_hsmStatus; }

    /**
     * <p>A value that reports whether the Amazon Redshift cluster has finished
     * applying any hardware security module (HSM) settings changes specified in a
     * modify cluster command.</p> <p>Values: active, applying</p>
     */
    inline void SetHsmStatus(const HsmStatus& value) { m_hsmStatusHasBeenSet = true; m_hsmStatus = value; }

    /**
     * <p>A value that reports whether the Amazon Redshift cluster has finished
     * applying any hardware security module (HSM) settings changes specified in a
     * modify cluster command.</p> <p>Values: active, applying</p>
     */
    inline void SetHsmStatus(HsmStatus&& value) { m_hsmStatusHasBeenSet = true; m_hsmStatus = value; }

    /**
     * <p>A value that reports whether the Amazon Redshift cluster has finished
     * applying any hardware security module (HSM) settings changes specified in a
     * modify cluster command.</p> <p>Values: active, applying</p>
     */
    inline Cluster& WithHsmStatus(const HsmStatus& value) { SetHsmStatus(value); return *this;}

    /**
     * <p>A value that reports whether the Amazon Redshift cluster has finished
     * applying any hardware security module (HSM) settings changes specified in a
     * modify cluster command.</p> <p>Values: active, applying</p>
     */
    inline Cluster& WithHsmStatus(HsmStatus&& value) { SetHsmStatus(value); return *this;}

    /**
     * <p>A value that returns the destination region and retention period that are
     * configured for cross-region snapshot copy.</p>
     */
    inline const ClusterSnapshotCopyStatus& GetClusterSnapshotCopyStatus() const{ return m_clusterSnapshotCopyStatus; }

    /**
     * <p>A value that returns the destination region and retention period that are
     * configured for cross-region snapshot copy.</p>
     */
    inline void SetClusterSnapshotCopyStatus(const ClusterSnapshotCopyStatus& value) { m_clusterSnapshotCopyStatusHasBeenSet = true; m_clusterSnapshotCopyStatus = value; }

    /**
     * <p>A value that returns the destination region and retention period that are
     * configured for cross-region snapshot copy.</p>
     */
    inline void SetClusterSnapshotCopyStatus(ClusterSnapshotCopyStatus&& value) { m_clusterSnapshotCopyStatusHasBeenSet = true; m_clusterSnapshotCopyStatus = value; }

    /**
     * <p>A value that returns the destination region and retention period that are
     * configured for cross-region snapshot copy.</p>
     */
    inline Cluster& WithClusterSnapshotCopyStatus(const ClusterSnapshotCopyStatus& value) { SetClusterSnapshotCopyStatus(value); return *this;}

    /**
     * <p>A value that returns the destination region and retention period that are
     * configured for cross-region snapshot copy.</p>
     */
    inline Cluster& WithClusterSnapshotCopyStatus(ClusterSnapshotCopyStatus&& value) { SetClusterSnapshotCopyStatus(value); return *this;}

    /**
     * <p>The public key for the cluster.</p>
     */
    inline const Aws::String& GetClusterPublicKey() const{ return m_clusterPublicKey; }

    /**
     * <p>The public key for the cluster.</p>
     */
    inline void SetClusterPublicKey(const Aws::String& value) { m_clusterPublicKeyHasBeenSet = true; m_clusterPublicKey = value; }

    /**
     * <p>The public key for the cluster.</p>
     */
    inline void SetClusterPublicKey(Aws::String&& value) { m_clusterPublicKeyHasBeenSet = true; m_clusterPublicKey = value; }

    /**
     * <p>The public key for the cluster.</p>
     */
    inline void SetClusterPublicKey(const char* value) { m_clusterPublicKeyHasBeenSet = true; m_clusterPublicKey.assign(value); }

    /**
     * <p>The public key for the cluster.</p>
     */
    inline Cluster& WithClusterPublicKey(const Aws::String& value) { SetClusterPublicKey(value); return *this;}

    /**
     * <p>The public key for the cluster.</p>
     */
    inline Cluster& WithClusterPublicKey(Aws::String&& value) { SetClusterPublicKey(value); return *this;}

    /**
     * <p>The public key for the cluster.</p>
     */
    inline Cluster& WithClusterPublicKey(const char* value) { SetClusterPublicKey(value); return *this;}

    /**
     * <p>The nodes in the cluster.</p>
     */
    inline const Aws::Vector<ClusterNode>& GetClusterNodes() const{ return m_clusterNodes; }

    /**
     * <p>The nodes in the cluster.</p>
     */
    inline void SetClusterNodes(const Aws::Vector<ClusterNode>& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes = value; }

    /**
     * <p>The nodes in the cluster.</p>
     */
    inline void SetClusterNodes(Aws::Vector<ClusterNode>&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes = value; }

    /**
     * <p>The nodes in the cluster.</p>
     */
    inline Cluster& WithClusterNodes(const Aws::Vector<ClusterNode>& value) { SetClusterNodes(value); return *this;}

    /**
     * <p>The nodes in the cluster.</p>
     */
    inline Cluster& WithClusterNodes(Aws::Vector<ClusterNode>&& value) { SetClusterNodes(value); return *this;}

    /**
     * <p>The nodes in the cluster.</p>
     */
    inline Cluster& AddClusterNodes(const ClusterNode& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes.push_back(value); return *this; }

    /**
     * <p>The nodes in the cluster.</p>
     */
    inline Cluster& AddClusterNodes(ClusterNode&& value) { m_clusterNodesHasBeenSet = true; m_clusterNodes.push_back(value); return *this; }

    /**
     * <p>The status of the elastic IP (EIP) address.</p>
     */
    inline const ElasticIpStatus& GetElasticIpStatus() const{ return m_elasticIpStatus; }

    /**
     * <p>The status of the elastic IP (EIP) address.</p>
     */
    inline void SetElasticIpStatus(const ElasticIpStatus& value) { m_elasticIpStatusHasBeenSet = true; m_elasticIpStatus = value; }

    /**
     * <p>The status of the elastic IP (EIP) address.</p>
     */
    inline void SetElasticIpStatus(ElasticIpStatus&& value) { m_elasticIpStatusHasBeenSet = true; m_elasticIpStatus = value; }

    /**
     * <p>The status of the elastic IP (EIP) address.</p>
     */
    inline Cluster& WithElasticIpStatus(const ElasticIpStatus& value) { SetElasticIpStatus(value); return *this;}

    /**
     * <p>The status of the elastic IP (EIP) address.</p>
     */
    inline Cluster& WithElasticIpStatus(ElasticIpStatus&& value) { SetElasticIpStatus(value); return *this;}

    /**
     * <p>The specific revision number of the database in the cluster.</p>
     */
    inline const Aws::String& GetClusterRevisionNumber() const{ return m_clusterRevisionNumber; }

    /**
     * <p>The specific revision number of the database in the cluster.</p>
     */
    inline void SetClusterRevisionNumber(const Aws::String& value) { m_clusterRevisionNumberHasBeenSet = true; m_clusterRevisionNumber = value; }

    /**
     * <p>The specific revision number of the database in the cluster.</p>
     */
    inline void SetClusterRevisionNumber(Aws::String&& value) { m_clusterRevisionNumberHasBeenSet = true; m_clusterRevisionNumber = value; }

    /**
     * <p>The specific revision number of the database in the cluster.</p>
     */
    inline void SetClusterRevisionNumber(const char* value) { m_clusterRevisionNumberHasBeenSet = true; m_clusterRevisionNumber.assign(value); }

    /**
     * <p>The specific revision number of the database in the cluster.</p>
     */
    inline Cluster& WithClusterRevisionNumber(const Aws::String& value) { SetClusterRevisionNumber(value); return *this;}

    /**
     * <p>The specific revision number of the database in the cluster.</p>
     */
    inline Cluster& WithClusterRevisionNumber(Aws::String&& value) { SetClusterRevisionNumber(value); return *this;}

    /**
     * <p>The specific revision number of the database in the cluster.</p>
     */
    inline Cluster& WithClusterRevisionNumber(const char* value) { SetClusterRevisionNumber(value); return *this;}

    /**
     * <p>The list of tags for the cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags for the cluster.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags for the cluster.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags for the cluster.</p>
     */
    inline Cluster& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags for the cluster.</p>
     */
    inline Cluster& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags for the cluster.</p>
     */
    inline Cluster& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags for the cluster.</p>
     */
    inline Cluster& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key ID of the encryption key used to
     * encrypt data in the cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key ID of the encryption key used to
     * encrypt data in the cluster.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key ID of the encryption key used to
     * encrypt data in the cluster.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key ID of the encryption key used to
     * encrypt data in the cluster.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key ID of the encryption key used to
     * encrypt data in the cluster.</p>
     */
    inline Cluster& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key ID of the encryption key used to
     * encrypt data in the cluster.</p>
     */
    inline Cluster& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key ID of the encryption key used to
     * encrypt data in the cluster.</p>
     */
    inline Cluster& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="http://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline bool GetEnhancedVpcRouting() const{ return m_enhancedVpcRouting; }

    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="http://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }

    /**
     * <p>An option that specifies whether to create the cluster with enhanced VPC
     * routing enabled. To create a cluster that uses enhanced VPC routing, the cluster
     * must be in a VPC. For more information, see <a
     * href="http://docs.aws.amazon.com/redshift/latest/mgmt/enhanced-vpc-routing.html">Enhanced
     * VPC Routing</a> in the Amazon Redshift Cluster Management Guide.</p> <p>If this
     * option is <code>true</code>, enhanced VPC routing is enabled. </p> <p>Default:
     * false</p>
     */
    inline Cluster& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}

    /**
     * <p>A list of AWS Identity and Access Management (IAM) roles that can be used by
     * the cluster to access other AWS services.</p>
     */
    inline const Aws::Vector<ClusterIamRole>& GetIamRoles() const{ return m_iamRoles; }

    /**
     * <p>A list of AWS Identity and Access Management (IAM) roles that can be used by
     * the cluster to access other AWS services.</p>
     */
    inline void SetIamRoles(const Aws::Vector<ClusterIamRole>& value) { m_iamRolesHasBeenSet = true; m_iamRoles = value; }

    /**
     * <p>A list of AWS Identity and Access Management (IAM) roles that can be used by
     * the cluster to access other AWS services.</p>
     */
    inline void SetIamRoles(Aws::Vector<ClusterIamRole>&& value) { m_iamRolesHasBeenSet = true; m_iamRoles = value; }

    /**
     * <p>A list of AWS Identity and Access Management (IAM) roles that can be used by
     * the cluster to access other AWS services.</p>
     */
    inline Cluster& WithIamRoles(const Aws::Vector<ClusterIamRole>& value) { SetIamRoles(value); return *this;}

    /**
     * <p>A list of AWS Identity and Access Management (IAM) roles that can be used by
     * the cluster to access other AWS services.</p>
     */
    inline Cluster& WithIamRoles(Aws::Vector<ClusterIamRole>&& value) { SetIamRoles(value); return *this;}

    /**
     * <p>A list of AWS Identity and Access Management (IAM) roles that can be used by
     * the cluster to access other AWS services.</p>
     */
    inline Cluster& AddIamRoles(const ClusterIamRole& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }

    /**
     * <p>A list of AWS Identity and Access Management (IAM) roles that can be used by
     * the cluster to access other AWS services.</p>
     */
    inline Cluster& AddIamRoles(ClusterIamRole&& value) { m_iamRolesHasBeenSet = true; m_iamRoles.push_back(value); return *this; }

  private:
    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;
    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet;
    Aws::String m_clusterStatus;
    bool m_clusterStatusHasBeenSet;
    Aws::String m_modifyStatus;
    bool m_modifyStatusHasBeenSet;
    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet;
    Aws::String m_dBName;
    bool m_dBNameHasBeenSet;
    Endpoint m_endpoint;
    bool m_endpointHasBeenSet;
    Aws::Utils::DateTime m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet;
    int m_automatedSnapshotRetentionPeriod;
    bool m_automatedSnapshotRetentionPeriodHasBeenSet;
    Aws::Vector<ClusterSecurityGroupMembership> m_clusterSecurityGroups;
    bool m_clusterSecurityGroupsHasBeenSet;
    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet;
    Aws::Vector<ClusterParameterGroupStatus> m_clusterParameterGroups;
    bool m_clusterParameterGroupsHasBeenSet;
    Aws::String m_clusterSubnetGroupName;
    bool m_clusterSubnetGroupNameHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;
    PendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet;
    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet;
    bool m_allowVersionUpgrade;
    bool m_allowVersionUpgradeHasBeenSet;
    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet;
    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;
    bool m_encrypted;
    bool m_encryptedHasBeenSet;
    RestoreStatus m_restoreStatus;
    bool m_restoreStatusHasBeenSet;
    HsmStatus m_hsmStatus;
    bool m_hsmStatusHasBeenSet;
    ClusterSnapshotCopyStatus m_clusterSnapshotCopyStatus;
    bool m_clusterSnapshotCopyStatusHasBeenSet;
    Aws::String m_clusterPublicKey;
    bool m_clusterPublicKeyHasBeenSet;
    Aws::Vector<ClusterNode> m_clusterNodes;
    bool m_clusterNodesHasBeenSet;
    ElasticIpStatus m_elasticIpStatus;
    bool m_elasticIpStatusHasBeenSet;
    Aws::String m_clusterRevisionNumber;
    bool m_clusterRevisionNumberHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
    bool m_enhancedVpcRouting;
    bool m_enhancedVpcRoutingHasBeenSet;
    Aws::Vector<ClusterIamRole> m_iamRoles;
    bool m_iamRolesHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
