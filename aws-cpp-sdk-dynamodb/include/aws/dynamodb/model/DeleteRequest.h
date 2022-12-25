﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents a request to perform a <code>DeleteItem</code> operation on an
   * item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteRequest">AWS
   * API Reference</a></p>
   */
  class DeleteRequest
  {
  public:
    AWS_DYNAMODB_API DeleteRequest();
    AWS_DYNAMODB_API DeleteRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API DeleteRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to delete. All of the table's primary key attributes must be specified,
     * and their data types must match those of the table's key schema.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetKey() const{ return m_key; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to delete. All of the table's primary key attributes must be specified,
     * and their data types must match those of the table's key schema.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to delete. All of the table's primary key attributes must be specified,
     * and their data types must match those of the table's key schema.</p>
     */
    inline void SetKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to delete. All of the table's primary key attributes must be specified,
     * and their data types must match those of the table's key schema.</p>
     */
    inline void SetKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to delete. All of the table's primary key attributes must be specified,
     * and their data types must match those of the table's key schema.</p>
     */
    inline DeleteRequest& WithKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetKey(value); return *this;}

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to delete. All of the table's primary key attributes must be specified,
     * and their data types must match those of the table's key schema.</p>
     */
    inline DeleteRequest& WithKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to delete. All of the table's primary key attributes must be specified,
     * and their data types must match those of the table's key schema.</p>
     */
    inline DeleteRequest& AddKey(const Aws::String& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to delete. All of the table's primary key attributes must be specified,
     * and their data types must match those of the table's key schema.</p>
     */
    inline DeleteRequest& AddKey(Aws::String&& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to delete. All of the table's primary key attributes must be specified,
     * and their data types must match those of the table's key schema.</p>
     */
    inline DeleteRequest& AddKey(const Aws::String& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to delete. All of the table's primary key attributes must be specified,
     * and their data types must match those of the table's key schema.</p>
     */
    inline DeleteRequest& AddKey(Aws::String&& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to delete. All of the table's primary key attributes must be specified,
     * and their data types must match those of the table's key schema.</p>
     */
    inline DeleteRequest& AddKey(const char* key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * the item to delete. All of the table's primary key attributes must be specified,
     * and their data types must match those of the table's key schema.</p>
     */
    inline DeleteRequest& AddKey(const char* key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, AttributeValue> m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
