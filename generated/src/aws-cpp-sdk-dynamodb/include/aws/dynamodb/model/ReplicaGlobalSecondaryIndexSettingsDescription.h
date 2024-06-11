/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/IndexStatus.h>
#include <aws/dynamodb/model/AutoScalingSettingsDescription.h>
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
   * <p>Represents the properties of a global secondary index.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaGlobalSecondaryIndexSettingsDescription">AWS
   * API Reference</a></p>
   */
  class ReplicaGlobalSecondaryIndexSettingsDescription
  {
  public:
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexSettingsDescription();
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexSettingsDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexSettingsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the global secondary index:</p> <ul> <li> <p>
     * <code>CREATING</code> - The global secondary index is being created.</p> </li>
     * <li> <p> <code>UPDATING</code> - The global secondary index is being
     * updated.</p> </li> <li> <p> <code>DELETING</code> - The global secondary index
     * is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The global secondary
     * index is ready for use.</p> </li> </ul>
     */
    inline const IndexStatus& GetIndexStatus() const{ return m_indexStatus; }
    inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }
    inline void SetIndexStatus(const IndexStatus& value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }
    inline void SetIndexStatus(IndexStatus&& value) { m_indexStatusHasBeenSet = true; m_indexStatus = std::move(value); }
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithIndexStatus(const IndexStatus& value) { SetIndexStatus(value); return *this;}
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithIndexStatus(IndexStatus&& value) { SetIndexStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>.</p>
     */
    inline long long GetProvisionedReadCapacityUnits() const{ return m_provisionedReadCapacityUnits; }
    inline bool ProvisionedReadCapacityUnitsHasBeenSet() const { return m_provisionedReadCapacityUnitsHasBeenSet; }
    inline void SetProvisionedReadCapacityUnits(long long value) { m_provisionedReadCapacityUnitsHasBeenSet = true; m_provisionedReadCapacityUnits = value; }
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithProvisionedReadCapacityUnits(long long value) { SetProvisionedReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Auto scaling settings for a global secondary index replica's read capacity
     * units.</p>
     */
    inline const AutoScalingSettingsDescription& GetProvisionedReadCapacityAutoScalingSettings() const{ return m_provisionedReadCapacityAutoScalingSettings; }
    inline bool ProvisionedReadCapacityAutoScalingSettingsHasBeenSet() const { return m_provisionedReadCapacityAutoScalingSettingsHasBeenSet; }
    inline void SetProvisionedReadCapacityAutoScalingSettings(const AutoScalingSettingsDescription& value) { m_provisionedReadCapacityAutoScalingSettingsHasBeenSet = true; m_provisionedReadCapacityAutoScalingSettings = value; }
    inline void SetProvisionedReadCapacityAutoScalingSettings(AutoScalingSettingsDescription&& value) { m_provisionedReadCapacityAutoScalingSettingsHasBeenSet = true; m_provisionedReadCapacityAutoScalingSettings = std::move(value); }
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithProvisionedReadCapacityAutoScalingSettings(const AutoScalingSettingsDescription& value) { SetProvisionedReadCapacityAutoScalingSettings(value); return *this;}
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithProvisionedReadCapacityAutoScalingSettings(AutoScalingSettingsDescription&& value) { SetProvisionedReadCapacityAutoScalingSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>.</p>
     */
    inline long long GetProvisionedWriteCapacityUnits() const{ return m_provisionedWriteCapacityUnits; }
    inline bool ProvisionedWriteCapacityUnitsHasBeenSet() const { return m_provisionedWriteCapacityUnitsHasBeenSet; }
    inline void SetProvisionedWriteCapacityUnits(long long value) { m_provisionedWriteCapacityUnitsHasBeenSet = true; m_provisionedWriteCapacityUnits = value; }
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithProvisionedWriteCapacityUnits(long long value) { SetProvisionedWriteCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Auto scaling settings for a global secondary index replica's write capacity
     * units.</p>
     */
    inline const AutoScalingSettingsDescription& GetProvisionedWriteCapacityAutoScalingSettings() const{ return m_provisionedWriteCapacityAutoScalingSettings; }
    inline bool ProvisionedWriteCapacityAutoScalingSettingsHasBeenSet() const { return m_provisionedWriteCapacityAutoScalingSettingsHasBeenSet; }
    inline void SetProvisionedWriteCapacityAutoScalingSettings(const AutoScalingSettingsDescription& value) { m_provisionedWriteCapacityAutoScalingSettingsHasBeenSet = true; m_provisionedWriteCapacityAutoScalingSettings = value; }
    inline void SetProvisionedWriteCapacityAutoScalingSettings(AutoScalingSettingsDescription&& value) { m_provisionedWriteCapacityAutoScalingSettingsHasBeenSet = true; m_provisionedWriteCapacityAutoScalingSettings = std::move(value); }
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithProvisionedWriteCapacityAutoScalingSettings(const AutoScalingSettingsDescription& value) { SetProvisionedWriteCapacityAutoScalingSettings(value); return *this;}
    inline ReplicaGlobalSecondaryIndexSettingsDescription& WithProvisionedWriteCapacityAutoScalingSettings(AutoScalingSettingsDescription&& value) { SetProvisionedWriteCapacityAutoScalingSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    IndexStatus m_indexStatus;
    bool m_indexStatusHasBeenSet = false;

    long long m_provisionedReadCapacityUnits;
    bool m_provisionedReadCapacityUnitsHasBeenSet = false;

    AutoScalingSettingsDescription m_provisionedReadCapacityAutoScalingSettings;
    bool m_provisionedReadCapacityAutoScalingSettingsHasBeenSet = false;

    long long m_provisionedWriteCapacityUnits;
    bool m_provisionedWriteCapacityUnitsHasBeenSet = false;

    AutoScalingSettingsDescription m_provisionedWriteCapacityAutoScalingSettings;
    bool m_provisionedWriteCapacityAutoScalingSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
