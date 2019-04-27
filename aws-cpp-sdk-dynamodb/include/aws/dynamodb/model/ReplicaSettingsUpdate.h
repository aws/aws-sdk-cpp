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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AutoScalingSettingsUpdate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexSettingsUpdate.h>
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
   * <p>Represents the settings for a global table in a region that will be
   * modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaSettingsUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API ReplicaSettingsUpdate
  {
  public:
    ReplicaSettingsUpdate();
    ReplicaSettingsUpdate(Aws::Utils::Json::JsonView jsonValue);
    ReplicaSettingsUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The region of the replica to be added.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The region of the replica to be added.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The region of the replica to be added.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The region of the replica to be added.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The region of the replica to be added.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The region of the replica to be added.</p>
     */
    inline ReplicaSettingsUpdate& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The region of the replica to be added.</p>
     */
    inline ReplicaSettingsUpdate& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The region of the replica to be added.</p>
     */
    inline ReplicaSettingsUpdate& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer Guide</i>.
     * </p>
     */
    inline long long GetReplicaProvisionedReadCapacityUnits() const{ return m_replicaProvisionedReadCapacityUnits; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer Guide</i>.
     * </p>
     */
    inline bool ReplicaProvisionedReadCapacityUnitsHasBeenSet() const { return m_replicaProvisionedReadCapacityUnitsHasBeenSet; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer Guide</i>.
     * </p>
     */
    inline void SetReplicaProvisionedReadCapacityUnits(long long value) { m_replicaProvisionedReadCapacityUnitsHasBeenSet = true; m_replicaProvisionedReadCapacityUnits = value; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer Guide</i>.
     * </p>
     */
    inline ReplicaSettingsUpdate& WithReplicaProvisionedReadCapacityUnits(long long value) { SetReplicaProvisionedReadCapacityUnits(value); return *this;}


    /**
     * <p>Autoscaling settings for managing a global table replica's read capacity
     * units.</p>
     */
    inline const AutoScalingSettingsUpdate& GetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate() const{ return m_replicaProvisionedReadCapacityAutoScalingSettingsUpdate; }

    /**
     * <p>Autoscaling settings for managing a global table replica's read capacity
     * units.</p>
     */
    inline bool ReplicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet() const { return m_replicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet; }

    /**
     * <p>Autoscaling settings for managing a global table replica's read capacity
     * units.</p>
     */
    inline void SetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate(const AutoScalingSettingsUpdate& value) { m_replicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet = true; m_replicaProvisionedReadCapacityAutoScalingSettingsUpdate = value; }

    /**
     * <p>Autoscaling settings for managing a global table replica's read capacity
     * units.</p>
     */
    inline void SetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate(AutoScalingSettingsUpdate&& value) { m_replicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet = true; m_replicaProvisionedReadCapacityAutoScalingSettingsUpdate = std::move(value); }

    /**
     * <p>Autoscaling settings for managing a global table replica's read capacity
     * units.</p>
     */
    inline ReplicaSettingsUpdate& WithReplicaProvisionedReadCapacityAutoScalingSettingsUpdate(const AutoScalingSettingsUpdate& value) { SetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate(value); return *this;}

    /**
     * <p>Autoscaling settings for managing a global table replica's read capacity
     * units.</p>
     */
    inline ReplicaSettingsUpdate& WithReplicaProvisionedReadCapacityAutoScalingSettingsUpdate(AutoScalingSettingsUpdate&& value) { SetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate(std::move(value)); return *this;}


    /**
     * <p>Represents the settings of a global secondary index for a global table that
     * will be modified.</p>
     */
    inline const Aws::Vector<ReplicaGlobalSecondaryIndexSettingsUpdate>& GetReplicaGlobalSecondaryIndexSettingsUpdate() const{ return m_replicaGlobalSecondaryIndexSettingsUpdate; }

    /**
     * <p>Represents the settings of a global secondary index for a global table that
     * will be modified.</p>
     */
    inline bool ReplicaGlobalSecondaryIndexSettingsUpdateHasBeenSet() const { return m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet; }

    /**
     * <p>Represents the settings of a global secondary index for a global table that
     * will be modified.</p>
     */
    inline void SetReplicaGlobalSecondaryIndexSettingsUpdate(const Aws::Vector<ReplicaGlobalSecondaryIndexSettingsUpdate>& value) { m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet = true; m_replicaGlobalSecondaryIndexSettingsUpdate = value; }

    /**
     * <p>Represents the settings of a global secondary index for a global table that
     * will be modified.</p>
     */
    inline void SetReplicaGlobalSecondaryIndexSettingsUpdate(Aws::Vector<ReplicaGlobalSecondaryIndexSettingsUpdate>&& value) { m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet = true; m_replicaGlobalSecondaryIndexSettingsUpdate = std::move(value); }

    /**
     * <p>Represents the settings of a global secondary index for a global table that
     * will be modified.</p>
     */
    inline ReplicaSettingsUpdate& WithReplicaGlobalSecondaryIndexSettingsUpdate(const Aws::Vector<ReplicaGlobalSecondaryIndexSettingsUpdate>& value) { SetReplicaGlobalSecondaryIndexSettingsUpdate(value); return *this;}

    /**
     * <p>Represents the settings of a global secondary index for a global table that
     * will be modified.</p>
     */
    inline ReplicaSettingsUpdate& WithReplicaGlobalSecondaryIndexSettingsUpdate(Aws::Vector<ReplicaGlobalSecondaryIndexSettingsUpdate>&& value) { SetReplicaGlobalSecondaryIndexSettingsUpdate(std::move(value)); return *this;}

    /**
     * <p>Represents the settings of a global secondary index for a global table that
     * will be modified.</p>
     */
    inline ReplicaSettingsUpdate& AddReplicaGlobalSecondaryIndexSettingsUpdate(const ReplicaGlobalSecondaryIndexSettingsUpdate& value) { m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet = true; m_replicaGlobalSecondaryIndexSettingsUpdate.push_back(value); return *this; }

    /**
     * <p>Represents the settings of a global secondary index for a global table that
     * will be modified.</p>
     */
    inline ReplicaSettingsUpdate& AddReplicaGlobalSecondaryIndexSettingsUpdate(ReplicaGlobalSecondaryIndexSettingsUpdate&& value) { m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet = true; m_replicaGlobalSecondaryIndexSettingsUpdate.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet;

    long long m_replicaProvisionedReadCapacityUnits;
    bool m_replicaProvisionedReadCapacityUnitsHasBeenSet;

    AutoScalingSettingsUpdate m_replicaProvisionedReadCapacityAutoScalingSettingsUpdate;
    bool m_replicaProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet;

    Aws::Vector<ReplicaGlobalSecondaryIndexSettingsUpdate> m_replicaGlobalSecondaryIndexSettingsUpdate;
    bool m_replicaGlobalSecondaryIndexSettingsUpdateHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
