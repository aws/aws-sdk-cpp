﻿/*
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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AttributeValue.h>

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
   * <p>Represents a request to perform a <i>PutItem</i> operation on an item.</p>
   */
  class AWS_DYNAMODB_API PutRequest
  {
  public:
    PutRequest();
    PutRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    PutRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * an item to be processed by <i>PutItem</i>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item which are part of
     * an index key schema for the table, their types must match the index key
     * schema.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const{ return m_item; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * an item to be processed by <i>PutItem</i>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item which are part of
     * an index key schema for the table, their types must match the index key
     * schema.</p>
     */
    inline void SetItem(const Aws::Map<Aws::String, AttributeValue>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * an item to be processed by <i>PutItem</i>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item which are part of
     * an index key schema for the table, their types must match the index key
     * schema.</p>
     */
    inline void SetItem(Aws::Map<Aws::String, AttributeValue>&& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * an item to be processed by <i>PutItem</i>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item which are part of
     * an index key schema for the table, their types must match the index key
     * schema.</p>
     */
    inline PutRequest& WithItem(const Aws::Map<Aws::String, AttributeValue>& value) { SetItem(value); return *this;}

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * an item to be processed by <i>PutItem</i>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item which are part of
     * an index key schema for the table, their types must match the index key
     * schema.</p>
     */
    inline PutRequest& WithItem(Aws::Map<Aws::String, AttributeValue>&& value) { SetItem(value); return *this;}

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * an item to be processed by <i>PutItem</i>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item which are part of
     * an index key schema for the table, their types must match the index key
     * schema.</p>
     */
    inline PutRequest& AddItem(const Aws::String& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * an item to be processed by <i>PutItem</i>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item which are part of
     * an index key schema for the table, their types must match the index key
     * schema.</p>
     */
    inline PutRequest& AddItem(Aws::String&& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * an item to be processed by <i>PutItem</i>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item which are part of
     * an index key schema for the table, their types must match the index key
     * schema.</p>
     */
    inline PutRequest& AddItem(const Aws::String& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * an item to be processed by <i>PutItem</i>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item which are part of
     * an index key schema for the table, their types must match the index key
     * schema.</p>
     */
    inline PutRequest& AddItem(Aws::String&& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * an item to be processed by <i>PutItem</i>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item which are part of
     * an index key schema for the table, their types must match the index key
     * schema.</p>
     */
    inline PutRequest& AddItem(const char* key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item[key] = value; return *this; }

    /**
     * <p>A map of attribute name to attribute values, representing the primary key of
     * an item to be processed by <i>PutItem</i>. All of the table's primary key
     * attributes must be specified, and their data types must match those of the
     * table's key schema. If any attributes are present in the item which are part of
     * an index key schema for the table, their types must match the index key
     * schema.</p>
     */
    inline PutRequest& AddItem(const char* key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item[key] = value; return *this; }

  private:
    Aws::Map<Aws::String, AttributeValue> m_item;
    bool m_itemHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
