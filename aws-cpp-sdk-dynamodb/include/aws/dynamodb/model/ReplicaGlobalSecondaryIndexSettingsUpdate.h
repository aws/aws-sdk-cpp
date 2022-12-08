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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ReplicaGlobalSecondaryIndexSettingsUpdate">AWS
   * API Reference</a></p>
   */
  class ReplicaGlobalSecondaryIndexSettingsUpdate
  {
  public:
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexSettingsUpdate();
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexSettingsUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ReplicaGlobalSecondaryIndexSettingsUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline ReplicaGlobalSecondaryIndexSettingsUpdate& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline ReplicaGlobalSecondaryIndexSettingsUpdate& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the global secondary index. The name must be unique among all
     * other indexes on this table.</p>
     */
    inline ReplicaGlobalSecondaryIndexSettingsUpdate& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>.</p>
     */
    inline long long GetProvisionedReadCapacityUnits() const{ return m_provisionedReadCapacityUnits; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>.</p>
     */
    inline bool ProvisionedReadCapacityUnitsHasBeenSet() const { return m_provisionedReadCapacityUnitsHasBeenSet; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>.</p>
     */
    inline void SetProvisionedReadCapacityUnits(long long value) { m_provisionedReadCapacityUnitsHasBeenSet = true; m_provisionedReadCapacityUnits = value; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>.</p>
     */
    inline ReplicaGlobalSecondaryIndexSettingsUpdate& WithProvisionedReadCapacityUnits(long long value) { SetProvisionedReadCapacityUnits(value); return *this;}


    /**
     * <p>Auto scaling settings for managing a global secondary index replica's read
     * capacity units.</p>
     */
    inline const AutoScalingSettingsUpdate& GetProvisionedReadCapacityAutoScalingSettingsUpdate() const{ return m_provisionedReadCapacityAutoScalingSettingsUpdate; }

    /**
     * <p>Auto scaling settings for managing a global secondary index replica's read
     * capacity units.</p>
     */
    inline bool ProvisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet() const { return m_provisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet; }

    /**
     * <p>Auto scaling settings for managing a global secondary index replica's read
     * capacity units.</p>
     */
    inline void SetProvisionedReadCapacityAutoScalingSettingsUpdate(const AutoScalingSettingsUpdate& value) { m_provisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet = true; m_provisionedReadCapacityAutoScalingSettingsUpdate = value; }

    /**
     * <p>Auto scaling settings for managing a global secondary index replica's read
     * capacity units.</p>
     */
    inline void SetProvisionedReadCapacityAutoScalingSettingsUpdate(AutoScalingSettingsUpdate&& value) { m_provisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet = true; m_provisionedReadCapacityAutoScalingSettingsUpdate = std::move(value); }

    /**
     * <p>Auto scaling settings for managing a global secondary index replica's read
     * capacity units.</p>
     */
    inline ReplicaGlobalSecondaryIndexSettingsUpdate& WithProvisionedReadCapacityAutoScalingSettingsUpdate(const AutoScalingSettingsUpdate& value) { SetProvisionedReadCapacityAutoScalingSettingsUpdate(value); return *this;}

    /**
     * <p>Auto scaling settings for managing a global secondary index replica's read
     * capacity units.</p>
     */
    inline ReplicaGlobalSecondaryIndexSettingsUpdate& WithProvisionedReadCapacityAutoScalingSettingsUpdate(AutoScalingSettingsUpdate&& value) { SetProvisionedReadCapacityAutoScalingSettingsUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    long long m_provisionedReadCapacityUnits;
    bool m_provisionedReadCapacityUnitsHasBeenSet = false;

    AutoScalingSettingsUpdate m_provisionedReadCapacityAutoScalingSettingsUpdate;
    bool m_provisionedReadCapacityAutoScalingSettingsUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
