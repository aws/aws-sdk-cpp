/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/Select.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ConditionalOperator.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/Condition.h>
#include <aws/dynamodb/model/AttributeValue.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <i>Query</i> operation.</p>
   */
  class AWS_DYNAMODB_API QueryRequest : public DynamoDBRequest
  {
  public:
    QueryRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the table containing the requested items.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table containing the requested items.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table containing the requested items.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table containing the requested items.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table containing the requested items.</p>
     */
    inline QueryRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table containing the requested items.</p>
     */
    inline QueryRequest& WithTableName(Aws::String&& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table containing the requested items.</p>
     */
    inline QueryRequest& WithTableName(const char* value) { SetTableName(value); return *this;}

    /**
     * <p>The name of an index to query. This index can be any local secondary index or
     * global secondary index on the table. Note that if you use the <i>IndexName</i>
     * parameter, you must also provide <i>TableName.</i> </p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of an index to query. This index can be any local secondary index or
     * global secondary index on the table. Note that if you use the <i>IndexName</i>
     * parameter, you must also provide <i>TableName.</i> </p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of an index to query. This index can be any local secondary index or
     * global secondary index on the table. Note that if you use the <i>IndexName</i>
     * parameter, you must also provide <i>TableName.</i> </p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of an index to query. This index can be any local secondary index or
     * global secondary index on the table. Note that if you use the <i>IndexName</i>
     * parameter, you must also provide <i>TableName.</i> </p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of an index to query. This index can be any local secondary index or
     * global secondary index on the table. Note that if you use the <i>IndexName</i>
     * parameter, you must also provide <i>TableName.</i> </p>
     */
    inline QueryRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of an index to query. This index can be any local secondary index or
     * global secondary index on the table. Note that if you use the <i>IndexName</i>
     * parameter, you must also provide <i>TableName.</i> </p>
     */
    inline QueryRequest& WithIndexName(Aws::String&& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of an index to query. This index can be any local secondary index or
     * global secondary index on the table. Note that if you use the <i>IndexName</i>
     * parameter, you must also provide <i>TableName.</i> </p>
     */
    inline QueryRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}

    /**
     * <p>The attributes to be returned in the result. You can retrieve all item
     * attributes, specific item attributes, the count of matching items, or in the
     * case of an index, some or all of the attributes projected into the index.</p>
     * <ul> <li> <p> <code>ALL_ATTRIBUTES</code> - Returns all of the item attributes
     * from the specified table or index. If you query a local secondary index, then
     * for each matching item in the index DynamoDB will fetch the entire item from the
     * parent table. If the index is configured to project all item attributes, then
     * all of the data can be obtained from the local secondary index, and no fetching
     * is required.</p> </li> <li> <p> <code>ALL_PROJECTED_ATTRIBUTES</code> - Allowed
     * only when querying an index. Retrieves all attributes that have been projected
     * into the index. If the index is configured to project all attributes, this
     * return value is equivalent to specifying <code>ALL_ATTRIBUTES</code>.</p> </li>
     * <li> <p> <code>COUNT</code> - Returns the number of matching items, rather than
     * the matching items themselves.</p> </li> <li> <p>
     * <code>SPECIFIC_ATTRIBUTES</code> - Returns only the attributes listed in
     * <i>AttributesToGet</i>. This return value is equivalent to specifying
     * <i>AttributesToGet</i> without specifying any value for <i>Select</i>.</p> <p>If
     * you query a local secondary index and request only attributes that are projected
     * into that index, the operation will read only the index and not the table. If
     * any of the requested attributes are not projected into the local secondary
     * index, DynamoDB will fetch each of these attributes from the parent table. This
     * extra fetching incurs additional throughput cost and latency.</p> <p>If you
     * query a global secondary index, you can only request attributes that are
     * projected into the index. Global secondary index queries cannot fetch attributes
     * from the parent table.</p> </li> </ul> <p>If neither <i>Select</i> nor
     * <i>AttributesToGet</i> are specified, DynamoDB defaults to
     * <code>ALL_ATTRIBUTES</code> when accessing a table, and
     * <code>ALL_PROJECTED_ATTRIBUTES</code> when accessing an index. You cannot use
     * both <i>Select</i> and <i>AttributesToGet</i> together in a single request,
     * unless the value for <i>Select</i> is <code>SPECIFIC_ATTRIBUTES</code>. (This
     * usage is equivalent to specifying <i>AttributesToGet</i> without any value for
     * <i>Select</i>.)</p> <note> <p>If you use the <i>ProjectionExpression</i>
     * parameter, then the value for <i>Select</i> can only be
     * <code>SPECIFIC_ATTRIBUTES</code>. Any other value for <i>Select</i> will return
     * an error.</p> </note>
     */
    inline const Select& GetSelect() const{ return m_select; }

    /**
     * <p>The attributes to be returned in the result. You can retrieve all item
     * attributes, specific item attributes, the count of matching items, or in the
     * case of an index, some or all of the attributes projected into the index.</p>
     * <ul> <li> <p> <code>ALL_ATTRIBUTES</code> - Returns all of the item attributes
     * from the specified table or index. If you query a local secondary index, then
     * for each matching item in the index DynamoDB will fetch the entire item from the
     * parent table. If the index is configured to project all item attributes, then
     * all of the data can be obtained from the local secondary index, and no fetching
     * is required.</p> </li> <li> <p> <code>ALL_PROJECTED_ATTRIBUTES</code> - Allowed
     * only when querying an index. Retrieves all attributes that have been projected
     * into the index. If the index is configured to project all attributes, this
     * return value is equivalent to specifying <code>ALL_ATTRIBUTES</code>.</p> </li>
     * <li> <p> <code>COUNT</code> - Returns the number of matching items, rather than
     * the matching items themselves.</p> </li> <li> <p>
     * <code>SPECIFIC_ATTRIBUTES</code> - Returns only the attributes listed in
     * <i>AttributesToGet</i>. This return value is equivalent to specifying
     * <i>AttributesToGet</i> without specifying any value for <i>Select</i>.</p> <p>If
     * you query a local secondary index and request only attributes that are projected
     * into that index, the operation will read only the index and not the table. If
     * any of the requested attributes are not projected into the local secondary
     * index, DynamoDB will fetch each of these attributes from the parent table. This
     * extra fetching incurs additional throughput cost and latency.</p> <p>If you
     * query a global secondary index, you can only request attributes that are
     * projected into the index. Global secondary index queries cannot fetch attributes
     * from the parent table.</p> </li> </ul> <p>If neither <i>Select</i> nor
     * <i>AttributesToGet</i> are specified, DynamoDB defaults to
     * <code>ALL_ATTRIBUTES</code> when accessing a table, and
     * <code>ALL_PROJECTED_ATTRIBUTES</code> when accessing an index. You cannot use
     * both <i>Select</i> and <i>AttributesToGet</i> together in a single request,
     * unless the value for <i>Select</i> is <code>SPECIFIC_ATTRIBUTES</code>. (This
     * usage is equivalent to specifying <i>AttributesToGet</i> without any value for
     * <i>Select</i>.)</p> <note> <p>If you use the <i>ProjectionExpression</i>
     * parameter, then the value for <i>Select</i> can only be
     * <code>SPECIFIC_ATTRIBUTES</code>. Any other value for <i>Select</i> will return
     * an error.</p> </note>
     */
    inline void SetSelect(const Select& value) { m_selectHasBeenSet = true; m_select = value; }

    /**
     * <p>The attributes to be returned in the result. You can retrieve all item
     * attributes, specific item attributes, the count of matching items, or in the
     * case of an index, some or all of the attributes projected into the index.</p>
     * <ul> <li> <p> <code>ALL_ATTRIBUTES</code> - Returns all of the item attributes
     * from the specified table or index. If you query a local secondary index, then
     * for each matching item in the index DynamoDB will fetch the entire item from the
     * parent table. If the index is configured to project all item attributes, then
     * all of the data can be obtained from the local secondary index, and no fetching
     * is required.</p> </li> <li> <p> <code>ALL_PROJECTED_ATTRIBUTES</code> - Allowed
     * only when querying an index. Retrieves all attributes that have been projected
     * into the index. If the index is configured to project all attributes, this
     * return value is equivalent to specifying <code>ALL_ATTRIBUTES</code>.</p> </li>
     * <li> <p> <code>COUNT</code> - Returns the number of matching items, rather than
     * the matching items themselves.</p> </li> <li> <p>
     * <code>SPECIFIC_ATTRIBUTES</code> - Returns only the attributes listed in
     * <i>AttributesToGet</i>. This return value is equivalent to specifying
     * <i>AttributesToGet</i> without specifying any value for <i>Select</i>.</p> <p>If
     * you query a local secondary index and request only attributes that are projected
     * into that index, the operation will read only the index and not the table. If
     * any of the requested attributes are not projected into the local secondary
     * index, DynamoDB will fetch each of these attributes from the parent table. This
     * extra fetching incurs additional throughput cost and latency.</p> <p>If you
     * query a global secondary index, you can only request attributes that are
     * projected into the index. Global secondary index queries cannot fetch attributes
     * from the parent table.</p> </li> </ul> <p>If neither <i>Select</i> nor
     * <i>AttributesToGet</i> are specified, DynamoDB defaults to
     * <code>ALL_ATTRIBUTES</code> when accessing a table, and
     * <code>ALL_PROJECTED_ATTRIBUTES</code> when accessing an index. You cannot use
     * both <i>Select</i> and <i>AttributesToGet</i> together in a single request,
     * unless the value for <i>Select</i> is <code>SPECIFIC_ATTRIBUTES</code>. (This
     * usage is equivalent to specifying <i>AttributesToGet</i> without any value for
     * <i>Select</i>.)</p> <note> <p>If you use the <i>ProjectionExpression</i>
     * parameter, then the value for <i>Select</i> can only be
     * <code>SPECIFIC_ATTRIBUTES</code>. Any other value for <i>Select</i> will return
     * an error.</p> </note>
     */
    inline void SetSelect(Select&& value) { m_selectHasBeenSet = true; m_select = value; }

    /**
     * <p>The attributes to be returned in the result. You can retrieve all item
     * attributes, specific item attributes, the count of matching items, or in the
     * case of an index, some or all of the attributes projected into the index.</p>
     * <ul> <li> <p> <code>ALL_ATTRIBUTES</code> - Returns all of the item attributes
     * from the specified table or index. If you query a local secondary index, then
     * for each matching item in the index DynamoDB will fetch the entire item from the
     * parent table. If the index is configured to project all item attributes, then
     * all of the data can be obtained from the local secondary index, and no fetching
     * is required.</p> </li> <li> <p> <code>ALL_PROJECTED_ATTRIBUTES</code> - Allowed
     * only when querying an index. Retrieves all attributes that have been projected
     * into the index. If the index is configured to project all attributes, this
     * return value is equivalent to specifying <code>ALL_ATTRIBUTES</code>.</p> </li>
     * <li> <p> <code>COUNT</code> - Returns the number of matching items, rather than
     * the matching items themselves.</p> </li> <li> <p>
     * <code>SPECIFIC_ATTRIBUTES</code> - Returns only the attributes listed in
     * <i>AttributesToGet</i>. This return value is equivalent to specifying
     * <i>AttributesToGet</i> without specifying any value for <i>Select</i>.</p> <p>If
     * you query a local secondary index and request only attributes that are projected
     * into that index, the operation will read only the index and not the table. If
     * any of the requested attributes are not projected into the local secondary
     * index, DynamoDB will fetch each of these attributes from the parent table. This
     * extra fetching incurs additional throughput cost and latency.</p> <p>If you
     * query a global secondary index, you can only request attributes that are
     * projected into the index. Global secondary index queries cannot fetch attributes
     * from the parent table.</p> </li> </ul> <p>If neither <i>Select</i> nor
     * <i>AttributesToGet</i> are specified, DynamoDB defaults to
     * <code>ALL_ATTRIBUTES</code> when accessing a table, and
     * <code>ALL_PROJECTED_ATTRIBUTES</code> when accessing an index. You cannot use
     * both <i>Select</i> and <i>AttributesToGet</i> together in a single request,
     * unless the value for <i>Select</i> is <code>SPECIFIC_ATTRIBUTES</code>. (This
     * usage is equivalent to specifying <i>AttributesToGet</i> without any value for
     * <i>Select</i>.)</p> <note> <p>If you use the <i>ProjectionExpression</i>
     * parameter, then the value for <i>Select</i> can only be
     * <code>SPECIFIC_ATTRIBUTES</code>. Any other value for <i>Select</i> will return
     * an error.</p> </note>
     */
    inline QueryRequest& WithSelect(const Select& value) { SetSelect(value); return *this;}

    /**
     * <p>The attributes to be returned in the result. You can retrieve all item
     * attributes, specific item attributes, the count of matching items, or in the
     * case of an index, some or all of the attributes projected into the index.</p>
     * <ul> <li> <p> <code>ALL_ATTRIBUTES</code> - Returns all of the item attributes
     * from the specified table or index. If you query a local secondary index, then
     * for each matching item in the index DynamoDB will fetch the entire item from the
     * parent table. If the index is configured to project all item attributes, then
     * all of the data can be obtained from the local secondary index, and no fetching
     * is required.</p> </li> <li> <p> <code>ALL_PROJECTED_ATTRIBUTES</code> - Allowed
     * only when querying an index. Retrieves all attributes that have been projected
     * into the index. If the index is configured to project all attributes, this
     * return value is equivalent to specifying <code>ALL_ATTRIBUTES</code>.</p> </li>
     * <li> <p> <code>COUNT</code> - Returns the number of matching items, rather than
     * the matching items themselves.</p> </li> <li> <p>
     * <code>SPECIFIC_ATTRIBUTES</code> - Returns only the attributes listed in
     * <i>AttributesToGet</i>. This return value is equivalent to specifying
     * <i>AttributesToGet</i> without specifying any value for <i>Select</i>.</p> <p>If
     * you query a local secondary index and request only attributes that are projected
     * into that index, the operation will read only the index and not the table. If
     * any of the requested attributes are not projected into the local secondary
     * index, DynamoDB will fetch each of these attributes from the parent table. This
     * extra fetching incurs additional throughput cost and latency.</p> <p>If you
     * query a global secondary index, you can only request attributes that are
     * projected into the index. Global secondary index queries cannot fetch attributes
     * from the parent table.</p> </li> </ul> <p>If neither <i>Select</i> nor
     * <i>AttributesToGet</i> are specified, DynamoDB defaults to
     * <code>ALL_ATTRIBUTES</code> when accessing a table, and
     * <code>ALL_PROJECTED_ATTRIBUTES</code> when accessing an index. You cannot use
     * both <i>Select</i> and <i>AttributesToGet</i> together in a single request,
     * unless the value for <i>Select</i> is <code>SPECIFIC_ATTRIBUTES</code>. (This
     * usage is equivalent to specifying <i>AttributesToGet</i> without any value for
     * <i>Select</i>.)</p> <note> <p>If you use the <i>ProjectionExpression</i>
     * parameter, then the value for <i>Select</i> can only be
     * <code>SPECIFIC_ATTRIBUTES</code>. Any other value for <i>Select</i> will return
     * an error.</p> </note>
     */
    inline QueryRequest& WithSelect(Select&& value) { SetSelect(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ProjectionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> <p>This
     * parameter allows you to retrieve attributes of type List or Map; however, it
     * cannot retrieve individual elements within a List or a Map.</p> </important>
     * <p>The names of one or more attributes to retrieve. If no attribute names are
     * provided, then all attributes will be returned. If any of the requested
     * attributes are not found, they will not appear in the result.</p> <p>Note that
     * <i>AttributesToGet</i> has no effect on provisioned throughput consumption.
     * DynamoDB determines capacity units consumed based on item size, not on the
     * amount of data that is returned to an application.</p> <p>You cannot use both
     * <i>AttributesToGet</i> and <i>Select</i> together in a <i>Query</i> request,
     * <i>unless</i> the value for <i>Select</i> is <code>SPECIFIC_ATTRIBUTES</code>.
     * (This usage is equivalent to specifying <i>AttributesToGet</i> without any value
     * for <i>Select</i>.)</p> <p>If you query a local secondary index and request only
     * attributes that are projected into that index, the operation will read only the
     * index and not the table. If any of the requested attributes are not projected
     * into the local secondary index, DynamoDB will fetch each of these attributes
     * from the parent table. This extra fetching incurs additional throughput cost and
     * latency.</p> <p>If you query a global secondary index, you can only request
     * attributes that are projected into the index. Global secondary index queries
     * cannot fetch attributes from the parent table.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributesToGet() const{ return m_attributesToGet; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ProjectionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> <p>This
     * parameter allows you to retrieve attributes of type List or Map; however, it
     * cannot retrieve individual elements within a List or a Map.</p> </important>
     * <p>The names of one or more attributes to retrieve. If no attribute names are
     * provided, then all attributes will be returned. If any of the requested
     * attributes are not found, they will not appear in the result.</p> <p>Note that
     * <i>AttributesToGet</i> has no effect on provisioned throughput consumption.
     * DynamoDB determines capacity units consumed based on item size, not on the
     * amount of data that is returned to an application.</p> <p>You cannot use both
     * <i>AttributesToGet</i> and <i>Select</i> together in a <i>Query</i> request,
     * <i>unless</i> the value for <i>Select</i> is <code>SPECIFIC_ATTRIBUTES</code>.
     * (This usage is equivalent to specifying <i>AttributesToGet</i> without any value
     * for <i>Select</i>.)</p> <p>If you query a local secondary index and request only
     * attributes that are projected into that index, the operation will read only the
     * index and not the table. If any of the requested attributes are not projected
     * into the local secondary index, DynamoDB will fetch each of these attributes
     * from the parent table. This extra fetching incurs additional throughput cost and
     * latency.</p> <p>If you query a global secondary index, you can only request
     * attributes that are projected into the index. Global secondary index queries
     * cannot fetch attributes from the parent table.</p>
     */
    inline void SetAttributesToGet(const Aws::Vector<Aws::String>& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = value; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ProjectionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> <p>This
     * parameter allows you to retrieve attributes of type List or Map; however, it
     * cannot retrieve individual elements within a List or a Map.</p> </important>
     * <p>The names of one or more attributes to retrieve. If no attribute names are
     * provided, then all attributes will be returned. If any of the requested
     * attributes are not found, they will not appear in the result.</p> <p>Note that
     * <i>AttributesToGet</i> has no effect on provisioned throughput consumption.
     * DynamoDB determines capacity units consumed based on item size, not on the
     * amount of data that is returned to an application.</p> <p>You cannot use both
     * <i>AttributesToGet</i> and <i>Select</i> together in a <i>Query</i> request,
     * <i>unless</i> the value for <i>Select</i> is <code>SPECIFIC_ATTRIBUTES</code>.
     * (This usage is equivalent to specifying <i>AttributesToGet</i> without any value
     * for <i>Select</i>.)</p> <p>If you query a local secondary index and request only
     * attributes that are projected into that index, the operation will read only the
     * index and not the table. If any of the requested attributes are not projected
     * into the local secondary index, DynamoDB will fetch each of these attributes
     * from the parent table. This extra fetching incurs additional throughput cost and
     * latency.</p> <p>If you query a global secondary index, you can only request
     * attributes that are projected into the index. Global secondary index queries
     * cannot fetch attributes from the parent table.</p>
     */
    inline void SetAttributesToGet(Aws::Vector<Aws::String>&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = value; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ProjectionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> <p>This
     * parameter allows you to retrieve attributes of type List or Map; however, it
     * cannot retrieve individual elements within a List or a Map.</p> </important>
     * <p>The names of one or more attributes to retrieve. If no attribute names are
     * provided, then all attributes will be returned. If any of the requested
     * attributes are not found, they will not appear in the result.</p> <p>Note that
     * <i>AttributesToGet</i> has no effect on provisioned throughput consumption.
     * DynamoDB determines capacity units consumed based on item size, not on the
     * amount of data that is returned to an application.</p> <p>You cannot use both
     * <i>AttributesToGet</i> and <i>Select</i> together in a <i>Query</i> request,
     * <i>unless</i> the value for <i>Select</i> is <code>SPECIFIC_ATTRIBUTES</code>.
     * (This usage is equivalent to specifying <i>AttributesToGet</i> without any value
     * for <i>Select</i>.)</p> <p>If you query a local secondary index and request only
     * attributes that are projected into that index, the operation will read only the
     * index and not the table. If any of the requested attributes are not projected
     * into the local secondary index, DynamoDB will fetch each of these attributes
     * from the parent table. This extra fetching incurs additional throughput cost and
     * latency.</p> <p>If you query a global secondary index, you can only request
     * attributes that are projected into the index. Global secondary index queries
     * cannot fetch attributes from the parent table.</p>
     */
    inline QueryRequest& WithAttributesToGet(const Aws::Vector<Aws::String>& value) { SetAttributesToGet(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ProjectionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> <p>This
     * parameter allows you to retrieve attributes of type List or Map; however, it
     * cannot retrieve individual elements within a List or a Map.</p> </important>
     * <p>The names of one or more attributes to retrieve. If no attribute names are
     * provided, then all attributes will be returned. If any of the requested
     * attributes are not found, they will not appear in the result.</p> <p>Note that
     * <i>AttributesToGet</i> has no effect on provisioned throughput consumption.
     * DynamoDB determines capacity units consumed based on item size, not on the
     * amount of data that is returned to an application.</p> <p>You cannot use both
     * <i>AttributesToGet</i> and <i>Select</i> together in a <i>Query</i> request,
     * <i>unless</i> the value for <i>Select</i> is <code>SPECIFIC_ATTRIBUTES</code>.
     * (This usage is equivalent to specifying <i>AttributesToGet</i> without any value
     * for <i>Select</i>.)</p> <p>If you query a local secondary index and request only
     * attributes that are projected into that index, the operation will read only the
     * index and not the table. If any of the requested attributes are not projected
     * into the local secondary index, DynamoDB will fetch each of these attributes
     * from the parent table. This extra fetching incurs additional throughput cost and
     * latency.</p> <p>If you query a global secondary index, you can only request
     * attributes that are projected into the index. Global secondary index queries
     * cannot fetch attributes from the parent table.</p>
     */
    inline QueryRequest& WithAttributesToGet(Aws::Vector<Aws::String>&& value) { SetAttributesToGet(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ProjectionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> <p>This
     * parameter allows you to retrieve attributes of type List or Map; however, it
     * cannot retrieve individual elements within a List or a Map.</p> </important>
     * <p>The names of one or more attributes to retrieve. If no attribute names are
     * provided, then all attributes will be returned. If any of the requested
     * attributes are not found, they will not appear in the result.</p> <p>Note that
     * <i>AttributesToGet</i> has no effect on provisioned throughput consumption.
     * DynamoDB determines capacity units consumed based on item size, not on the
     * amount of data that is returned to an application.</p> <p>You cannot use both
     * <i>AttributesToGet</i> and <i>Select</i> together in a <i>Query</i> request,
     * <i>unless</i> the value for <i>Select</i> is <code>SPECIFIC_ATTRIBUTES</code>.
     * (This usage is equivalent to specifying <i>AttributesToGet</i> without any value
     * for <i>Select</i>.)</p> <p>If you query a local secondary index and request only
     * attributes that are projected into that index, the operation will read only the
     * index and not the table. If any of the requested attributes are not projected
     * into the local secondary index, DynamoDB will fetch each of these attributes
     * from the parent table. This extra fetching incurs additional throughput cost and
     * latency.</p> <p>If you query a global secondary index, you can only request
     * attributes that are projected into the index. Global secondary index queries
     * cannot fetch attributes from the parent table.</p>
     */
    inline QueryRequest& AddAttributesToGet(const Aws::String& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ProjectionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> <p>This
     * parameter allows you to retrieve attributes of type List or Map; however, it
     * cannot retrieve individual elements within a List or a Map.</p> </important>
     * <p>The names of one or more attributes to retrieve. If no attribute names are
     * provided, then all attributes will be returned. If any of the requested
     * attributes are not found, they will not appear in the result.</p> <p>Note that
     * <i>AttributesToGet</i> has no effect on provisioned throughput consumption.
     * DynamoDB determines capacity units consumed based on item size, not on the
     * amount of data that is returned to an application.</p> <p>You cannot use both
     * <i>AttributesToGet</i> and <i>Select</i> together in a <i>Query</i> request,
     * <i>unless</i> the value for <i>Select</i> is <code>SPECIFIC_ATTRIBUTES</code>.
     * (This usage is equivalent to specifying <i>AttributesToGet</i> without any value
     * for <i>Select</i>.)</p> <p>If you query a local secondary index and request only
     * attributes that are projected into that index, the operation will read only the
     * index and not the table. If any of the requested attributes are not projected
     * into the local secondary index, DynamoDB will fetch each of these attributes
     * from the parent table. This extra fetching incurs additional throughput cost and
     * latency.</p> <p>If you query a global secondary index, you can only request
     * attributes that are projected into the index. Global secondary index queries
     * cannot fetch attributes from the parent table.</p>
     */
    inline QueryRequest& AddAttributesToGet(Aws::String&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ProjectionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> <p>This
     * parameter allows you to retrieve attributes of type List or Map; however, it
     * cannot retrieve individual elements within a List or a Map.</p> </important>
     * <p>The names of one or more attributes to retrieve. If no attribute names are
     * provided, then all attributes will be returned. If any of the requested
     * attributes are not found, they will not appear in the result.</p> <p>Note that
     * <i>AttributesToGet</i> has no effect on provisioned throughput consumption.
     * DynamoDB determines capacity units consumed based on item size, not on the
     * amount of data that is returned to an application.</p> <p>You cannot use both
     * <i>AttributesToGet</i> and <i>Select</i> together in a <i>Query</i> request,
     * <i>unless</i> the value for <i>Select</i> is <code>SPECIFIC_ATTRIBUTES</code>.
     * (This usage is equivalent to specifying <i>AttributesToGet</i> without any value
     * for <i>Select</i>.)</p> <p>If you query a local secondary index and request only
     * attributes that are projected into that index, the operation will read only the
     * index and not the table. If any of the requested attributes are not projected
     * into the local secondary index, DynamoDB will fetch each of these attributes
     * from the parent table. This extra fetching incurs additional throughput cost and
     * latency.</p> <p>If you query a global secondary index, you can only request
     * attributes that are projected into the index. Global secondary index queries
     * cannot fetch attributes from the parent table.</p>
     */
    inline QueryRequest& AddAttributesToGet(const char* value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }

    /**
     * <p>The maximum number of items to evaluate (not necessarily the number of
     * matching items). If DynamoDB processes the number of items up to the limit while
     * processing the results, it stops the operation and returns the matching values
     * up to that point, and a key in <i>LastEvaluatedKey</i> to apply in a subsequent
     * operation, so that you can pick up where you left off. Also, if the processed
     * data set size exceeds 1 MB before DynamoDB reaches this limit, it stops the
     * operation and returns the matching values up to the limit, and a key in
     * <i>LastEvaluatedKey</i> to apply in a subsequent operation to continue the
     * operation. For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html">Query
     * and Scan</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items to evaluate (not necessarily the number of
     * matching items). If DynamoDB processes the number of items up to the limit while
     * processing the results, it stops the operation and returns the matching values
     * up to that point, and a key in <i>LastEvaluatedKey</i> to apply in a subsequent
     * operation, so that you can pick up where you left off. Also, if the processed
     * data set size exceeds 1 MB before DynamoDB reaches this limit, it stops the
     * operation and returns the matching values up to the limit, and a key in
     * <i>LastEvaluatedKey</i> to apply in a subsequent operation to continue the
     * operation. For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html">Query
     * and Scan</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items to evaluate (not necessarily the number of
     * matching items). If DynamoDB processes the number of items up to the limit while
     * processing the results, it stops the operation and returns the matching values
     * up to that point, and a key in <i>LastEvaluatedKey</i> to apply in a subsequent
     * operation, so that you can pick up where you left off. Also, if the processed
     * data set size exceeds 1 MB before DynamoDB reaches this limit, it stops the
     * operation and returns the matching values up to the limit, and a key in
     * <i>LastEvaluatedKey</i> to apply in a subsequent operation to continue the
     * operation. For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html">Query
     * and Scan</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>Determines the read consistency model: If set to <code>true</code>, then the
     * operation uses strongly consistent reads; otherwise, the operation uses
     * eventually consistent reads.</p> <p>Strongly consistent reads are not supported
     * on global secondary indexes. If you query a global secondary index with
     * <i>ConsistentRead</i> set to <code>true</code>, you will receive a
     * <i>ValidationException</i>.</p>
     */
    inline bool GetConsistentRead() const{ return m_consistentRead; }

    /**
     * <p>Determines the read consistency model: If set to <code>true</code>, then the
     * operation uses strongly consistent reads; otherwise, the operation uses
     * eventually consistent reads.</p> <p>Strongly consistent reads are not supported
     * on global secondary indexes. If you query a global secondary index with
     * <i>ConsistentRead</i> set to <code>true</code>, you will receive a
     * <i>ValidationException</i>.</p>
     */
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }

    /**
     * <p>Determines the read consistency model: If set to <code>true</code>, then the
     * operation uses strongly consistent reads; otherwise, the operation uses
     * eventually consistent reads.</p> <p>Strongly consistent reads are not supported
     * on global secondary indexes. If you query a global secondary index with
     * <i>ConsistentRead</i> set to <code>true</code>, you will receive a
     * <i>ValidationException</i>.</p>
     */
    inline QueryRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>KeyConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>The selection criteria for the query. For a query on a table, you can have
     * conditions only on the table primary key attributes. You must provide the
     * partition key name and value as an <code>EQ</code> condition. You can optionally
     * provide a second condition, referring to the sort key.</p> <note> <p>If you
     * don't provide a sort key condition, all of the items that match the partition
     * key will be retrieved. If a <i>FilterExpression</i> or <i>QueryFilter</i> is
     * present, it will be applied after the items are retrieved.</p> </note> <p>For a
     * query on an index, you can have conditions only on the index key attributes. You
     * must provide the index partition key name and value as an <code>EQ</code>
     * condition. You can optionally provide a second condition, referring to the index
     * sort key.</p> <p>Each <i>KeyConditions</i> element consists of an attribute name
     * to compare, along with the following:</p> <ul> <li> <p>
     * <i>AttributeValueList</i> - One or more values to evaluate against the supplied
     * attribute. The number of values in the list depends on the
     * <i>ComparisonOperator</i> being used.</p> <p>For type Number, value comparisons
     * are numeric.</p> <p>String value comparisons for greater than, equals, or less
     * than are based on ASCII character code values. For example, <code>a</code> is
     * greater than <code>A</code>, and <code>a</code> is greater than <code>B</code>.
     * For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes, for example, equals, greater than, less
     * than, and so on.</p> <p>For <i>KeyConditions</i>, only the following comparison
     * operators are supported:</p> <p> <code>EQ | LE | LT | GE | GT | BEGINS_WITH |
     * BETWEEN</code> </p> <p>The following are descriptions of these comparison
     * operators.</p> <ul> <li> <p> <code>EQ</code> : Equal. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one specified in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>LE</code> :
     * Less than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>LT</code> : Less than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>GE</code> :
     * Greater than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>GT</code> : Greater than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p>
     * <code>BEGINS_WITH</code> : Checks for a prefix. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String or Binary (not a Number or a set type). The target attribute of the
     * comparison must be of type String or Binary (not a Number or a set type).</p>
     * <p/> </li> <li> <p> <code>BETWEEN</code> : Greater than or equal to the first
     * value, and less than or equal to the second value. </p> <p>
     * <i>AttributeValueList</i> must contain two <i>AttributeValue</i> elements of the
     * same type, either String, Number, or Binary (not a set type). A target attribute
     * matches if the target value is greater than, or equal to, the first element and
     * less than, or equal to, the second element. If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * compare to <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare
     * to <code>{"NS":["6", "2", "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage
     * examples of <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Condition>& GetKeyConditions() const{ return m_keyConditions; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>KeyConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>The selection criteria for the query. For a query on a table, you can have
     * conditions only on the table primary key attributes. You must provide the
     * partition key name and value as an <code>EQ</code> condition. You can optionally
     * provide a second condition, referring to the sort key.</p> <note> <p>If you
     * don't provide a sort key condition, all of the items that match the partition
     * key will be retrieved. If a <i>FilterExpression</i> or <i>QueryFilter</i> is
     * present, it will be applied after the items are retrieved.</p> </note> <p>For a
     * query on an index, you can have conditions only on the index key attributes. You
     * must provide the index partition key name and value as an <code>EQ</code>
     * condition. You can optionally provide a second condition, referring to the index
     * sort key.</p> <p>Each <i>KeyConditions</i> element consists of an attribute name
     * to compare, along with the following:</p> <ul> <li> <p>
     * <i>AttributeValueList</i> - One or more values to evaluate against the supplied
     * attribute. The number of values in the list depends on the
     * <i>ComparisonOperator</i> being used.</p> <p>For type Number, value comparisons
     * are numeric.</p> <p>String value comparisons for greater than, equals, or less
     * than are based on ASCII character code values. For example, <code>a</code> is
     * greater than <code>A</code>, and <code>a</code> is greater than <code>B</code>.
     * For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes, for example, equals, greater than, less
     * than, and so on.</p> <p>For <i>KeyConditions</i>, only the following comparison
     * operators are supported:</p> <p> <code>EQ | LE | LT | GE | GT | BEGINS_WITH |
     * BETWEEN</code> </p> <p>The following are descriptions of these comparison
     * operators.</p> <ul> <li> <p> <code>EQ</code> : Equal. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one specified in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>LE</code> :
     * Less than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>LT</code> : Less than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>GE</code> :
     * Greater than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>GT</code> : Greater than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p>
     * <code>BEGINS_WITH</code> : Checks for a prefix. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String or Binary (not a Number or a set type). The target attribute of the
     * comparison must be of type String or Binary (not a Number or a set type).</p>
     * <p/> </li> <li> <p> <code>BETWEEN</code> : Greater than or equal to the first
     * value, and less than or equal to the second value. </p> <p>
     * <i>AttributeValueList</i> must contain two <i>AttributeValue</i> elements of the
     * same type, either String, Number, or Binary (not a set type). A target attribute
     * matches if the target value is greater than, or equal to, the first element and
     * less than, or equal to, the second element. If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * compare to <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare
     * to <code>{"NS":["6", "2", "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage
     * examples of <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetKeyConditions(const Aws::Map<Aws::String, Condition>& value) { m_keyConditionsHasBeenSet = true; m_keyConditions = value; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>KeyConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>The selection criteria for the query. For a query on a table, you can have
     * conditions only on the table primary key attributes. You must provide the
     * partition key name and value as an <code>EQ</code> condition. You can optionally
     * provide a second condition, referring to the sort key.</p> <note> <p>If you
     * don't provide a sort key condition, all of the items that match the partition
     * key will be retrieved. If a <i>FilterExpression</i> or <i>QueryFilter</i> is
     * present, it will be applied after the items are retrieved.</p> </note> <p>For a
     * query on an index, you can have conditions only on the index key attributes. You
     * must provide the index partition key name and value as an <code>EQ</code>
     * condition. You can optionally provide a second condition, referring to the index
     * sort key.</p> <p>Each <i>KeyConditions</i> element consists of an attribute name
     * to compare, along with the following:</p> <ul> <li> <p>
     * <i>AttributeValueList</i> - One or more values to evaluate against the supplied
     * attribute. The number of values in the list depends on the
     * <i>ComparisonOperator</i> being used.</p> <p>For type Number, value comparisons
     * are numeric.</p> <p>String value comparisons for greater than, equals, or less
     * than are based on ASCII character code values. For example, <code>a</code> is
     * greater than <code>A</code>, and <code>a</code> is greater than <code>B</code>.
     * For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes, for example, equals, greater than, less
     * than, and so on.</p> <p>For <i>KeyConditions</i>, only the following comparison
     * operators are supported:</p> <p> <code>EQ | LE | LT | GE | GT | BEGINS_WITH |
     * BETWEEN</code> </p> <p>The following are descriptions of these comparison
     * operators.</p> <ul> <li> <p> <code>EQ</code> : Equal. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one specified in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>LE</code> :
     * Less than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>LT</code> : Less than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>GE</code> :
     * Greater than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>GT</code> : Greater than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p>
     * <code>BEGINS_WITH</code> : Checks for a prefix. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String or Binary (not a Number or a set type). The target attribute of the
     * comparison must be of type String or Binary (not a Number or a set type).</p>
     * <p/> </li> <li> <p> <code>BETWEEN</code> : Greater than or equal to the first
     * value, and less than or equal to the second value. </p> <p>
     * <i>AttributeValueList</i> must contain two <i>AttributeValue</i> elements of the
     * same type, either String, Number, or Binary (not a set type). A target attribute
     * matches if the target value is greater than, or equal to, the first element and
     * less than, or equal to, the second element. If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * compare to <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare
     * to <code>{"NS":["6", "2", "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage
     * examples of <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetKeyConditions(Aws::Map<Aws::String, Condition>&& value) { m_keyConditionsHasBeenSet = true; m_keyConditions = value; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>KeyConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>The selection criteria for the query. For a query on a table, you can have
     * conditions only on the table primary key attributes. You must provide the
     * partition key name and value as an <code>EQ</code> condition. You can optionally
     * provide a second condition, referring to the sort key.</p> <note> <p>If you
     * don't provide a sort key condition, all of the items that match the partition
     * key will be retrieved. If a <i>FilterExpression</i> or <i>QueryFilter</i> is
     * present, it will be applied after the items are retrieved.</p> </note> <p>For a
     * query on an index, you can have conditions only on the index key attributes. You
     * must provide the index partition key name and value as an <code>EQ</code>
     * condition. You can optionally provide a second condition, referring to the index
     * sort key.</p> <p>Each <i>KeyConditions</i> element consists of an attribute name
     * to compare, along with the following:</p> <ul> <li> <p>
     * <i>AttributeValueList</i> - One or more values to evaluate against the supplied
     * attribute. The number of values in the list depends on the
     * <i>ComparisonOperator</i> being used.</p> <p>For type Number, value comparisons
     * are numeric.</p> <p>String value comparisons for greater than, equals, or less
     * than are based on ASCII character code values. For example, <code>a</code> is
     * greater than <code>A</code>, and <code>a</code> is greater than <code>B</code>.
     * For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes, for example, equals, greater than, less
     * than, and so on.</p> <p>For <i>KeyConditions</i>, only the following comparison
     * operators are supported:</p> <p> <code>EQ | LE | LT | GE | GT | BEGINS_WITH |
     * BETWEEN</code> </p> <p>The following are descriptions of these comparison
     * operators.</p> <ul> <li> <p> <code>EQ</code> : Equal. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one specified in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>LE</code> :
     * Less than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>LT</code> : Less than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>GE</code> :
     * Greater than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>GT</code> : Greater than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p>
     * <code>BEGINS_WITH</code> : Checks for a prefix. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String or Binary (not a Number or a set type). The target attribute of the
     * comparison must be of type String or Binary (not a Number or a set type).</p>
     * <p/> </li> <li> <p> <code>BETWEEN</code> : Greater than or equal to the first
     * value, and less than or equal to the second value. </p> <p>
     * <i>AttributeValueList</i> must contain two <i>AttributeValue</i> elements of the
     * same type, either String, Number, or Binary (not a set type). A target attribute
     * matches if the target value is greater than, or equal to, the first element and
     * less than, or equal to, the second element. If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * compare to <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare
     * to <code>{"NS":["6", "2", "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage
     * examples of <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& WithKeyConditions(const Aws::Map<Aws::String, Condition>& value) { SetKeyConditions(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>KeyConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>The selection criteria for the query. For a query on a table, you can have
     * conditions only on the table primary key attributes. You must provide the
     * partition key name and value as an <code>EQ</code> condition. You can optionally
     * provide a second condition, referring to the sort key.</p> <note> <p>If you
     * don't provide a sort key condition, all of the items that match the partition
     * key will be retrieved. If a <i>FilterExpression</i> or <i>QueryFilter</i> is
     * present, it will be applied after the items are retrieved.</p> </note> <p>For a
     * query on an index, you can have conditions only on the index key attributes. You
     * must provide the index partition key name and value as an <code>EQ</code>
     * condition. You can optionally provide a second condition, referring to the index
     * sort key.</p> <p>Each <i>KeyConditions</i> element consists of an attribute name
     * to compare, along with the following:</p> <ul> <li> <p>
     * <i>AttributeValueList</i> - One or more values to evaluate against the supplied
     * attribute. The number of values in the list depends on the
     * <i>ComparisonOperator</i> being used.</p> <p>For type Number, value comparisons
     * are numeric.</p> <p>String value comparisons for greater than, equals, or less
     * than are based on ASCII character code values. For example, <code>a</code> is
     * greater than <code>A</code>, and <code>a</code> is greater than <code>B</code>.
     * For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes, for example, equals, greater than, less
     * than, and so on.</p> <p>For <i>KeyConditions</i>, only the following comparison
     * operators are supported:</p> <p> <code>EQ | LE | LT | GE | GT | BEGINS_WITH |
     * BETWEEN</code> </p> <p>The following are descriptions of these comparison
     * operators.</p> <ul> <li> <p> <code>EQ</code> : Equal. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one specified in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>LE</code> :
     * Less than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>LT</code> : Less than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>GE</code> :
     * Greater than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>GT</code> : Greater than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p>
     * <code>BEGINS_WITH</code> : Checks for a prefix. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String or Binary (not a Number or a set type). The target attribute of the
     * comparison must be of type String or Binary (not a Number or a set type).</p>
     * <p/> </li> <li> <p> <code>BETWEEN</code> : Greater than or equal to the first
     * value, and less than or equal to the second value. </p> <p>
     * <i>AttributeValueList</i> must contain two <i>AttributeValue</i> elements of the
     * same type, either String, Number, or Binary (not a set type). A target attribute
     * matches if the target value is greater than, or equal to, the first element and
     * less than, or equal to, the second element. If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * compare to <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare
     * to <code>{"NS":["6", "2", "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage
     * examples of <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& WithKeyConditions(Aws::Map<Aws::String, Condition>&& value) { SetKeyConditions(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>KeyConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>The selection criteria for the query. For a query on a table, you can have
     * conditions only on the table primary key attributes. You must provide the
     * partition key name and value as an <code>EQ</code> condition. You can optionally
     * provide a second condition, referring to the sort key.</p> <note> <p>If you
     * don't provide a sort key condition, all of the items that match the partition
     * key will be retrieved. If a <i>FilterExpression</i> or <i>QueryFilter</i> is
     * present, it will be applied after the items are retrieved.</p> </note> <p>For a
     * query on an index, you can have conditions only on the index key attributes. You
     * must provide the index partition key name and value as an <code>EQ</code>
     * condition. You can optionally provide a second condition, referring to the index
     * sort key.</p> <p>Each <i>KeyConditions</i> element consists of an attribute name
     * to compare, along with the following:</p> <ul> <li> <p>
     * <i>AttributeValueList</i> - One or more values to evaluate against the supplied
     * attribute. The number of values in the list depends on the
     * <i>ComparisonOperator</i> being used.</p> <p>For type Number, value comparisons
     * are numeric.</p> <p>String value comparisons for greater than, equals, or less
     * than are based on ASCII character code values. For example, <code>a</code> is
     * greater than <code>A</code>, and <code>a</code> is greater than <code>B</code>.
     * For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes, for example, equals, greater than, less
     * than, and so on.</p> <p>For <i>KeyConditions</i>, only the following comparison
     * operators are supported:</p> <p> <code>EQ | LE | LT | GE | GT | BEGINS_WITH |
     * BETWEEN</code> </p> <p>The following are descriptions of these comparison
     * operators.</p> <ul> <li> <p> <code>EQ</code> : Equal. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one specified in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>LE</code> :
     * Less than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>LT</code> : Less than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>GE</code> :
     * Greater than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>GT</code> : Greater than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p>
     * <code>BEGINS_WITH</code> : Checks for a prefix. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String or Binary (not a Number or a set type). The target attribute of the
     * comparison must be of type String or Binary (not a Number or a set type).</p>
     * <p/> </li> <li> <p> <code>BETWEEN</code> : Greater than or equal to the first
     * value, and less than or equal to the second value. </p> <p>
     * <i>AttributeValueList</i> must contain two <i>AttributeValue</i> elements of the
     * same type, either String, Number, or Binary (not a set type). A target attribute
     * matches if the target value is greater than, or equal to, the first element and
     * less than, or equal to, the second element. If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * compare to <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare
     * to <code>{"NS":["6", "2", "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage
     * examples of <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddKeyConditions(const Aws::String& key, const Condition& value) { m_keyConditionsHasBeenSet = true; m_keyConditions[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>KeyConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>The selection criteria for the query. For a query on a table, you can have
     * conditions only on the table primary key attributes. You must provide the
     * partition key name and value as an <code>EQ</code> condition. You can optionally
     * provide a second condition, referring to the sort key.</p> <note> <p>If you
     * don't provide a sort key condition, all of the items that match the partition
     * key will be retrieved. If a <i>FilterExpression</i> or <i>QueryFilter</i> is
     * present, it will be applied after the items are retrieved.</p> </note> <p>For a
     * query on an index, you can have conditions only on the index key attributes. You
     * must provide the index partition key name and value as an <code>EQ</code>
     * condition. You can optionally provide a second condition, referring to the index
     * sort key.</p> <p>Each <i>KeyConditions</i> element consists of an attribute name
     * to compare, along with the following:</p> <ul> <li> <p>
     * <i>AttributeValueList</i> - One or more values to evaluate against the supplied
     * attribute. The number of values in the list depends on the
     * <i>ComparisonOperator</i> being used.</p> <p>For type Number, value comparisons
     * are numeric.</p> <p>String value comparisons for greater than, equals, or less
     * than are based on ASCII character code values. For example, <code>a</code> is
     * greater than <code>A</code>, and <code>a</code> is greater than <code>B</code>.
     * For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes, for example, equals, greater than, less
     * than, and so on.</p> <p>For <i>KeyConditions</i>, only the following comparison
     * operators are supported:</p> <p> <code>EQ | LE | LT | GE | GT | BEGINS_WITH |
     * BETWEEN</code> </p> <p>The following are descriptions of these comparison
     * operators.</p> <ul> <li> <p> <code>EQ</code> : Equal. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one specified in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>LE</code> :
     * Less than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>LT</code> : Less than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>GE</code> :
     * Greater than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>GT</code> : Greater than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p>
     * <code>BEGINS_WITH</code> : Checks for a prefix. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String or Binary (not a Number or a set type). The target attribute of the
     * comparison must be of type String or Binary (not a Number or a set type).</p>
     * <p/> </li> <li> <p> <code>BETWEEN</code> : Greater than or equal to the first
     * value, and less than or equal to the second value. </p> <p>
     * <i>AttributeValueList</i> must contain two <i>AttributeValue</i> elements of the
     * same type, either String, Number, or Binary (not a set type). A target attribute
     * matches if the target value is greater than, or equal to, the first element and
     * less than, or equal to, the second element. If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * compare to <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare
     * to <code>{"NS":["6", "2", "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage
     * examples of <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddKeyConditions(Aws::String&& key, const Condition& value) { m_keyConditionsHasBeenSet = true; m_keyConditions[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>KeyConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>The selection criteria for the query. For a query on a table, you can have
     * conditions only on the table primary key attributes. You must provide the
     * partition key name and value as an <code>EQ</code> condition. You can optionally
     * provide a second condition, referring to the sort key.</p> <note> <p>If you
     * don't provide a sort key condition, all of the items that match the partition
     * key will be retrieved. If a <i>FilterExpression</i> or <i>QueryFilter</i> is
     * present, it will be applied after the items are retrieved.</p> </note> <p>For a
     * query on an index, you can have conditions only on the index key attributes. You
     * must provide the index partition key name and value as an <code>EQ</code>
     * condition. You can optionally provide a second condition, referring to the index
     * sort key.</p> <p>Each <i>KeyConditions</i> element consists of an attribute name
     * to compare, along with the following:</p> <ul> <li> <p>
     * <i>AttributeValueList</i> - One or more values to evaluate against the supplied
     * attribute. The number of values in the list depends on the
     * <i>ComparisonOperator</i> being used.</p> <p>For type Number, value comparisons
     * are numeric.</p> <p>String value comparisons for greater than, equals, or less
     * than are based on ASCII character code values. For example, <code>a</code> is
     * greater than <code>A</code>, and <code>a</code> is greater than <code>B</code>.
     * For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes, for example, equals, greater than, less
     * than, and so on.</p> <p>For <i>KeyConditions</i>, only the following comparison
     * operators are supported:</p> <p> <code>EQ | LE | LT | GE | GT | BEGINS_WITH |
     * BETWEEN</code> </p> <p>The following are descriptions of these comparison
     * operators.</p> <ul> <li> <p> <code>EQ</code> : Equal. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one specified in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>LE</code> :
     * Less than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>LT</code> : Less than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>GE</code> :
     * Greater than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>GT</code> : Greater than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p>
     * <code>BEGINS_WITH</code> : Checks for a prefix. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String or Binary (not a Number or a set type). The target attribute of the
     * comparison must be of type String or Binary (not a Number or a set type).</p>
     * <p/> </li> <li> <p> <code>BETWEEN</code> : Greater than or equal to the first
     * value, and less than or equal to the second value. </p> <p>
     * <i>AttributeValueList</i> must contain two <i>AttributeValue</i> elements of the
     * same type, either String, Number, or Binary (not a set type). A target attribute
     * matches if the target value is greater than, or equal to, the first element and
     * less than, or equal to, the second element. If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * compare to <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare
     * to <code>{"NS":["6", "2", "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage
     * examples of <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddKeyConditions(const Aws::String& key, Condition&& value) { m_keyConditionsHasBeenSet = true; m_keyConditions[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>KeyConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>The selection criteria for the query. For a query on a table, you can have
     * conditions only on the table primary key attributes. You must provide the
     * partition key name and value as an <code>EQ</code> condition. You can optionally
     * provide a second condition, referring to the sort key.</p> <note> <p>If you
     * don't provide a sort key condition, all of the items that match the partition
     * key will be retrieved. If a <i>FilterExpression</i> or <i>QueryFilter</i> is
     * present, it will be applied after the items are retrieved.</p> </note> <p>For a
     * query on an index, you can have conditions only on the index key attributes. You
     * must provide the index partition key name and value as an <code>EQ</code>
     * condition. You can optionally provide a second condition, referring to the index
     * sort key.</p> <p>Each <i>KeyConditions</i> element consists of an attribute name
     * to compare, along with the following:</p> <ul> <li> <p>
     * <i>AttributeValueList</i> - One or more values to evaluate against the supplied
     * attribute. The number of values in the list depends on the
     * <i>ComparisonOperator</i> being used.</p> <p>For type Number, value comparisons
     * are numeric.</p> <p>String value comparisons for greater than, equals, or less
     * than are based on ASCII character code values. For example, <code>a</code> is
     * greater than <code>A</code>, and <code>a</code> is greater than <code>B</code>.
     * For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes, for example, equals, greater than, less
     * than, and so on.</p> <p>For <i>KeyConditions</i>, only the following comparison
     * operators are supported:</p> <p> <code>EQ | LE | LT | GE | GT | BEGINS_WITH |
     * BETWEEN</code> </p> <p>The following are descriptions of these comparison
     * operators.</p> <ul> <li> <p> <code>EQ</code> : Equal. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one specified in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>LE</code> :
     * Less than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>LT</code> : Less than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>GE</code> :
     * Greater than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>GT</code> : Greater than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p>
     * <code>BEGINS_WITH</code> : Checks for a prefix. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String or Binary (not a Number or a set type). The target attribute of the
     * comparison must be of type String or Binary (not a Number or a set type).</p>
     * <p/> </li> <li> <p> <code>BETWEEN</code> : Greater than or equal to the first
     * value, and less than or equal to the second value. </p> <p>
     * <i>AttributeValueList</i> must contain two <i>AttributeValue</i> elements of the
     * same type, either String, Number, or Binary (not a set type). A target attribute
     * matches if the target value is greater than, or equal to, the first element and
     * less than, or equal to, the second element. If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * compare to <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare
     * to <code>{"NS":["6", "2", "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage
     * examples of <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddKeyConditions(Aws::String&& key, Condition&& value) { m_keyConditionsHasBeenSet = true; m_keyConditions[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>KeyConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>The selection criteria for the query. For a query on a table, you can have
     * conditions only on the table primary key attributes. You must provide the
     * partition key name and value as an <code>EQ</code> condition. You can optionally
     * provide a second condition, referring to the sort key.</p> <note> <p>If you
     * don't provide a sort key condition, all of the items that match the partition
     * key will be retrieved. If a <i>FilterExpression</i> or <i>QueryFilter</i> is
     * present, it will be applied after the items are retrieved.</p> </note> <p>For a
     * query on an index, you can have conditions only on the index key attributes. You
     * must provide the index partition key name and value as an <code>EQ</code>
     * condition. You can optionally provide a second condition, referring to the index
     * sort key.</p> <p>Each <i>KeyConditions</i> element consists of an attribute name
     * to compare, along with the following:</p> <ul> <li> <p>
     * <i>AttributeValueList</i> - One or more values to evaluate against the supplied
     * attribute. The number of values in the list depends on the
     * <i>ComparisonOperator</i> being used.</p> <p>For type Number, value comparisons
     * are numeric.</p> <p>String value comparisons for greater than, equals, or less
     * than are based on ASCII character code values. For example, <code>a</code> is
     * greater than <code>A</code>, and <code>a</code> is greater than <code>B</code>.
     * For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes, for example, equals, greater than, less
     * than, and so on.</p> <p>For <i>KeyConditions</i>, only the following comparison
     * operators are supported:</p> <p> <code>EQ | LE | LT | GE | GT | BEGINS_WITH |
     * BETWEEN</code> </p> <p>The following are descriptions of these comparison
     * operators.</p> <ul> <li> <p> <code>EQ</code> : Equal. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one specified in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>LE</code> :
     * Less than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>LT</code> : Less than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>GE</code> :
     * Greater than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>GT</code> : Greater than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p>
     * <code>BEGINS_WITH</code> : Checks for a prefix. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String or Binary (not a Number or a set type). The target attribute of the
     * comparison must be of type String or Binary (not a Number or a set type).</p>
     * <p/> </li> <li> <p> <code>BETWEEN</code> : Greater than or equal to the first
     * value, and less than or equal to the second value. </p> <p>
     * <i>AttributeValueList</i> must contain two <i>AttributeValue</i> elements of the
     * same type, either String, Number, or Binary (not a set type). A target attribute
     * matches if the target value is greater than, or equal to, the first element and
     * less than, or equal to, the second element. If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * compare to <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare
     * to <code>{"NS":["6", "2", "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage
     * examples of <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddKeyConditions(const char* key, Condition&& value) { m_keyConditionsHasBeenSet = true; m_keyConditions[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>KeyConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>The selection criteria for the query. For a query on a table, you can have
     * conditions only on the table primary key attributes. You must provide the
     * partition key name and value as an <code>EQ</code> condition. You can optionally
     * provide a second condition, referring to the sort key.</p> <note> <p>If you
     * don't provide a sort key condition, all of the items that match the partition
     * key will be retrieved. If a <i>FilterExpression</i> or <i>QueryFilter</i> is
     * present, it will be applied after the items are retrieved.</p> </note> <p>For a
     * query on an index, you can have conditions only on the index key attributes. You
     * must provide the index partition key name and value as an <code>EQ</code>
     * condition. You can optionally provide a second condition, referring to the index
     * sort key.</p> <p>Each <i>KeyConditions</i> element consists of an attribute name
     * to compare, along with the following:</p> <ul> <li> <p>
     * <i>AttributeValueList</i> - One or more values to evaluate against the supplied
     * attribute. The number of values in the list depends on the
     * <i>ComparisonOperator</i> being used.</p> <p>For type Number, value comparisons
     * are numeric.</p> <p>String value comparisons for greater than, equals, or less
     * than are based on ASCII character code values. For example, <code>a</code> is
     * greater than <code>A</code>, and <code>a</code> is greater than <code>B</code>.
     * For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes, for example, equals, greater than, less
     * than, and so on.</p> <p>For <i>KeyConditions</i>, only the following comparison
     * operators are supported:</p> <p> <code>EQ | LE | LT | GE | GT | BEGINS_WITH |
     * BETWEEN</code> </p> <p>The following are descriptions of these comparison
     * operators.</p> <ul> <li> <p> <code>EQ</code> : Equal. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one specified in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>LE</code> :
     * Less than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>LT</code> : Less than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p> <code>GE</code> :
     * Greater than or equal. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, or Binary (not a set
     * type). If an item contains an <i>AttributeValue</i> element of a different type
     * than the one provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code>.</p> <p/> </li> <li> <p> <code>GT</code> : Greater than. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * equal <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare to
     * <code>{"NS":["6", "2", "1"]}</code>.</p> <p/> </li> <li> <p>
     * <code>BEGINS_WITH</code> : Checks for a prefix. </p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> of type
     * String or Binary (not a Number or a set type). The target attribute of the
     * comparison must be of type String or Binary (not a Number or a set type).</p>
     * <p/> </li> <li> <p> <code>BETWEEN</code> : Greater than or equal to the first
     * value, and less than or equal to the second value. </p> <p>
     * <i>AttributeValueList</i> must contain two <i>AttributeValue</i> elements of the
     * same type, either String, Number, or Binary (not a set type). A target attribute
     * matches if the target value is greater than, or equal to, the first element and
     * less than, or equal to, the second element. If an item contains an
     * <i>AttributeValue</i> element of a different type than the one provided in the
     * request, the value does not match. For example, <code>{"S":"6"}</code> does not
     * compare to <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not compare
     * to <code>{"NS":["6", "2", "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage
     * examples of <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddKeyConditions(const char* key, const Condition& value) { m_keyConditionsHasBeenSet = true; m_keyConditions[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the query results after the items are read and returns
     * only the desired values.</p> <p>This parameter does not support attributes of
     * type List or Map.</p> <note> <p>A <i>QueryFilter</i> is applied after the items
     * have already been read; the process of filtering does not consume any additional
     * read capacity units.</p> </note> <p>If you provide more than one condition in
     * the <i>QueryFilter</i> map, then by default all of the conditions must evaluate
     * to true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Note that <i>QueryFilter</i> does not allow key attributes. You
     * cannot define a filter condition on a partition key or a sort key.</p> <p>Each
     * <i>QueryFilter</i> element consists of an attribute name to compare, along with
     * the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or more values
     * to evaluate against the supplied attribute. The number of values in the list
     * depends on the operator specified in <i>ComparisonOperator</i>.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> <p>For information on specifying data types
     * in JSON, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see the <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>
     * data type.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Condition>& GetQueryFilter() const{ return m_queryFilter; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the query results after the items are read and returns
     * only the desired values.</p> <p>This parameter does not support attributes of
     * type List or Map.</p> <note> <p>A <i>QueryFilter</i> is applied after the items
     * have already been read; the process of filtering does not consume any additional
     * read capacity units.</p> </note> <p>If you provide more than one condition in
     * the <i>QueryFilter</i> map, then by default all of the conditions must evaluate
     * to true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Note that <i>QueryFilter</i> does not allow key attributes. You
     * cannot define a filter condition on a partition key or a sort key.</p> <p>Each
     * <i>QueryFilter</i> element consists of an attribute name to compare, along with
     * the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or more values
     * to evaluate against the supplied attribute. The number of values in the list
     * depends on the operator specified in <i>ComparisonOperator</i>.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> <p>For information on specifying data types
     * in JSON, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see the <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>
     * data type.</p> </li> </ul>
     */
    inline void SetQueryFilter(const Aws::Map<Aws::String, Condition>& value) { m_queryFilterHasBeenSet = true; m_queryFilter = value; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the query results after the items are read and returns
     * only the desired values.</p> <p>This parameter does not support attributes of
     * type List or Map.</p> <note> <p>A <i>QueryFilter</i> is applied after the items
     * have already been read; the process of filtering does not consume any additional
     * read capacity units.</p> </note> <p>If you provide more than one condition in
     * the <i>QueryFilter</i> map, then by default all of the conditions must evaluate
     * to true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Note that <i>QueryFilter</i> does not allow key attributes. You
     * cannot define a filter condition on a partition key or a sort key.</p> <p>Each
     * <i>QueryFilter</i> element consists of an attribute name to compare, along with
     * the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or more values
     * to evaluate against the supplied attribute. The number of values in the list
     * depends on the operator specified in <i>ComparisonOperator</i>.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> <p>For information on specifying data types
     * in JSON, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see the <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>
     * data type.</p> </li> </ul>
     */
    inline void SetQueryFilter(Aws::Map<Aws::String, Condition>&& value) { m_queryFilterHasBeenSet = true; m_queryFilter = value; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the query results after the items are read and returns
     * only the desired values.</p> <p>This parameter does not support attributes of
     * type List or Map.</p> <note> <p>A <i>QueryFilter</i> is applied after the items
     * have already been read; the process of filtering does not consume any additional
     * read capacity units.</p> </note> <p>If you provide more than one condition in
     * the <i>QueryFilter</i> map, then by default all of the conditions must evaluate
     * to true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Note that <i>QueryFilter</i> does not allow key attributes. You
     * cannot define a filter condition on a partition key or a sort key.</p> <p>Each
     * <i>QueryFilter</i> element consists of an attribute name to compare, along with
     * the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or more values
     * to evaluate against the supplied attribute. The number of values in the list
     * depends on the operator specified in <i>ComparisonOperator</i>.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> <p>For information on specifying data types
     * in JSON, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see the <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>
     * data type.</p> </li> </ul>
     */
    inline QueryRequest& WithQueryFilter(const Aws::Map<Aws::String, Condition>& value) { SetQueryFilter(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the query results after the items are read and returns
     * only the desired values.</p> <p>This parameter does not support attributes of
     * type List or Map.</p> <note> <p>A <i>QueryFilter</i> is applied after the items
     * have already been read; the process of filtering does not consume any additional
     * read capacity units.</p> </note> <p>If you provide more than one condition in
     * the <i>QueryFilter</i> map, then by default all of the conditions must evaluate
     * to true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Note that <i>QueryFilter</i> does not allow key attributes. You
     * cannot define a filter condition on a partition key or a sort key.</p> <p>Each
     * <i>QueryFilter</i> element consists of an attribute name to compare, along with
     * the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or more values
     * to evaluate against the supplied attribute. The number of values in the list
     * depends on the operator specified in <i>ComparisonOperator</i>.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> <p>For information on specifying data types
     * in JSON, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see the <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>
     * data type.</p> </li> </ul>
     */
    inline QueryRequest& WithQueryFilter(Aws::Map<Aws::String, Condition>&& value) { SetQueryFilter(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the query results after the items are read and returns
     * only the desired values.</p> <p>This parameter does not support attributes of
     * type List or Map.</p> <note> <p>A <i>QueryFilter</i> is applied after the items
     * have already been read; the process of filtering does not consume any additional
     * read capacity units.</p> </note> <p>If you provide more than one condition in
     * the <i>QueryFilter</i> map, then by default all of the conditions must evaluate
     * to true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Note that <i>QueryFilter</i> does not allow key attributes. You
     * cannot define a filter condition on a partition key or a sort key.</p> <p>Each
     * <i>QueryFilter</i> element consists of an attribute name to compare, along with
     * the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or more values
     * to evaluate against the supplied attribute. The number of values in the list
     * depends on the operator specified in <i>ComparisonOperator</i>.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> <p>For information on specifying data types
     * in JSON, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see the <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>
     * data type.</p> </li> </ul>
     */
    inline QueryRequest& AddQueryFilter(const Aws::String& key, const Condition& value) { m_queryFilterHasBeenSet = true; m_queryFilter[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the query results after the items are read and returns
     * only the desired values.</p> <p>This parameter does not support attributes of
     * type List or Map.</p> <note> <p>A <i>QueryFilter</i> is applied after the items
     * have already been read; the process of filtering does not consume any additional
     * read capacity units.</p> </note> <p>If you provide more than one condition in
     * the <i>QueryFilter</i> map, then by default all of the conditions must evaluate
     * to true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Note that <i>QueryFilter</i> does not allow key attributes. You
     * cannot define a filter condition on a partition key or a sort key.</p> <p>Each
     * <i>QueryFilter</i> element consists of an attribute name to compare, along with
     * the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or more values
     * to evaluate against the supplied attribute. The number of values in the list
     * depends on the operator specified in <i>ComparisonOperator</i>.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> <p>For information on specifying data types
     * in JSON, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see the <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>
     * data type.</p> </li> </ul>
     */
    inline QueryRequest& AddQueryFilter(Aws::String&& key, const Condition& value) { m_queryFilterHasBeenSet = true; m_queryFilter[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the query results after the items are read and returns
     * only the desired values.</p> <p>This parameter does not support attributes of
     * type List or Map.</p> <note> <p>A <i>QueryFilter</i> is applied after the items
     * have already been read; the process of filtering does not consume any additional
     * read capacity units.</p> </note> <p>If you provide more than one condition in
     * the <i>QueryFilter</i> map, then by default all of the conditions must evaluate
     * to true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Note that <i>QueryFilter</i> does not allow key attributes. You
     * cannot define a filter condition on a partition key or a sort key.</p> <p>Each
     * <i>QueryFilter</i> element consists of an attribute name to compare, along with
     * the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or more values
     * to evaluate against the supplied attribute. The number of values in the list
     * depends on the operator specified in <i>ComparisonOperator</i>.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> <p>For information on specifying data types
     * in JSON, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see the <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>
     * data type.</p> </li> </ul>
     */
    inline QueryRequest& AddQueryFilter(const Aws::String& key, Condition&& value) { m_queryFilterHasBeenSet = true; m_queryFilter[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the query results after the items are read and returns
     * only the desired values.</p> <p>This parameter does not support attributes of
     * type List or Map.</p> <note> <p>A <i>QueryFilter</i> is applied after the items
     * have already been read; the process of filtering does not consume any additional
     * read capacity units.</p> </note> <p>If you provide more than one condition in
     * the <i>QueryFilter</i> map, then by default all of the conditions must evaluate
     * to true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Note that <i>QueryFilter</i> does not allow key attributes. You
     * cannot define a filter condition on a partition key or a sort key.</p> <p>Each
     * <i>QueryFilter</i> element consists of an attribute name to compare, along with
     * the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or more values
     * to evaluate against the supplied attribute. The number of values in the list
     * depends on the operator specified in <i>ComparisonOperator</i>.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> <p>For information on specifying data types
     * in JSON, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see the <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>
     * data type.</p> </li> </ul>
     */
    inline QueryRequest& AddQueryFilter(Aws::String&& key, Condition&& value) { m_queryFilterHasBeenSet = true; m_queryFilter[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the query results after the items are read and returns
     * only the desired values.</p> <p>This parameter does not support attributes of
     * type List or Map.</p> <note> <p>A <i>QueryFilter</i> is applied after the items
     * have already been read; the process of filtering does not consume any additional
     * read capacity units.</p> </note> <p>If you provide more than one condition in
     * the <i>QueryFilter</i> map, then by default all of the conditions must evaluate
     * to true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Note that <i>QueryFilter</i> does not allow key attributes. You
     * cannot define a filter condition on a partition key or a sort key.</p> <p>Each
     * <i>QueryFilter</i> element consists of an attribute name to compare, along with
     * the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or more values
     * to evaluate against the supplied attribute. The number of values in the list
     * depends on the operator specified in <i>ComparisonOperator</i>.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> <p>For information on specifying data types
     * in JSON, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see the <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>
     * data type.</p> </li> </ul>
     */
    inline QueryRequest& AddQueryFilter(const char* key, Condition&& value) { m_queryFilterHasBeenSet = true; m_queryFilter[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the query results after the items are read and returns
     * only the desired values.</p> <p>This parameter does not support attributes of
     * type List or Map.</p> <note> <p>A <i>QueryFilter</i> is applied after the items
     * have already been read; the process of filtering does not consume any additional
     * read capacity units.</p> </note> <p>If you provide more than one condition in
     * the <i>QueryFilter</i> map, then by default all of the conditions must evaluate
     * to true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Note that <i>QueryFilter</i> does not allow key attributes. You
     * cannot define a filter condition on a partition key or a sort key.</p> <p>Each
     * <i>QueryFilter</i> element consists of an attribute name to compare, along with
     * the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or more values
     * to evaluate against the supplied attribute. The number of values in the list
     * depends on the operator specified in <i>ComparisonOperator</i>.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> <p>For information on specifying data types
     * in JSON, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see the <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>
     * data type.</p> </li> </ul>
     */
    inline QueryRequest& AddQueryFilter(const char* key, const Condition& value) { m_queryFilterHasBeenSet = true; m_queryFilter[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * logical operator to apply to the conditions in a <i>QueryFilter</i> map:</p>
     * <ul> <li> <p> <code>AND</code> - If all of the conditions evaluate to true, then
     * the entire map evaluates to true.</p> </li> <li> <p> <code>OR</code> - If at
     * least one of the conditions evaluate to true, then the entire map evaluates to
     * true.</p> </li> </ul> <p>If you omit <i>ConditionalOperator</i>, then
     * <code>AND</code> is the default.</p> <p>The operation will succeed only if the
     * entire map evaluates to true.</p> <note> <p>This parameter does not support
     * attributes of type List or Map.</p> </note>
     */
    inline const ConditionalOperator& GetConditionalOperator() const{ return m_conditionalOperator; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * logical operator to apply to the conditions in a <i>QueryFilter</i> map:</p>
     * <ul> <li> <p> <code>AND</code> - If all of the conditions evaluate to true, then
     * the entire map evaluates to true.</p> </li> <li> <p> <code>OR</code> - If at
     * least one of the conditions evaluate to true, then the entire map evaluates to
     * true.</p> </li> </ul> <p>If you omit <i>ConditionalOperator</i>, then
     * <code>AND</code> is the default.</p> <p>The operation will succeed only if the
     * entire map evaluates to true.</p> <note> <p>This parameter does not support
     * attributes of type List or Map.</p> </note>
     */
    inline void SetConditionalOperator(const ConditionalOperator& value) { m_conditionalOperatorHasBeenSet = true; m_conditionalOperator = value; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * logical operator to apply to the conditions in a <i>QueryFilter</i> map:</p>
     * <ul> <li> <p> <code>AND</code> - If all of the conditions evaluate to true, then
     * the entire map evaluates to true.</p> </li> <li> <p> <code>OR</code> - If at
     * least one of the conditions evaluate to true, then the entire map evaluates to
     * true.</p> </li> </ul> <p>If you omit <i>ConditionalOperator</i>, then
     * <code>AND</code> is the default.</p> <p>The operation will succeed only if the
     * entire map evaluates to true.</p> <note> <p>This parameter does not support
     * attributes of type List or Map.</p> </note>
     */
    inline void SetConditionalOperator(ConditionalOperator&& value) { m_conditionalOperatorHasBeenSet = true; m_conditionalOperator = value; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * logical operator to apply to the conditions in a <i>QueryFilter</i> map:</p>
     * <ul> <li> <p> <code>AND</code> - If all of the conditions evaluate to true, then
     * the entire map evaluates to true.</p> </li> <li> <p> <code>OR</code> - If at
     * least one of the conditions evaluate to true, then the entire map evaluates to
     * true.</p> </li> </ul> <p>If you omit <i>ConditionalOperator</i>, then
     * <code>AND</code> is the default.</p> <p>The operation will succeed only if the
     * entire map evaluates to true.</p> <note> <p>This parameter does not support
     * attributes of type List or Map.</p> </note>
     */
    inline QueryRequest& WithConditionalOperator(const ConditionalOperator& value) { SetConditionalOperator(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * logical operator to apply to the conditions in a <i>QueryFilter</i> map:</p>
     * <ul> <li> <p> <code>AND</code> - If all of the conditions evaluate to true, then
     * the entire map evaluates to true.</p> </li> <li> <p> <code>OR</code> - If at
     * least one of the conditions evaluate to true, then the entire map evaluates to
     * true.</p> </li> </ul> <p>If you omit <i>ConditionalOperator</i>, then
     * <code>AND</code> is the default.</p> <p>The operation will succeed only if the
     * entire map evaluates to true.</p> <note> <p>This parameter does not support
     * attributes of type List or Map.</p> </note>
     */
    inline QueryRequest& WithConditionalOperator(ConditionalOperator&& value) { SetConditionalOperator(value); return *this;}

    /**
     * <p>Specifies the order for index traversal: If <code>true</code> (default), the
     * traversal is performed in ascending order; if <code>false</code>, the traversal
     * is performed in descending order. </p> <p>Items with the same partition key
     * value are stored in sorted order by sort key. If the sort key data type is
     * Number, the results are stored in numeric order. For type String, the results
     * are stored in order of ASCII character code values. For type Binary, DynamoDB
     * treats each byte of the binary data as unsigned.</p> <p>If
     * <i>ScanIndexForward</i> is <code>true</code>, DynamoDB returns the results in
     * the order in which they are stored (by sort key value). This is the default
     * behavior. If <i>ScanIndexForward</i> is <code>false</code>, DynamoDB reads the
     * results in reverse order by sort key value, and then returns the results to the
     * client.</p>
     */
    inline bool GetScanIndexForward() const{ return m_scanIndexForward; }

    /**
     * <p>Specifies the order for index traversal: If <code>true</code> (default), the
     * traversal is performed in ascending order; if <code>false</code>, the traversal
     * is performed in descending order. </p> <p>Items with the same partition key
     * value are stored in sorted order by sort key. If the sort key data type is
     * Number, the results are stored in numeric order. For type String, the results
     * are stored in order of ASCII character code values. For type Binary, DynamoDB
     * treats each byte of the binary data as unsigned.</p> <p>If
     * <i>ScanIndexForward</i> is <code>true</code>, DynamoDB returns the results in
     * the order in which they are stored (by sort key value). This is the default
     * behavior. If <i>ScanIndexForward</i> is <code>false</code>, DynamoDB reads the
     * results in reverse order by sort key value, and then returns the results to the
     * client.</p>
     */
    inline void SetScanIndexForward(bool value) { m_scanIndexForwardHasBeenSet = true; m_scanIndexForward = value; }

    /**
     * <p>Specifies the order for index traversal: If <code>true</code> (default), the
     * traversal is performed in ascending order; if <code>false</code>, the traversal
     * is performed in descending order. </p> <p>Items with the same partition key
     * value are stored in sorted order by sort key. If the sort key data type is
     * Number, the results are stored in numeric order. For type String, the results
     * are stored in order of ASCII character code values. For type Binary, DynamoDB
     * treats each byte of the binary data as unsigned.</p> <p>If
     * <i>ScanIndexForward</i> is <code>true</code>, DynamoDB returns the results in
     * the order in which they are stored (by sort key value). This is the default
     * behavior. If <i>ScanIndexForward</i> is <code>false</code>, DynamoDB reads the
     * results in reverse order by sort key value, and then returns the results to the
     * client.</p>
     */
    inline QueryRequest& WithScanIndexForward(bool value) { SetScanIndexForward(value); return *this;}

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetExclusiveStartKey() const{ return m_exclusiveStartKey; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p>
     */
    inline void SetExclusiveStartKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey = value; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p>
     */
    inline void SetExclusiveStartKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey = value; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p>
     */
    inline QueryRequest& WithExclusiveStartKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetExclusiveStartKey(value); return *this;}

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p>
     */
    inline QueryRequest& WithExclusiveStartKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetExclusiveStartKey(value); return *this;}

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p>
     */
    inline QueryRequest& AddExclusiveStartKey(const Aws::String& key, const AttributeValue& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey[key] = value; return *this; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p>
     */
    inline QueryRequest& AddExclusiveStartKey(Aws::String&& key, const AttributeValue& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey[key] = value; return *this; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p>
     */
    inline QueryRequest& AddExclusiveStartKey(const Aws::String& key, AttributeValue&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey[key] = value; return *this; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p>
     */
    inline QueryRequest& AddExclusiveStartKey(Aws::String&& key, AttributeValue&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey[key] = value; return *this; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p>
     */
    inline QueryRequest& AddExclusiveStartKey(const char* key, AttributeValue&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey[key] = value; return *this; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p>
     */
    inline QueryRequest& AddExclusiveStartKey(const char* key, const AttributeValue& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey[key] = value; return *this; }

    
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }

    
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline QueryRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}

    
    inline QueryRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(value); return *this;}

    /**
     * <p>A string that identifies one or more attributes to retrieve from the table.
     * These attributes can include scalars, sets, or elements of a JSON document. The
     * attributes in the expression must be separated by commas.</p> <p>If no attribute
     * names are specified, then all attributes will be returned. If any of the
     * requested attributes are not found, they will not appear in the result.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline const Aws::String& GetProjectionExpression() const{ return m_projectionExpression; }

    /**
     * <p>A string that identifies one or more attributes to retrieve from the table.
     * These attributes can include scalars, sets, or elements of a JSON document. The
     * attributes in the expression must be separated by commas.</p> <p>If no attribute
     * names are specified, then all attributes will be returned. If any of the
     * requested attributes are not found, they will not appear in the result.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline void SetProjectionExpression(const Aws::String& value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression = value; }

    /**
     * <p>A string that identifies one or more attributes to retrieve from the table.
     * These attributes can include scalars, sets, or elements of a JSON document. The
     * attributes in the expression must be separated by commas.</p> <p>If no attribute
     * names are specified, then all attributes will be returned. If any of the
     * requested attributes are not found, they will not appear in the result.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline void SetProjectionExpression(Aws::String&& value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression = value; }

    /**
     * <p>A string that identifies one or more attributes to retrieve from the table.
     * These attributes can include scalars, sets, or elements of a JSON document. The
     * attributes in the expression must be separated by commas.</p> <p>If no attribute
     * names are specified, then all attributes will be returned. If any of the
     * requested attributes are not found, they will not appear in the result.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline void SetProjectionExpression(const char* value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression.assign(value); }

    /**
     * <p>A string that identifies one or more attributes to retrieve from the table.
     * These attributes can include scalars, sets, or elements of a JSON document. The
     * attributes in the expression must be separated by commas.</p> <p>If no attribute
     * names are specified, then all attributes will be returned. If any of the
     * requested attributes are not found, they will not appear in the result.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline QueryRequest& WithProjectionExpression(const Aws::String& value) { SetProjectionExpression(value); return *this;}

    /**
     * <p>A string that identifies one or more attributes to retrieve from the table.
     * These attributes can include scalars, sets, or elements of a JSON document. The
     * attributes in the expression must be separated by commas.</p> <p>If no attribute
     * names are specified, then all attributes will be returned. If any of the
     * requested attributes are not found, they will not appear in the result.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline QueryRequest& WithProjectionExpression(Aws::String&& value) { SetProjectionExpression(value); return *this;}

    /**
     * <p>A string that identifies one or more attributes to retrieve from the table.
     * These attributes can include scalars, sets, or elements of a JSON document. The
     * attributes in the expression must be separated by commas.</p> <p>If no attribute
     * names are specified, then all attributes will be returned. If any of the
     * requested attributes are not found, they will not appear in the result.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline QueryRequest& WithProjectionExpression(const char* value) { SetProjectionExpression(value); return *this;}

    /**
     * <p>A string that contains conditions that DynamoDB applies after the
     * <i>Query</i> operation, but before the data is returned to you. Items that do
     * not satisfy the <i>FilterExpression</i> criteria are not returned.</p> <note>
     * <p>A <i>FilterExpression</i> is applied after the items have already been read;
     * the process of filtering does not consume any additional read capacity
     * units.</p> </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>QueryFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline const Aws::String& GetFilterExpression() const{ return m_filterExpression; }

    /**
     * <p>A string that contains conditions that DynamoDB applies after the
     * <i>Query</i> operation, but before the data is returned to you. Items that do
     * not satisfy the <i>FilterExpression</i> criteria are not returned.</p> <note>
     * <p>A <i>FilterExpression</i> is applied after the items have already been read;
     * the process of filtering does not consume any additional read capacity
     * units.</p> </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>QueryFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }

    /**
     * <p>A string that contains conditions that DynamoDB applies after the
     * <i>Query</i> operation, but before the data is returned to you. Items that do
     * not satisfy the <i>FilterExpression</i> criteria are not returned.</p> <note>
     * <p>A <i>FilterExpression</i> is applied after the items have already been read;
     * the process of filtering does not consume any additional read capacity
     * units.</p> </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>QueryFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }

    /**
     * <p>A string that contains conditions that DynamoDB applies after the
     * <i>Query</i> operation, but before the data is returned to you. Items that do
     * not satisfy the <i>FilterExpression</i> criteria are not returned.</p> <note>
     * <p>A <i>FilterExpression</i> is applied after the items have already been read;
     * the process of filtering does not consume any additional read capacity
     * units.</p> </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>QueryFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }

    /**
     * <p>A string that contains conditions that DynamoDB applies after the
     * <i>Query</i> operation, but before the data is returned to you. Items that do
     * not satisfy the <i>FilterExpression</i> criteria are not returned.</p> <note>
     * <p>A <i>FilterExpression</i> is applied after the items have already been read;
     * the process of filtering does not consume any additional read capacity
     * units.</p> </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>QueryFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline QueryRequest& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}

    /**
     * <p>A string that contains conditions that DynamoDB applies after the
     * <i>Query</i> operation, but before the data is returned to you. Items that do
     * not satisfy the <i>FilterExpression</i> criteria are not returned.</p> <note>
     * <p>A <i>FilterExpression</i> is applied after the items have already been read;
     * the process of filtering does not consume any additional read capacity
     * units.</p> </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>QueryFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline QueryRequest& WithFilterExpression(Aws::String&& value) { SetFilterExpression(value); return *this;}

    /**
     * <p>A string that contains conditions that DynamoDB applies after the
     * <i>Query</i> operation, but before the data is returned to you. Items that do
     * not satisfy the <i>FilterExpression</i> criteria are not returned.</p> <note>
     * <p>A <i>FilterExpression</i> is applied after the items have already been read;
     * the process of filtering does not consume any additional read capacity
     * units.</p> </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>QueryFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline QueryRequest& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}

    /**
     * <p>The condition that specifies the key value(s) for items to be retrieved by
     * the <i>Query</i> action.</p> <p>The condition must perform an equality test on a
     * single partition key value. The condition can also perform one of several
     * comparison tests on a single sort key value. <i>Query</i> can use
     * <i>KeyConditionExpression</i> to retrieve one item with a given partition key
     * value and sort key value, or several items that have the same partition key
     * value but different sort key values.</p> <p>The partition key equality test is
     * required, and must be specified in the following format:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> </p> <p>If
     * you also want to provide a condition for the sort key, it must be combined using
     * <i>AND</i> with the condition for the sort key. Following is an example, using
     * the <b>=</b> comparison operator for the sort key:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> <i>AND</i>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> </p> <p>Valid
     * comparisons for the sort key condition are as follows:</p> <ul> <li> <p>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> - true if the sort
     * key value is equal to <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;</i> <code>:sortkeyval</code> - true if the sort
     * key value is less than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;=</i> <code>:sortkeyval</code> - true if the
     * sort key value is less than or equal to <code>:sortkeyval</code>.</p> </li> <li>
     * <p> <code>sortKeyName</code> <i>&gt;</i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&gt;= </i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than or equal to <code>:sortkeyval</code>.</p> </li>
     * <li> <p> <code>sortKeyName</code> <i>BETWEEN</i> <code>:sortkeyval1</code>
     * <i>AND</i> <code>:sortkeyval2</code> - true if the sort key value is greater
     * than or equal to <code>:sortkeyval1</code>, and less than or equal to
     * <code>:sortkeyval2</code>.</p> </li> <li> <p> <i>begins_with (</i>
     * <code>sortKeyName</code>, <code>:sortkeyval</code> <i>)</i> - true if the sort
     * key value begins with a particular operand. (You cannot use this function with a
     * sort key that is of type Number.) Note that the function name
     * <code>begins_with</code> is case-sensitive.</p> </li> </ul> <p>Use the
     * <i>ExpressionAttributeValues</i> parameter to replace tokens such as
     * <code>:partitionval</code> and <code>:sortval</code> with actual values at
     * runtime.</p> <p>You can optionally use the <i>ExpressionAttributeNames</i>
     * parameter to replace the names of the partition key and sort key with
     * placeholder tokens. This option might be necessary if an attribute name
     * conflicts with a DynamoDB reserved word. For example, the following
     * <i>KeyConditionExpression</i> parameter causes an error because <i>Size</i> is a
     * reserved word:</p> <ul> <li><p> <code>Size = :myval</code> </p> </li> </ul>
     * <p>To work around this, define a placeholder (such a <code>#S</code>) to
     * represent the attribute name <i>Size</i>. <i>KeyConditionExpression</i> then is
     * as follows:</p> <ul> <li><p> <code>#S = :myval</code> </p> </li> </ul> <p>For a
     * list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>For more
     * information on <i>ExpressionAttributeNames</i> and
     * <i>ExpressionAttributeValues</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ExpressionPlaceholders.html">Using
     * Placeholders for Attribute Names and Values</a> in the <i>Amazon DynamoDB
     * Developer Guide</i>.</p> <note> <p> <i>KeyConditionExpression</i> replaces the
     * legacy <i>KeyConditions</i> parameter.</p> </note>
     */
    inline const Aws::String& GetKeyConditionExpression() const{ return m_keyConditionExpression; }

    /**
     * <p>The condition that specifies the key value(s) for items to be retrieved by
     * the <i>Query</i> action.</p> <p>The condition must perform an equality test on a
     * single partition key value. The condition can also perform one of several
     * comparison tests on a single sort key value. <i>Query</i> can use
     * <i>KeyConditionExpression</i> to retrieve one item with a given partition key
     * value and sort key value, or several items that have the same partition key
     * value but different sort key values.</p> <p>The partition key equality test is
     * required, and must be specified in the following format:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> </p> <p>If
     * you also want to provide a condition for the sort key, it must be combined using
     * <i>AND</i> with the condition for the sort key. Following is an example, using
     * the <b>=</b> comparison operator for the sort key:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> <i>AND</i>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> </p> <p>Valid
     * comparisons for the sort key condition are as follows:</p> <ul> <li> <p>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> - true if the sort
     * key value is equal to <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;</i> <code>:sortkeyval</code> - true if the sort
     * key value is less than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;=</i> <code>:sortkeyval</code> - true if the
     * sort key value is less than or equal to <code>:sortkeyval</code>.</p> </li> <li>
     * <p> <code>sortKeyName</code> <i>&gt;</i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&gt;= </i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than or equal to <code>:sortkeyval</code>.</p> </li>
     * <li> <p> <code>sortKeyName</code> <i>BETWEEN</i> <code>:sortkeyval1</code>
     * <i>AND</i> <code>:sortkeyval2</code> - true if the sort key value is greater
     * than or equal to <code>:sortkeyval1</code>, and less than or equal to
     * <code>:sortkeyval2</code>.</p> </li> <li> <p> <i>begins_with (</i>
     * <code>sortKeyName</code>, <code>:sortkeyval</code> <i>)</i> - true if the sort
     * key value begins with a particular operand. (You cannot use this function with a
     * sort key that is of type Number.) Note that the function name
     * <code>begins_with</code> is case-sensitive.</p> </li> </ul> <p>Use the
     * <i>ExpressionAttributeValues</i> parameter to replace tokens such as
     * <code>:partitionval</code> and <code>:sortval</code> with actual values at
     * runtime.</p> <p>You can optionally use the <i>ExpressionAttributeNames</i>
     * parameter to replace the names of the partition key and sort key with
     * placeholder tokens. This option might be necessary if an attribute name
     * conflicts with a DynamoDB reserved word. For example, the following
     * <i>KeyConditionExpression</i> parameter causes an error because <i>Size</i> is a
     * reserved word:</p> <ul> <li><p> <code>Size = :myval</code> </p> </li> </ul>
     * <p>To work around this, define a placeholder (such a <code>#S</code>) to
     * represent the attribute name <i>Size</i>. <i>KeyConditionExpression</i> then is
     * as follows:</p> <ul> <li><p> <code>#S = :myval</code> </p> </li> </ul> <p>For a
     * list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>For more
     * information on <i>ExpressionAttributeNames</i> and
     * <i>ExpressionAttributeValues</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ExpressionPlaceholders.html">Using
     * Placeholders for Attribute Names and Values</a> in the <i>Amazon DynamoDB
     * Developer Guide</i>.</p> <note> <p> <i>KeyConditionExpression</i> replaces the
     * legacy <i>KeyConditions</i> parameter.</p> </note>
     */
    inline void SetKeyConditionExpression(const Aws::String& value) { m_keyConditionExpressionHasBeenSet = true; m_keyConditionExpression = value; }

    /**
     * <p>The condition that specifies the key value(s) for items to be retrieved by
     * the <i>Query</i> action.</p> <p>The condition must perform an equality test on a
     * single partition key value. The condition can also perform one of several
     * comparison tests on a single sort key value. <i>Query</i> can use
     * <i>KeyConditionExpression</i> to retrieve one item with a given partition key
     * value and sort key value, or several items that have the same partition key
     * value but different sort key values.</p> <p>The partition key equality test is
     * required, and must be specified in the following format:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> </p> <p>If
     * you also want to provide a condition for the sort key, it must be combined using
     * <i>AND</i> with the condition for the sort key. Following is an example, using
     * the <b>=</b> comparison operator for the sort key:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> <i>AND</i>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> </p> <p>Valid
     * comparisons for the sort key condition are as follows:</p> <ul> <li> <p>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> - true if the sort
     * key value is equal to <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;</i> <code>:sortkeyval</code> - true if the sort
     * key value is less than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;=</i> <code>:sortkeyval</code> - true if the
     * sort key value is less than or equal to <code>:sortkeyval</code>.</p> </li> <li>
     * <p> <code>sortKeyName</code> <i>&gt;</i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&gt;= </i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than or equal to <code>:sortkeyval</code>.</p> </li>
     * <li> <p> <code>sortKeyName</code> <i>BETWEEN</i> <code>:sortkeyval1</code>
     * <i>AND</i> <code>:sortkeyval2</code> - true if the sort key value is greater
     * than or equal to <code>:sortkeyval1</code>, and less than or equal to
     * <code>:sortkeyval2</code>.</p> </li> <li> <p> <i>begins_with (</i>
     * <code>sortKeyName</code>, <code>:sortkeyval</code> <i>)</i> - true if the sort
     * key value begins with a particular operand. (You cannot use this function with a
     * sort key that is of type Number.) Note that the function name
     * <code>begins_with</code> is case-sensitive.</p> </li> </ul> <p>Use the
     * <i>ExpressionAttributeValues</i> parameter to replace tokens such as
     * <code>:partitionval</code> and <code>:sortval</code> with actual values at
     * runtime.</p> <p>You can optionally use the <i>ExpressionAttributeNames</i>
     * parameter to replace the names of the partition key and sort key with
     * placeholder tokens. This option might be necessary if an attribute name
     * conflicts with a DynamoDB reserved word. For example, the following
     * <i>KeyConditionExpression</i> parameter causes an error because <i>Size</i> is a
     * reserved word:</p> <ul> <li><p> <code>Size = :myval</code> </p> </li> </ul>
     * <p>To work around this, define a placeholder (such a <code>#S</code>) to
     * represent the attribute name <i>Size</i>. <i>KeyConditionExpression</i> then is
     * as follows:</p> <ul> <li><p> <code>#S = :myval</code> </p> </li> </ul> <p>For a
     * list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>For more
     * information on <i>ExpressionAttributeNames</i> and
     * <i>ExpressionAttributeValues</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ExpressionPlaceholders.html">Using
     * Placeholders for Attribute Names and Values</a> in the <i>Amazon DynamoDB
     * Developer Guide</i>.</p> <note> <p> <i>KeyConditionExpression</i> replaces the
     * legacy <i>KeyConditions</i> parameter.</p> </note>
     */
    inline void SetKeyConditionExpression(Aws::String&& value) { m_keyConditionExpressionHasBeenSet = true; m_keyConditionExpression = value; }

    /**
     * <p>The condition that specifies the key value(s) for items to be retrieved by
     * the <i>Query</i> action.</p> <p>The condition must perform an equality test on a
     * single partition key value. The condition can also perform one of several
     * comparison tests on a single sort key value. <i>Query</i> can use
     * <i>KeyConditionExpression</i> to retrieve one item with a given partition key
     * value and sort key value, or several items that have the same partition key
     * value but different sort key values.</p> <p>The partition key equality test is
     * required, and must be specified in the following format:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> </p> <p>If
     * you also want to provide a condition for the sort key, it must be combined using
     * <i>AND</i> with the condition for the sort key. Following is an example, using
     * the <b>=</b> comparison operator for the sort key:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> <i>AND</i>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> </p> <p>Valid
     * comparisons for the sort key condition are as follows:</p> <ul> <li> <p>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> - true if the sort
     * key value is equal to <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;</i> <code>:sortkeyval</code> - true if the sort
     * key value is less than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;=</i> <code>:sortkeyval</code> - true if the
     * sort key value is less than or equal to <code>:sortkeyval</code>.</p> </li> <li>
     * <p> <code>sortKeyName</code> <i>&gt;</i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&gt;= </i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than or equal to <code>:sortkeyval</code>.</p> </li>
     * <li> <p> <code>sortKeyName</code> <i>BETWEEN</i> <code>:sortkeyval1</code>
     * <i>AND</i> <code>:sortkeyval2</code> - true if the sort key value is greater
     * than or equal to <code>:sortkeyval1</code>, and less than or equal to
     * <code>:sortkeyval2</code>.</p> </li> <li> <p> <i>begins_with (</i>
     * <code>sortKeyName</code>, <code>:sortkeyval</code> <i>)</i> - true if the sort
     * key value begins with a particular operand. (You cannot use this function with a
     * sort key that is of type Number.) Note that the function name
     * <code>begins_with</code> is case-sensitive.</p> </li> </ul> <p>Use the
     * <i>ExpressionAttributeValues</i> parameter to replace tokens such as
     * <code>:partitionval</code> and <code>:sortval</code> with actual values at
     * runtime.</p> <p>You can optionally use the <i>ExpressionAttributeNames</i>
     * parameter to replace the names of the partition key and sort key with
     * placeholder tokens. This option might be necessary if an attribute name
     * conflicts with a DynamoDB reserved word. For example, the following
     * <i>KeyConditionExpression</i> parameter causes an error because <i>Size</i> is a
     * reserved word:</p> <ul> <li><p> <code>Size = :myval</code> </p> </li> </ul>
     * <p>To work around this, define a placeholder (such a <code>#S</code>) to
     * represent the attribute name <i>Size</i>. <i>KeyConditionExpression</i> then is
     * as follows:</p> <ul> <li><p> <code>#S = :myval</code> </p> </li> </ul> <p>For a
     * list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>For more
     * information on <i>ExpressionAttributeNames</i> and
     * <i>ExpressionAttributeValues</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ExpressionPlaceholders.html">Using
     * Placeholders for Attribute Names and Values</a> in the <i>Amazon DynamoDB
     * Developer Guide</i>.</p> <note> <p> <i>KeyConditionExpression</i> replaces the
     * legacy <i>KeyConditions</i> parameter.</p> </note>
     */
    inline void SetKeyConditionExpression(const char* value) { m_keyConditionExpressionHasBeenSet = true; m_keyConditionExpression.assign(value); }

    /**
     * <p>The condition that specifies the key value(s) for items to be retrieved by
     * the <i>Query</i> action.</p> <p>The condition must perform an equality test on a
     * single partition key value. The condition can also perform one of several
     * comparison tests on a single sort key value. <i>Query</i> can use
     * <i>KeyConditionExpression</i> to retrieve one item with a given partition key
     * value and sort key value, or several items that have the same partition key
     * value but different sort key values.</p> <p>The partition key equality test is
     * required, and must be specified in the following format:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> </p> <p>If
     * you also want to provide a condition for the sort key, it must be combined using
     * <i>AND</i> with the condition for the sort key. Following is an example, using
     * the <b>=</b> comparison operator for the sort key:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> <i>AND</i>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> </p> <p>Valid
     * comparisons for the sort key condition are as follows:</p> <ul> <li> <p>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> - true if the sort
     * key value is equal to <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;</i> <code>:sortkeyval</code> - true if the sort
     * key value is less than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;=</i> <code>:sortkeyval</code> - true if the
     * sort key value is less than or equal to <code>:sortkeyval</code>.</p> </li> <li>
     * <p> <code>sortKeyName</code> <i>&gt;</i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&gt;= </i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than or equal to <code>:sortkeyval</code>.</p> </li>
     * <li> <p> <code>sortKeyName</code> <i>BETWEEN</i> <code>:sortkeyval1</code>
     * <i>AND</i> <code>:sortkeyval2</code> - true if the sort key value is greater
     * than or equal to <code>:sortkeyval1</code>, and less than or equal to
     * <code>:sortkeyval2</code>.</p> </li> <li> <p> <i>begins_with (</i>
     * <code>sortKeyName</code>, <code>:sortkeyval</code> <i>)</i> - true if the sort
     * key value begins with a particular operand. (You cannot use this function with a
     * sort key that is of type Number.) Note that the function name
     * <code>begins_with</code> is case-sensitive.</p> </li> </ul> <p>Use the
     * <i>ExpressionAttributeValues</i> parameter to replace tokens such as
     * <code>:partitionval</code> and <code>:sortval</code> with actual values at
     * runtime.</p> <p>You can optionally use the <i>ExpressionAttributeNames</i>
     * parameter to replace the names of the partition key and sort key with
     * placeholder tokens. This option might be necessary if an attribute name
     * conflicts with a DynamoDB reserved word. For example, the following
     * <i>KeyConditionExpression</i> parameter causes an error because <i>Size</i> is a
     * reserved word:</p> <ul> <li><p> <code>Size = :myval</code> </p> </li> </ul>
     * <p>To work around this, define a placeholder (such a <code>#S</code>) to
     * represent the attribute name <i>Size</i>. <i>KeyConditionExpression</i> then is
     * as follows:</p> <ul> <li><p> <code>#S = :myval</code> </p> </li> </ul> <p>For a
     * list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>For more
     * information on <i>ExpressionAttributeNames</i> and
     * <i>ExpressionAttributeValues</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ExpressionPlaceholders.html">Using
     * Placeholders for Attribute Names and Values</a> in the <i>Amazon DynamoDB
     * Developer Guide</i>.</p> <note> <p> <i>KeyConditionExpression</i> replaces the
     * legacy <i>KeyConditions</i> parameter.</p> </note>
     */
    inline QueryRequest& WithKeyConditionExpression(const Aws::String& value) { SetKeyConditionExpression(value); return *this;}

    /**
     * <p>The condition that specifies the key value(s) for items to be retrieved by
     * the <i>Query</i> action.</p> <p>The condition must perform an equality test on a
     * single partition key value. The condition can also perform one of several
     * comparison tests on a single sort key value. <i>Query</i> can use
     * <i>KeyConditionExpression</i> to retrieve one item with a given partition key
     * value and sort key value, or several items that have the same partition key
     * value but different sort key values.</p> <p>The partition key equality test is
     * required, and must be specified in the following format:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> </p> <p>If
     * you also want to provide a condition for the sort key, it must be combined using
     * <i>AND</i> with the condition for the sort key. Following is an example, using
     * the <b>=</b> comparison operator for the sort key:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> <i>AND</i>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> </p> <p>Valid
     * comparisons for the sort key condition are as follows:</p> <ul> <li> <p>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> - true if the sort
     * key value is equal to <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;</i> <code>:sortkeyval</code> - true if the sort
     * key value is less than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;=</i> <code>:sortkeyval</code> - true if the
     * sort key value is less than or equal to <code>:sortkeyval</code>.</p> </li> <li>
     * <p> <code>sortKeyName</code> <i>&gt;</i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&gt;= </i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than or equal to <code>:sortkeyval</code>.</p> </li>
     * <li> <p> <code>sortKeyName</code> <i>BETWEEN</i> <code>:sortkeyval1</code>
     * <i>AND</i> <code>:sortkeyval2</code> - true if the sort key value is greater
     * than or equal to <code>:sortkeyval1</code>, and less than or equal to
     * <code>:sortkeyval2</code>.</p> </li> <li> <p> <i>begins_with (</i>
     * <code>sortKeyName</code>, <code>:sortkeyval</code> <i>)</i> - true if the sort
     * key value begins with a particular operand. (You cannot use this function with a
     * sort key that is of type Number.) Note that the function name
     * <code>begins_with</code> is case-sensitive.</p> </li> </ul> <p>Use the
     * <i>ExpressionAttributeValues</i> parameter to replace tokens such as
     * <code>:partitionval</code> and <code>:sortval</code> with actual values at
     * runtime.</p> <p>You can optionally use the <i>ExpressionAttributeNames</i>
     * parameter to replace the names of the partition key and sort key with
     * placeholder tokens. This option might be necessary if an attribute name
     * conflicts with a DynamoDB reserved word. For example, the following
     * <i>KeyConditionExpression</i> parameter causes an error because <i>Size</i> is a
     * reserved word:</p> <ul> <li><p> <code>Size = :myval</code> </p> </li> </ul>
     * <p>To work around this, define a placeholder (such a <code>#S</code>) to
     * represent the attribute name <i>Size</i>. <i>KeyConditionExpression</i> then is
     * as follows:</p> <ul> <li><p> <code>#S = :myval</code> </p> </li> </ul> <p>For a
     * list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>For more
     * information on <i>ExpressionAttributeNames</i> and
     * <i>ExpressionAttributeValues</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ExpressionPlaceholders.html">Using
     * Placeholders for Attribute Names and Values</a> in the <i>Amazon DynamoDB
     * Developer Guide</i>.</p> <note> <p> <i>KeyConditionExpression</i> replaces the
     * legacy <i>KeyConditions</i> parameter.</p> </note>
     */
    inline QueryRequest& WithKeyConditionExpression(Aws::String&& value) { SetKeyConditionExpression(value); return *this;}

    /**
     * <p>The condition that specifies the key value(s) for items to be retrieved by
     * the <i>Query</i> action.</p> <p>The condition must perform an equality test on a
     * single partition key value. The condition can also perform one of several
     * comparison tests on a single sort key value. <i>Query</i> can use
     * <i>KeyConditionExpression</i> to retrieve one item with a given partition key
     * value and sort key value, or several items that have the same partition key
     * value but different sort key values.</p> <p>The partition key equality test is
     * required, and must be specified in the following format:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> </p> <p>If
     * you also want to provide a condition for the sort key, it must be combined using
     * <i>AND</i> with the condition for the sort key. Following is an example, using
     * the <b>=</b> comparison operator for the sort key:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> <i>AND</i>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> </p> <p>Valid
     * comparisons for the sort key condition are as follows:</p> <ul> <li> <p>
     * <code>sortKeyName</code> <i>=</i> <code>:sortkeyval</code> - true if the sort
     * key value is equal to <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;</i> <code>:sortkeyval</code> - true if the sort
     * key value is less than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&lt;=</i> <code>:sortkeyval</code> - true if the
     * sort key value is less than or equal to <code>:sortkeyval</code>.</p> </li> <li>
     * <p> <code>sortKeyName</code> <i>&gt;</i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <i>&gt;= </i> <code>:sortkeyval</code> - true if the
     * sort key value is greater than or equal to <code>:sortkeyval</code>.</p> </li>
     * <li> <p> <code>sortKeyName</code> <i>BETWEEN</i> <code>:sortkeyval1</code>
     * <i>AND</i> <code>:sortkeyval2</code> - true if the sort key value is greater
     * than or equal to <code>:sortkeyval1</code>, and less than or equal to
     * <code>:sortkeyval2</code>.</p> </li> <li> <p> <i>begins_with (</i>
     * <code>sortKeyName</code>, <code>:sortkeyval</code> <i>)</i> - true if the sort
     * key value begins with a particular operand. (You cannot use this function with a
     * sort key that is of type Number.) Note that the function name
     * <code>begins_with</code> is case-sensitive.</p> </li> </ul> <p>Use the
     * <i>ExpressionAttributeValues</i> parameter to replace tokens such as
     * <code>:partitionval</code> and <code>:sortval</code> with actual values at
     * runtime.</p> <p>You can optionally use the <i>ExpressionAttributeNames</i>
     * parameter to replace the names of the partition key and sort key with
     * placeholder tokens. This option might be necessary if an attribute name
     * conflicts with a DynamoDB reserved word. For example, the following
     * <i>KeyConditionExpression</i> parameter causes an error because <i>Size</i> is a
     * reserved word:</p> <ul> <li><p> <code>Size = :myval</code> </p> </li> </ul>
     * <p>To work around this, define a placeholder (such a <code>#S</code>) to
     * represent the attribute name <i>Size</i>. <i>KeyConditionExpression</i> then is
     * as follows:</p> <ul> <li><p> <code>#S = :myval</code> </p> </li> </ul> <p>For a
     * list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>For more
     * information on <i>ExpressionAttributeNames</i> and
     * <i>ExpressionAttributeValues</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ExpressionPlaceholders.html">Using
     * Placeholders for Attribute Names and Values</a> in the <i>Amazon DynamoDB
     * Developer Guide</i>.</p> <note> <p> <i>KeyConditionExpression</i> replaces the
     * legacy <i>KeyConditions</i> parameter.</p> </note>
     */
    inline QueryRequest& WithKeyConditionExpression(const char* value) { SetKeyConditionExpression(value); return *this;}

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p>To access an attribute whose name conflicts with a DynamoDB reserved
     * word.</p> </li> <li> <p>To create a placeholder for repeating occurrences of an
     * attribute name in an expression.</p> </li> <li> <p>To prevent special characters
     * in an attribute name from being misinterpreted in an expression.</p> </li> </ul>
     * <p>Use the <b>#</b> character in an expression to dereference an attribute name.
     * For example, consider the following attribute name:</p> <ul> <li> <p>
     * <code>Percentile</code> </p> </li> </ul> <p>The name of this attribute conflicts
     * with a reserved word, so it cannot be used directly in an expression. (For the
     * complete list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could then use
     * this substitution in an expression, as in this example:</p> <ul> <li> <p>
     * <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExpressionAttributeNames() const{ return m_expressionAttributeNames; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p>To access an attribute whose name conflicts with a DynamoDB reserved
     * word.</p> </li> <li> <p>To create a placeholder for repeating occurrences of an
     * attribute name in an expression.</p> </li> <li> <p>To prevent special characters
     * in an attribute name from being misinterpreted in an expression.</p> </li> </ul>
     * <p>Use the <b>#</b> character in an expression to dereference an attribute name.
     * For example, consider the following attribute name:</p> <ul> <li> <p>
     * <code>Percentile</code> </p> </li> </ul> <p>The name of this attribute conflicts
     * with a reserved word, so it cannot be used directly in an expression. (For the
     * complete list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could then use
     * this substitution in an expression, as in this example:</p> <ul> <li> <p>
     * <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = value; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p>To access an attribute whose name conflicts with a DynamoDB reserved
     * word.</p> </li> <li> <p>To create a placeholder for repeating occurrences of an
     * attribute name in an expression.</p> </li> <li> <p>To prevent special characters
     * in an attribute name from being misinterpreted in an expression.</p> </li> </ul>
     * <p>Use the <b>#</b> character in an expression to dereference an attribute name.
     * For example, consider the following attribute name:</p> <ul> <li> <p>
     * <code>Percentile</code> </p> </li> </ul> <p>The name of this attribute conflicts
     * with a reserved word, so it cannot be used directly in an expression. (For the
     * complete list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could then use
     * this substitution in an expression, as in this example:</p> <ul> <li> <p>
     * <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = value; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p>To access an attribute whose name conflicts with a DynamoDB reserved
     * word.</p> </li> <li> <p>To create a placeholder for repeating occurrences of an
     * attribute name in an expression.</p> </li> <li> <p>To prevent special characters
     * in an attribute name from being misinterpreted in an expression.</p> </li> </ul>
     * <p>Use the <b>#</b> character in an expression to dereference an attribute name.
     * For example, consider the following attribute name:</p> <ul> <li> <p>
     * <code>Percentile</code> </p> </li> </ul> <p>The name of this attribute conflicts
     * with a reserved word, so it cannot be used directly in an expression. (For the
     * complete list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could then use
     * this substitution in an expression, as in this example:</p> <ul> <li> <p>
     * <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p>To access an attribute whose name conflicts with a DynamoDB reserved
     * word.</p> </li> <li> <p>To create a placeholder for repeating occurrences of an
     * attribute name in an expression.</p> </li> <li> <p>To prevent special characters
     * in an attribute name from being misinterpreted in an expression.</p> </li> </ul>
     * <p>Use the <b>#</b> character in an expression to dereference an attribute name.
     * For example, consider the following attribute name:</p> <ul> <li> <p>
     * <code>Percentile</code> </p> </li> </ul> <p>The name of this attribute conflicts
     * with a reserved word, so it cannot be used directly in an expression. (For the
     * complete list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could then use
     * this substitution in an expression, as in this example:</p> <ul> <li> <p>
     * <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(value); return *this;}

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p>To access an attribute whose name conflicts with a DynamoDB reserved
     * word.</p> </li> <li> <p>To create a placeholder for repeating occurrences of an
     * attribute name in an expression.</p> </li> <li> <p>To prevent special characters
     * in an attribute name from being misinterpreted in an expression.</p> </li> </ul>
     * <p>Use the <b>#</b> character in an expression to dereference an attribute name.
     * For example, consider the following attribute name:</p> <ul> <li> <p>
     * <code>Percentile</code> </p> </li> </ul> <p>The name of this attribute conflicts
     * with a reserved word, so it cannot be used directly in an expression. (For the
     * complete list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could then use
     * this substitution in an expression, as in this example:</p> <ul> <li> <p>
     * <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p>To access an attribute whose name conflicts with a DynamoDB reserved
     * word.</p> </li> <li> <p>To create a placeholder for repeating occurrences of an
     * attribute name in an expression.</p> </li> <li> <p>To prevent special characters
     * in an attribute name from being misinterpreted in an expression.</p> </li> </ul>
     * <p>Use the <b>#</b> character in an expression to dereference an attribute name.
     * For example, consider the following attribute name:</p> <ul> <li> <p>
     * <code>Percentile</code> </p> </li> </ul> <p>The name of this attribute conflicts
     * with a reserved word, so it cannot be used directly in an expression. (For the
     * complete list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could then use
     * this substitution in an expression, as in this example:</p> <ul> <li> <p>
     * <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p>To access an attribute whose name conflicts with a DynamoDB reserved
     * word.</p> </li> <li> <p>To create a placeholder for repeating occurrences of an
     * attribute name in an expression.</p> </li> <li> <p>To prevent special characters
     * in an attribute name from being misinterpreted in an expression.</p> </li> </ul>
     * <p>Use the <b>#</b> character in an expression to dereference an attribute name.
     * For example, consider the following attribute name:</p> <ul> <li> <p>
     * <code>Percentile</code> </p> </li> </ul> <p>The name of this attribute conflicts
     * with a reserved word, so it cannot be used directly in an expression. (For the
     * complete list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could then use
     * this substitution in an expression, as in this example:</p> <ul> <li> <p>
     * <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p>To access an attribute whose name conflicts with a DynamoDB reserved
     * word.</p> </li> <li> <p>To create a placeholder for repeating occurrences of an
     * attribute name in an expression.</p> </li> <li> <p>To prevent special characters
     * in an attribute name from being misinterpreted in an expression.</p> </li> </ul>
     * <p>Use the <b>#</b> character in an expression to dereference an attribute name.
     * For example, consider the following attribute name:</p> <ul> <li> <p>
     * <code>Percentile</code> </p> </li> </ul> <p>The name of this attribute conflicts
     * with a reserved word, so it cannot be used directly in an expression. (For the
     * complete list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could then use
     * this substitution in an expression, as in this example:</p> <ul> <li> <p>
     * <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p>To access an attribute whose name conflicts with a DynamoDB reserved
     * word.</p> </li> <li> <p>To create a placeholder for repeating occurrences of an
     * attribute name in an expression.</p> </li> <li> <p>To prevent special characters
     * in an attribute name from being misinterpreted in an expression.</p> </li> </ul>
     * <p>Use the <b>#</b> character in an expression to dereference an attribute name.
     * For example, consider the following attribute name:</p> <ul> <li> <p>
     * <code>Percentile</code> </p> </li> </ul> <p>The name of this attribute conflicts
     * with a reserved word, so it cannot be used directly in an expression. (For the
     * complete list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could then use
     * this substitution in an expression, as in this example:</p> <ul> <li> <p>
     * <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p>To access an attribute whose name conflicts with a DynamoDB reserved
     * word.</p> </li> <li> <p>To create a placeholder for repeating occurrences of an
     * attribute name in an expression.</p> </li> <li> <p>To prevent special characters
     * in an attribute name from being misinterpreted in an expression.</p> </li> </ul>
     * <p>Use the <b>#</b> character in an expression to dereference an attribute name.
     * For example, consider the following attribute name:</p> <ul> <li> <p>
     * <code>Percentile</code> </p> </li> </ul> <p>The name of this attribute conflicts
     * with a reserved word, so it cannot be used directly in an expression. (For the
     * complete list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could then use
     * this substitution in an expression, as in this example:</p> <ul> <li> <p>
     * <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p>To access an attribute whose name conflicts with a DynamoDB reserved
     * word.</p> </li> <li> <p>To create a placeholder for repeating occurrences of an
     * attribute name in an expression.</p> </li> <li> <p>To prevent special characters
     * in an attribute name from being misinterpreted in an expression.</p> </li> </ul>
     * <p>Use the <b>#</b> character in an expression to dereference an attribute name.
     * For example, consider the following attribute name:</p> <ul> <li> <p>
     * <code>Percentile</code> </p> </li> </ul> <p>The name of this attribute conflicts
     * with a reserved word, so it cannot be used directly in an expression. (For the
     * complete list of reserved words, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <i>ExpressionAttributeNames</i>:</p> <ul>
     * <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could then use
     * this substitution in an expression, as in this example:</p> <ul> <li> <p>
     * <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information on expression attribute names, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <i>ExpressionAttributeValues</i> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetExpressionAttributeValues() const{ return m_expressionAttributeValues; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <i>ExpressionAttributeValues</i> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = value; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <i>ExpressionAttributeValues</i> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = value; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <i>ExpressionAttributeValues</i> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& WithExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { SetExpressionAttributeValues(value); return *this;}

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <i>ExpressionAttributeValues</i> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& WithExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { SetExpressionAttributeValues(value); return *this;}

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <i>ExpressionAttributeValues</i> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddExpressionAttributeValues(const Aws::String& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <i>ExpressionAttributeValues</i> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddExpressionAttributeValues(Aws::String&& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <i>ExpressionAttributeValues</i> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddExpressionAttributeValues(const Aws::String& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <i>ExpressionAttributeValues</i> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddExpressionAttributeValues(Aws::String&& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <i>ExpressionAttributeValues</i> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddExpressionAttributeValues(const char* key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <i>ExpressionAttributeValues</i> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline QueryRequest& AddExpressionAttributeValues(const char* key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

  private:
    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;
    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;
    Select m_select;
    bool m_selectHasBeenSet;
    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    bool m_consistentRead;
    bool m_consistentReadHasBeenSet;
    Aws::Map<Aws::String, Condition> m_keyConditions;
    bool m_keyConditionsHasBeenSet;
    Aws::Map<Aws::String, Condition> m_queryFilter;
    bool m_queryFilterHasBeenSet;
    ConditionalOperator m_conditionalOperator;
    bool m_conditionalOperatorHasBeenSet;
    bool m_scanIndexForward;
    bool m_scanIndexForwardHasBeenSet;
    Aws::Map<Aws::String, AttributeValue> m_exclusiveStartKey;
    bool m_exclusiveStartKeyHasBeenSet;
    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet;
    Aws::String m_projectionExpression;
    bool m_projectionExpressionHasBeenSet;
    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet;
    Aws::String m_keyConditionExpression;
    bool m_keyConditionExpressionHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet;
    Aws::Map<Aws::String, AttributeValue> m_expressionAttributeValues;
    bool m_expressionAttributeValuesHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
