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
#include <aws/dynamodb/model/Capacity.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The capacity units consumed by an operation. The data returned includes the
   * total provisioned throughput consumed, along with statistics for the table and
   * any indexes involved in the operation. <code>ConsumedCapacity</code> is only
   * returned if the request asked for it. For more information, see <a
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ProvisionedThroughputIntro.html">Provisioned
   * Throughput</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ConsumedCapacity">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API ConsumedCapacity
  {
  public:
    ConsumedCapacity();
    ConsumedCapacity(Aws::Utils::Json::JsonView jsonValue);
    ConsumedCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the table that was affected by the operation.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table that was affected by the operation.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table that was affected by the operation.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table that was affected by the operation.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

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
    inline ConsumedCapacity& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

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
    inline bool CapacityUnitsHasBeenSet() const { return m_capacityUnitsHasBeenSet; }

    /**
     * <p>The total number of capacity units consumed by the operation.</p>
     */
    inline void SetCapacityUnits(double value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = value; }

    /**
     * <p>The total number of capacity units consumed by the operation.</p>
     */
    inline ConsumedCapacity& WithCapacityUnits(double value) { SetCapacityUnits(value); return *this;}


    /**
     * <p>The total number of read capacity units consumed by the operation.</p>
     */
    inline double GetReadCapacityUnits() const{ return m_readCapacityUnits; }

    /**
     * <p>The total number of read capacity units consumed by the operation.</p>
     */
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }

    /**
     * <p>The total number of read capacity units consumed by the operation.</p>
     */
    inline void SetReadCapacityUnits(double value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }

    /**
     * <p>The total number of read capacity units consumed by the operation.</p>
     */
    inline ConsumedCapacity& WithReadCapacityUnits(double value) { SetReadCapacityUnits(value); return *this;}


    /**
     * <p>The total number of write capacity units consumed by the operation.</p>
     */
    inline double GetWriteCapacityUnits() const{ return m_writeCapacityUnits; }

    /**
     * <p>The total number of write capacity units consumed by the operation.</p>
     */
    inline bool WriteCapacityUnitsHasBeenSet() const { return m_writeCapacityUnitsHasBeenSet; }

    /**
     * <p>The total number of write capacity units consumed by the operation.</p>
     */
    inline void SetWriteCapacityUnits(double value) { m_writeCapacityUnitsHasBeenSet = true; m_writeCapacityUnits = value; }

    /**
     * <p>The total number of write capacity units consumed by the operation.</p>
     */
    inline ConsumedCapacity& WithWriteCapacityUnits(double value) { SetWriteCapacityUnits(value); return *this;}


    /**
     * <p>The amount of throughput consumed on the table affected by the operation.</p>
     */
    inline const Capacity& GetTable() const{ return m_table; }

    /**
     * <p>The amount of throughput consumed on the table affected by the operation.</p>
     */
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }

    /**
     * <p>The amount of throughput consumed on the table affected by the operation.</p>
     */
    inline void SetTable(const Capacity& value) { m_tableHasBeenSet = true; m_table = value; }

    /**
     * <p>The amount of throughput consumed on the table affected by the operation.</p>
     */
    inline void SetTable(Capacity&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }

    /**
     * <p>The amount of throughput consumed on the table affected by the operation.</p>
     */
    inline ConsumedCapacity& WithTable(const Capacity& value) { SetTable(value); return *this;}

    /**
     * <p>The amount of throughput consumed on the table affected by the operation.</p>
     */
    inline ConsumedCapacity& WithTable(Capacity&& value) { SetTable(std::move(value)); return *this;}


    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Capacity>& GetLocalSecondaryIndexes() const{ return m_localSecondaryIndexes; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline bool LocalSecondaryIndexesHasBeenSet() const { return m_localSecondaryIndexesHasBeenSet; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline void SetLocalSecondaryIndexes(const Aws::Map<Aws::String, Capacity>& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = value; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline void SetLocalSecondaryIndexes(Aws::Map<Aws::String, Capacity>&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = std::move(value); }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& WithLocalSecondaryIndexes(const Aws::Map<Aws::String, Capacity>& value) { SetLocalSecondaryIndexes(value); return *this;}

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& WithLocalSecondaryIndexes(Aws::Map<Aws::String, Capacity>&& value) { SetLocalSecondaryIndexes(std::move(value)); return *this;}

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddLocalSecondaryIndexes(const Aws::String& key, const Capacity& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace(key, value); return *this; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddLocalSecondaryIndexes(Aws::String&& key, const Capacity& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddLocalSecondaryIndexes(const Aws::String& key, Capacity&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddLocalSecondaryIndexes(Aws::String&& key, Capacity&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddLocalSecondaryIndexes(const char* key, Capacity&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddLocalSecondaryIndexes(const char* key, const Capacity& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace(key, value); return *this; }


    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Capacity>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline void SetGlobalSecondaryIndexes(const Aws::Map<Aws::String, Capacity>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline void SetGlobalSecondaryIndexes(Aws::Map<Aws::String, Capacity>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& WithGlobalSecondaryIndexes(const Aws::Map<Aws::String, Capacity>& value) { SetGlobalSecondaryIndexes(value); return *this;}

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& WithGlobalSecondaryIndexes(Aws::Map<Aws::String, Capacity>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(const Aws::String& key, const Capacity& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace(key, value); return *this; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(Aws::String&& key, const Capacity& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(const Aws::String& key, Capacity&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(Aws::String&& key, Capacity&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(const char* key, Capacity&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(const char* key, const Capacity& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace(key, value); return *this; }

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    double m_capacityUnits;
    bool m_capacityUnitsHasBeenSet;

    double m_readCapacityUnits;
    bool m_readCapacityUnitsHasBeenSet;

    double m_writeCapacityUnits;
    bool m_writeCapacityUnitsHasBeenSet;

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
