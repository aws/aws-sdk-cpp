/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/AutoScalingSettingsDescription.h>
#include <aws/dynamodb/model/ReplicaStatus.h>
#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexAutoScalingDescription.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the auto scaling settings of the replica.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaAutoScalingDescription">AWS
   * API Reference</a></p>
   */
  class ReplicaAutoScalingDescription
  {
  public:
    AWS_DYNAMODB_API ReplicaAutoScalingDescription();
    AWS_DYNAMODB_API ReplicaAutoScalingDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaAutoScalingDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Region where the replica exists.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The Region where the replica exists.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The Region where the replica exists.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The Region where the replica exists.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The Region where the replica exists.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The Region where the replica exists.</p>
     */
    inline ReplicaAutoScalingDescription& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The Region where the replica exists.</p>
     */
    inline ReplicaAutoScalingDescription& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The Region where the replica exists.</p>
     */
    inline ReplicaAutoScalingDescription& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>Replica-specific global secondary index auto scaling settings.</p>
     */
    inline const Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingDescription>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }

    /**
     * <p>Replica-specific global secondary index auto scaling settings.</p>
     */
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }

    /**
     * <p>Replica-specific global secondary index auto scaling settings.</p>
     */
    inline void SetGlobalSecondaryIndexes(const Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingDescription>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }

    /**
     * <p>Replica-specific global secondary index auto scaling settings.</p>
     */
    inline void SetGlobalSecondaryIndexes(Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingDescription>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }

    /**
     * <p>Replica-specific global secondary index auto scaling settings.</p>
     */
    inline ReplicaAutoScalingDescription& WithGlobalSecondaryIndexes(const Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingDescription>& value) { SetGlobalSecondaryIndexes(value); return *this;}

    /**
     * <p>Replica-specific global secondary index auto scaling settings.</p>
     */
    inline ReplicaAutoScalingDescription& WithGlobalSecondaryIndexes(Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingDescription>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}

    /**
     * <p>Replica-specific global secondary index auto scaling settings.</p>
     */
    inline ReplicaAutoScalingDescription& AddGlobalSecondaryIndexes(const ReplicaGlobalSecondaryIndexAutoScalingDescription& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(value); return *this; }

    /**
     * <p>Replica-specific global secondary index auto scaling settings.</p>
     */
    inline ReplicaAutoScalingDescription& AddGlobalSecondaryIndexes(ReplicaGlobalSecondaryIndexAutoScalingDescription&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.push_back(std::move(value)); return *this; }


    
    inline const AutoScalingSettingsDescription& GetReplicaProvisionedReadCapacityAutoScalingSettings() const{ return m_replicaProvisionedReadCapacityAutoScalingSettings; }

    
    inline bool ReplicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet() const { return m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet; }

    
    inline void SetReplicaProvisionedReadCapacityAutoScalingSettings(const AutoScalingSettingsDescription& value) { m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet = true; m_replicaProvisionedReadCapacityAutoScalingSettings = value; }

    
    inline void SetReplicaProvisionedReadCapacityAutoScalingSettings(AutoScalingSettingsDescription&& value) { m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet = true; m_replicaProvisionedReadCapacityAutoScalingSettings = std::move(value); }

    
    inline ReplicaAutoScalingDescription& WithReplicaProvisionedReadCapacityAutoScalingSettings(const AutoScalingSettingsDescription& value) { SetReplicaProvisionedReadCapacityAutoScalingSettings(value); return *this;}

    
    inline ReplicaAutoScalingDescription& WithReplicaProvisionedReadCapacityAutoScalingSettings(AutoScalingSettingsDescription&& value) { SetReplicaProvisionedReadCapacityAutoScalingSettings(std::move(value)); return *this;}


    
    inline const AutoScalingSettingsDescription& GetReplicaProvisionedWriteCapacityAutoScalingSettings() const{ return m_replicaProvisionedWriteCapacityAutoScalingSettings; }

    
    inline bool ReplicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet() const { return m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet; }

    
    inline void SetReplicaProvisionedWriteCapacityAutoScalingSettings(const AutoScalingSettingsDescription& value) { m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet = true; m_replicaProvisionedWriteCapacityAutoScalingSettings = value; }

    
    inline void SetReplicaProvisionedWriteCapacityAutoScalingSettings(AutoScalingSettingsDescription&& value) { m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet = true; m_replicaProvisionedWriteCapacityAutoScalingSettings = std::move(value); }

    
    inline ReplicaAutoScalingDescription& WithReplicaProvisionedWriteCapacityAutoScalingSettings(const AutoScalingSettingsDescription& value) { SetReplicaProvisionedWriteCapacityAutoScalingSettings(value); return *this;}

    
    inline ReplicaAutoScalingDescription& WithReplicaProvisionedWriteCapacityAutoScalingSettings(AutoScalingSettingsDescription&& value) { SetReplicaProvisionedWriteCapacityAutoScalingSettings(std::move(value)); return *this;}


    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> </ul>
     */
    inline const ReplicaStatus& GetReplicaStatus() const{ return m_replicaStatus; }

    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> </ul>
     */
    inline bool ReplicaStatusHasBeenSet() const { return m_replicaStatusHasBeenSet; }

    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> </ul>
     */
    inline void SetReplicaStatus(const ReplicaStatus& value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = value; }

    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> </ul>
     */
    inline void SetReplicaStatus(ReplicaStatus&& value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = std::move(value); }

    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> </ul>
     */
    inline ReplicaAutoScalingDescription& WithReplicaStatus(const ReplicaStatus& value) { SetReplicaStatus(value); return *this;}

    /**
     * <p>The current state of the replica:</p> <ul> <li> <p> <code>CREATING</code> -
     * The replica is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * replica is being updated.</p> </li> <li> <p> <code>DELETING</code> - The replica
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The replica is ready
     * for use.</p> </li> </ul>
     */
    inline ReplicaAutoScalingDescription& WithReplicaStatus(ReplicaStatus&& value) { SetReplicaStatus(std::move(value)); return *this;}

  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingDescription> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet = false;

    AutoScalingSettingsDescription m_replicaProvisionedReadCapacityAutoScalingSettings;
    bool m_replicaProvisionedReadCapacityAutoScalingSettingsHasBeenSet = false;

    AutoScalingSettingsDescription m_replicaProvisionedWriteCapacityAutoScalingSettings;
    bool m_replicaProvisionedWriteCapacityAutoScalingSettingsHasBeenSet = false;

    ReplicaStatus m_replicaStatus;
    bool m_replicaStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
