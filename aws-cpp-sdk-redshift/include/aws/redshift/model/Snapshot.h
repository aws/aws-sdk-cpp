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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/AccountWithRestoreAccess.h>
#include <aws/redshift/model/Tag.h>
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
   * <p>Describes a snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/Snapshot">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API Snapshot
  {
  public:
    Snapshot();
    Snapshot(const Aws::Utils::Xml::XmlNode& xmlNode);
    Snapshot& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The snapshot identifier that is provided in the request.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The snapshot identifier that is provided in the request.</p>
     */
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>The snapshot identifier that is provided in the request.</p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The snapshot identifier that is provided in the request.</p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

    /**
     * <p>The snapshot identifier that is provided in the request.</p>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The snapshot identifier that is provided in the request.</p>
     */
    inline Snapshot& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The snapshot identifier that is provided in the request.</p>
     */
    inline Snapshot& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The snapshot identifier that is provided in the request.</p>
     */
    inline Snapshot& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}


    /**
     * <p>The identifier of the cluster for which the snapshot was taken.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The identifier of the cluster for which the snapshot was taken.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster for which the snapshot was taken.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster for which the snapshot was taken.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster for which the snapshot was taken.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster for which the snapshot was taken.</p>
     */
    inline Snapshot& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster for which the snapshot was taken.</p>
     */
    inline Snapshot& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster for which the snapshot was taken.</p>
     */
    inline Snapshot& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The time (in UTC format) when Amazon Redshift began the snapshot. A snapshot
     * contains a copy of the cluster data as of this exact time.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }

    /**
     * <p>The time (in UTC format) when Amazon Redshift began the snapshot. A snapshot
     * contains a copy of the cluster data as of this exact time.</p>
     */
    inline bool SnapshotCreateTimeHasBeenSet() const { return m_snapshotCreateTimeHasBeenSet; }

    /**
     * <p>The time (in UTC format) when Amazon Redshift began the snapshot. A snapshot
     * contains a copy of the cluster data as of this exact time.</p>
     */
    inline void SetSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = value; }

    /**
     * <p>The time (in UTC format) when Amazon Redshift began the snapshot. A snapshot
     * contains a copy of the cluster data as of this exact time.</p>
     */
    inline void SetSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_snapshotCreateTimeHasBeenSet = true; m_snapshotCreateTime = std::move(value); }

    /**
     * <p>The time (in UTC format) when Amazon Redshift began the snapshot. A snapshot
     * contains a copy of the cluster data as of this exact time.</p>
     */
    inline Snapshot& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}

    /**
     * <p>The time (in UTC format) when Amazon Redshift began the snapshot. A snapshot
     * contains a copy of the cluster data as of this exact time.</p>
     */
    inline Snapshot& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}


    /**
     * <p>The snapshot status. The value of the status depends on the API operation
     * used: </p> <ul> <li> <p> <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> returns status as "creating". </p> </li> <li> <p>
     * <a>DescribeClusterSnapshots</a> returns status as "creating", "available",
     * "final snapshot", or "failed".</p> </li> <li> <p> <a>DeleteClusterSnapshot</a>
     * returns status as "deleted".</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The snapshot status. The value of the status depends on the API operation
     * used: </p> <ul> <li> <p> <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> returns status as "creating". </p> </li> <li> <p>
     * <a>DescribeClusterSnapshots</a> returns status as "creating", "available",
     * "final snapshot", or "failed".</p> </li> <li> <p> <a>DeleteClusterSnapshot</a>
     * returns status as "deleted".</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The snapshot status. The value of the status depends on the API operation
     * used: </p> <ul> <li> <p> <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> returns status as "creating". </p> </li> <li> <p>
     * <a>DescribeClusterSnapshots</a> returns status as "creating", "available",
     * "final snapshot", or "failed".</p> </li> <li> <p> <a>DeleteClusterSnapshot</a>
     * returns status as "deleted".</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The snapshot status. The value of the status depends on the API operation
     * used: </p> <ul> <li> <p> <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> returns status as "creating". </p> </li> <li> <p>
     * <a>DescribeClusterSnapshots</a> returns status as "creating", "available",
     * "final snapshot", or "failed".</p> </li> <li> <p> <a>DeleteClusterSnapshot</a>
     * returns status as "deleted".</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The snapshot status. The value of the status depends on the API operation
     * used: </p> <ul> <li> <p> <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> returns status as "creating". </p> </li> <li> <p>
     * <a>DescribeClusterSnapshots</a> returns status as "creating", "available",
     * "final snapshot", or "failed".</p> </li> <li> <p> <a>DeleteClusterSnapshot</a>
     * returns status as "deleted".</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The snapshot status. The value of the status depends on the API operation
     * used: </p> <ul> <li> <p> <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> returns status as "creating". </p> </li> <li> <p>
     * <a>DescribeClusterSnapshots</a> returns status as "creating", "available",
     * "final snapshot", or "failed".</p> </li> <li> <p> <a>DeleteClusterSnapshot</a>
     * returns status as "deleted".</p> </li> </ul>
     */
    inline Snapshot& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The snapshot status. The value of the status depends on the API operation
     * used: </p> <ul> <li> <p> <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> returns status as "creating". </p> </li> <li> <p>
     * <a>DescribeClusterSnapshots</a> returns status as "creating", "available",
     * "final snapshot", or "failed".</p> </li> <li> <p> <a>DeleteClusterSnapshot</a>
     * returns status as "deleted".</p> </li> </ul>
     */
    inline Snapshot& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The snapshot status. The value of the status depends on the API operation
     * used: </p> <ul> <li> <p> <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> returns status as "creating". </p> </li> <li> <p>
     * <a>DescribeClusterSnapshots</a> returns status as "creating", "available",
     * "final snapshot", or "failed".</p> </li> <li> <p> <a>DeleteClusterSnapshot</a>
     * returns status as "deleted".</p> </li> </ul>
     */
    inline Snapshot& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The port that the cluster is listening on.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port that the cluster is listening on.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port that the cluster is listening on.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port that the cluster is listening on.</p>
     */
    inline Snapshot& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The Availability Zone in which the cluster was created.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which the cluster was created.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which the cluster was created.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which the cluster was created.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which the cluster was created.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which the cluster was created.</p>
     */
    inline Snapshot& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which the cluster was created.</p>
     */
    inline Snapshot& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which the cluster was created.</p>
     */
    inline Snapshot& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The time (UTC) when the cluster was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetClusterCreateTime() const{ return m_clusterCreateTime; }

    /**
     * <p>The time (UTC) when the cluster was originally created.</p>
     */
    inline bool ClusterCreateTimeHasBeenSet() const { return m_clusterCreateTimeHasBeenSet; }

    /**
     * <p>The time (UTC) when the cluster was originally created.</p>
     */
    inline void SetClusterCreateTime(const Aws::Utils::DateTime& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = value; }

    /**
     * <p>The time (UTC) when the cluster was originally created.</p>
     */
    inline void SetClusterCreateTime(Aws::Utils::DateTime&& value) { m_clusterCreateTimeHasBeenSet = true; m_clusterCreateTime = std::move(value); }

    /**
     * <p>The time (UTC) when the cluster was originally created.</p>
     */
    inline Snapshot& WithClusterCreateTime(const Aws::Utils::DateTime& value) { SetClusterCreateTime(value); return *this;}

    /**
     * <p>The time (UTC) when the cluster was originally created.</p>
     */
    inline Snapshot& WithClusterCreateTime(Aws::Utils::DateTime&& value) { SetClusterCreateTime(std::move(value)); return *this;}


    /**
     * <p>The master user name for the cluster.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The master user name for the cluster.</p>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The master user name for the cluster.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The master user name for the cluster.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The master user name for the cluster.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The master user name for the cluster.</p>
     */
    inline Snapshot& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The master user name for the cluster.</p>
     */
    inline Snapshot& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The master user name for the cluster.</p>
     */
    inline Snapshot& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::move(value); }

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline Snapshot& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline Snapshot& WithClusterVersion(Aws::String&& value) { SetClusterVersion(std::move(value)); return *this;}

    /**
     * <p>The version ID of the Amazon Redshift engine that is running on the
     * cluster.</p>
     */
    inline Snapshot& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}


    /**
     * <p>The snapshot type. Snapshots created using <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> are of type "manual". </p>
     */
    inline const Aws::String& GetSnapshotType() const{ return m_snapshotType; }

    /**
     * <p>The snapshot type. Snapshots created using <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> are of type "manual". </p>
     */
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }

    /**
     * <p>The snapshot type. Snapshots created using <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> are of type "manual". </p>
     */
    inline void SetSnapshotType(const Aws::String& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = value; }

    /**
     * <p>The snapshot type. Snapshots created using <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> are of type "manual". </p>
     */
    inline void SetSnapshotType(Aws::String&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::move(value); }

    /**
     * <p>The snapshot type. Snapshots created using <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> are of type "manual". </p>
     */
    inline void SetSnapshotType(const char* value) { m_snapshotTypeHasBeenSet = true; m_snapshotType.assign(value); }

    /**
     * <p>The snapshot type. Snapshots created using <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> are of type "manual". </p>
     */
    inline Snapshot& WithSnapshotType(const Aws::String& value) { SetSnapshotType(value); return *this;}

    /**
     * <p>The snapshot type. Snapshots created using <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> are of type "manual". </p>
     */
    inline Snapshot& WithSnapshotType(Aws::String&& value) { SetSnapshotType(std::move(value)); return *this;}

    /**
     * <p>The snapshot type. Snapshots created using <a>CreateClusterSnapshot</a> and
     * <a>CopyClusterSnapshot</a> are of type "manual". </p>
     */
    inline Snapshot& WithSnapshotType(const char* value) { SetSnapshotType(value); return *this;}


    /**
     * <p>The node type of the nodes in the cluster.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The node type of the nodes in the cluster.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The node type of the nodes in the cluster.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The node type of the nodes in the cluster.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The node type of the nodes in the cluster.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The node type of the nodes in the cluster.</p>
     */
    inline Snapshot& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The node type of the nodes in the cluster.</p>
     */
    inline Snapshot& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The node type of the nodes in the cluster.</p>
     */
    inline Snapshot& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The number of nodes in the cluster.</p>
     */
    inline int GetNumberOfNodes() const{ return m_numberOfNodes; }

    /**
     * <p>The number of nodes in the cluster.</p>
     */
    inline bool NumberOfNodesHasBeenSet() const { return m_numberOfNodesHasBeenSet; }

    /**
     * <p>The number of nodes in the cluster.</p>
     */
    inline void SetNumberOfNodes(int value) { m_numberOfNodesHasBeenSet = true; m_numberOfNodes = value; }

    /**
     * <p>The number of nodes in the cluster.</p>
     */
    inline Snapshot& WithNumberOfNodes(int value) { SetNumberOfNodes(value); return *this;}


    /**
     * <p>The name of the database that was created when the cluster was created.</p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /**
     * <p>The name of the database that was created when the cluster was created.</p>
     */
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }

    /**
     * <p>The name of the database that was created when the cluster was created.</p>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The name of the database that was created when the cluster was created.</p>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }

    /**
     * <p>The name of the database that was created when the cluster was created.</p>
     */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /**
     * <p>The name of the database that was created when the cluster was created.</p>
     */
    inline Snapshot& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /**
     * <p>The name of the database that was created when the cluster was created.</p>
     */
    inline Snapshot& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}

    /**
     * <p>The name of the database that was created when the cluster was created.</p>
     */
    inline Snapshot& WithDBName(const char* value) { SetDBName(value); return *this;}


    /**
     * <p>The VPC identifier of the cluster if the snapshot is from a cluster in a VPC.
     * Otherwise, this field is not in the output.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC identifier of the cluster if the snapshot is from a cluster in a VPC.
     * Otherwise, this field is not in the output.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC identifier of the cluster if the snapshot is from a cluster in a VPC.
     * Otherwise, this field is not in the output.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC identifier of the cluster if the snapshot is from a cluster in a VPC.
     * Otherwise, this field is not in the output.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC identifier of the cluster if the snapshot is from a cluster in a VPC.
     * Otherwise, this field is not in the output.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC identifier of the cluster if the snapshot is from a cluster in a VPC.
     * Otherwise, this field is not in the output.</p>
     */
    inline Snapshot& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC identifier of the cluster if the snapshot is from a cluster in a VPC.
     * Otherwise, this field is not in the output.</p>
     */
    inline Snapshot& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC identifier of the cluster if the snapshot is from a cluster in a VPC.
     * Otherwise, this field is not in the output.</p>
     */
    inline Snapshot& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>If <code>true</code>, the data in the snapshot is encrypted at rest.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>If <code>true</code>, the data in the snapshot is encrypted at rest.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>If <code>true</code>, the data in the snapshot is encrypted at rest.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>If <code>true</code>, the data in the snapshot is encrypted at rest.</p>
     */
    inline Snapshot& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that was
     * used to encrypt data in the cluster from which the snapshot was taken.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that was
     * used to encrypt data in the cluster from which the snapshot was taken.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that was
     * used to encrypt data in the cluster from which the snapshot was taken.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that was
     * used to encrypt data in the cluster from which the snapshot was taken.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that was
     * used to encrypt data in the cluster from which the snapshot was taken.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that was
     * used to encrypt data in the cluster from which the snapshot was taken.</p>
     */
    inline Snapshot& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that was
     * used to encrypt data in the cluster from which the snapshot was taken.</p>
     */
    inline Snapshot& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (KMS) key ID of the encryption key that was
     * used to encrypt data in the cluster from which the snapshot was taken.</p>
     */
    inline Snapshot& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A boolean that indicates whether the snapshot data is encrypted using the HSM
     * keys of the source cluster. <code>true</code> indicates that the data is
     * encrypted using HSM keys.</p>
     */
    inline bool GetEncryptedWithHSM() const{ return m_encryptedWithHSM; }

    /**
     * <p>A boolean that indicates whether the snapshot data is encrypted using the HSM
     * keys of the source cluster. <code>true</code> indicates that the data is
     * encrypted using HSM keys.</p>
     */
    inline bool EncryptedWithHSMHasBeenSet() const { return m_encryptedWithHSMHasBeenSet; }

    /**
     * <p>A boolean that indicates whether the snapshot data is encrypted using the HSM
     * keys of the source cluster. <code>true</code> indicates that the data is
     * encrypted using HSM keys.</p>
     */
    inline void SetEncryptedWithHSM(bool value) { m_encryptedWithHSMHasBeenSet = true; m_encryptedWithHSM = value; }

    /**
     * <p>A boolean that indicates whether the snapshot data is encrypted using the HSM
     * keys of the source cluster. <code>true</code> indicates that the data is
     * encrypted using HSM keys.</p>
     */
    inline Snapshot& WithEncryptedWithHSM(bool value) { SetEncryptedWithHSM(value); return *this;}


    /**
     * <p>A list of the AWS customer accounts authorized to restore the snapshot.
     * Returns <code>null</code> if no accounts are authorized. Visible only to the
     * snapshot owner. </p>
     */
    inline const Aws::Vector<AccountWithRestoreAccess>& GetAccountsWithRestoreAccess() const{ return m_accountsWithRestoreAccess; }

    /**
     * <p>A list of the AWS customer accounts authorized to restore the snapshot.
     * Returns <code>null</code> if no accounts are authorized. Visible only to the
     * snapshot owner. </p>
     */
    inline bool AccountsWithRestoreAccessHasBeenSet() const { return m_accountsWithRestoreAccessHasBeenSet; }

    /**
     * <p>A list of the AWS customer accounts authorized to restore the snapshot.
     * Returns <code>null</code> if no accounts are authorized. Visible only to the
     * snapshot owner. </p>
     */
    inline void SetAccountsWithRestoreAccess(const Aws::Vector<AccountWithRestoreAccess>& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess = value; }

    /**
     * <p>A list of the AWS customer accounts authorized to restore the snapshot.
     * Returns <code>null</code> if no accounts are authorized. Visible only to the
     * snapshot owner. </p>
     */
    inline void SetAccountsWithRestoreAccess(Aws::Vector<AccountWithRestoreAccess>&& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess = std::move(value); }

    /**
     * <p>A list of the AWS customer accounts authorized to restore the snapshot.
     * Returns <code>null</code> if no accounts are authorized. Visible only to the
     * snapshot owner. </p>
     */
    inline Snapshot& WithAccountsWithRestoreAccess(const Aws::Vector<AccountWithRestoreAccess>& value) { SetAccountsWithRestoreAccess(value); return *this;}

    /**
     * <p>A list of the AWS customer accounts authorized to restore the snapshot.
     * Returns <code>null</code> if no accounts are authorized. Visible only to the
     * snapshot owner. </p>
     */
    inline Snapshot& WithAccountsWithRestoreAccess(Aws::Vector<AccountWithRestoreAccess>&& value) { SetAccountsWithRestoreAccess(std::move(value)); return *this;}

    /**
     * <p>A list of the AWS customer accounts authorized to restore the snapshot.
     * Returns <code>null</code> if no accounts are authorized. Visible only to the
     * snapshot owner. </p>
     */
    inline Snapshot& AddAccountsWithRestoreAccess(const AccountWithRestoreAccess& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess.push_back(value); return *this; }

    /**
     * <p>A list of the AWS customer accounts authorized to restore the snapshot.
     * Returns <code>null</code> if no accounts are authorized. Visible only to the
     * snapshot owner. </p>
     */
    inline Snapshot& AddAccountsWithRestoreAccess(AccountWithRestoreAccess&& value) { m_accountsWithRestoreAccessHasBeenSet = true; m_accountsWithRestoreAccess.push_back(std::move(value)); return *this; }


    /**
     * <p>For manual snapshots, the AWS customer account used to create or copy the
     * snapshot. For automatic snapshots, the owner of the cluster. The owner can
     * perform all snapshot actions, such as sharing a manual snapshot.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>For manual snapshots, the AWS customer account used to create or copy the
     * snapshot. For automatic snapshots, the owner of the cluster. The owner can
     * perform all snapshot actions, such as sharing a manual snapshot.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>For manual snapshots, the AWS customer account used to create or copy the
     * snapshot. For automatic snapshots, the owner of the cluster. The owner can
     * perform all snapshot actions, such as sharing a manual snapshot.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>For manual snapshots, the AWS customer account used to create or copy the
     * snapshot. For automatic snapshots, the owner of the cluster. The owner can
     * perform all snapshot actions, such as sharing a manual snapshot.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>For manual snapshots, the AWS customer account used to create or copy the
     * snapshot. For automatic snapshots, the owner of the cluster. The owner can
     * perform all snapshot actions, such as sharing a manual snapshot.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>For manual snapshots, the AWS customer account used to create or copy the
     * snapshot. For automatic snapshots, the owner of the cluster. The owner can
     * perform all snapshot actions, such as sharing a manual snapshot.</p>
     */
    inline Snapshot& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>For manual snapshots, the AWS customer account used to create or copy the
     * snapshot. For automatic snapshots, the owner of the cluster. The owner can
     * perform all snapshot actions, such as sharing a manual snapshot.</p>
     */
    inline Snapshot& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>For manual snapshots, the AWS customer account used to create or copy the
     * snapshot. For automatic snapshots, the owner of the cluster. The owner can
     * perform all snapshot actions, such as sharing a manual snapshot.</p>
     */
    inline Snapshot& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>The size of the complete set of backup data that would be used to restore the
     * cluster.</p>
     */
    inline double GetTotalBackupSizeInMegaBytes() const{ return m_totalBackupSizeInMegaBytes; }

    /**
     * <p>The size of the complete set of backup data that would be used to restore the
     * cluster.</p>
     */
    inline bool TotalBackupSizeInMegaBytesHasBeenSet() const { return m_totalBackupSizeInMegaBytesHasBeenSet; }

    /**
     * <p>The size of the complete set of backup data that would be used to restore the
     * cluster.</p>
     */
    inline void SetTotalBackupSizeInMegaBytes(double value) { m_totalBackupSizeInMegaBytesHasBeenSet = true; m_totalBackupSizeInMegaBytes = value; }

    /**
     * <p>The size of the complete set of backup data that would be used to restore the
     * cluster.</p>
     */
    inline Snapshot& WithTotalBackupSizeInMegaBytes(double value) { SetTotalBackupSizeInMegaBytes(value); return *this;}


    /**
     * <p>The size of the incremental backup.</p>
     */
    inline double GetActualIncrementalBackupSizeInMegaBytes() const{ return m_actualIncrementalBackupSizeInMegaBytes; }

    /**
     * <p>The size of the incremental backup.</p>
     */
    inline bool ActualIncrementalBackupSizeInMegaBytesHasBeenSet() const { return m_actualIncrementalBackupSizeInMegaBytesHasBeenSet; }

    /**
     * <p>The size of the incremental backup.</p>
     */
    inline void SetActualIncrementalBackupSizeInMegaBytes(double value) { m_actualIncrementalBackupSizeInMegaBytesHasBeenSet = true; m_actualIncrementalBackupSizeInMegaBytes = value; }

    /**
     * <p>The size of the incremental backup.</p>
     */
    inline Snapshot& WithActualIncrementalBackupSizeInMegaBytes(double value) { SetActualIncrementalBackupSizeInMegaBytes(value); return *this;}


    /**
     * <p>The number of megabytes that have been transferred to the snapshot
     * backup.</p>
     */
    inline double GetBackupProgressInMegaBytes() const{ return m_backupProgressInMegaBytes; }

    /**
     * <p>The number of megabytes that have been transferred to the snapshot
     * backup.</p>
     */
    inline bool BackupProgressInMegaBytesHasBeenSet() const { return m_backupProgressInMegaBytesHasBeenSet; }

    /**
     * <p>The number of megabytes that have been transferred to the snapshot
     * backup.</p>
     */
    inline void SetBackupProgressInMegaBytes(double value) { m_backupProgressInMegaBytesHasBeenSet = true; m_backupProgressInMegaBytes = value; }

    /**
     * <p>The number of megabytes that have been transferred to the snapshot
     * backup.</p>
     */
    inline Snapshot& WithBackupProgressInMegaBytes(double value) { SetBackupProgressInMegaBytes(value); return *this;}


    /**
     * <p>The number of megabytes per second being transferred to the snapshot backup.
     * Returns <code>0</code> for a completed backup. </p>
     */
    inline double GetCurrentBackupRateInMegaBytesPerSecond() const{ return m_currentBackupRateInMegaBytesPerSecond; }

    /**
     * <p>The number of megabytes per second being transferred to the snapshot backup.
     * Returns <code>0</code> for a completed backup. </p>
     */
    inline bool CurrentBackupRateInMegaBytesPerSecondHasBeenSet() const { return m_currentBackupRateInMegaBytesPerSecondHasBeenSet; }

    /**
     * <p>The number of megabytes per second being transferred to the snapshot backup.
     * Returns <code>0</code> for a completed backup. </p>
     */
    inline void SetCurrentBackupRateInMegaBytesPerSecond(double value) { m_currentBackupRateInMegaBytesPerSecondHasBeenSet = true; m_currentBackupRateInMegaBytesPerSecond = value; }

    /**
     * <p>The number of megabytes per second being transferred to the snapshot backup.
     * Returns <code>0</code> for a completed backup. </p>
     */
    inline Snapshot& WithCurrentBackupRateInMegaBytesPerSecond(double value) { SetCurrentBackupRateInMegaBytesPerSecond(value); return *this;}


    /**
     * <p>The estimate of the time remaining before the snapshot backup will complete.
     * Returns <code>0</code> for a completed backup. </p>
     */
    inline long long GetEstimatedSecondsToCompletion() const{ return m_estimatedSecondsToCompletion; }

    /**
     * <p>The estimate of the time remaining before the snapshot backup will complete.
     * Returns <code>0</code> for a completed backup. </p>
     */
    inline bool EstimatedSecondsToCompletionHasBeenSet() const { return m_estimatedSecondsToCompletionHasBeenSet; }

    /**
     * <p>The estimate of the time remaining before the snapshot backup will complete.
     * Returns <code>0</code> for a completed backup. </p>
     */
    inline void SetEstimatedSecondsToCompletion(long long value) { m_estimatedSecondsToCompletionHasBeenSet = true; m_estimatedSecondsToCompletion = value; }

    /**
     * <p>The estimate of the time remaining before the snapshot backup will complete.
     * Returns <code>0</code> for a completed backup. </p>
     */
    inline Snapshot& WithEstimatedSecondsToCompletion(long long value) { SetEstimatedSecondsToCompletion(value); return *this;}


    /**
     * <p>The amount of time an in-progress snapshot backup has been running, or the
     * amount of time it took a completed backup to finish.</p>
     */
    inline long long GetElapsedTimeInSeconds() const{ return m_elapsedTimeInSeconds; }

    /**
     * <p>The amount of time an in-progress snapshot backup has been running, or the
     * amount of time it took a completed backup to finish.</p>
     */
    inline bool ElapsedTimeInSecondsHasBeenSet() const { return m_elapsedTimeInSecondsHasBeenSet; }

    /**
     * <p>The amount of time an in-progress snapshot backup has been running, or the
     * amount of time it took a completed backup to finish.</p>
     */
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSecondsHasBeenSet = true; m_elapsedTimeInSeconds = value; }

    /**
     * <p>The amount of time an in-progress snapshot backup has been running, or the
     * amount of time it took a completed backup to finish.</p>
     */
    inline Snapshot& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}


    /**
     * <p>The source region from which the snapshot was copied.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The source region from which the snapshot was copied.</p>
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * <p>The source region from which the snapshot was copied.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The source region from which the snapshot was copied.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * <p>The source region from which the snapshot was copied.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * <p>The source region from which the snapshot was copied.</p>
     */
    inline Snapshot& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The source region from which the snapshot was copied.</p>
     */
    inline Snapshot& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p>The source region from which the snapshot was copied.</p>
     */
    inline Snapshot& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    /**
     * <p>The list of tags for the cluster snapshot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags for the cluster snapshot.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags for the cluster snapshot.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags for the cluster snapshot.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags for the cluster snapshot.</p>
     */
    inline Snapshot& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags for the cluster snapshot.</p>
     */
    inline Snapshot& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags for the cluster snapshot.</p>
     */
    inline Snapshot& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags for the cluster snapshot.</p>
     */
    inline Snapshot& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of node types that this cluster snapshot is able to restore
     * into.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRestorableNodeTypes() const{ return m_restorableNodeTypes; }

    /**
     * <p>The list of node types that this cluster snapshot is able to restore
     * into.</p>
     */
    inline bool RestorableNodeTypesHasBeenSet() const { return m_restorableNodeTypesHasBeenSet; }

    /**
     * <p>The list of node types that this cluster snapshot is able to restore
     * into.</p>
     */
    inline void SetRestorableNodeTypes(const Aws::Vector<Aws::String>& value) { m_restorableNodeTypesHasBeenSet = true; m_restorableNodeTypes = value; }

    /**
     * <p>The list of node types that this cluster snapshot is able to restore
     * into.</p>
     */
    inline void SetRestorableNodeTypes(Aws::Vector<Aws::String>&& value) { m_restorableNodeTypesHasBeenSet = true; m_restorableNodeTypes = std::move(value); }

    /**
     * <p>The list of node types that this cluster snapshot is able to restore
     * into.</p>
     */
    inline Snapshot& WithRestorableNodeTypes(const Aws::Vector<Aws::String>& value) { SetRestorableNodeTypes(value); return *this;}

    /**
     * <p>The list of node types that this cluster snapshot is able to restore
     * into.</p>
     */
    inline Snapshot& WithRestorableNodeTypes(Aws::Vector<Aws::String>&& value) { SetRestorableNodeTypes(std::move(value)); return *this;}

    /**
     * <p>The list of node types that this cluster snapshot is able to restore
     * into.</p>
     */
    inline Snapshot& AddRestorableNodeTypes(const Aws::String& value) { m_restorableNodeTypesHasBeenSet = true; m_restorableNodeTypes.push_back(value); return *this; }

    /**
     * <p>The list of node types that this cluster snapshot is able to restore
     * into.</p>
     */
    inline Snapshot& AddRestorableNodeTypes(Aws::String&& value) { m_restorableNodeTypesHasBeenSet = true; m_restorableNodeTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of node types that this cluster snapshot is able to restore
     * into.</p>
     */
    inline Snapshot& AddRestorableNodeTypes(const char* value) { m_restorableNodeTypesHasBeenSet = true; m_restorableNodeTypes.push_back(value); return *this; }


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
    inline Snapshot& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}


    /**
     * <p>The name of the maintenance track for the snapshot.</p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const{ return m_maintenanceTrackName; }

    /**
     * <p>The name of the maintenance track for the snapshot.</p>
     */
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }

    /**
     * <p>The name of the maintenance track for the snapshot.</p>
     */
    inline void SetMaintenanceTrackName(const Aws::String& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = value; }

    /**
     * <p>The name of the maintenance track for the snapshot.</p>
     */
    inline void SetMaintenanceTrackName(Aws::String&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::move(value); }

    /**
     * <p>The name of the maintenance track for the snapshot.</p>
     */
    inline void SetMaintenanceTrackName(const char* value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName.assign(value); }

    /**
     * <p>The name of the maintenance track for the snapshot.</p>
     */
    inline Snapshot& WithMaintenanceTrackName(const Aws::String& value) { SetMaintenanceTrackName(value); return *this;}

    /**
     * <p>The name of the maintenance track for the snapshot.</p>
     */
    inline Snapshot& WithMaintenanceTrackName(Aws::String&& value) { SetMaintenanceTrackName(std::move(value)); return *this;}

    /**
     * <p>The name of the maintenance track for the snapshot.</p>
     */
    inline Snapshot& WithMaintenanceTrackName(const char* value) { SetMaintenanceTrackName(value); return *this;}


    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely. </p> <p>The value must be either
     * -1 or an integer between 1 and 3,653.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }

    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely. </p> <p>The value must be either
     * -1 or an integer between 1 and 3,653.</p>
     */
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely. </p> <p>The value must be either
     * -1 or an integer between 1 and 3,653.</p>
     */
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }

    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely. </p> <p>The value must be either
     * -1 or an integer between 1 and 3,653.</p>
     */
    inline Snapshot& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}


    /**
     * <p>The number of days until a manual snapshot will pass its retention
     * period.</p>
     */
    inline int GetManualSnapshotRemainingDays() const{ return m_manualSnapshotRemainingDays; }

    /**
     * <p>The number of days until a manual snapshot will pass its retention
     * period.</p>
     */
    inline bool ManualSnapshotRemainingDaysHasBeenSet() const { return m_manualSnapshotRemainingDaysHasBeenSet; }

    /**
     * <p>The number of days until a manual snapshot will pass its retention
     * period.</p>
     */
    inline void SetManualSnapshotRemainingDays(int value) { m_manualSnapshotRemainingDaysHasBeenSet = true; m_manualSnapshotRemainingDays = value; }

    /**
     * <p>The number of days until a manual snapshot will pass its retention
     * period.</p>
     */
    inline Snapshot& WithManualSnapshotRemainingDays(int value) { SetManualSnapshotRemainingDays(value); return *this;}


    /**
     * <p>A timestamp representing the start of the retention period for the
     * snapshot.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotRetentionStartTime() const{ return m_snapshotRetentionStartTime; }

    /**
     * <p>A timestamp representing the start of the retention period for the
     * snapshot.</p>
     */
    inline bool SnapshotRetentionStartTimeHasBeenSet() const { return m_snapshotRetentionStartTimeHasBeenSet; }

    /**
     * <p>A timestamp representing the start of the retention period for the
     * snapshot.</p>
     */
    inline void SetSnapshotRetentionStartTime(const Aws::Utils::DateTime& value) { m_snapshotRetentionStartTimeHasBeenSet = true; m_snapshotRetentionStartTime = value; }

    /**
     * <p>A timestamp representing the start of the retention period for the
     * snapshot.</p>
     */
    inline void SetSnapshotRetentionStartTime(Aws::Utils::DateTime&& value) { m_snapshotRetentionStartTimeHasBeenSet = true; m_snapshotRetentionStartTime = std::move(value); }

    /**
     * <p>A timestamp representing the start of the retention period for the
     * snapshot.</p>
     */
    inline Snapshot& WithSnapshotRetentionStartTime(const Aws::Utils::DateTime& value) { SetSnapshotRetentionStartTime(value); return *this;}

    /**
     * <p>A timestamp representing the start of the retention period for the
     * snapshot.</p>
     */
    inline Snapshot& WithSnapshotRetentionStartTime(Aws::Utils::DateTime&& value) { SetSnapshotRetentionStartTime(std::move(value)); return *this;}

  private:

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    Aws::Utils::DateTime m_snapshotCreateTime;
    bool m_snapshotCreateTimeHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::Utils::DateTime m_clusterCreateTime;
    bool m_clusterCreateTimeHasBeenSet;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet;

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet;

    int m_numberOfNodes;
    bool m_numberOfNodesHasBeenSet;

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    bool m_encryptedWithHSM;
    bool m_encryptedWithHSMHasBeenSet;

    Aws::Vector<AccountWithRestoreAccess> m_accountsWithRestoreAccess;
    bool m_accountsWithRestoreAccessHasBeenSet;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet;

    double m_totalBackupSizeInMegaBytes;
    bool m_totalBackupSizeInMegaBytesHasBeenSet;

    double m_actualIncrementalBackupSizeInMegaBytes;
    bool m_actualIncrementalBackupSizeInMegaBytesHasBeenSet;

    double m_backupProgressInMegaBytes;
    bool m_backupProgressInMegaBytesHasBeenSet;

    double m_currentBackupRateInMegaBytesPerSecond;
    bool m_currentBackupRateInMegaBytesPerSecondHasBeenSet;

    long long m_estimatedSecondsToCompletion;
    bool m_estimatedSecondsToCompletionHasBeenSet;

    long long m_elapsedTimeInSeconds;
    bool m_elapsedTimeInSecondsHasBeenSet;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<Aws::String> m_restorableNodeTypes;
    bool m_restorableNodeTypesHasBeenSet;

    bool m_enhancedVpcRouting;
    bool m_enhancedVpcRoutingHasBeenSet;

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet;

    int m_manualSnapshotRemainingDays;
    bool m_manualSnapshotRemainingDaysHasBeenSet;

    Aws::Utils::DateTime m_snapshotRetentionStartTime;
    bool m_snapshotRetentionStartTimeHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
