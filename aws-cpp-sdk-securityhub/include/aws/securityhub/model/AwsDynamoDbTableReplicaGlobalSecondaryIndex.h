/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsDynamoDbTableProvisionedThroughputOverride.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a global secondary index for a DynamoDB table
   * replica.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableReplicaGlobalSecondaryIndex">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableReplicaGlobalSecondaryIndex
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableReplicaGlobalSecondaryIndex();
    AWS_SECURITYHUB_API AwsDynamoDbTableReplicaGlobalSecondaryIndex(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableReplicaGlobalSecondaryIndex& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the index.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the index.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the index.</p>
     */
    inline AwsDynamoDbTableReplicaGlobalSecondaryIndex& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the index.</p>
     */
    inline AwsDynamoDbTableReplicaGlobalSecondaryIndex& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the index.</p>
     */
    inline AwsDynamoDbTableReplicaGlobalSecondaryIndex& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>Replica-specific configuration for the provisioned throughput for the
     * index.</p>
     */
    inline const AwsDynamoDbTableProvisionedThroughputOverride& GetProvisionedThroughputOverride() const{ return m_provisionedThroughputOverride; }

    /**
     * <p>Replica-specific configuration for the provisioned throughput for the
     * index.</p>
     */
    inline bool ProvisionedThroughputOverrideHasBeenSet() const { return m_provisionedThroughputOverrideHasBeenSet; }

    /**
     * <p>Replica-specific configuration for the provisioned throughput for the
     * index.</p>
     */
    inline void SetProvisionedThroughputOverride(const AwsDynamoDbTableProvisionedThroughputOverride& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = value; }

    /**
     * <p>Replica-specific configuration for the provisioned throughput for the
     * index.</p>
     */
    inline void SetProvisionedThroughputOverride(AwsDynamoDbTableProvisionedThroughputOverride&& value) { m_provisionedThroughputOverrideHasBeenSet = true; m_provisionedThroughputOverride = std::move(value); }

    /**
     * <p>Replica-specific configuration for the provisioned throughput for the
     * index.</p>
     */
    inline AwsDynamoDbTableReplicaGlobalSecondaryIndex& WithProvisionedThroughputOverride(const AwsDynamoDbTableProvisionedThroughputOverride& value) { SetProvisionedThroughputOverride(value); return *this;}

    /**
     * <p>Replica-specific configuration for the provisioned throughput for the
     * index.</p>
     */
    inline AwsDynamoDbTableReplicaGlobalSecondaryIndex& WithProvisionedThroughputOverride(AwsDynamoDbTableProvisionedThroughputOverride&& value) { SetProvisionedThroughputOverride(std::move(value)); return *this;}

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    AwsDynamoDbTableProvisionedThroughputOverride m_provisionedThroughputOverride;
    bool m_provisionedThroughputOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
