/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/model/Capacity.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

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
   * <p>The capacity units consumed by an operation. The data returned includes the
   * total provisioned throughput consumed, along with statistics for the table and
   * any indexes involved in the operation. <i>ConsumedCapacity</i> is only returned
   * if the request asked for it. For more information, see <a
   * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Provisioned
   * Throughput</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
   */
  class AWS_DYNAMODB_API ConsumedCapacity
  {
  public:
    ConsumedCapacity();
    ConsumedCapacity(const Aws::Utils::Json::JsonValue& jsonValue);
    ConsumedCapacity& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the table that was affected by the operation.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table that was affected by the operation.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table that was affected by the operation.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table that was affected by the operation.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table that was affected by the operation.</p>
     */
    inline ConsumedCapacity& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table that was affected by the operation.</p>
     */
    inline ConsumedCapacity& WithTableName(Aws::String&& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table that was affected by the operation.</p>
     */
    inline ConsumedCapacity& WithTableName(const char* value) { SetTableName(value); return *this;}

    /**
     * <p>The total number of capacity units consumed by the operation.</p>
     */
    inline double GetCapacityUnits() const{ return m_capacityUnits; }

    /**
     * <p>The total number of capacity units consumed by the operation.</p>
     */
    inline void SetCapacityUnits(double value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = value; }

    /**
     * <p>The total number of capacity units consumed by the operation.</p>
     */
    inline ConsumedCapacity& WithCapacityUnits(double value) { SetCapacityUnits(value); return *this;}

    /**
     * <p>The amount of throughput consumed on the table affected by the operation.</p>
     */
    inline const Capacity& GetTable() const{ return m_table; }

    /**
     * <p>The amount of throughput consumed on the table affected by the operation.</p>
     */
    inline void SetTable(const Capacity& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>The amount of throughput consumed on the table affected by the operation.</p>
     */
    inline void SetTable(Capacity&& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>The amount of throughput consumed on the table affected by the operation.</p>
     */
    inline ConsumedCapacity& WithTable(const Capacity& value) { SetTable(value); return *this;}

    /**
     * <p>The amount of throughput consumed on the table affected by the operation.</p>
     */
    inline ConsumedCapacity& WithTable(Capacity&& value) { SetTable(value); return *this;}

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Capacity>& GetLocalSecondaryIndexes() const{ return m_localSecondaryIndexes; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline void SetLocalSecondaryIndexes(const Aws::Map<Aws::String, Capacity>& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = value; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline void SetLocalSecondaryIndexes(Aws::Map<Aws::String, Capacity>&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = value; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& WithLocalSecondaryIndexes(const Aws::Map<Aws::String, Capacity>& value) { SetLocalSecondaryIndexes(value); return *this;}

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& WithLocalSecondaryIndexes(Aws::Map<Aws::String, Capacity>&& value) { SetLocalSecondaryIndexes(value); return *this;}

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddLocalSecondaryIndexes(const Aws::String& key, const Capacity& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes[key] = value; return *this; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddLocalSecondaryIndexes(Aws::String&& key, const Capacity& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes[key] = value; return *this; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddLocalSecondaryIndexes(const Aws::String& key, Capacity&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes[key] = value; return *this; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddLocalSecondaryIndexes(Aws::String&& key, Capacity&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes[key] = value; return *this; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddLocalSecondaryIndexes(const char* key, Capacity&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes[key] = value; return *this; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddLocalSecondaryIndexes(const char* key, const Capacity& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes[key] = value; return *this; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Capacity>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline void SetGlobalSecondaryIndexes(const Aws::Map<Aws::String, Capacity>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline void SetGlobalSecondaryIndexes(Aws::Map<Aws::String, Capacity>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& WithGlobalSecondaryIndexes(const Aws::Map<Aws::String, Capacity>& value) { SetGlobalSecondaryIndexes(value); return *this;}

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& WithGlobalSecondaryIndexes(Aws::Map<Aws::String, Capacity>&& value) { SetGlobalSecondaryIndexes(value); return *this;}

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(const Aws::String& key, const Capacity& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes[key] = value; return *this; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(Aws::String&& key, const Capacity& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes[key] = value; return *this; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(const Aws::String& key, Capacity&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes[key] = value; return *this; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(Aws::String&& key, Capacity&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes[key] = value; return *this; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(const char* key, Capacity&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes[key] = value; return *this; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(const char* key, const Capacity& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes[key] = value; return *this; }

  private:
    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;
    double m_capacityUnits;
    bool m_capacityUnitsHasBeenSet;
    Capacity m_table;
    bool m_tableHasBeenSet;
    Aws::Map<Aws::String, Capacity> m_localSecondaryIndexes;
    bool m_localSecondaryIndexesHasBeenSet;
    Aws::Map<Aws::String, Capacity> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
