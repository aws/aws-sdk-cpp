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
#include <aws/dynamodb/model/ReplicaStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReplicaGlobalSecondaryIndexSettingsDescription.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the properties of a replica.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaSettingsDescription">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API ReplicaSettingsDescription
  {
  public:
    ReplicaSettingsDescription();
    ReplicaSettingsDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    ReplicaSettingsDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The region name of the replica.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The region name of the replica.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The region name of the replica.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The region name of the replica.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The region name of the replica.</p>
     */
    inline ReplicaSettingsDescription& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The region name of the replica.</p>
     */
    inline ReplicaSettingsDescription& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The region name of the replica.</p>
     */
    inline ReplicaSettingsDescription& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>The current state of the region:</p> <ul> <li> <p> <code>CREATING</code> -
     * The region is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * region is being updated.</p> </li> <li> <p> <code>DELETING</code> - The region
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The region is ready
     * for use.</p> </li> </ul>
     */
    inline const ReplicaStatus& GetReplicaStatus() const{ return m_replicaStatus; }

    /**
     * <p>The current state of the region:</p> <ul> <li> <p> <code>CREATING</code> -
     * The region is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * region is being updated.</p> </li> <li> <p> <code>DELETING</code> - The region
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The region is ready
     * for use.</p> </li> </ul>
     */
    inline void SetReplicaStatus(const ReplicaStatus& value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = value; }

    /**
     * <p>The current state of the region:</p> <ul> <li> <p> <code>CREATING</code> -
     * The region is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * region is being updated.</p> </li> <li> <p> <code>DELETING</code> - The region
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The region is ready
     * for use.</p> </li> </ul>
     */
    inline void SetReplicaStatus(ReplicaStatus&& value) { m_replicaStatusHasBeenSet = true; m_replicaStatus = std::move(value); }

    /**
     * <p>The current state of the region:</p> <ul> <li> <p> <code>CREATING</code> -
     * The region is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * region is being updated.</p> </li> <li> <p> <code>DELETING</code> - The region
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The region is ready
     * for use.</p> </li> </ul>
     */
    inline ReplicaSettingsDescription& WithReplicaStatus(const ReplicaStatus& value) { SetReplicaStatus(value); return *this;}

    /**
     * <p>The current state of the region:</p> <ul> <li> <p> <code>CREATING</code> -
     * The region is being created.</p> </li> <li> <p> <code>UPDATING</code> - The
     * region is being updated.</p> </li> <li> <p> <code>DELETING</code> - The region
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The region is ready
     * for use.</p> </li> </ul>
     */
    inline ReplicaSettingsDescription& WithReplicaStatus(ReplicaStatus&& value) { SetReplicaStatus(std::move(value)); return *this;}


    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer Guide</i>.
     * </p>
     */
    inline long long GetReplicaProvisionedReadCapacityUnits() const{ return m_replicaProvisionedReadCapacityUnits; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer Guide</i>.
     * </p>
     */
    inline void SetReplicaProvisionedReadCapacityUnits(long long value) { m_replicaProvisionedReadCapacityUnitsHasBeenSet = true; m_replicaProvisionedReadCapacityUnits = value; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer Guide</i>.
     * </p>
     */
    inline ReplicaSettingsDescription& WithReplicaProvisionedReadCapacityUnits(long long value) { SetReplicaProvisionedReadCapacityUnits(value); return *this;}


    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p>
     */
    inline long long GetReplicaProvisionedWriteCapacityUnits() const{ return m_replicaProvisionedWriteCapacityUnits; }

    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p>
     */
    inline void SetReplicaProvisionedWriteCapacityUnits(long long value) { m_replicaProvisionedWriteCapacityUnitsHasBeenSet = true; m_replicaProvisionedWriteCapacityUnits = value; }

    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>. For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/WorkingWithTables.html#ProvisionedThroughput">Specifying
     * Read and Write Requirements</a> in the <i>Amazon DynamoDB Developer
     * Guide</i>.</p>
     */
    inline ReplicaSettingsDescription& WithReplicaProvisionedWriteCapacityUnits(long long value) { SetReplicaProvisionedWriteCapacityUnits(value); return *this;}


    /**
     * <p>Replica global secondary index settings for the global table.</p>
     */
    inline const Aws::Vector<ReplicaGlobalSecondaryIndexSettingsDescription>& GetReplicaGlobalSecondaryIndexSettings() const{ return m_replicaGlobalSecondaryIndexSettings; }

    /**
     * <p>Replica global secondary index settings for the global table.</p>
     */
    inline void SetReplicaGlobalSecondaryIndexSettings(const Aws::Vector<ReplicaGlobalSecondaryIndexSettingsDescription>& value) { m_replicaGlobalSecondaryIndexSettingsHasBeenSet = true; m_replicaGlobalSecondaryIndexSettings = value; }

    /**
     * <p>Replica global secondary index settings for the global table.</p>
     */
    inline void SetReplicaGlobalSecondaryIndexSettings(Aws::Vector<ReplicaGlobalSecondaryIndexSettingsDescription>&& value) { m_replicaGlobalSecondaryIndexSettingsHasBeenSet = true; m_replicaGlobalSecondaryIndexSettings = std::move(value); }

    /**
     * <p>Replica global secondary index settings for the global table.</p>
     */
    inline ReplicaSettingsDescription& WithReplicaGlobalSecondaryIndexSettings(const Aws::Vector<ReplicaGlobalSecondaryIndexSettingsDescription>& value) { SetReplicaGlobalSecondaryIndexSettings(value); return *this;}

    /**
     * <p>Replica global secondary index settings for the global table.</p>
     */
    inline ReplicaSettingsDescription& WithReplicaGlobalSecondaryIndexSettings(Aws::Vector<ReplicaGlobalSecondaryIndexSettingsDescription>&& value) { SetReplicaGlobalSecondaryIndexSettings(std::move(value)); return *this;}

    /**
     * <p>Replica global secondary index settings for the global table.</p>
     */
    inline ReplicaSettingsDescription& AddReplicaGlobalSecondaryIndexSettings(const ReplicaGlobalSecondaryIndexSettingsDescription& value) { m_replicaGlobalSecondaryIndexSettingsHasBeenSet = true; m_replicaGlobalSecondaryIndexSettings.push_back(value); return *this; }

    /**
     * <p>Replica global secondary index settings for the global table.</p>
     */
    inline ReplicaSettingsDescription& AddReplicaGlobalSecondaryIndexSettings(ReplicaGlobalSecondaryIndexSettingsDescription&& value) { m_replicaGlobalSecondaryIndexSettingsHasBeenSet = true; m_replicaGlobalSecondaryIndexSettings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet;

    ReplicaStatus m_replicaStatus;
    bool m_replicaStatusHasBeenSet;

    long long m_replicaProvisionedReadCapacityUnits;
    bool m_replicaProvisionedReadCapacityUnitsHasBeenSet;

    long long m_replicaProvisionedWriteCapacityUnits;
    bool m_replicaProvisionedWriteCapacityUnitsHasBeenSet;

    Aws::Vector<ReplicaGlobalSecondaryIndexSettingsDescription> m_replicaGlobalSecondaryIndexSettings;
    bool m_replicaGlobalSecondaryIndexSettingsHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
