/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/Tag.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class CreateClusterRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the cluster. This value must be unique as it also serves as the
     * cluster identifier.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster. This value must be unique as it also serves as the
     * cluster identifier.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster. This value must be unique as it also serves as the
     * cluster identifier.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster. This value must be unique as it also serves as the
     * cluster identifier.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster. This value must be unique as it also serves as the
     * cluster identifier.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster. This value must be unique as it also serves as the
     * cluster identifier.</p>
     */
    inline CreateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster. This value must be unique as it also serves as the
     * cluster identifier.</p>
     */
    inline CreateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster. This value must be unique as it also serves as the
     * cluster identifier.</p>
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
     * <p>The name of the parameter group associated with the cluster.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of the parameter group associated with the cluster.</p>
     */
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the parameter group associated with the cluster.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of the parameter group associated with the cluster.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

    /**
     * <p>The name of the parameter group associated with the cluster.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of the parameter group associated with the cluster.</p>
     */
    inline CreateClusterRequest& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group associated with the cluster.</p>
     */
    inline CreateClusterRequest& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter group associated with the cluster.</p>
     */
    inline CreateClusterRequest& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


    /**
     * <p>An optional description of the cluster.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of the cluster.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of the cluster.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of the cluster.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of the cluster.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of the cluster.</p>
     */
    inline CreateClusterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of the cluster.</p>
     */
    inline CreateClusterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the cluster.</p>
     */
    inline CreateClusterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The number of shards the cluster will contain. The default value is 1. </p>
     */
    inline int GetNumShards() const{ return m_numShards; }

    /**
     * <p>The number of shards the cluster will contain. The default value is 1. </p>
     */
    inline bool NumShardsHasBeenSet() const { return m_numShardsHasBeenSet; }

    /**
     * <p>The number of shards the cluster will contain. The default value is 1. </p>
     */
    inline void SetNumShards(int value) { m_numShardsHasBeenSet = true; m_numShards = value; }

    /**
     * <p>The number of shards the cluster will contain. The default value is 1. </p>
     */
    inline CreateClusterRequest& WithNumShards(int value) { SetNumShards(value); return *this;}


    /**
     * <p>The number of replicas to apply to each shard. The default value is 1. The
     * maximum is 5. </p>
     */
    inline int GetNumReplicasPerShard() const{ return m_numReplicasPerShard; }

    /**
     * <p>The number of replicas to apply to each shard. The default value is 1. The
     * maximum is 5. </p>
     */
    inline bool NumReplicasPerShardHasBeenSet() const { return m_numReplicasPerShardHasBeenSet; }

    /**
     * <p>The number of replicas to apply to each shard. The default value is 1. The
     * maximum is 5. </p>
     */
    inline void SetNumReplicasPerShard(int value) { m_numReplicasPerShardHasBeenSet = true; m_numReplicasPerShard = value; }

    /**
     * <p>The number of replicas to apply to each shard. The default value is 1. The
     * maximum is 5. </p>
     */
    inline CreateClusterRequest& WithNumReplicasPerShard(int value) { SetNumReplicasPerShard(value); return *this;}


    /**
     * <p>The name of the subnet group to be used for the cluster.</p>
     */
    inline const Aws::String& GetSubnetGroupName() const{ return m_subnetGroupName; }

    /**
     * <p>The name of the subnet group to be used for the cluster.</p>
     */
    inline bool SubnetGroupNameHasBeenSet() const { return m_subnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the subnet group to be used for the cluster.</p>
     */
    inline void SetSubnetGroupName(const Aws::String& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = value; }

    /**
     * <p>The name of the subnet group to be used for the cluster.</p>
     */
    inline void SetSubnetGroupName(Aws::String&& value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName = std::move(value); }

    /**
     * <p>The name of the subnet group to be used for the cluster.</p>
     */
    inline void SetSubnetGroupName(const char* value) { m_subnetGroupNameHasBeenSet = true; m_subnetGroupName.assign(value); }

    /**
     * <p>The name of the subnet group to be used for the cluster.</p>
     */
    inline CreateClusterRequest& WithSubnetGroupName(const Aws::String& value) { SetSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the subnet group to be used for the cluster.</p>
     */
    inline CreateClusterRequest& WithSubnetGroupName(Aws::String&& value) { SetSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the subnet group to be used for the cluster.</p>
     */
    inline CreateClusterRequest& WithSubnetGroupName(const char* value) { SetSubnetGroupName(value); return *this;}


    /**
     * <p>A list of security group names to associate with this cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A list of security group names to associate with this cluster.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A list of security group names to associate with this cluster.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A list of security group names to associate with this cluster.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A list of security group names to associate with this cluster.</p>
     */
    inline CreateClusterRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of security group names to associate with this cluster.</p>
     */
    inline CreateClusterRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of security group names to associate with this cluster.</p>
     */
    inline CreateClusterRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of security group names to associate with this cluster.</p>
     */
    inline CreateClusterRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of security group names to associate with this cluster.</p>
     */
    inline CreateClusterRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline const Aws::String& GetMaintenanceWindow() const{ return m_maintenanceWindow; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline void SetMaintenanceWindow(const Aws::String& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = value; }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline void SetMaintenanceWindow(Aws::String&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::move(value); }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline void SetMaintenanceWindow(const char* value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow.assign(value); }

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline CreateClusterRequest& WithMaintenanceWindow(const Aws::String& value) { SetMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline CreateClusterRequest& WithMaintenanceWindow(Aws::String&& value) { SetMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>Specifies the weekly time range during which maintenance on the cluster is
     * performed. It is specified as a range in the format ddd:hh24:mi-ddd:hh24:mi (24H
     * Clock UTC). The minimum maintenance window is a 60 minute period.</p> <p>Valid
     * values for <code>ddd</code> are:</p> <ul> <li> <p> <code>sun</code> </p> </li>
     * <li> <p> <code>mon</code> </p> </li> <li> <p> <code>tue</code> </p> </li> <li>
     * <p> <code>wed</code> </p> </li> <li> <p> <code>thu</code> </p> </li> <li> <p>
     * <code>fri</code> </p> </li> <li> <p> <code>sat</code> </p> </li> </ul>
     * <p>Example: <code>sun:23:00-mon:01:30</code> </p>
     */
    inline CreateClusterRequest& WithMaintenanceWindow(const char* value) { SetMaintenanceWindow(value); return *this;}


    /**
     * <p>The port number on which each of the nodes accepts connections.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which each of the nodes accepts connections.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which each of the nodes accepts connections.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which each of the nodes accepts connections.</p>
     */
    inline CreateClusterRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>
     */
    inline CreateClusterRequest& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>
     */
    inline CreateClusterRequest& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) topic to which notifications are sent.</p>
     */
    inline CreateClusterRequest& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}


    /**
     * <p>A flag to enable in-transit encryption on the cluster.</p>
     */
    inline bool GetTLSEnabled() const{ return m_tLSEnabled; }

    /**
     * <p>A flag to enable in-transit encryption on the cluster.</p>
     */
    inline bool TLSEnabledHasBeenSet() const { return m_tLSEnabledHasBeenSet; }

    /**
     * <p>A flag to enable in-transit encryption on the cluster.</p>
     */
    inline void SetTLSEnabled(bool value) { m_tLSEnabledHasBeenSet = true; m_tLSEnabled = value; }

    /**
     * <p>A flag to enable in-transit encryption on the cluster.</p>
     */
    inline CreateClusterRequest& WithTLSEnabled(bool value) { SetTLSEnabled(value); return *this;}


    /**
     * <p>The ID of the KMS key used to encrypt the cluster.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the KMS key used to encrypt the cluster.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS key used to encrypt the cluster.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the KMS key used to encrypt the cluster.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key used to encrypt the cluster.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key used to encrypt the cluster.</p>
     */
    inline CreateClusterRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt the cluster.</p>
     */
    inline CreateClusterRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key used to encrypt the cluster.</p>
     */
    inline CreateClusterRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the RDB snapshot
     * files stored in Amazon S3. The snapshot files are used to populate the new
     * cluster. The Amazon S3 object name in the ARN cannot contain any commas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotArns() const{ return m_snapshotArns; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the RDB snapshot
     * files stored in Amazon S3. The snapshot files are used to populate the new
     * cluster. The Amazon S3 object name in the ARN cannot contain any commas.</p>
     */
    inline bool SnapshotArnsHasBeenSet() const { return m_snapshotArnsHasBeenSet; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the RDB snapshot
     * files stored in Amazon S3. The snapshot files are used to populate the new
     * cluster. The Amazon S3 object name in the ARN cannot contain any commas.</p>
     */
    inline void SetSnapshotArns(const Aws::Vector<Aws::String>& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns = value; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the RDB snapshot
     * files stored in Amazon S3. The snapshot files are used to populate the new
     * cluster. The Amazon S3 object name in the ARN cannot contain any commas.</p>
     */
    inline void SetSnapshotArns(Aws::Vector<Aws::String>&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns = std::move(value); }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the RDB snapshot
     * files stored in Amazon S3. The snapshot files are used to populate the new
     * cluster. The Amazon S3 object name in the ARN cannot contain any commas.</p>
     */
    inline CreateClusterRequest& WithSnapshotArns(const Aws::Vector<Aws::String>& value) { SetSnapshotArns(value); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the RDB snapshot
     * files stored in Amazon S3. The snapshot files are used to populate the new
     * cluster. The Amazon S3 object name in the ARN cannot contain any commas.</p>
     */
    inline CreateClusterRequest& WithSnapshotArns(Aws::Vector<Aws::String>&& value) { SetSnapshotArns(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the RDB snapshot
     * files stored in Amazon S3. The snapshot files are used to populate the new
     * cluster. The Amazon S3 object name in the ARN cannot contain any commas.</p>
     */
    inline CreateClusterRequest& AddSnapshotArns(const Aws::String& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the RDB snapshot
     * files stored in Amazon S3. The snapshot files are used to populate the new
     * cluster. The Amazon S3 object name in the ARN cannot contain any commas.</p>
     */
    inline CreateClusterRequest& AddSnapshotArns(Aws::String&& value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARN) that uniquely identify the RDB snapshot
     * files stored in Amazon S3. The snapshot files are used to populate the new
     * cluster. The Amazon S3 object name in the ARN cannot contain any commas.</p>
     */
    inline CreateClusterRequest& AddSnapshotArns(const char* value) { m_snapshotArnsHasBeenSet = true; m_snapshotArns.push_back(value); return *this; }


    /**
     * <p>The name of a snapshot from which to restore data into the new cluster. The
     * snapshot status changes to restoring while the new cluster is being created.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The name of a snapshot from which to restore data into the new cluster. The
     * snapshot status changes to restoring while the new cluster is being created.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>The name of a snapshot from which to restore data into the new cluster. The
     * snapshot status changes to restoring while the new cluster is being created.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of a snapshot from which to restore data into the new cluster. The
     * snapshot status changes to restoring while the new cluster is being created.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>The name of a snapshot from which to restore data into the new cluster. The
     * snapshot status changes to restoring while the new cluster is being created.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The name of a snapshot from which to restore data into the new cluster. The
     * snapshot status changes to restoring while the new cluster is being created.</p>
     */
    inline CreateClusterRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of a snapshot from which to restore data into the new cluster. The
     * snapshot status changes to restoring while the new cluster is being created.</p>
     */
    inline CreateClusterRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of a snapshot from which to restore data into the new cluster. The
     * snapshot status changes to restoring while the new cluster is being created.</p>
     */
    inline CreateClusterRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}


    /**
     * <p>The number of days for which MemoryDB retains automatic snapshots before
     * deleting them. For example, if you set SnapshotRetentionLimit to 5, a snapshot
     * that was taken today is retained for 5 days before being deleted.</p>
     */
    inline int GetSnapshotRetentionLimit() const{ return m_snapshotRetentionLimit; }

    /**
     * <p>The number of days for which MemoryDB retains automatic snapshots before
     * deleting them. For example, if you set SnapshotRetentionLimit to 5, a snapshot
     * that was taken today is retained for 5 days before being deleted.</p>
     */
    inline bool SnapshotRetentionLimitHasBeenSet() const { return m_snapshotRetentionLimitHasBeenSet; }

    /**
     * <p>The number of days for which MemoryDB retains automatic snapshots before
     * deleting them. For example, if you set SnapshotRetentionLimit to 5, a snapshot
     * that was taken today is retained for 5 days before being deleted.</p>
     */
    inline void SetSnapshotRetentionLimit(int value) { m_snapshotRetentionLimitHasBeenSet = true; m_snapshotRetentionLimit = value; }

    /**
     * <p>The number of days for which MemoryDB retains automatic snapshots before
     * deleting them. For example, if you set SnapshotRetentionLimit to 5, a snapshot
     * that was taken today is retained for 5 days before being deleted.</p>
     */
    inline CreateClusterRequest& WithSnapshotRetentionLimit(int value) { SetSnapshotRetentionLimit(value); return *this;}


    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=myKey, Value=myKeyValue. You can include multiple tags
     * as shown following: Key=myKey, Value=myKeyValue Key=mySecondKey,
     * Value=mySecondKeyValue.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=myKey, Value=myKeyValue. You can include multiple tags
     * as shown following: Key=myKey, Value=myKeyValue Key=mySecondKey,
     * Value=mySecondKeyValue.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=myKey, Value=myKeyValue. You can include multiple tags
     * as shown following: Key=myKey, Value=myKeyValue Key=mySecondKey,
     * Value=mySecondKeyValue.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=myKey, Value=myKeyValue. You can include multiple tags
     * as shown following: Key=myKey, Value=myKeyValue Key=mySecondKey,
     * Value=mySecondKeyValue.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=myKey, Value=myKeyValue. You can include multiple tags
     * as shown following: Key=myKey, Value=myKeyValue Key=mySecondKey,
     * Value=mySecondKeyValue.</p>
     */
    inline CreateClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=myKey, Value=myKeyValue. You can include multiple tags
     * as shown following: Key=myKey, Value=myKeyValue Key=mySecondKey,
     * Value=mySecondKeyValue.</p>
     */
    inline CreateClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=myKey, Value=myKeyValue. You can include multiple tags
     * as shown following: Key=myKey, Value=myKeyValue Key=mySecondKey,
     * Value=mySecondKeyValue.</p>
     */
    inline CreateClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to be added to this resource. Tags are comma-separated
     * key,value pairs (e.g. Key=myKey, Value=myKeyValue. You can include multiple tags
     * as shown following: Key=myKey, Value=myKeyValue Key=mySecondKey,
     * Value=mySecondKeyValue.</p>
     */
    inline CreateClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The daily time range (in UTC) during which MemoryDB begins taking a daily
     * snapshot of your shard.</p> <p> Example: 05:00-09:00</p> <p> If you do not
     * specify this parameter, MemoryDB automatically chooses an appropriate time
     * range.</p>
     */
    inline const Aws::String& GetSnapshotWindow() const{ return m_snapshotWindow; }

    /**
     * <p>The daily time range (in UTC) during which MemoryDB begins taking a daily
     * snapshot of your shard.</p> <p> Example: 05:00-09:00</p> <p> If you do not
     * specify this parameter, MemoryDB automatically chooses an appropriate time
     * range.</p>
     */
    inline bool SnapshotWindowHasBeenSet() const { return m_snapshotWindowHasBeenSet; }

    /**
     * <p>The daily time range (in UTC) during which MemoryDB begins taking a daily
     * snapshot of your shard.</p> <p> Example: 05:00-09:00</p> <p> If you do not
     * specify this parameter, MemoryDB automatically chooses an appropriate time
     * range.</p>
     */
    inline void SetSnapshotWindow(const Aws::String& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = value; }

    /**
     * <p>The daily time range (in UTC) during which MemoryDB begins taking a daily
     * snapshot of your shard.</p> <p> Example: 05:00-09:00</p> <p> If you do not
     * specify this parameter, MemoryDB automatically chooses an appropriate time
     * range.</p>
     */
    inline void SetSnapshotWindow(Aws::String&& value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow = std::move(value); }

    /**
     * <p>The daily time range (in UTC) during which MemoryDB begins taking a daily
     * snapshot of your shard.</p> <p> Example: 05:00-09:00</p> <p> If you do not
     * specify this parameter, MemoryDB automatically chooses an appropriate time
     * range.</p>
     */
    inline void SetSnapshotWindow(const char* value) { m_snapshotWindowHasBeenSet = true; m_snapshotWindow.assign(value); }

    /**
     * <p>The daily time range (in UTC) during which MemoryDB begins taking a daily
     * snapshot of your shard.</p> <p> Example: 05:00-09:00</p> <p> If you do not
     * specify this parameter, MemoryDB automatically chooses an appropriate time
     * range.</p>
     */
    inline CreateClusterRequest& WithSnapshotWindow(const Aws::String& value) { SetSnapshotWindow(value); return *this;}

    /**
     * <p>The daily time range (in UTC) during which MemoryDB begins taking a daily
     * snapshot of your shard.</p> <p> Example: 05:00-09:00</p> <p> If you do not
     * specify this parameter, MemoryDB automatically chooses an appropriate time
     * range.</p>
     */
    inline CreateClusterRequest& WithSnapshotWindow(Aws::String&& value) { SetSnapshotWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range (in UTC) during which MemoryDB begins taking a daily
     * snapshot of your shard.</p> <p> Example: 05:00-09:00</p> <p> If you do not
     * specify this parameter, MemoryDB automatically chooses an appropriate time
     * range.</p>
     */
    inline CreateClusterRequest& WithSnapshotWindow(const char* value) { SetSnapshotWindow(value); return *this;}


    /**
     * <p>The name of the Access Control List to associate with the cluster.</p>
     */
    inline const Aws::String& GetACLName() const{ return m_aCLName; }

    /**
     * <p>The name of the Access Control List to associate with the cluster.</p>
     */
    inline bool ACLNameHasBeenSet() const { return m_aCLNameHasBeenSet; }

    /**
     * <p>The name of the Access Control List to associate with the cluster.</p>
     */
    inline void SetACLName(const Aws::String& value) { m_aCLNameHasBeenSet = true; m_aCLName = value; }

    /**
     * <p>The name of the Access Control List to associate with the cluster.</p>
     */
    inline void SetACLName(Aws::String&& value) { m_aCLNameHasBeenSet = true; m_aCLName = std::move(value); }

    /**
     * <p>The name of the Access Control List to associate with the cluster.</p>
     */
    inline void SetACLName(const char* value) { m_aCLNameHasBeenSet = true; m_aCLName.assign(value); }

    /**
     * <p>The name of the Access Control List to associate with the cluster.</p>
     */
    inline CreateClusterRequest& WithACLName(const Aws::String& value) { SetACLName(value); return *this;}

    /**
     * <p>The name of the Access Control List to associate with the cluster.</p>
     */
    inline CreateClusterRequest& WithACLName(Aws::String&& value) { SetACLName(std::move(value)); return *this;}

    /**
     * <p>The name of the Access Control List to associate with the cluster.</p>
     */
    inline CreateClusterRequest& WithACLName(const char* value) { SetACLName(value); return *this;}


    /**
     * <p>The version number of the Redis engine to be used for the cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the Redis engine to be used for the cluster.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the Redis engine to be used for the cluster.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the Redis engine to be used for the cluster.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the Redis engine to be used for the cluster.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the Redis engine to be used for the cluster.</p>
     */
    inline CreateClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the Redis engine to be used for the cluster.</p>
     */
    inline CreateClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the Redis engine to be used for the cluster.</p>
     */
    inline CreateClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>When set to true, the cluster will automatically receive minor engine version
     * upgrades after launch.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>When set to true, the cluster will automatically receive minor engine version
     * upgrades after launch.</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>When set to true, the cluster will automatically receive minor engine version
     * upgrades after launch.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>When set to true, the cluster will automatically receive minor engine version
     * upgrades after launch.</p>
     */
    inline CreateClusterRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>Enables data tiering. Data tiering is only supported for clusters using the
     * r6gd node type. This parameter must be set when using r6gd nodes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline bool GetDataTiering() const{ return m_dataTiering; }

    /**
     * <p>Enables data tiering. Data tiering is only supported for clusters using the
     * r6gd node type. This parameter must be set when using r6gd nodes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline bool DataTieringHasBeenSet() const { return m_dataTieringHasBeenSet; }

    /**
     * <p>Enables data tiering. Data tiering is only supported for clusters using the
     * r6gd node type. This parameter must be set when using r6gd nodes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline void SetDataTiering(bool value) { m_dataTieringHasBeenSet = true; m_dataTiering = value; }

    /**
     * <p>Enables data tiering. Data tiering is only supported for clusters using the
     * r6gd node type. This parameter must be set when using r6gd nodes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/data-tiering.html">Data
     * tiering</a>.</p>
     */
    inline CreateClusterRequest& WithDataTiering(bool value) { SetDataTiering(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_numShards;
    bool m_numShardsHasBeenSet = false;

    int m_numReplicasPerShard;
    bool m_numReplicasPerShardHasBeenSet = false;

    Aws::String m_subnetGroupName;
    bool m_subnetGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    bool m_tLSEnabled;
    bool m_tLSEnabledHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_snapshotArns;
    bool m_snapshotArnsHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    int m_snapshotRetentionLimit;
    bool m_snapshotRetentionLimitHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_snapshotWindow;
    bool m_snapshotWindowHasBeenSet = false;

    Aws::String m_aCLName;
    bool m_aCLNameHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    bool m_dataTiering;
    bool m_dataTieringHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
