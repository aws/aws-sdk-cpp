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
   * <p>Represents the auto scaling configuration for a replica global secondary
   * index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaGlobalSecondaryIndexAutoScalingDescription">AWS
   * API Reference</a></p>
   */
  class ReplicaGlobalSecondaryIndexAutoScalingDescription
  {
  public:
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexAutoScalingDescription() = default;
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexAutoScalingDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexAutoScalingDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the global secondary index.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    ReplicaGlobalSecondaryIndexAutoScalingDescription& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the replica global secondary index:</p> <ul> <li> <p>
     * <code>CREATING</code> - The index is being created.</p> </li> <li> <p>
     * <code>UPDATING</code> - The table/index configuration is being updated. The
     * table/index remains available for data operations when <code>UPDATING</code>
     * </p> </li> <li> <p> <code>DELETING</code> - The index is being deleted.</p>
     * </li> <li> <p> <code>ACTIVE</code> - The index is ready for use.</p> </li> </ul>
     */
    inline IndexStatus GetIndexStatus() const { return m_indexStatus; }
    inline bool IndexStatusHasBeenSet() const { return m_indexStatusHasBeenSet; }
    inline void SetIndexStatus(IndexStatus value) { m_indexStatusHasBeenSet = true; m_indexStatus = value; }
    inline ReplicaGlobalSecondaryIndexAutoScalingDescription& WithIndexStatus(IndexStatus value) { SetIndexStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const AutoScalingSettingsDescription& GetProvisionedReadCapacityAutoScalingSettings() const { return m_provisionedReadCapacityAutoScalingSettings; }
    inline bool ProvisionedReadCapacityAutoScalingSettingsHasBeenSet() const { return m_provisionedReadCapacityAutoScalingSettingsHasBeenSet; }
    template<typename ProvisionedReadCapacityAutoScalingSettingsT = AutoScalingSettingsDescription>
    void SetProvisionedReadCapacityAutoScalingSettings(ProvisionedReadCapacityAutoScalingSettingsT&& value) { m_provisionedReadCapacityAutoScalingSettingsHasBeenSet = true; m_provisionedReadCapacityAutoScalingSettings = std::forward<ProvisionedReadCapacityAutoScalingSettingsT>(value); }
    template<typename ProvisionedReadCapacityAutoScalingSettingsT = AutoScalingSettingsDescription>
    ReplicaGlobalSecondaryIndexAutoScalingDescription& WithProvisionedReadCapacityAutoScalingSettings(ProvisionedReadCapacityAutoScalingSettingsT&& value) { SetProvisionedReadCapacityAutoScalingSettings(std::forward<ProvisionedReadCapacityAutoScalingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AutoScalingSettingsDescription& GetProvisionedWriteCapacityAutoScalingSettings() const { return m_provisionedWriteCapacityAutoScalingSettings; }
    inline bool ProvisionedWriteCapacityAutoScalingSettingsHasBeenSet() const { return m_provisionedWriteCapacityAutoScalingSettingsHasBeenSet; }
    template<typename ProvisionedWriteCapacityAutoScalingSettingsT = AutoScalingSettingsDescription>
    void SetProvisionedWriteCapacityAutoScalingSettings(ProvisionedWriteCapacityAutoScalingSettingsT&& value) { m_provisionedWriteCapacityAutoScalingSettingsHasBeenSet = true; m_provisionedWriteCapacityAutoScalingSettings = std::forward<ProvisionedWriteCapacityAutoScalingSettingsT>(value); }
    template<typename ProvisionedWriteCapacityAutoScalingSettingsT = AutoScalingSettingsDescription>
    ReplicaGlobalSecondaryIndexAutoScalingDescription& WithProvisionedWriteCapacityAutoScalingSettings(ProvisionedWriteCapacityAutoScalingSettingsT&& value) { SetProvisionedWriteCapacityAutoScalingSettings(std::forward<ProvisionedWriteCapacityAutoScalingSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    IndexStatus m_indexStatus{IndexStatus::NOT_SET};
    bool m_indexStatusHasBeenSet = false;

    AutoScalingSettingsDescription m_provisionedReadCapacityAutoScalingSettings;
    bool m_provisionedReadCapacityAutoScalingSettingsHasBeenSet = false;

    AutoScalingSettingsDescription m_provisionedWriteCapacityAutoScalingSettings;
    bool m_provisionedWriteCapacityAutoScalingSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
