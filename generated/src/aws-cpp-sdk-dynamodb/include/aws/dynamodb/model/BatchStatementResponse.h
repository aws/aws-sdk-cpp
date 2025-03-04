/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BatchStatementError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/AttributeValue.h>
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
   * <p> A PartiQL batch statement response.. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchStatementResponse">AWS
   * API Reference</a></p>
   */
  class BatchStatementResponse
  {
  public:
    AWS_DYNAMODB_API BatchStatementResponse() = default;
    AWS_DYNAMODB_API BatchStatementResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API BatchStatementResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The error associated with a failed PartiQL batch statement. </p>
     */
    inline const BatchStatementError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = BatchStatementError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = BatchStatementError>
    BatchStatementResponse& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The table name associated with a failed PartiQL batch statement. </p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    BatchStatementResponse& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A DynamoDB item associated with a BatchStatementResponse </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const { return m_item; }
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }
    template<typename ItemT = Aws::Map<Aws::String, AttributeValue>>
    void SetItem(ItemT&& value) { m_itemHasBeenSet = true; m_item = std::forward<ItemT>(value); }
    template<typename ItemT = Aws::Map<Aws::String, AttributeValue>>
    BatchStatementResponse& WithItem(ItemT&& value) { SetItem(std::forward<ItemT>(value)); return *this;}
    template<typename ItemKeyT = Aws::String, typename ItemValueT = AttributeValue>
    BatchStatementResponse& AddItem(ItemKeyT&& key, ItemValueT&& value) {
      m_itemHasBeenSet = true; m_item.emplace(std::forward<ItemKeyT>(key), std::forward<ItemValueT>(value)); return *this;
    }
    ///@}
  private:

    BatchStatementError m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_item;
    bool m_itemHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
