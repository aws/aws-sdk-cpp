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
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/DAXRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dax/model/SSESpecification.h>
#include <aws/dax/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DAX
{
namespace Model
{

  /**
   */
  class AWS_DAX_API CreateClusterRequest : public DAXRequest
  {
  public:
    CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline CreateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline CreateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p> <b>Constraints:</b> </p> <ul> <li> <p>A name must contain from 1 to 20
     * alphanumeric characters or hyphens.</p> </li> <li> <p>The first character must
     * be a letter.</p> </li> <li> <p>A name cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline CreateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The compute and memory capacity of the nodes in the cluster.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The compute and memory capacity of the nodes in the cluster.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the nodes in the cluster.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The compute and memory capacity of the nodes in the cluster.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The compute and memory capacity of the nodes in the cluster.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The compute and memory capacity of the nodes in the cluster.</p>
     */
    inline CreateClusterRequest& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The compute and memory capacity of the nodes in the cluster.</p>
     */
    inline CreateClusterRequest& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the nodes in the cluster.</p>
     */
    inline CreateClusterRequest& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>A description of the cluster.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the cluster.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the cluster.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the cluster.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the cluster.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the cluster.</p>
     */
    inline CreateClusterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the cluster.</p>
     */
    inline CreateClusterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the cluster.</p>
     */
    inline CreateClusterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The number of nodes in the DAX cluster. A replication factor of 1 will create
     * a single-node cluster, without any read replicas. For additional fault
     * tolerance, you can create a multiple node cluster with one or more read
     * replicas. To do this, set <i>ReplicationFactor</i> to 2 or more.</p> <note>
     * <p>AWS recommends that you have at least two read replicas per cluster.</p>
     * </note>
     */
    inline int GetReplicationFactor() const{ return m_replicationFactor; }

    /**
     * <p>The number of nodes in the DAX cluster. A replication factor of 1 will create
     * a single-node cluster, without any read replicas. For additional fault
     * tolerance, you can create a multiple node cluster with one or more read
     * replicas. To do this, set <i>ReplicationFactor</i> to 2 or more.</p> <note>
     * <p>AWS recommends that you have at least two read replicas per cluster.</p>
     * </note>
     */
    inline bool ReplicationFactorHasBeenSet() const { return m_replicationFactorHasBeenSet; }

    /**
     * <p>The number of nodes in the DAX cluster. A replication factor of 1 will create
     * a single-node cluster, without any read replicas. For additional fault
     * tolerance, you can create a multiple node cluster with one or more read
     * replicas. To do this, set <i>ReplicationFactor</i> to 2 or more.</p> <note>
     * <p>AWS recommends that you have at least two read replicas per cluster.</p>
     * </note>
     */
    inline void SetReplicationFactor(int value) { m_replicationFactorHasBeenSet = true; m_replicationFactor = value; }

    /**
     * <p>The number of nodes in the DAX cluster. A replication factor of 1 will create
     * a single-node cluster, without any read replicas. For additional fault
     * tolerance, you can create a multiple node cluster with one or more read
     * replicas. To do this, set <i>ReplicationFactor</i> to 2 or more.</p> <note>
     * <p>AWS recommends that you have at least two read replicas per cluster.</p>
     * </note>
     */
    inline CreateClusterRequest& WithReplicationFactor(int value) { SetReplicationFactor(value); return *this;}


    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline CreateClusterRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline CreateClusterRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline CreateClusterRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline CreateClusterRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline CreateClusterRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The name of the subnet group to be used for the replication group.</p>
     * <important> <p>DAX clusters can only run in an Amazon VPC environment. All of
     * the subnets that you specify in a subnet group must exist in the same VPC.</p>
     * </important>
     */
    inline const Aws::String& GetSubnetGroupName() const{ return m_subnetGroupName; }

    /**
     * <p>The name of the subnet group to be used for the replication group.</p>
     * <important> <p>DAX clusters can only run in an Amazon VPC environment. All of
     * the subnets that you specify in a subnet group must exist in the same VPC.</p>
     * </important>
     */
    inline bool SubnetGroupNameHasBeenSet() const { return m_subnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the subnet group to be used for the replication group.</p>
     * <important> <p>DAX clusters can only run in an Amazon VPC environment. All of
     * the subnets that you specify in a subnet group must exist in the same VPC.</p>
     * </important>
     */
    inline void SetSubnetGroupName(const Aws::String& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = value; }

    /**
     * <p>The name of the subnet group to be used for the replication group.</p>
     * <important> <p>DAX clusters can only run in an Amazon VPC environment. All of
     * the subnets that you specify in a subnet group must exist in the same VPC.</p>
     * </important>
     */
    inline void SetSubnetGroupName(Aws::String&& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = std::move(value); }

    /**
     * <p>The name of the subnet group to be used for the replication group.</p>
     * <important> <p>DAX clusters can only run in an Amazon VPC environment. All of
     * the subnets that you specify in a subnet group must exist in the same VPC.</p>
     * </important>
     */
    inline void SetSubnetGroupName(const char* value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName.assign(value); }

    /**
     * <p>The name of the subnet group to be used for the replication group.</p>
     * <important> <p>DAX clusters can only run in an Amazon VPC environment. All of
     * the subnets that you specify in a subnet group must exist in the same VPC.</p>
     * </important>
     */
    inline CreateClusterRequest& WithSubnetGroupName(const Aws::String& value) { SetSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the subnet group to be used for the replication group.</p>
     * <important> <p>DAX clusters can only run in an Amazon VPC environment. All of
     * the subnets that you specify in a subnet group must exist in the same VPC.</p>
     * </important>
     */
    inline CreateClusterRequest& WithSubnetGroupName(Aws::String&& value) { SetSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the subnet group to be used for the replication group.</p>
     * <important> <p>DAX clusters can only run in an Amazon VPC environment. All of
     * the subnets that you specify in a subnet group must exist in the same VPC.</p>
     * </important>
     */
    inline CreateClusterRequest& WithSubnetGroupName(const char* value) { SetSubnetGroupName(value); return *this;}


    /**
     * <p>A list of security group IDs to be assigned to each node in the DAX cluster.
     * (Each of the security group ID is system-generated.)</p> <p>If this parameter is
     * not specified, DAX assigns the default VPC security group to each node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of security group IDs to be assigned to each node in the DAX cluster.
     * (Each of the security group ID is system-generated.)</p> <p>If this parameter is
     * not specified, DAX assigns the default VPC security group to each node.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of security group IDs to be assigned to each node in the DAX cluster.
     * (Each of the security group ID is system-generated.)</p> <p>If this parameter is
     * not specified, DAX assigns the default VPC security group to each node.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of security group IDs to be assigned to each node in the DAX cluster.
     * (Each of the security group ID is system-generated.)</p> <p>If this parameter is
     * not specified, DAX assigns the default VPC security group to each node.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of security group IDs to be assigned to each node in the DAX cluster.
     * (Each of the security group ID is system-generated.)</p> <p>If this parameter is
     * not specified, DAX assigns the default VPC security group to each node.</p>
     */
    inline CreateClusterRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of security group IDs to be assigned to each node in the DAX cluster.
     * (Each of the security group ID is system-generated.)</p> <p>If this parameter is
     * not specified, DAX assigns the default VPC security group to each node.</p>
     */
    inline CreateClusterRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of security group IDs to be assigned to each node in the DAX cluster.
     * (Each of the security group ID is system-generated.)</p> <p>If this parameter is
     * not specified, DAX assigns the default VPC security group to each node.</p>
     */
    inline CreateClusterRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of security group IDs to be assigned to each node in the DAX cluster.
     * (Each of the security group ID is system-generated.)</p> <p>If this parameter is
     * not specified, DAX assigns the default VPC security group to each node.</p>
     */
    inline CreateClusterRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of security group IDs to be assigned to each node in the DAX cluster.
     * (Each of the security group ID is system-generated.)</p> <p>If this parameter is
     * not specified, DAX assigns the default VPC security group to each node.</p>
     */
    inline CreateClusterRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>Specifies the weekly time range during which maintenance on the DAX cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:05:00-sun:09:00</code> </p> <note> <p>If you don't specify
     * a preferred maintenance window when you create or modify a cache cluster, DAX
     * assigns a 60-minute maintenance window on a randomly selected day of the
     * week.</p> </note>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the DAX cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:05:00-sun:09:00</code> </p> <note> <p>If you don't specify
     * a preferred maintenance window when you create or modify a cache cluster, DAX
     * assigns a 60-minute maintenance window on a randomly selected day of the
     * week.</p> </note>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the DAX cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:05:00-sun:09:00</code> </p> <note> <p>If you don't specify
     * a preferred maintenance window when you create or modify a cache cluster, DAX
     * assigns a 60-minute maintenance window on a randomly selected day of the
     * week.</p> </note>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the DAX cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:05:00-sun:09:00</code> </p> <note> <p>If you don't specify
     * a preferred maintenance window when you create or modify a cache cluster, DAX
     * assigns a 60-minute maintenance window on a randomly selected day of the
     * week.</p> </note>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>Specifies the weekly time range during which maintenance on the DAX cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:05:00-sun:09:00</code> </p> <note> <p>If you don't specify
     * a preferred maintenance window when you create or modify a cache cluster, DAX
     * assigns a 60-minute maintenance window on a randomly selected day of the
     * week.</p> </note>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>Specifies the weekly time range during which maintenance on the DAX cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:05:00-sun:09:00</code> </p> <note> <p>If you don't specify
     * a preferred maintenance window when you create or modify a cache cluster, DAX
     * assigns a 60-minute maintenance window on a randomly selected day of the
     * week.</p> </note>
     */
    inline CreateClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the DAX cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:05:00-sun:09:00</code> </p> <note> <p>If you don't specify
     * a preferred maintenance window when you create or modify a cache cluster, DAX
     * assigns a 60-minute maintenance window on a randomly selected day of the
     * week.</p> </note>
     */
    inline CreateClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the DAX cluster
     * is performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi
     * (24H Clock UTC). The minimum maintenance window is a 60 minute period. Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:05:00-sun:09:00</code> </p> <note> <p>If you don't specify
     * a preferred maintenance window when you create or modify a cache cluster, DAX
     * assigns a 60-minute maintenance window on a randomly selected day of the
     * week.</p> </note>
     */
    inline CreateClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note> <p>The Amazon SNS topic owner must be same as the DAX
     * cluster owner.</p> </note>
     */
    inline const Aws::String& GetNotificationTopicArn() const{ return m_notificationTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note> <p>The Amazon SNS topic owner must be same as the DAX
     * cluster owner.</p> </note>
     */
    inline bool NotificationTopicArnHasBeenSet() const { return m_notificationTopicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note> <p>The Amazon SNS topic owner must be same as the DAX
     * cluster owner.</p> </note>
     */
    inline void SetNotificationTopicArn(const Aws::String& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note> <p>The Amazon SNS topic owner must be same as the DAX
     * cluster owner.</p> </note>
     */
    inline void SetNotificationTopicArn(Aws::String&& value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note> <p>The Amazon SNS topic owner must be same as the DAX
     * cluster owner.</p> </note>
     */
    inline void SetNotificationTopicArn(const char* value) { m_notificationTopicArnHasBeenSet = true; m_notificationTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note> <p>The Amazon SNS topic owner must be same as the DAX
     * cluster owner.</p> </note>
     */
    inline CreateClusterRequest& WithNotificationTopicArn(const Aws::String& value) { SetNotificationTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note> <p>The Amazon SNS topic owner must be same as the DAX
     * cluster owner.</p> </note>
     */
    inline CreateClusterRequest& WithNotificationTopicArn(Aws::String&& value) { SetNotificationTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to which notifications
     * will be sent.</p> <note> <p>The Amazon SNS topic owner must be same as the DAX
     * cluster owner.</p> </note>
     */
    inline CreateClusterRequest& WithNotificationTopicArn(const char* value) { SetNotificationTopicArn(value); return *this;}


    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline CreateClusterRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline CreateClusterRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>A valid Amazon Resource Name (ARN) that identifies an IAM role. At runtime,
     * DAX will assume this role and use the role's permissions to access DynamoDB on
     * your behalf.</p>
     */
    inline CreateClusterRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The parameter group to be associated with the DAX cluster.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The parameter group to be associated with the DAX cluster.</p>
     */
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

    /**
     * <p>The parameter group to be associated with the DAX cluster.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The parameter group to be associated with the DAX cluster.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

    /**
     * <p>The parameter group to be associated with the DAX cluster.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The parameter group to be associated with the DAX cluster.</p>
     */
    inline CreateClusterRequest& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The parameter group to be associated with the DAX cluster.</p>
     */
    inline CreateClusterRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The parameter group to be associated with the DAX cluster.</p>
     */
    inline CreateClusterRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


    /**
     * <p>A set of tags to associate with the DAX cluster. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A set of tags to associate with the DAX cluster. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A set of tags to associate with the DAX cluster. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A set of tags to associate with the DAX cluster. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A set of tags to associate with the DAX cluster. </p>
     */
    inline CreateClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A set of tags to associate with the DAX cluster. </p>
     */
    inline CreateClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A set of tags to associate with the DAX cluster. </p>
     */
    inline CreateClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A set of tags to associate with the DAX cluster. </p>
     */
    inline CreateClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents the settings used to enable server-side encryption on the
     * cluster.</p>
     */
    inline const SSESpecification& GetSSESpecification() const{ return m_sSESpecification; }

    /**
     * <p>Represents the settings used to enable server-side encryption on the
     * cluster.</p>
     */
    inline bool SSESpecificationHasBeenSet() const { return m_sSESpecificationHasBeenSet; }

    /**
     * <p>Represents the settings used to enable server-side encryption on the
     * cluster.</p>
     */
    inline void SetSSESpecification(const SSESpecification& value) { m_sSESpecificationHasBeenSet = true; m_sSESpecification = value; }

    /**
     * <p>Represents the settings used to enable server-side encryption on the
     * cluster.</p>
     */
    inline void SetSSESpecification(SSESpecification&& value) { m_sSESpecificationHasBeenSet = true; m_sSESpecification = std::move(value); }

    /**
     * <p>Represents the settings used to enable server-side encryption on the
     * cluster.</p>
     */
    inline CreateClusterRequest& WithSSESpecification(const SSESpecification& value) { SetSSESpecification(value); return *this;}

    /**
     * <p>Represents the settings used to enable server-side encryption on the
     * cluster.</p>
     */
    inline CreateClusterRequest& WithSSESpecification(SSESpecification&& value) { SetSSESpecification(std::move(value)); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_replicationFactor;
    bool m_replicationFactorHasBeenSet;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;

    Aws::String m_subnetGroupName;
    bool m_subnetGroupNameHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    Aws::String m_notificationTopicArn;
    bool m_notificationTopicArnHasBeenSet;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    SSESpecification m_sSESpecification;
    bool m_sSESpecificationHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
