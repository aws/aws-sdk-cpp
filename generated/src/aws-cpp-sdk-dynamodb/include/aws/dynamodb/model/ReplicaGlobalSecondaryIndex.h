/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ProvisionedThroughputOverride.h>
#include <aws/dynamodb/model/OnDemandThroughputOverride.h>
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
   * <p>Represents the properties of a replica global secondary index.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaGlobalSecondaryIndex">AWS
   * API Reference</a></p>
   */
  class ReplicaGlobalSecondaryIndex
  {
  public:
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndex();
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the global secondary index.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline ReplicaGlobalSecondaryIndex& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline ReplicaGlobalSecondaryIndex& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline ReplicaGlobalSecondaryIndex& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replica table GSI-specific provisioned throughput. If not specified, uses the
     * source table GSI's read capacity settings.</p>
     */
    inline const ProvisionedThroughputOverride& GetProvisionedThroughputOverride() const{ return m_provisionedThroughputOverride; }
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }
    inline void SetProvisionedThroughputOverride(const ProvisionedThroughputOverride& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = value; }
    inline void SetProvisionedThroughputOverride(ProvisionedThroughputOverride&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::move(value); }
    inline ReplicaGlobalSecondaryIndex& WithProvisionedThroughputOverride(const ProvisionedThroughputOverride& value) { SetProvisionedThroughputOverride(value); return *this;}
    inline ReplicaGlobalSecondaryIndex& WithProvisionedThroughputOverride(ProvisionedThroughputOverride&& value) { SetProvisionedThroughputOverride(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overrides the maximum on-demand throughput settings for the specified global
     * secondary index in the specified replica table.</p>
     */
    inline const OnDemandThroughputOverride& GetOnDemandThroughputOverride() const{ return m_onDemandThroughputOverride; }
    inline bool OnDemandThroughputOverrideHasBeenSet() const { return m_onDemandThroughputOverrideHasBeenSet; }
    inline void SetOnDemandThroughputOverride(const OnDemandThroughputOverride& value) { m_onDemandThroughputOverrideHasBeenSet = true; m_onDemandThroughputOverride = value; }
    inline void SetOnDemandThroughputOverride(OnDemandThroughputOverride&& value) { m_onDemandThroughputOverrideHasBeenSet = true; m_onDemandThroughputOverride = std::move(value); }
    inline ReplicaGlobalSecondaryIndex& WithOnDemandThroughputOverride(const OnDemandThroughputOverride& value) { SetOnDemandThroughputOverride(value); return *this;}
    inline ReplicaGlobalSecondaryIndex& WithOnDemandThroughputOverride(OnDemandThroughputOverride&& value) { SetOnDemandThroughputOverride(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    ProvisionedThroughputOverride m_provisionedThroughputOverride;
    bool m_provisionedThroughputOverrideHasBeenSet = false;

    OnDemandThroughputOverride m_onDemandThroughputOverride;
    bool m_onDemandThroughputOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
