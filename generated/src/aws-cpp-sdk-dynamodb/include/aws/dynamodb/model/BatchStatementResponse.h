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
    AWS_DYNAMODB_API BatchStatementResponse();
    AWS_DYNAMODB_API BatchStatementResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API BatchStatementResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The error associated with a failed PartiQL batch statement. </p>
     */
    inline const BatchStatementError& GetError() const{ return m_error; }

    /**
     * <p> The error associated with a failed PartiQL batch statement. </p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p> The error associated with a failed PartiQL batch statement. </p>
     */
    inline void SetError(const BatchStatementError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p> The error associated with a failed PartiQL batch statement. </p>
     */
    inline void SetError(BatchStatementError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p> The error associated with a failed PartiQL batch statement. </p>
     */
    inline BatchStatementResponse& WithError(const BatchStatementError& value) { SetError(value); return *this;}

    /**
     * <p> The error associated with a failed PartiQL batch statement. </p>
     */
    inline BatchStatementResponse& WithError(BatchStatementError&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p> The table name associated with a failed PartiQL batch statement. </p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p> The table name associated with a failed PartiQL batch statement. </p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p> The table name associated with a failed PartiQL batch statement. </p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p> The table name associated with a failed PartiQL batch statement. </p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p> The table name associated with a failed PartiQL batch statement. </p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p> The table name associated with a failed PartiQL batch statement. </p>
     */
    inline BatchStatementResponse& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p> The table name associated with a failed PartiQL batch statement. </p>
     */
    inline BatchStatementResponse& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p> The table name associated with a failed PartiQL batch statement. </p>
     */
    inline BatchStatementResponse& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p> A DynamoDB item associated with a BatchStatementResponse </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const{ return m_item; }

    /**
     * <p> A DynamoDB item associated with a BatchStatementResponse </p>
     */
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }

    /**
     * <p> A DynamoDB item associated with a BatchStatementResponse </p>
     */
    inline void SetItem(const Aws::Map<Aws::String, AttributeValue>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p> A DynamoDB item associated with a BatchStatementResponse </p>
     */
    inline void SetItem(Aws::Map<Aws::String, AttributeValue>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }

    /**
     * <p> A DynamoDB item associated with a BatchStatementResponse </p>
     */
    inline BatchStatementResponse& WithItem(const Aws::Map<Aws::String, AttributeValue>& value) { SetItem(value); return *this;}

    /**
     * <p> A DynamoDB item associated with a BatchStatementResponse </p>
     */
    inline BatchStatementResponse& WithItem(Aws::Map<Aws::String, AttributeValue>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * <p> A DynamoDB item associated with a BatchStatementResponse </p>
     */
    inline BatchStatementResponse& AddItem(const Aws::String& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }

    /**
     * <p> A DynamoDB item associated with a BatchStatementResponse </p>
     */
    inline BatchStatementResponse& AddItem(Aws::String&& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), value); return *this; }

    /**
     * <p> A DynamoDB item associated with a BatchStatementResponse </p>
     */
    inline BatchStatementResponse& AddItem(const Aws::String& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A DynamoDB item associated with a BatchStatementResponse </p>
     */
    inline BatchStatementResponse& AddItem(Aws::String&& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A DynamoDB item associated with a BatchStatementResponse </p>
     */
    inline BatchStatementResponse& AddItem(const char* key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A DynamoDB item associated with a BatchStatementResponse </p>
     */
    inline BatchStatementResponse& AddItem(const char* key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }

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
