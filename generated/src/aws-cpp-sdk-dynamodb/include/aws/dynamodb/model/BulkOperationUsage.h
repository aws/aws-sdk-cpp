/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BulkOperationBytes.h>
#include <aws/dynamodb/model/BulkOperationVectorBytes.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DynamoDB {
namespace Model {

/**
 * <p>Contains the bytes used during a bulk operation, including a breakdown for
 * the table and its indexes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BulkOperationUsage">AWS
 * API Reference</a></p>
 */
class BulkOperationUsage {
 public:
  AWS_DYNAMODB_API BulkOperationUsage() = default;
  AWS_DYNAMODB_API BulkOperationUsage(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API BulkOperationUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name or ARN of the table associated with the reported usage.</p>
   */
  inline const Aws::String& GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  template <typename TableNameT = Aws::String>
  void SetTableName(TableNameT&& value) {
    m_tableNameHasBeenSet = true;
    m_tableName = std::forward<TableNameT>(value);
  }
  template <typename TableNameT = Aws::String>
  BulkOperationUsage& WithTableName(TableNameT&& value) {
    SetTableName(std::forward<TableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of bulk put bytes used by the operation. This value excludes
   * bulk put vector bytes.</p>
   */
  inline long long GetBulkPutBytes() const { return m_bulkPutBytes; }
  inline bool BulkPutBytesHasBeenSet() const { return m_bulkPutBytesHasBeenSet; }
  inline void SetBulkPutBytes(long long value) {
    m_bulkPutBytesHasBeenSet = true;
    m_bulkPutBytes = value;
  }
  inline BulkOperationUsage& WithBulkPutBytes(long long value) {
    SetBulkPutBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of bulk put bytes for the table, excluding its indexes.</p>
   */
  inline const BulkOperationBytes& GetTable() const { return m_table; }
  inline bool TableHasBeenSet() const { return m_tableHasBeenSet; }
  template <typename TableT = BulkOperationBytes>
  void SetTable(TableT&& value) {
    m_tableHasBeenSet = true;
    m_table = std::forward<TableT>(value);
  }
  template <typename TableT = BulkOperationBytes>
  BulkOperationUsage& WithTable(TableT&& value) {
    SetTable(std::forward<TableT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bulk put bytes used on each local secondary index affected by the
   * operation, keyed by index name.</p>
   */
  inline const Aws::Map<Aws::String, BulkOperationBytes>& GetLocalSecondaryIndexes() const { return m_localSecondaryIndexes; }
  inline bool LocalSecondaryIndexesHasBeenSet() const { return m_localSecondaryIndexesHasBeenSet; }
  template <typename LocalSecondaryIndexesT = Aws::Map<Aws::String, BulkOperationBytes>>
  void SetLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) {
    m_localSecondaryIndexesHasBeenSet = true;
    m_localSecondaryIndexes = std::forward<LocalSecondaryIndexesT>(value);
  }
  template <typename LocalSecondaryIndexesT = Aws::Map<Aws::String, BulkOperationBytes>>
  BulkOperationUsage& WithLocalSecondaryIndexes(LocalSecondaryIndexesT&& value) {
    SetLocalSecondaryIndexes(std::forward<LocalSecondaryIndexesT>(value));
    return *this;
  }
  template <typename LocalSecondaryIndexesKeyT = Aws::String, typename LocalSecondaryIndexesValueT = BulkOperationBytes>
  BulkOperationUsage& AddLocalSecondaryIndexes(LocalSecondaryIndexesKeyT&& key, LocalSecondaryIndexesValueT&& value) {
    m_localSecondaryIndexesHasBeenSet = true;
    m_localSecondaryIndexes.emplace(std::forward<LocalSecondaryIndexesKeyT>(key), std::forward<LocalSecondaryIndexesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bulk put bytes used on each global secondary index affected by the
   * operation, keyed by index name.</p>
   */
  inline const Aws::Map<Aws::String, BulkOperationBytes>& GetGlobalSecondaryIndexes() const { return m_globalSecondaryIndexes; }
  inline bool GlobalSecondaryIndexesHasBeenSet() const { return m_globalSecondaryIndexesHasBeenSet; }
  template <typename GlobalSecondaryIndexesT = Aws::Map<Aws::String, BulkOperationBytes>>
  void SetGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) {
    m_globalSecondaryIndexesHasBeenSet = true;
    m_globalSecondaryIndexes = std::forward<GlobalSecondaryIndexesT>(value);
  }
  template <typename GlobalSecondaryIndexesT = Aws::Map<Aws::String, BulkOperationBytes>>
  BulkOperationUsage& WithGlobalSecondaryIndexes(GlobalSecondaryIndexesT&& value) {
    SetGlobalSecondaryIndexes(std::forward<GlobalSecondaryIndexesT>(value));
    return *this;
  }
  template <typename GlobalSecondaryIndexesKeyT = Aws::String, typename GlobalSecondaryIndexesValueT = BulkOperationBytes>
  BulkOperationUsage& AddGlobalSecondaryIndexes(GlobalSecondaryIndexesKeyT&& key, GlobalSecondaryIndexesValueT&& value) {
    m_globalSecondaryIndexesHasBeenSet = true;
    m_globalSecondaryIndexes.emplace(std::forward<GlobalSecondaryIndexesKeyT>(key), std::forward<GlobalSecondaryIndexesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bulk put vector bytes used on each vector index affected by the
   * operation, keyed by index name.</p>
   */
  inline const Aws::Map<Aws::String, BulkOperationVectorBytes>& GetVectorIndexes() const { return m_vectorIndexes; }
  inline bool VectorIndexesHasBeenSet() const { return m_vectorIndexesHasBeenSet; }
  template <typename VectorIndexesT = Aws::Map<Aws::String, BulkOperationVectorBytes>>
  void SetVectorIndexes(VectorIndexesT&& value) {
    m_vectorIndexesHasBeenSet = true;
    m_vectorIndexes = std::forward<VectorIndexesT>(value);
  }
  template <typename VectorIndexesT = Aws::Map<Aws::String, BulkOperationVectorBytes>>
  BulkOperationUsage& WithVectorIndexes(VectorIndexesT&& value) {
    SetVectorIndexes(std::forward<VectorIndexesT>(value));
    return *this;
  }
  template <typename VectorIndexesKeyT = Aws::String, typename VectorIndexesValueT = BulkOperationVectorBytes>
  BulkOperationUsage& AddVectorIndexes(VectorIndexesKeyT&& key, VectorIndexesValueT&& value) {
    m_vectorIndexesHasBeenSet = true;
    m_vectorIndexes.emplace(std::forward<VectorIndexesKeyT>(key), std::forward<VectorIndexesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tableName;

  long long m_bulkPutBytes{0};

  BulkOperationBytes m_table;

  Aws::Map<Aws::String, BulkOperationBytes> m_localSecondaryIndexes;

  Aws::Map<Aws::String, BulkOperationBytes> m_globalSecondaryIndexes;

  Aws::Map<Aws::String, BulkOperationVectorBytes> m_vectorIndexes;
  bool m_tableNameHasBeenSet = false;
  bool m_bulkPutBytesHasBeenSet = false;
  bool m_tableHasBeenSet = false;
  bool m_localSecondaryIndexesHasBeenSet = false;
  bool m_globalSecondaryIndexesHasBeenSet = false;
  bool m_vectorIndexesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
