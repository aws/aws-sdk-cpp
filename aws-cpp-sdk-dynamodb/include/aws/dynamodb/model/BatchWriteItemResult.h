/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ConsumedCapacity.h>
#include <aws/dynamodb/model/WriteRequest.h>
#include <aws/dynamodb/model/ItemCollectionMetrics.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
   * <p>Represents the output of a <code>BatchWriteItem</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchWriteItemOutput">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API BatchWriteItemResult
  {
  public:
    BatchWriteItemResult();
    BatchWriteItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchWriteItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A map of tables and requests against those tables that were not processed.
     * The <code>UnprocessedItems</code> value is in the same form as
     * <code>RequestItems</code>, so you can provide this value directly to a
     * subsequent <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each
     * <code>UnprocessedItems</code> entry consists of a table name and, for that
     * table, a list of operations to perform (<code>DeleteRequest</code> or
     * <code>PutRequest</code>).</p> <ul> <li> <p> <code>DeleteRequest</code> - Perform
     * a <code>DeleteItem</code> operation on the specified item. The item to be
     * deleted is identified by a <code>Key</code> subelement:</p> <ul> <li> <p>
     * <code>Key</code> - A map of primary key attribute values that uniquely identify
     * the item. Each entry in this map consists of an attribute name and an attribute
     * value.</p> </li> </ul> </li> <li> <p> <code>PutRequest</code> - Perform a
     * <code>PutItem</code> operation on the specified item. The item to be put is
     * identified by an <code>Item</code> subelement:</p> <ul> <li> <p>
     * <code>Item</code> - A map of attributes and their values. Each entry in this map
     * consists of an attribute name and an attribute value. Attribute values must not
     * be null; string and binary type attributes must have lengths greater than zero;
     * and set type attributes must not be empty. Requests that contain empty values
     * will be rejected with a <code>ValidationException</code> exception.</p> <p>If
     * you specify any attributes that are part of an index key, then the data types
     * for those attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul> <p>If there are no unprocessed items
     * remaining, the response contains an empty <code>UnprocessedItems</code> map.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& GetUnprocessedItems() const{ return m_unprocessedItems; }

    /**
     * <p>A map of tables and requests against those tables that were not processed.
     * The <code>UnprocessedItems</code> value is in the same form as
     * <code>RequestItems</code>, so you can provide this value directly to a
     * subsequent <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each
     * <code>UnprocessedItems</code> entry consists of a table name and, for that
     * table, a list of operations to perform (<code>DeleteRequest</code> or
     * <code>PutRequest</code>).</p> <ul> <li> <p> <code>DeleteRequest</code> - Perform
     * a <code>DeleteItem</code> operation on the specified item. The item to be
     * deleted is identified by a <code>Key</code> subelement:</p> <ul> <li> <p>
     * <code>Key</code> - A map of primary key attribute values that uniquely identify
     * the item. Each entry in this map consists of an attribute name and an attribute
     * value.</p> </li> </ul> </li> <li> <p> <code>PutRequest</code> - Perform a
     * <code>PutItem</code> operation on the specified item. The item to be put is
     * identified by an <code>Item</code> subelement:</p> <ul> <li> <p>
     * <code>Item</code> - A map of attributes and their values. Each entry in this map
     * consists of an attribute name and an attribute value. Attribute values must not
     * be null; string and binary type attributes must have lengths greater than zero;
     * and set type attributes must not be empty. Requests that contain empty values
     * will be rejected with a <code>ValidationException</code> exception.</p> <p>If
     * you specify any attributes that are part of an index key, then the data types
     * for those attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul> <p>If there are no unprocessed items
     * remaining, the response contains an empty <code>UnprocessedItems</code> map.</p>
     */
    inline void SetUnprocessedItems(const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& value) { m_unprocessedItems = value; }

    /**
     * <p>A map of tables and requests against those tables that were not processed.
     * The <code>UnprocessedItems</code> value is in the same form as
     * <code>RequestItems</code>, so you can provide this value directly to a
     * subsequent <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each
     * <code>UnprocessedItems</code> entry consists of a table name and, for that
     * table, a list of operations to perform (<code>DeleteRequest</code> or
     * <code>PutRequest</code>).</p> <ul> <li> <p> <code>DeleteRequest</code> - Perform
     * a <code>DeleteItem</code> operation on the specified item. The item to be
     * deleted is identified by a <code>Key</code> subelement:</p> <ul> <li> <p>
     * <code>Key</code> - A map of primary key attribute values that uniquely identify
     * the item. Each entry in this map consists of an attribute name and an attribute
     * value.</p> </li> </ul> </li> <li> <p> <code>PutRequest</code> - Perform a
     * <code>PutItem</code> operation on the specified item. The item to be put is
     * identified by an <code>Item</code> subelement:</p> <ul> <li> <p>
     * <code>Item</code> - A map of attributes and their values. Each entry in this map
     * consists of an attribute name and an attribute value. Attribute values must not
     * be null; string and binary type attributes must have lengths greater than zero;
     * and set type attributes must not be empty. Requests that contain empty values
     * will be rejected with a <code>ValidationException</code> exception.</p> <p>If
     * you specify any attributes that are part of an index key, then the data types
     * for those attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul> <p>If there are no unprocessed items
     * remaining, the response contains an empty <code>UnprocessedItems</code> map.</p>
     */
    inline void SetUnprocessedItems(Aws::Map<Aws::String, Aws::Vector<WriteRequest>>&& value) { m_unprocessedItems = std::move(value); }

    /**
     * <p>A map of tables and requests against those tables that were not processed.
     * The <code>UnprocessedItems</code> value is in the same form as
     * <code>RequestItems</code>, so you can provide this value directly to a
     * subsequent <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each
     * <code>UnprocessedItems</code> entry consists of a table name and, for that
     * table, a list of operations to perform (<code>DeleteRequest</code> or
     * <code>PutRequest</code>).</p> <ul> <li> <p> <code>DeleteRequest</code> - Perform
     * a <code>DeleteItem</code> operation on the specified item. The item to be
     * deleted is identified by a <code>Key</code> subelement:</p> <ul> <li> <p>
     * <code>Key</code> - A map of primary key attribute values that uniquely identify
     * the item. Each entry in this map consists of an attribute name and an attribute
     * value.</p> </li> </ul> </li> <li> <p> <code>PutRequest</code> - Perform a
     * <code>PutItem</code> operation on the specified item. The item to be put is
     * identified by an <code>Item</code> subelement:</p> <ul> <li> <p>
     * <code>Item</code> - A map of attributes and their values. Each entry in this map
     * consists of an attribute name and an attribute value. Attribute values must not
     * be null; string and binary type attributes must have lengths greater than zero;
     * and set type attributes must not be empty. Requests that contain empty values
     * will be rejected with a <code>ValidationException</code> exception.</p> <p>If
     * you specify any attributes that are part of an index key, then the data types
     * for those attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul> <p>If there are no unprocessed items
     * remaining, the response contains an empty <code>UnprocessedItems</code> map.</p>
     */
    inline BatchWriteItemResult& WithUnprocessedItems(const Aws::Map<Aws::String, Aws::Vector<WriteRequest>>& value) { SetUnprocessedItems(value); return *this;}

    /**
     * <p>A map of tables and requests against those tables that were not processed.
     * The <code>UnprocessedItems</code> value is in the same form as
     * <code>RequestItems</code>, so you can provide this value directly to a
     * subsequent <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each
     * <code>UnprocessedItems</code> entry consists of a table name and, for that
     * table, a list of operations to perform (<code>DeleteRequest</code> or
     * <code>PutRequest</code>).</p> <ul> <li> <p> <code>DeleteRequest</code> - Perform
     * a <code>DeleteItem</code> operation on the specified item. The item to be
     * deleted is identified by a <code>Key</code> subelement:</p> <ul> <li> <p>
     * <code>Key</code> - A map of primary key attribute values that uniquely identify
     * the item. Each entry in this map consists of an attribute name and an attribute
     * value.</p> </li> </ul> </li> <li> <p> <code>PutRequest</code> - Perform a
     * <code>PutItem</code> operation on the specified item. The item to be put is
     * identified by an <code>Item</code> subelement:</p> <ul> <li> <p>
     * <code>Item</code> - A map of attributes and their values. Each entry in this map
     * consists of an attribute name and an attribute value. Attribute values must not
     * be null; string and binary type attributes must have lengths greater than zero;
     * and set type attributes must not be empty. Requests that contain empty values
     * will be rejected with a <code>ValidationException</code> exception.</p> <p>If
     * you specify any attributes that are part of an index key, then the data types
     * for those attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul> <p>If there are no unprocessed items
     * remaining, the response contains an empty <code>UnprocessedItems</code> map.</p>
     */
    inline BatchWriteItemResult& WithUnprocessedItems(Aws::Map<Aws::String, Aws::Vector<WriteRequest>>&& value) { SetUnprocessedItems(std::move(value)); return *this;}

    /**
     * <p>A map of tables and requests against those tables that were not processed.
     * The <code>UnprocessedItems</code> value is in the same form as
     * <code>RequestItems</code>, so you can provide this value directly to a
     * subsequent <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each
     * <code>UnprocessedItems</code> entry consists of a table name and, for that
     * table, a list of operations to perform (<code>DeleteRequest</code> or
     * <code>PutRequest</code>).</p> <ul> <li> <p> <code>DeleteRequest</code> - Perform
     * a <code>DeleteItem</code> operation on the specified item. The item to be
     * deleted is identified by a <code>Key</code> subelement:</p> <ul> <li> <p>
     * <code>Key</code> - A map of primary key attribute values that uniquely identify
     * the item. Each entry in this map consists of an attribute name and an attribute
     * value.</p> </li> </ul> </li> <li> <p> <code>PutRequest</code> - Perform a
     * <code>PutItem</code> operation on the specified item. The item to be put is
     * identified by an <code>Item</code> subelement:</p> <ul> <li> <p>
     * <code>Item</code> - A map of attributes and their values. Each entry in this map
     * consists of an attribute name and an attribute value. Attribute values must not
     * be null; string and binary type attributes must have lengths greater than zero;
     * and set type attributes must not be empty. Requests that contain empty values
     * will be rejected with a <code>ValidationException</code> exception.</p> <p>If
     * you specify any attributes that are part of an index key, then the data types
     * for those attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul> <p>If there are no unprocessed items
     * remaining, the response contains an empty <code>UnprocessedItems</code> map.</p>
     */
    inline BatchWriteItemResult& AddUnprocessedItems(const Aws::String& key, const Aws::Vector<WriteRequest>& value) { m_unprocessedItems.emplace(key, value); return *this; }

    /**
     * <p>A map of tables and requests against those tables that were not processed.
     * The <code>UnprocessedItems</code> value is in the same form as
     * <code>RequestItems</code>, so you can provide this value directly to a
     * subsequent <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each
     * <code>UnprocessedItems</code> entry consists of a table name and, for that
     * table, a list of operations to perform (<code>DeleteRequest</code> or
     * <code>PutRequest</code>).</p> <ul> <li> <p> <code>DeleteRequest</code> - Perform
     * a <code>DeleteItem</code> operation on the specified item. The item to be
     * deleted is identified by a <code>Key</code> subelement:</p> <ul> <li> <p>
     * <code>Key</code> - A map of primary key attribute values that uniquely identify
     * the item. Each entry in this map consists of an attribute name and an attribute
     * value.</p> </li> </ul> </li> <li> <p> <code>PutRequest</code> - Perform a
     * <code>PutItem</code> operation on the specified item. The item to be put is
     * identified by an <code>Item</code> subelement:</p> <ul> <li> <p>
     * <code>Item</code> - A map of attributes and their values. Each entry in this map
     * consists of an attribute name and an attribute value. Attribute values must not
     * be null; string and binary type attributes must have lengths greater than zero;
     * and set type attributes must not be empty. Requests that contain empty values
     * will be rejected with a <code>ValidationException</code> exception.</p> <p>If
     * you specify any attributes that are part of an index key, then the data types
     * for those attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul> <p>If there are no unprocessed items
     * remaining, the response contains an empty <code>UnprocessedItems</code> map.</p>
     */
    inline BatchWriteItemResult& AddUnprocessedItems(Aws::String&& key, const Aws::Vector<WriteRequest>& value) { m_unprocessedItems.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of tables and requests against those tables that were not processed.
     * The <code>UnprocessedItems</code> value is in the same form as
     * <code>RequestItems</code>, so you can provide this value directly to a
     * subsequent <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each
     * <code>UnprocessedItems</code> entry consists of a table name and, for that
     * table, a list of operations to perform (<code>DeleteRequest</code> or
     * <code>PutRequest</code>).</p> <ul> <li> <p> <code>DeleteRequest</code> - Perform
     * a <code>DeleteItem</code> operation on the specified item. The item to be
     * deleted is identified by a <code>Key</code> subelement:</p> <ul> <li> <p>
     * <code>Key</code> - A map of primary key attribute values that uniquely identify
     * the item. Each entry in this map consists of an attribute name and an attribute
     * value.</p> </li> </ul> </li> <li> <p> <code>PutRequest</code> - Perform a
     * <code>PutItem</code> operation on the specified item. The item to be put is
     * identified by an <code>Item</code> subelement:</p> <ul> <li> <p>
     * <code>Item</code> - A map of attributes and their values. Each entry in this map
     * consists of an attribute name and an attribute value. Attribute values must not
     * be null; string and binary type attributes must have lengths greater than zero;
     * and set type attributes must not be empty. Requests that contain empty values
     * will be rejected with a <code>ValidationException</code> exception.</p> <p>If
     * you specify any attributes that are part of an index key, then the data types
     * for those attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul> <p>If there are no unprocessed items
     * remaining, the response contains an empty <code>UnprocessedItems</code> map.</p>
     */
    inline BatchWriteItemResult& AddUnprocessedItems(const Aws::String& key, Aws::Vector<WriteRequest>&& value) { m_unprocessedItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of tables and requests against those tables that were not processed.
     * The <code>UnprocessedItems</code> value is in the same form as
     * <code>RequestItems</code>, so you can provide this value directly to a
     * subsequent <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each
     * <code>UnprocessedItems</code> entry consists of a table name and, for that
     * table, a list of operations to perform (<code>DeleteRequest</code> or
     * <code>PutRequest</code>).</p> <ul> <li> <p> <code>DeleteRequest</code> - Perform
     * a <code>DeleteItem</code> operation on the specified item. The item to be
     * deleted is identified by a <code>Key</code> subelement:</p> <ul> <li> <p>
     * <code>Key</code> - A map of primary key attribute values that uniquely identify
     * the item. Each entry in this map consists of an attribute name and an attribute
     * value.</p> </li> </ul> </li> <li> <p> <code>PutRequest</code> - Perform a
     * <code>PutItem</code> operation on the specified item. The item to be put is
     * identified by an <code>Item</code> subelement:</p> <ul> <li> <p>
     * <code>Item</code> - A map of attributes and their values. Each entry in this map
     * consists of an attribute name and an attribute value. Attribute values must not
     * be null; string and binary type attributes must have lengths greater than zero;
     * and set type attributes must not be empty. Requests that contain empty values
     * will be rejected with a <code>ValidationException</code> exception.</p> <p>If
     * you specify any attributes that are part of an index key, then the data types
     * for those attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul> <p>If there are no unprocessed items
     * remaining, the response contains an empty <code>UnprocessedItems</code> map.</p>
     */
    inline BatchWriteItemResult& AddUnprocessedItems(Aws::String&& key, Aws::Vector<WriteRequest>&& value) { m_unprocessedItems.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of tables and requests against those tables that were not processed.
     * The <code>UnprocessedItems</code> value is in the same form as
     * <code>RequestItems</code>, so you can provide this value directly to a
     * subsequent <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each
     * <code>UnprocessedItems</code> entry consists of a table name and, for that
     * table, a list of operations to perform (<code>DeleteRequest</code> or
     * <code>PutRequest</code>).</p> <ul> <li> <p> <code>DeleteRequest</code> - Perform
     * a <code>DeleteItem</code> operation on the specified item. The item to be
     * deleted is identified by a <code>Key</code> subelement:</p> <ul> <li> <p>
     * <code>Key</code> - A map of primary key attribute values that uniquely identify
     * the item. Each entry in this map consists of an attribute name and an attribute
     * value.</p> </li> </ul> </li> <li> <p> <code>PutRequest</code> - Perform a
     * <code>PutItem</code> operation on the specified item. The item to be put is
     * identified by an <code>Item</code> subelement:</p> <ul> <li> <p>
     * <code>Item</code> - A map of attributes and their values. Each entry in this map
     * consists of an attribute name and an attribute value. Attribute values must not
     * be null; string and binary type attributes must have lengths greater than zero;
     * and set type attributes must not be empty. Requests that contain empty values
     * will be rejected with a <code>ValidationException</code> exception.</p> <p>If
     * you specify any attributes that are part of an index key, then the data types
     * for those attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul> <p>If there are no unprocessed items
     * remaining, the response contains an empty <code>UnprocessedItems</code> map.</p>
     */
    inline BatchWriteItemResult& AddUnprocessedItems(const char* key, Aws::Vector<WriteRequest>&& value) { m_unprocessedItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of tables and requests against those tables that were not processed.
     * The <code>UnprocessedItems</code> value is in the same form as
     * <code>RequestItems</code>, so you can provide this value directly to a
     * subsequent <code>BatchGetItem</code> operation. For more information, see
     * <code>RequestItems</code> in the Request Parameters section.</p> <p>Each
     * <code>UnprocessedItems</code> entry consists of a table name and, for that
     * table, a list of operations to perform (<code>DeleteRequest</code> or
     * <code>PutRequest</code>).</p> <ul> <li> <p> <code>DeleteRequest</code> - Perform
     * a <code>DeleteItem</code> operation on the specified item. The item to be
     * deleted is identified by a <code>Key</code> subelement:</p> <ul> <li> <p>
     * <code>Key</code> - A map of primary key attribute values that uniquely identify
     * the item. Each entry in this map consists of an attribute name and an attribute
     * value.</p> </li> </ul> </li> <li> <p> <code>PutRequest</code> - Perform a
     * <code>PutItem</code> operation on the specified item. The item to be put is
     * identified by an <code>Item</code> subelement:</p> <ul> <li> <p>
     * <code>Item</code> - A map of attributes and their values. Each entry in this map
     * consists of an attribute name and an attribute value. Attribute values must not
     * be null; string and binary type attributes must have lengths greater than zero;
     * and set type attributes must not be empty. Requests that contain empty values
     * will be rejected with a <code>ValidationException</code> exception.</p> <p>If
     * you specify any attributes that are part of an index key, then the data types
     * for those attributes must match those of the schema in the table's attribute
     * definition.</p> </li> </ul> </li> </ul> <p>If there are no unprocessed items
     * remaining, the response contains an empty <code>UnprocessedItems</code> map.</p>
     */
    inline BatchWriteItemResult& AddUnprocessedItems(const char* key, const Aws::Vector<WriteRequest>& value) { m_unprocessedItems.emplace(key, value); return *this; }


    /**
     * <p>A list of tables that were processed by <code>BatchWriteItem</code> and, for
     * each table, information about any item collections that were affected by
     * individual <code>DeleteItem</code> or <code>PutItem</code> operations.</p>
     * <p>Each entry consists of the following subelements:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item.</p> </li> <li> <p>
     * <code>SizeEstimateRangeGB</code> - An estimate of item collection size,
     * expressed in GB. This is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on the table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>& GetItemCollectionMetrics() const{ return m_itemCollectionMetrics; }

    /**
     * <p>A list of tables that were processed by <code>BatchWriteItem</code> and, for
     * each table, information about any item collections that were affected by
     * individual <code>DeleteItem</code> or <code>PutItem</code> operations.</p>
     * <p>Each entry consists of the following subelements:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item.</p> </li> <li> <p>
     * <code>SizeEstimateRangeGB</code> - An estimate of item collection size,
     * expressed in GB. This is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on the table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline void SetItemCollectionMetrics(const Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>& value) { m_itemCollectionMetrics = value; }

    /**
     * <p>A list of tables that were processed by <code>BatchWriteItem</code> and, for
     * each table, information about any item collections that were affected by
     * individual <code>DeleteItem</code> or <code>PutItem</code> operations.</p>
     * <p>Each entry consists of the following subelements:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item.</p> </li> <li> <p>
     * <code>SizeEstimateRangeGB</code> - An estimate of item collection size,
     * expressed in GB. This is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on the table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline void SetItemCollectionMetrics(Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>&& value) { m_itemCollectionMetrics = std::move(value); }

    /**
     * <p>A list of tables that were processed by <code>BatchWriteItem</code> and, for
     * each table, information about any item collections that were affected by
     * individual <code>DeleteItem</code> or <code>PutItem</code> operations.</p>
     * <p>Each entry consists of the following subelements:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item.</p> </li> <li> <p>
     * <code>SizeEstimateRangeGB</code> - An estimate of item collection size,
     * expressed in GB. This is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on the table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline BatchWriteItemResult& WithItemCollectionMetrics(const Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>& value) { SetItemCollectionMetrics(value); return *this;}

    /**
     * <p>A list of tables that were processed by <code>BatchWriteItem</code> and, for
     * each table, information about any item collections that were affected by
     * individual <code>DeleteItem</code> or <code>PutItem</code> operations.</p>
     * <p>Each entry consists of the following subelements:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item.</p> </li> <li> <p>
     * <code>SizeEstimateRangeGB</code> - An estimate of item collection size,
     * expressed in GB. This is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on the table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline BatchWriteItemResult& WithItemCollectionMetrics(Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>>&& value) { SetItemCollectionMetrics(std::move(value)); return *this;}

    /**
     * <p>A list of tables that were processed by <code>BatchWriteItem</code> and, for
     * each table, information about any item collections that were affected by
     * individual <code>DeleteItem</code> or <code>PutItem</code> operations.</p>
     * <p>Each entry consists of the following subelements:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item.</p> </li> <li> <p>
     * <code>SizeEstimateRangeGB</code> - An estimate of item collection size,
     * expressed in GB. This is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on the table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline BatchWriteItemResult& AddItemCollectionMetrics(const Aws::String& key, const Aws::Vector<ItemCollectionMetrics>& value) { m_itemCollectionMetrics.emplace(key, value); return *this; }

    /**
     * <p>A list of tables that were processed by <code>BatchWriteItem</code> and, for
     * each table, information about any item collections that were affected by
     * individual <code>DeleteItem</code> or <code>PutItem</code> operations.</p>
     * <p>Each entry consists of the following subelements:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item.</p> </li> <li> <p>
     * <code>SizeEstimateRangeGB</code> - An estimate of item collection size,
     * expressed in GB. This is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on the table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline BatchWriteItemResult& AddItemCollectionMetrics(Aws::String&& key, const Aws::Vector<ItemCollectionMetrics>& value) { m_itemCollectionMetrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tables that were processed by <code>BatchWriteItem</code> and, for
     * each table, information about any item collections that were affected by
     * individual <code>DeleteItem</code> or <code>PutItem</code> operations.</p>
     * <p>Each entry consists of the following subelements:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item.</p> </li> <li> <p>
     * <code>SizeEstimateRangeGB</code> - An estimate of item collection size,
     * expressed in GB. This is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on the table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline BatchWriteItemResult& AddItemCollectionMetrics(const Aws::String& key, Aws::Vector<ItemCollectionMetrics>&& value) { m_itemCollectionMetrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tables that were processed by <code>BatchWriteItem</code> and, for
     * each table, information about any item collections that were affected by
     * individual <code>DeleteItem</code> or <code>PutItem</code> operations.</p>
     * <p>Each entry consists of the following subelements:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item.</p> </li> <li> <p>
     * <code>SizeEstimateRangeGB</code> - An estimate of item collection size,
     * expressed in GB. This is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on the table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline BatchWriteItemResult& AddItemCollectionMetrics(Aws::String&& key, Aws::Vector<ItemCollectionMetrics>&& value) { m_itemCollectionMetrics.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tables that were processed by <code>BatchWriteItem</code> and, for
     * each table, information about any item collections that were affected by
     * individual <code>DeleteItem</code> or <code>PutItem</code> operations.</p>
     * <p>Each entry consists of the following subelements:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item.</p> </li> <li> <p>
     * <code>SizeEstimateRangeGB</code> - An estimate of item collection size,
     * expressed in GB. This is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on the table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline BatchWriteItemResult& AddItemCollectionMetrics(const char* key, Aws::Vector<ItemCollectionMetrics>&& value) { m_itemCollectionMetrics.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tables that were processed by <code>BatchWriteItem</code> and, for
     * each table, information about any item collections that were affected by
     * individual <code>DeleteItem</code> or <code>PutItem</code> operations.</p>
     * <p>Each entry consists of the following subelements:</p> <ul> <li> <p>
     * <code>ItemCollectionKey</code> - The partition key value of the item collection.
     * This is the same as the partition key value of the item.</p> </li> <li> <p>
     * <code>SizeEstimateRangeGB</code> - An estimate of item collection size,
     * expressed in GB. This is a two-element array containing a lower bound and an
     * upper bound for the estimate. The estimate includes the size of all the items in
     * the table, plus the size of all attributes projected into all of the local
     * secondary indexes on the table. Use this estimate to measure whether a local
     * secondary index is approaching its size limit.</p> <p>The estimate is subject to
     * change over time; therefore, do not rely on the precision or accuracy of the
     * estimate.</p> </li> </ul>
     */
    inline BatchWriteItemResult& AddItemCollectionMetrics(const char* key, const Aws::Vector<ItemCollectionMetrics>& value) { m_itemCollectionMetrics.emplace(key, value); return *this; }


    /**
     * <p>The capacity units consumed by the entire <code>BatchWriteItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline const Aws::Vector<ConsumedCapacity>& GetConsumedCapacity() const{ return m_consumedCapacity; }

    /**
     * <p>The capacity units consumed by the entire <code>BatchWriteItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline void SetConsumedCapacity(const Aws::Vector<ConsumedCapacity>& value) { m_consumedCapacity = value; }

    /**
     * <p>The capacity units consumed by the entire <code>BatchWriteItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline void SetConsumedCapacity(Aws::Vector<ConsumedCapacity>&& value) { m_consumedCapacity = std::move(value); }

    /**
     * <p>The capacity units consumed by the entire <code>BatchWriteItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline BatchWriteItemResult& WithConsumedCapacity(const Aws::Vector<ConsumedCapacity>& value) { SetConsumedCapacity(value); return *this;}

    /**
     * <p>The capacity units consumed by the entire <code>BatchWriteItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline BatchWriteItemResult& WithConsumedCapacity(Aws::Vector<ConsumedCapacity>&& value) { SetConsumedCapacity(std::move(value)); return *this;}

    /**
     * <p>The capacity units consumed by the entire <code>BatchWriteItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline BatchWriteItemResult& AddConsumedCapacity(const ConsumedCapacity& value) { m_consumedCapacity.push_back(value); return *this; }

    /**
     * <p>The capacity units consumed by the entire <code>BatchWriteItem</code>
     * operation.</p> <p>Each element consists of:</p> <ul> <li> <p>
     * <code>TableName</code> - The table that consumed the provisioned throughput.</p>
     * </li> <li> <p> <code>CapacityUnits</code> - The total number of capacity units
     * consumed.</p> </li> </ul>
     */
    inline BatchWriteItemResult& AddConsumedCapacity(ConsumedCapacity&& value) { m_consumedCapacity.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, Aws::Vector<WriteRequest>> m_unprocessedItems;

    Aws::Map<Aws::String, Aws::Vector<ItemCollectionMetrics>> m_itemCollectionMetrics;

    Aws::Vector<ConsumedCapacity> m_consumedCapacity;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
