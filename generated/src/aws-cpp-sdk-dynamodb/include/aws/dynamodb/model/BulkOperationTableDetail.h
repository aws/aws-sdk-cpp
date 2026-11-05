/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

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
 * <p>Contains identifying information for a table associated with a bulk
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BulkOperationTableDetail">AWS
 * API Reference</a></p>
 */
class BulkOperationTableDetail {
 public:
  AWS_DYNAMODB_API BulkOperationTableDetail() = default;
  AWS_DYNAMODB_API BulkOperationTableDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API BulkOperationTableDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name or ARN of the table associated with the bulk operation.</p>
   */
  inline const Aws::String& GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  template <typename TableNameT = Aws::String>
  void SetTableName(TableNameT&& value) {
    m_tableNameHasBeenSet = true;
    m_tableName = std::forward<TableNameT>(value);
  }
  template <typename TableNameT = Aws::String>
  BulkOperationTableDetail& WithTableName(TableNameT&& value) {
    SetTableName(std::forward<TableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the table associated with the bulk operation.</p>
   */
  inline const Aws::String& GetTableId() const { return m_tableId; }
  inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }
  template <typename TableIdT = Aws::String>
  void SetTableId(TableIdT&& value) {
    m_tableIdHasBeenSet = true;
    m_tableId = std::forward<TableIdT>(value);
  }
  template <typename TableIdT = Aws::String>
  BulkOperationTableDetail& WithTableId(TableIdT&& value) {
    SetTableId(std::forward<TableIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tableName;

  Aws::String m_tableId;
  bool m_tableNameHasBeenSet = false;
  bool m_tableIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
