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
   * <p>Represents the auto scaling settings of a global secondary index for a
   * replica that will be modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaGlobalSecondaryIndexAutoScalingUpdate">AWS
   * API Reference</a></p>
   */
  class ReplicaGlobalSecondaryIndexAutoScalingUpdate
  {
  public:
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexAutoScalingUpdate() = default;
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexAutoScalingUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexAutoScalingUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ReplicaGlobalSecondaryIndexAutoScalingUpdate& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AutoScalingSettingsUpdate& GetProvisionedReadCapacityAutoScalingUpdate() const { return m_provisionedReadCapacityAutoScalingUpdate; }
    inline bool ProvisionedReadCapacityAutoScalingUpdateHasBeenSet() const { return m_provisionedReadCapacityAutoScalingUpdateHasBeenSet; }
    template<typename ProvisionedReadCapacityAutoScalingUpdateT = AutoScalingSettingsUpdate>
    void SetProvisionedReadCapacityAutoScalingUpdate(ProvisionedReadCapacityAutoScalingUpdateT&& value) { m_provisionedReadCapacityAutoScalingUpdateHasBeenSet = true; m_provisionedReadCapacityAutoScalingUpdate = std::forward<ProvisionedReadCapacityAutoScalingUpdateT>(value); }
    template<typename ProvisionedReadCapacityAutoScalingUpdateT = AutoScalingSettingsUpdate>
    ReplicaGlobalSecondaryIndexAutoScalingUpdate& WithProvisionedReadCapacityAutoScalingUpdate(ProvisionedReadCapacityAutoScalingUpdateT&& value) { SetProvisionedReadCapacityAutoScalingUpdate(std::forward<ProvisionedReadCapacityAutoScalingUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    AutoScalingSettingsUpdate m_provisionedReadCapacityAutoScalingUpdate;
    bool m_provisionedReadCapacityAutoScalingUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
