/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BatchStatementErrorCodeEnum.h>
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
   * <p> An error associated with a statement in a PartiQL batch that was run.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchStatementError">AWS
   * API Reference</a></p>
   */
  class BatchStatementError
  {
  public:
    AWS_DYNAMODB_API BatchStatementError();
    AWS_DYNAMODB_API BatchStatementError(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API BatchStatementError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The error code associated with the failed PartiQL batch statement. </p>
     */
    inline const BatchStatementErrorCodeEnum& GetCode() const{ return m_code; }

    /**
     * <p> The error code associated with the failed PartiQL batch statement. </p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p> The error code associated with the failed PartiQL batch statement. </p>
     */
    inline void SetCode(const BatchStatementErrorCodeEnum& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p> The error code associated with the failed PartiQL batch statement. </p>
     */
    inline void SetCode(BatchStatementErrorCodeEnum&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p> The error code associated with the failed PartiQL batch statement. </p>
     */
    inline BatchStatementError& WithCode(const BatchStatementErrorCodeEnum& value) { SetCode(value); return *this;}

    /**
     * <p> The error code associated with the failed PartiQL batch statement. </p>
     */
    inline BatchStatementError& WithCode(BatchStatementErrorCodeEnum&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline BatchStatementError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline BatchStatementError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p> The error message associated with the PartiQL batch response. </p>
     */
    inline BatchStatementError& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The item which caused the condition check to fail. This will be set if
     * ReturnValuesOnConditionCheckFailure is specified as <code>ALL_OLD</code>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const{ return m_item; }

    /**
     * <p>The item which caused the condition check to fail. This will be set if
     * ReturnValuesOnConditionCheckFailure is specified as <code>ALL_OLD</code>.</p>
     */
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }

    /**
     * <p>The item which caused the condition check to fail. This will be set if
     * ReturnValuesOnConditionCheckFailure is specified as <code>ALL_OLD</code>.</p>
     */
    inline void SetItem(const Aws::Map<Aws::String, AttributeValue>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p>The item which caused the condition check to fail. This will be set if
     * ReturnValuesOnConditionCheckFailure is specified as <code>ALL_OLD</code>.</p>
     */
    inline void SetItem(Aws::Map<Aws::String, AttributeValue>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }

    /**
     * <p>The item which caused the condition check to fail. This will be set if
     * ReturnValuesOnConditionCheckFailure is specified as <code>ALL_OLD</code>.</p>
     */
    inline BatchStatementError& WithItem(const Aws::Map<Aws::String, AttributeValue>& value) { SetItem(value); return *this;}

    /**
     * <p>The item which caused the condition check to fail. This will be set if
     * ReturnValuesOnConditionCheckFailure is specified as <code>ALL_OLD</code>.</p>
     */
    inline BatchStatementError& WithItem(Aws::Map<Aws::String, AttributeValue>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * <p>The item which caused the condition check to fail. This will be set if
     * ReturnValuesOnConditionCheckFailure is specified as <code>ALL_OLD</code>.</p>
     */
    inline BatchStatementError& AddItem(const Aws::String& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }

    /**
     * <p>The item which caused the condition check to fail. This will be set if
     * ReturnValuesOnConditionCheckFailure is specified as <code>ALL_OLD</code>.</p>
     */
    inline BatchStatementError& AddItem(Aws::String&& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), value); return *this; }

    /**
     * <p>The item which caused the condition check to fail. This will be set if
     * ReturnValuesOnConditionCheckFailure is specified as <code>ALL_OLD</code>.</p>
     */
    inline BatchStatementError& AddItem(const Aws::String& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The item which caused the condition check to fail. This will be set if
     * ReturnValuesOnConditionCheckFailure is specified as <code>ALL_OLD</code>.</p>
     */
    inline BatchStatementError& AddItem(Aws::String&& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The item which caused the condition check to fail. This will be set if
     * ReturnValuesOnConditionCheckFailure is specified as <code>ALL_OLD</code>.</p>
     */
    inline BatchStatementError& AddItem(const char* key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The item which caused the condition check to fail. This will be set if
     * ReturnValuesOnConditionCheckFailure is specified as <code>ALL_OLD</code>.</p>
     */
    inline BatchStatementError& AddItem(const char* key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }

  private:

    BatchStatementErrorCodeEnum m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_item;
    bool m_itemHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
