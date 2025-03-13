/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AutoScalingSettingsUpdate.h>
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
   * <p>Represents the settings of a global secondary index for a global table that
   * will be modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GlobalTableGlobalSecondaryIndexSettingsUpdate">AWS
   * API Reference</a></p>
   */
  class GlobalTableGlobalSecondaryIndexSettingsUpdate
  {
  public:
    AWS_DYNAMODB_API GlobalTableGlobalSecondaryIndexSettingsUpdate() = default;
    AWS_DYNAMODB_API GlobalTableGlobalSecondaryIndexSettingsUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API GlobalTableGlobalSecondaryIndexSettingsUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    GlobalTableGlobalSecondaryIndexSettingsUpdate& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException.</code> </p>
     */
    inline long long GetProvisionedWriteCapacityUnits() const { return m_provisionedWriteCapacityUnits; }
    inline bool ProvisionedWriteCapacityUnitsHasBeenSet() const { return m_provisionedWriteCapacityUnitsHasBeenSet; }
    inline void SetProvisionedWriteCapacityUnits(long long value) { m_provisionedWriteCapacityUnitsHasBeenSet = true; m_provisionedWriteCapacityUnits = value; }
    inline GlobalTableGlobalSecondaryIndexSettingsUpdate& WithProvisionedWriteCapacityUnits(long long value) { SetProvisionedWriteCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Auto scaling settings for managing a global secondary index's write capacity
     * units.</p>
     */
    inline const AutoScalingSettingsUpdate& GetProvisionedWriteCapacityAutoScalingSettingsUpdate() const { return m_provisionedWriteCapacityAutoScalingSettingsUpdate; }
    inline bool ProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet() const { return m_provisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet; }
    template<typename ProvisionedWriteCapacityAutoScalingSettingsUpdateT = AutoScalingSettingsUpdate>
    void SetProvisionedWriteCapacityAutoScalingSettingsUpdate(ProvisionedWriteCapacityAutoScalingSettingsUpdateT&& value) { m_provisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet = true; m_provisionedWriteCapacityAutoScalingSettingsUpdate = std::forward<ProvisionedWriteCapacityAutoScalingSettingsUpdateT>(value); }
    template<typename ProvisionedWriteCapacityAutoScalingSettingsUpdateT = AutoScalingSettingsUpdate>
    GlobalTableGlobalSecondaryIndexSettingsUpdate& WithProvisionedWriteCapacityAutoScalingSettingsUpdate(ProvisionedWriteCapacityAutoScalingSettingsUpdateT&& value) { SetProvisionedWriteCapacityAutoScalingSettingsUpdate(std::forward<ProvisionedWriteCapacityAutoScalingSettingsUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    long long m_provisionedWriteCapacityUnits{0};
    bool m_provisionedWriteCapacityUnitsHasBeenSet = false;

    AutoScalingSettingsUpdate m_provisionedWriteCapacityAutoScalingSettingsUpdate;
    bool m_provisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
