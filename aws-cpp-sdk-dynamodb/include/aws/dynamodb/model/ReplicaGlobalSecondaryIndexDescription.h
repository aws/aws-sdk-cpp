/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ProvisionedThroughputOverride.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaGlobalSecondaryIndexDescription">AWS
   * API Reference</a></p>
   */
  class ReplicaGlobalSecondaryIndexDescription
  {
  public:
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexDescription();
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the global secondary index.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline ReplicaGlobalSecondaryIndexDescription& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline ReplicaGlobalSecondaryIndexDescription& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the global secondary index.</p>
     */
    inline ReplicaGlobalSecondaryIndexDescription& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>If not described, uses the source table GSI's read capacity settings.</p>
     */
    inline const ProvisionedThroughputOverride& GetProvisionedThroughputOverride() const{ return m_provisionedThroughputOverride; }

    /**
     * <p>If not described, uses the source table GSI's read capacity settings.</p>
     */
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }

    /**
     * <p>If not described, uses the source table GSI's read capacity settings.</p>
     */
    inline void SetProvisionedThroughputOverride(const ProvisionedThroughputOverride& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = value; }

    /**
     * <p>If not described, uses the source table GSI's read capacity settings.</p>
     */
    inline void SetProvisionedThroughputOverride(ProvisionedThroughputOverride&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::move(value); }

    /**
     * <p>If not described, uses the source table GSI's read capacity settings.</p>
     */
    inline ReplicaGlobalSecondaryIndexDescription& WithProvisionedThroughputOverride(const ProvisionedThroughputOverride& value) { SetProvisionedThroughputOverride(value); return *this;}

    /**
     * <p>If not described, uses the source table GSI's read capacity settings.</p>
     */
    inline ReplicaGlobalSecondaryIndexDescription& WithProvisionedThroughputOverride(ProvisionedThroughputOverride&& value) { SetProvisionedThroughputOverride(std::move(value)); return *this;}

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    ProvisionedThroughputOverride m_provisionedThroughputOverride;
    bool m_provisionedThroughputOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
