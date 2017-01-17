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
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/ReturnItemCollectionMetrics.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/WriteRequest.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <i>BatchWriteItem</i> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchWriteItemInput">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API BatchWriteItemRequest : public DynamoDBRequest
  {
  public:
    BatchWriteItemRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A map of one or more table names and, for each table, a list of operations to
     * be performed (<i>DeleteRequest</i> or <i>PutRequest</i>). Each element in the
     * map consists of the following:</p> <ul> <li> <p> <i>DeleteRequest</i> - Perform
     * a <i>DeleteItem</i> operation on the specified item. The item to be deleted is
     * identified by a <i>Key</i> subelement:</p> <ul> <li> <p> <i>Key</i> - A map of
     * primary key attribute values that uniquely identify the ! item. Each entry in
     * this map consists of an attribute name and an attribute value. For each primary
     * key, you must provide <i>all</i> of the key attributes. For example, with a
     * simple primary key, you only need to provide a value for the partition key. For
     * a composite primary key, you must provide values for <i>both</i> the partition
     * key and the sort key.</p> </li> </ul> </li> <li> <p> <i>PutRequest</i> - Perform
     * a <i>PutItem</i> operation on the specified item. The item to be put is
     * identified by an <i>Item</i> subelement:</p> <ul> <li> <p> <i>Item</i> - A map
     * of attributes and their values. Each entry in this map consists of an attribute
     * name and an attribute value. Attribute values must not be null; string and
     * binary type attributes must have lengths greater than zero; and set type
     * attributes must not be empty. Requests that contain empty values will be
     * rejected with a <i>ValidationException</i> exception.</p> <p>If you specify any
     * attributes that are part of an index key, then the data types for those
     * attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& GetRequestItems() const{ return m_requestItems; }

    /**
     * <p>A map of one or more table names and, for each table, a list of operations to
     * be performed (<i>DeleteRequest</i> or <i>PutRequest</i>). Each element in the
     * map consists of the following:</p> <ul> <li> <p> <i>DeleteRequest</i> - Perform
     * a <i>DeleteItem</i> operation on the specified item. The item to be deleted is
     * identified by a <i>Key</i> subelement:</p> <ul> <li> <p> <i>Key</i> - A map of
     * primary key attribute values that uniquely identify the ! item. Each entry in
     * this map consists of an attribute name and an attribute value. For each primary
     * key, you must provide <i>all</i> of the key attributes. For example, with a
     * simple primary key, you only need to provide a value for the partition key. For
     * a composite primary key, you must provide values for <i>both</i> the partition
     * key and the sort key.</p> </li> </ul> </li> <li> <p> <i>PutRequest</i> - Perform
     * a <i>PutItem</i> operation on the specified item. The item to be put is
     * identified by an <i>Item</i> subelement:</p> <ul> <li> <p> <i>Item</i> - A map
     * of attributes and their values. Each entry in this map consists of an attribute
     * name and an attribute value. Attribute values must not be null; string and
     * binary type attributes must have lengths greater than zero; and set type
     * attributes must not be empty. Requests that contain empty values will be
     * rejected with a <i>ValidationException</i> exception.</p> <p>If you specify any
     * attributes that are part of an index key, then the data types for those
     * attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul>
     */
    inline void SetRequestItems(const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& value) { m_requestItemsHasBeenSet = true; m_requestItems = value; }

    /**
     * <p>A map of one or more table names and, for each table, a list of operations to
     * be performed (<i>DeleteRequest</i> or <i>PutRequest</i>). Each element in the
     * map consists of the following:</p> <ul> <li> <p> <i>DeleteRequest</i> - Perform
     * a <i>DeleteItem</i> operation on the specified item. The item to be deleted is
     * identified by a <i>Key</i> subelement:</p> <ul> <li> <p> <i>Key</i> - A map of
     * primary key attribute values that uniquely identify the ! item. Each entry in
     * this map consists of an attribute name and an attribute value. For each primary
     * key, you must provide <i>all</i> of the key attributes. For example, with a
     * simple primary key, you only need to provide a value for the partition key. For
     * a composite primary key, you must provide values for <i>both</i> the partition
     * key and the sort key.</p> </li> </ul> </li> <li> <p> <i>PutRequest</i> - Perform
     * a <i>PutItem</i> operation on the specified item. The item to be put is
     * identified by an <i>Item</i> subelement:</p> <ul> <li> <p> <i>Item</i> - A map
     * of attributes and their values. Each entry in this map consists of an attribute
     * name and an attribute value. Attribute values must not be null; string and
     * binary type attributes must have lengths greater than zero; and set type
     * attributes must not be empty. Requests that contain empty values will be
     * rejected with a <i>ValidationException</i> exception.</p> <p>If you specify any
     * attributes that are part of an index key, then the data types for those
     * attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul>
     */
    inline void SetRequestItems(Aws::Map<Aws::String, Aws::Vector<WriteRequest>>&& value) { m_requestItemsHasBeenSet = true; m_requestItems = value; }

    /**
     * <p>A map of one or more table names and, for each table, a list of operations to
     * be performed (<i>DeleteRequest</i> or <i>PutRequest</i>). Each element in the
     * map consists of the following:</p> <ul> <li> <p> <i>DeleteRequest</i> - Perform
     * a <i>DeleteItem</i> operation on the specified item. The item to be deleted is
     * identified by a <i>Key</i> subelement:</p> <ul> <li> <p> <i>Key</i> - A map of
     * primary key attribute values that uniquely identify the ! item. Each entry in
     * this map consists of an attribute name and an attribute value. For each primary
     * key, you must provide <i>all</i> of the key attributes. For example, with a
     * simple primary key, you only need to provide a value for the partition key. For
     * a composite primary key, you must provide values for <i>both</i> the partition
     * key and the sort key.</p> </li> </ul> </li> <li> <p> <i>PutRequest</i> - Perform
     * a <i>PutItem</i> operation on the specified item. The item to be put is
     * identified by an <i>Item</i> subelement:</p> <ul> <li> <p> <i>Item</i> - A map
     * of attributes and their values. Each entry in this map consists of an attribute
     * name and an attribute value. Attribute values must not be null; string and
     * binary type attributes must have lengths greater than zero; and set type
     * attributes must not be empty. Requests that contain empty values will be
     * rejected with a <i>ValidationException</i> exception.</p> <p>If you specify any
     * attributes that are part of an index key, then the data types for those
     * attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul>
     */
    inline BatchWriteItemRequest& WithRequestItems(const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& value) { SetRequestItems(value); return *this;}

    /**
     * <p>A map of one or more table names and, for each table, a list of operations to
     * be performed (<i>DeleteRequest</i> or <i>PutRequest</i>). Each element in the
     * map consists of the following:</p> <ul> <li> <p> <i>DeleteRequest</i> - Perform
     * a <i>DeleteItem</i> operation on the specified item. The item to be deleted is
     * identified by a <i>Key</i> subelement:</p> <ul> <li> <p> <i>Key</i> - A map of
     * primary key attribute values that uniquely identify the ! item. Each entry in
     * this map consists of an attribute name and an attribute value. For each primary
     * key, you must provide <i>all</i> of the key attributes. For example, with a
     * simple primary key, you only need to provide a value for the partition key. For
     * a composite primary key, you must provide values for <i>both</i> the partition
     * key and the sort key.</p> </li> </ul> </li> <li> <p> <i>PutRequest</i> - Perform
     * a <i>PutItem</i> operation on the specified item. The item to be put is
     * identified by an <i>Item</i> subelement:</p> <ul> <li> <p> <i>Item</i> - A map
     * of attributes and their values. Each entry in this map consists of an attribute
     * name and an attribute value. Attribute values must not be null; string and
     * binary type attributes must have lengths greater than zero; and set type
     * attributes must not be empty. Requests that contain empty values will be
     * rejected with a <i>ValidationException</i> exception.</p> <p>If you specify any
     * attributes that are part of an index key, then the data types for those
     * attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul>
     */
    inline BatchWriteItemRequest& WithRequestItems(Aws::Map<Aws::String, Aws::Vector<WriteRequest>>&& value) { SetRequestItems(value); return *this;}

    /**
     * <p>A map of one or more table names and, for each table, a list of operations to
     * be performed (<i>DeleteRequest</i> or <i>PutRequest</i>). Each element in the
     * map consists of the following:</p> <ul> <li> <p> <i>DeleteRequest</i> - Perform
     * a <i>DeleteItem</i> operation on the specified item. The item to be deleted is
     * identified by a <i>Key</i> subelement:</p> <ul> <li> <p> <i>Key</i> - A map of
     * primary key attribute values that uniquely identify the ! item. Each entry in
     * this map consists of an attribute name and an attribute value. For each primary
     * key, you must provide <i>all</i> of the key attributes. For example, with a
     * simple primary key, you only need to provide a value for the partition key. For
     * a composite primary key, you must provide values for <i>both</i> the partition
     * key and the sort key.</p> </li> </ul> </li> <li> <p> <i>PutRequest</i> - Perform
     * a <i>PutItem</i> operation on the specified item. The item to be put is
     * identified by an <i>Item</i> subelement:</p> <ul> <li> <p> <i>Item</i> - A map
     * of attributes and their values. Each entry in this map consists of an attribute
     * name and an attribute value. Attribute values must not be null; string and
     * binary type attributes must have lengths greater than zero; and set type
     * attributes must not be empty. Requests that contain empty values will be
     * rejected with a <i>ValidationException</i> exception.</p> <p>If you specify any
     * attributes that are part of an index key, then the data types for those
     * attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul>
     */
    inline BatchWriteItemRequest& AddRequestItems(const Aws::String& key, const Aws::Vector<WriteRequest>& value) { m_requestItemsHasBeenSet = true; m_requestItems[key] = value; return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a list of operations to
     * be performed (<i>DeleteRequest</i> or <i>PutRequest</i>). Each element in the
     * map consists of the following:</p> <ul> <li> <p> <i>DeleteRequest</i> - Perform
     * a <i>DeleteItem</i> operation on the specified item. The item to be deleted is
     * identified by a <i>Key</i> subelement:</p> <ul> <li> <p> <i>Key</i> - A map of
     * primary key attribute values that uniquely identify the ! item. Each entry in
     * this map consists of an attribute name and an attribute value. For each primary
     * key, you must provide <i>all</i> of the key attributes. For example, with a
     * simple primary key, you only need to provide a value for the partition key. For
     * a composite primary key, you must provide values for <i>both</i> the partition
     * key and the sort key.</p> </li> </ul> </li> <li> <p> <i>PutRequest</i> - Perform
     * a <i>PutItem</i> operation on the specified item. The item to be put is
     * identified by an <i>Item</i> subelement:</p> <ul> <li> <p> <i>Item</i> - A map
     * of attributes and their values. Each entry in this map consists of an attribute
     * name and an attribute value. Attribute values must not be null; string and
     * binary type attributes must have lengths greater than zero; and set type
     * attributes must not be empty. Requests that contain empty values will be
     * rejected with a <i>ValidationException</i> exception.</p> <p>If you specify any
     * attributes that are part of an index key, then the data types for those
     * attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul>
     */
    inline BatchWriteItemRequest& AddRequestItems(Aws::String&& key, const Aws::Vector<WriteRequest>& value) { m_requestItemsHasBeenSet = true; m_requestItems[key] = value; return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a list of operations to
     * be performed (<i>DeleteRequest</i> or <i>PutRequest</i>). Each element in the
     * map consists of the following:</p> <ul> <li> <p> <i>DeleteRequest</i> - Perform
     * a <i>DeleteItem</i> operation on the specified item. The item to be deleted is
     * identified by a <i>Key</i> subelement:</p> <ul> <li> <p> <i>Key</i> - A map of
     * primary key attribute values that uniquely identify the ! item. Each entry in
     * this map consists of an attribute name and an attribute value. For each primary
     * key, you must provide <i>all</i> of the key attributes. For example, with a
     * simple primary key, you only need to provide a value for the partition key. For
     * a composite primary key, you must provide values for <i>both</i> the partition
     * key and the sort key.</p> </li> </ul> </li> <li> <p> <i>PutRequest</i> - Perform
     * a <i>PutItem</i> operation on the specified item. The item to be put is
     * identified by an <i>Item</i> subelement:</p> <ul> <li> <p> <i>Item</i> - A map
     * of attributes and their values. Each entry in this map consists of an attribute
     * name and an attribute value. Attribute values must not be null; string and
     * binary type attributes must have lengths greater than zero; and set type
     * attributes must not be empty. Requests that contain empty values will be
     * rejected with a <i>ValidationException</i> exception.</p> <p>If you specify any
     * attributes that are part of an index key, then the data types for those
     * attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul>
     */
    inline BatchWriteItemRequest& AddRequestItems(const Aws::String& key, Aws::Vector<WriteRequest>&& value) { m_requestItemsHasBeenSet = true; m_requestItems[key] = value; return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a list of operations to
     * be performed (<i>DeleteRequest</i> or <i>PutRequest</i>). Each element in the
     * map consists of the following:</p> <ul> <li> <p> <i>DeleteRequest</i> - Perform
     * a <i>DeleteItem</i> operation on the specified item. The item to be deleted is
     * identified by a <i>Key</i> subelement:</p> <ul> <li> <p> <i>Key</i> - A map of
     * primary key attribute values that uniquely identify the ! item. Each entry in
     * this map consists of an attribute name and an attribute value. For each primary
     * key, you must provide <i>all</i> of the key attributes. For example, with a
     * simple primary key, you only need to provide a value for the partition key. For
     * a composite primary key, you must provide values for <i>both</i> the partition
     * key and the sort key.</p> </li> </ul> </li> <li> <p> <i>PutRequest</i> - Perform
     * a <i>PutItem</i> operation on the specified item. The item to be put is
     * identified by an <i>Item</i> subelement:</p> <ul> <li> <p> <i>Item</i> - A map
     * of attributes and their values. Each entry in this map consists of an attribute
     * name and an attribute value. Attribute values must not be null; string and
     * binary type attributes must have lengths greater than zero; and set type
     * attributes must not be empty. Requests that contain empty values will be
     * rejected with a <i>ValidationException</i> exception.</p> <p>If you specify any
     * attributes that are part of an index key, then the data types for those
     * attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul>
     */
    inline BatchWriteItemRequest& AddRequestItems(Aws::String&& key, Aws::Vector<WriteRequest>&& value) { m_requestItemsHasBeenSet = true; m_requestItems[key] = value; return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a list of operations to
     * be performed (<i>DeleteRequest</i> or <i>PutRequest</i>). Each element in the
     * map consists of the following:</p> <ul> <li> <p> <i>DeleteRequest</i> - Perform
     * a <i>DeleteItem</i> operation on the specified item. The item to be deleted is
     * identified by a <i>Key</i> subelement:</p> <ul> <li> <p> <i>Key</i> - A map of
     * primary key attribute values that uniquely identify the ! item. Each entry in
     * this map consists of an attribute name and an attribute value. For each primary
     * key, you must provide <i>all</i> of the key attributes. For example, with a
     * simple primary key, you only need to provide a value for the partition key. For
     * a composite primary key, you must provide values for <i>both</i> the partition
     * key and the sort key.</p> </li> </ul> </li> <li> <p> <i>PutRequest</i> - Perform
     * a <i>PutItem</i> operation on the specified item. The item to be put is
     * identified by an <i>Item</i> subelement:</p> <ul> <li> <p> <i>Item</i> - A map
     * of attributes and their values. Each entry in this map consists of an attribute
     * name and an attribute value. Attribute values must not be null; string and
     * binary type attributes must have lengths greater than zero; and set type
     * attributes must not be empty. Requests that contain empty values will be
     * rejected with a <i>ValidationException</i> exception.</p> <p>If you specify any
     * attributes that are part of an index key, then the data types for those
     * attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul>
     */
    inline BatchWriteItemRequest& AddRequestItems(const char* key, Aws::Vector<WriteRequest>&& value) { m_requestItemsHasBeenSet = true; m_requestItems[key] = value; return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a list of operations to
     * be performed (<i>DeleteRequest</i> or <i>PutRequest</i>). Each element in the
     * map consists of the following:</p> <ul> <li> <p> <i>DeleteRequest</i> - Perform
     * a <i>DeleteItem</i> operation on the specified item. The item to be deleted is
     * identified by a <i>Key</i> subelement:</p> <ul> <li> <p> <i>Key</i> - A map of
     * primary key attribute values that uniquely identify the ! item. Each entry in
     * this map consists of an attribute name and an attribute value. For each primary
     * key, you must provide <i>all</i> of the key attributes. For example, with a
     * simple primary key, you only need to provide a value for the partition key. For
     * a composite primary key, you must provide values for <i>both</i> the partition
     * key and the sort key.</p> </li> </ul> </li> <li> <p> <i>PutRequest</i> - Perform
     * a <i>PutItem</i> operation on the specified item. The item to be put is
     * identified by an <i>Item</i> subelement:</p> <ul> <li> <p> <i>Item</i> - A map
     * of attributes and their values. Each entry in this map consists of an attribute
     * name and an attribute value. Attribute values must not be null; string and
     * binary type attributes must have lengths greater than zero; and set type
     * attributes must not be empty. Requests that contain empty values will be
     * rejected with a <i>ValidationException</i> exception.</p> <p>If you specify any
     * attributes that are part of an index key, then the data types for those
     * attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul>
     */
    inline BatchWriteItemRequest& AddRequestItems(const char* key, const Aws::Vector<WriteRequest>& value) { m_requestItemsHasBeenSet = true; m_requestItems[key] = value; return *this; }

    
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }

    
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline BatchWriteItemRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}

    
    inline BatchWriteItemRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(value); return *this;}

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline const ReturnItemCollectionMetrics& GetReturnItemCollectionMetrics() const{ return m_returnItemCollectionMetrics; }

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline void SetReturnItemCollectionMetrics(const ReturnItemCollectionMetrics& value) { m_returnItemCollectionMetricsHasBeenSet = true; m_returnItemCollectionMetrics = value; }

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline void SetReturnItemCollectionMetrics(ReturnItemCollectionMetrics&& value) { m_returnItemCollectionMetricsHasBeenSet = true; m_returnItemCollectionMetrics = value; }

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline BatchWriteItemRequest& WithReturnItemCollectionMetrics(const ReturnItemCollectionMetrics& value) { SetReturnItemCollectionMetrics(value); return *this;}

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline BatchWriteItemRequest& WithReturnItemCollectionMetrics(ReturnItemCollectionMetrics&& value) { SetReturnItemCollectionMetrics(value); return *this;}

  private:
    Aws::Map<Aws::String, Aws::Vector<WriteRequest>> m_requestItems;
    bool m_requestItemsHasBeenSet;
    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet;
    ReturnItemCollectionMetrics m_returnItemCollectionMetrics;
    bool m_returnItemCollectionMetricsHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
