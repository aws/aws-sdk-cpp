/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/AutoScalingSettingsUpdate.h>
#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexAutoScalingUpdate.h>
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
   * <p>Represents the auto scaling settings of a replica that will be
   * modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaAutoScalingUpdate">AWS
   * API Reference</a></p>
   */
  class ReplicaAutoScalingUpdate
  {
  public:
    AWS_DYNAMODB_API ReplicaAutoScalingUpdate();
    AWS_DYNAMODB_API ReplicaAutoScalingUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaAutoScalingUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ReplicaAutoScalingUpdate& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The Region where the replica exists.</p>
     */
    inline ReplicaAutoScalingUpdate& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The Region where the replica exists.</p>
     */
    inline ReplicaAutoScalingUpdate& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>Represents the auto scaling settings of global secondary indexes that will be
     * modified.</p>
     */
    inline const Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingUpdate>& GetReplicaGlobalSecondaryIndexUpdates() const{ return m_replicaGlobalSecondaryIndexUpdates; }

    /**
     * <p>Represents the auto scaling settings of global secondary indexes that will be
     * modified.</p>
     */
    inline bool ReplicaGlobalSecondaryIndexUpdatesHasBeenSet() const { return m_replicaGlobalSecondaryIndexUpdatesHasBeenSet; }

    /**
     * <p>Represents the auto scaling settings of global secondary indexes that will be
     * modified.</p>
     */
    inline void SetReplicaGlobalSecondaryIndexUpdates(const Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingUpdate>& value) { m_replicaGlobalSecondaryIndexUpdatesHasBeenSet = true; m_replicaGlobalSecondaryIndexUpdates = value; }

    /**
     * <p>Represents the auto scaling settings of global secondary indexes that will be
     * modified.</p>
     */
    inline void SetReplicaGlobalSecondaryIndexUpdates(Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingUpdate>&& value) { m_replicaGlobalSecondaryIndexUpdatesHasBeenSet = true; m_replicaGlobalSecondaryIndexUpdates = std::move(value); }

    /**
     * <p>Represents the auto scaling settings of global secondary indexes that will be
     * modified.</p>
     */
    inline ReplicaAutoScalingUpdate& WithReplicaGlobalSecondaryIndexUpdates(const Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingUpdate>& value) { SetReplicaGlobalSecondaryIndexUpdates(value); return *this;}

    /**
     * <p>Represents the auto scaling settings of global secondary indexes that will be
     * modified.</p>
     */
    inline ReplicaAutoScalingUpdate& WithReplicaGlobalSecondaryIndexUpdates(Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingUpdate>&& value) { SetReplicaGlobalSecondaryIndexUpdates(std::move(value)); return *this;}

    /**
     * <p>Represents the auto scaling settings of global secondary indexes that will be
     * modified.</p>
     */
    inline ReplicaAutoScalingUpdate& AddReplicaGlobalSecondaryIndexUpdates(const ReplicaGlobalSecondaryIndexAutoScalingUpdate& value) { m_replicaGlobalSecondaryIndexUpdatesHasBeenSet = true; m_replicaGlobalSecondaryIndexUpdates.push_back(value); return *this; }

    /**
     * <p>Represents the auto scaling settings of global secondary indexes that will be
     * modified.</p>
     */
    inline ReplicaAutoScalingUpdate& AddReplicaGlobalSecondaryIndexUpdates(ReplicaGlobalSecondaryIndexAutoScalingUpdate&& value) { m_replicaGlobalSecondaryIndexUpdatesHasBeenSet = true; m_replicaGlobalSecondaryIndexUpdates.push_back(std::move(value)); return *this; }


    
    inline const AutoScalingSettingsUpdate& GetReplicaProvisionedReadCapacityAutoScalingUpdate() const{ return m_replicaProvisionedReadCapacityAutoScalingUpdate; }

    
    inline bool ReplicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet() const { return m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet; }

    
    inline void SetReplicaProvisionedReadCapacityAutoScalingUpdate(const AutoScalingSettingsUpdate& value) { m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet = true; m_replicaProvisionedReadCapacityAutoScalingUpdate = value; }

    
    inline void SetReplicaProvisionedReadCapacityAutoScalingUpdate(AutoScalingSettingsUpdate&& value) { m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet = true; m_replicaProvisionedReadCapacityAutoScalingUpdate = std::move(value); }

    
    inline ReplicaAutoScalingUpdate& WithReplicaProvisionedReadCapacityAutoScalingUpdate(const AutoScalingSettingsUpdate& value) { SetReplicaProvisionedReadCapacityAutoScalingUpdate(value); return *this;}

    
    inline ReplicaAutoScalingUpdate& WithReplicaProvisionedReadCapacityAutoScalingUpdate(AutoScalingSettingsUpdate&& value) { SetReplicaProvisionedReadCapacityAutoScalingUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::Vector<ReplicaGlobalSecondaryIndexAutoScalingUpdate> m_replicaGlobalSecondaryIndexUpdates;
    bool m_replicaGlobalSecondaryIndexUpdatesHasBeenSet = false;

    AutoScalingSettingsUpdate m_replicaProvisionedReadCapacityAutoScalingUpdate;
    bool m_replicaProvisionedReadCapacityAutoScalingUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
