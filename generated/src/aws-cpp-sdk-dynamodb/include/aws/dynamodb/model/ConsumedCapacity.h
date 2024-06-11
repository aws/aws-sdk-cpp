﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/provisioned-capacity-mode.html">Provisioned
   * capacity mode</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ConsumedCapacity">AWS
   * API Reference</a></p>
   */
  class ConsumedCapacity
  {
  public:
    AWS_DYNAMODB_API ConsumedCapacity();
    AWS_DYNAMODB_API ConsumedCapacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ConsumedCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the table that was affected by the operation. If you had
     * specified the Amazon Resource Name (ARN) of a table in the input, you'll see the
     * table ARN in the response.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline ConsumedCapacity& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline ConsumedCapacity& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline ConsumedCapacity& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of capacity units consumed by the operation.</p>
     */
    inline double GetCapacityUnits() const{ return m_capacityUnits; }
    inline bool CapacityUnitsHasBeenSet() const { return m_capacityUnitsHasBeenSet; }
    inline void SetCapacityUnits(double value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = value; }
    inline ConsumedCapacity& WithCapacityUnits(double value) { SetCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of read capacity units consumed by the operation.</p>
     */
    inline double GetReadCapacityUnits() const{ return m_readCapacityUnits; }
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }
    inline void SetReadCapacityUnits(double value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }
    inline ConsumedCapacity& WithReadCapacityUnits(double value) { SetReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of write capacity units consumed by the operation.</p>
     */
    inline double GetWriteCapacityUnits() const{ return m_writeCapacityUnits; }
    inline bool WriteCapacityUnitsHasBeenSet() const { return m_writeCapacityUnitsHasBeenSet; }
    inline void SetWriteCapacityUnits(double value) { m_writeCapacityUnitsHasBeenSet = true; m_writeCapacityUnits = value; }
    inline ConsumedCapacity& WithWriteCapacityUnits(double value) { SetWriteCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of throughput consumed on the table affected by the operation.</p>
     */
    inline const Capacity& GetTable() const{ return m_table; }
    inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
    inline void SetTable(const Capacity& value) { m_tableHasBeenSet = true; m_table = value; }
    inline void SetTable(Capacity&& value) { m_tableHasBeenSet = true; m_table = std::move(value); }
    inline ConsumedCapacity& WithTable(const Capacity& value) { SetTable(value); return *this;}
    inline ConsumedCapacity& WithTable(Capacity&& value) { SetTable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of throughput consumed on each local index affected by the
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Capacity>& GetLocalSecondaryIndexes() const{ return m_localSecondaryIndexes; }
    inline bool LocalSecondaryIndexesHasBeenSet() const { return m_localSecondaryIndexesHasBeenSet; }
    inline void SetLocalSecondaryIndexes(const Aws::Map<Aws::String, Capacity>& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = value; }
    inline void SetLocalSecondaryIndexes(Aws::Map<Aws::String, Capacity>&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes = std::move(value); }
    inline ConsumedCapacity& WithLocalSecondaryIndexes(const Aws::Map<Aws::String, Capacity>& value) { SetLocalSecondaryIndexes(value); return *this;}
    inline ConsumedCapacity& WithLocalSecondaryIndexes(Aws::Map<Aws::String, Capacity>&& value) { SetLocalSecondaryIndexes(std::move(value)); return *this;}
    inline ConsumedCapacity& AddLocalSecondaryIndexes(const Aws::String& key, const Capacity& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace(key, value); return *this; }
    inline ConsumedCapacity& AddLocalSecondaryIndexes(Aws::String&& key, const Capacity& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace(std::move(key), value); return *this; }
    inline ConsumedCapacity& AddLocalSecondaryIndexes(const Aws::String& key, Capacity&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace(key, std::move(value)); return *this; }
    inline ConsumedCapacity& AddLocalSecondaryIndexes(Aws::String&& key, Capacity&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace(std::move(key), std::move(value)); return *this; }
    inline ConsumedCapacity& AddLocalSecondaryIndexes(const char* key, Capacity&& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace(key, std::move(value)); return *this; }
    inline ConsumedCapacity& AddLocalSecondaryIndexes(const char* key, const Capacity& value) { m_localSecondaryIndexesHasBeenSet = true; m_localSecondaryIndexes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The amount of throughput consumed on each global index affected by the
     * operation.</p>
     */
    inline const Aws::Map<Aws::String, Capacity>& GetGlobalSecondaryIndexes() const{ return m_globalSecondaryIndexes; }
    inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
    inline void SetGlobalSecondaryIndexes(const Aws::Map<Aws::String, Capacity>& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = value; }
    inline void SetGlobalSecondaryIndexes(Aws::Map<Aws::String, Capacity>&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes = std::move(value); }
    inline ConsumedCapacity& WithGlobalSecondaryIndexes(const Aws::Map<Aws::String, Capacity>& value) { SetGlobalSecondaryIndexes(value); return *this;}
    inline ConsumedCapacity& WithGlobalSecondaryIndexes(Aws::Map<Aws::String, Capacity>&& value) { SetGlobalSecondaryIndexes(std::move(value)); return *this;}
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(const Aws::String& key, const Capacity& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace(key, value); return *this; }
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(Aws::String&& key, const Capacity& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace(std::move(key), value); return *this; }
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(const Aws::String& key, Capacity&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace(key, std::move(value)); return *this; }
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(Aws::String&& key, Capacity&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace(std::move(key), std::move(value)); return *this; }
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(const char* key, Capacity&& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace(key, std::move(value)); return *this; }
    inline ConsumedCapacity& AddGlobalSecondaryIndexes(const char* key, const Capacity& value) { m_globalSecondaryIndexesHasBeenSet = true; m_globalSecondaryIndexes.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    double m_capacityUnits;
    bool m_capacityUnitsHasBeenSet = false;

    double m_readCapacityUnits;
    bool m_readCapacityUnitsHasBeenSet = false;

    double m_writeCapacityUnits;
    bool m_writeCapacityUnitsHasBeenSet = false;

    Capacity m_table;
    bool m_tableHasBeenSet = false;

    Aws::Map<Aws::String, Capacity> m_localSecondaryIndexes;
    bool m_localSecondaryIndexesHasBeenSet = false;

    Aws::Map<Aws::String, Capacity> m_globalSecondaryIndexes;
    bool m_globalSecondaryIndexesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
