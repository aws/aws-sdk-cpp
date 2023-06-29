/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
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
   * <p>A condition specified in the operation could not be evaluated.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ConditionalCheckFailedException">AWS
   * API Reference</a></p>
   */
  class ConditionalCheckFailedException
  {
  public:
    AWS_DYNAMODB_API ConditionalCheckFailedException();
    AWS_DYNAMODB_API ConditionalCheckFailedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ConditionalCheckFailedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The conditional request failed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The conditional request failed.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The conditional request failed.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The conditional request failed.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The conditional request failed.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The conditional request failed.</p>
     */
    inline ConditionalCheckFailedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The conditional request failed.</p>
     */
    inline ConditionalCheckFailedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The conditional request failed.</p>
     */
    inline ConditionalCheckFailedException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Item which caused the <code>ConditionalCheckFailedException</code>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const{ return m_item; }

    /**
     * <p>Item which caused the <code>ConditionalCheckFailedException</code>.</p>
     */
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }

    /**
     * <p>Item which caused the <code>ConditionalCheckFailedException</code>.</p>
     */
    inline void SetItem(const Aws::Map<Aws::String, AttributeValue>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p>Item which caused the <code>ConditionalCheckFailedException</code>.</p>
     */
    inline void SetItem(Aws::Map<Aws::String, AttributeValue>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }

    /**
     * <p>Item which caused the <code>ConditionalCheckFailedException</code>.</p>
     */
    inline ConditionalCheckFailedException& WithItem(const Aws::Map<Aws::String, AttributeValue>& value) { SetItem(value); return *this;}

    /**
     * <p>Item which caused the <code>ConditionalCheckFailedException</code>.</p>
     */
    inline ConditionalCheckFailedException& WithItem(Aws::Map<Aws::String, AttributeValue>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * <p>Item which caused the <code>ConditionalCheckFailedException</code>.</p>
     */
    inline ConditionalCheckFailedException& AddItem(const Aws::String& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }

    /**
     * <p>Item which caused the <code>ConditionalCheckFailedException</code>.</p>
     */
    inline ConditionalCheckFailedException& AddItem(Aws::String&& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), value); return *this; }

    /**
     * <p>Item which caused the <code>ConditionalCheckFailedException</code>.</p>
     */
    inline ConditionalCheckFailedException& AddItem(const Aws::String& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Item which caused the <code>ConditionalCheckFailedException</code>.</p>
     */
    inline ConditionalCheckFailedException& AddItem(Aws::String&& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Item which caused the <code>ConditionalCheckFailedException</code>.</p>
     */
    inline ConditionalCheckFailedException& AddItem(const char* key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Item which caused the <code>ConditionalCheckFailedException</code>.</p>
     */
    inline ConditionalCheckFailedException& AddItem(const char* key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_item;
    bool m_itemHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
