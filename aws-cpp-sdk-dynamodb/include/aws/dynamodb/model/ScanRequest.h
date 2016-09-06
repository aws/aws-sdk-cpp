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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Select.h>
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
   * <p>Represents the input of a <i>Scan</i> operation.</p>
   */
  class AWS_DYNAMODB_API ScanRequest : public DynamoDBRequest
  {
  public:
    ScanRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the table containing the requested items; or, if you provide
     * <code>IndexName</code>, the name of the table to which that index belongs.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table containing the requested items; or, if you provide
     * <code>IndexName</code>, the name of the table to which that index belongs.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table containing the requested items; or, if you provide
     * <code>IndexName</code>, the name of the table to which that index belongs.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table containing the requested items; or, if you provide
     * <code>IndexName</code>, the name of the table to which that index belongs.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table containing the requested items; or, if you provide
     * <code>IndexName</code>, the name of the table to which that index belongs.</p>
     */
    inline ScanRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table containing the requested items; or, if you provide
     * <code>IndexName</code>, the name of the table to which that index belongs.</p>
     */
    inline ScanRequest& WithTableName(Aws::String&& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table containing the requested items; or, if you provide
     * <code>IndexName</code>, the name of the table to which that index belongs.</p>
     */
    inline ScanRequest& WithTableName(const char* value) { SetTableName(value); return *this;}

    /**
     * <p>The name of a secondary index to scan. This index can be any local secondary
     * index or global secondary index. Note that if you use the <code>IndexName</code>
     * parameter, you must also provide <code>TableName</code>.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of a secondary index to scan. This index can be any local secondary
     * index or global secondary index. Note that if you use the <code>IndexName</code>
     * parameter, you must also provide <code>TableName</code>.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of a secondary index to scan. This index can be any local secondary
     * index or global secondary index. Note that if you use the <code>IndexName</code>
     * parameter, you must also provide <code>TableName</code>.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The name of a secondary index to scan. This index can be any local secondary
     * index or global secondary index. Note that if you use the <code>IndexName</code>
     * parameter, you must also provide <code>TableName</code>.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The name of a secondary index to scan. This index can be any local secondary
     * index or global secondary index. Note that if you use the <code>IndexName</code>
     * parameter, you must also provide <code>TableName</code>.</p>
     */
    inline ScanRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of a secondary index to scan. This index can be any local secondary
     * index or global secondary index. Note that if you use the <code>IndexName</code>
     * parameter, you must also provide <code>TableName</code>.</p>
     */
    inline ScanRequest& WithIndexName(Aws::String&& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of a secondary index to scan. This index can be any local secondary
     * index or global secondary index. Note that if you use the <code>IndexName</code>
     * parameter, you must also provide <code>TableName</code>.</p>
     */
    inline ScanRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}

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
     * amount of data that is returned to an application.</p>
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
     * amount of data that is returned to an application.</p>
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
     * amount of data that is returned to an application.</p>
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
     * amount of data that is returned to an application.</p>
     */
    inline ScanRequest& WithAttributesToGet(const Aws::Vector<Aws::String>& value) { SetAttributesToGet(value); return *this;}

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
     * amount of data that is returned to an application.</p>
     */
    inline ScanRequest& WithAttributesToGet(Aws::Vector<Aws::String>&& value) { SetAttributesToGet(value); return *this;}

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
     * amount of data that is returned to an application.</p>
     */
    inline ScanRequest& AddAttributesToGet(const Aws::String& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }

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
     * amount of data that is returned to an application.</p>
     */
    inline ScanRequest& AddAttributesToGet(Aws::String&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }

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
     * amount of data that is returned to an application.</p>
     */
    inline ScanRequest& AddAttributesToGet(const char* value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }

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
    inline ScanRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>The attributes to be returned in the result. You can retrieve all item
     * attributes, specific item attributes, or the count of matching items.</p> <ul>
     * <li> <p> <code>ALL_ATTRIBUTES</code> - Returns all of the item attributes.</p>
     * </li> <li> <p> <code>ALL_PROJECTED_ATTRIBUTES</code> - Allowed only when
     * querying an index. Retrieves all attributes that have been projected into the
     * index. If the index is configured to project all attributes, this return value
     * is equivalent to specifying <code>ALL_ATTRIBUTES</code>.</p> </li> <li> <p>
     * <code>COUNT</code> - Returns the number of matching items, rather than the
     * matching items themselves.</p> </li> <li> <p> <code>SPECIFIC_ATTRIBUTES</code> -
     * Returns only the attributes listed in <i>AttributesToGet</i>. This return value
     * is equivalent to specifying <i>AttributesToGet</i> without specifying any value
     * for <i>Select</i>.</p> </li> </ul> <p>If neither <i>Select</i> nor
     * <i>AttributesToGet</i> are specified, DynamoDB defaults to
     * <code>ALL_ATTRIBUTES</code>. You cannot use both <i>AttributesToGet</i> and
     * <i>Select</i> together in a single request, unless the value for <i>Select</i>
     * is <code>SPECIFIC_ATTRIBUTES</code>. (This usage is equivalent to specifying
     * <i>AttributesToGet</i> without any value for <i>Select</i>.)</p>
     */
    inline const Select& GetSelect() const{ return m_select; }

    /**
     * <p>The attributes to be returned in the result. You can retrieve all item
     * attributes, specific item attributes, or the count of matching items.</p> <ul>
     * <li> <p> <code>ALL_ATTRIBUTES</code> - Returns all of the item attributes.</p>
     * </li> <li> <p> <code>ALL_PROJECTED_ATTRIBUTES</code> - Allowed only when
     * querying an index. Retrieves all attributes that have been projected into the
     * index. If the index is configured to project all attributes, this return value
     * is equivalent to specifying <code>ALL_ATTRIBUTES</code>.</p> </li> <li> <p>
     * <code>COUNT</code> - Returns the number of matching items, rather than the
     * matching items themselves.</p> </li> <li> <p> <code>SPECIFIC_ATTRIBUTES</code> -
     * Returns only the attributes listed in <i>AttributesToGet</i>. This return value
     * is equivalent to specifying <i>AttributesToGet</i> without specifying any value
     * for <i>Select</i>.</p> </li> </ul> <p>If neither <i>Select</i> nor
     * <i>AttributesToGet</i> are specified, DynamoDB defaults to
     * <code>ALL_ATTRIBUTES</code>. You cannot use both <i>AttributesToGet</i> and
     * <i>Select</i> together in a single request, unless the value for <i>Select</i>
     * is <code>SPECIFIC_ATTRIBUTES</code>. (This usage is equivalent to specifying
     * <i>AttributesToGet</i> without any value for <i>Select</i>.)</p>
     */
    inline void SetSelect(const Select& value) { m_selectHasBeenSet = true; m_select = value; }

    /**
     * <p>The attributes to be returned in the result. You can retrieve all item
     * attributes, specific item attributes, or the count of matching items.</p> <ul>
     * <li> <p> <code>ALL_ATTRIBUTES</code> - Returns all of the item attributes.</p>
     * </li> <li> <p> <code>ALL_PROJECTED_ATTRIBUTES</code> - Allowed only when
     * querying an index. Retrieves all attributes that have been projected into the
     * index. If the index is configured to project all attributes, this return value
     * is equivalent to specifying <code>ALL_ATTRIBUTES</code>.</p> </li> <li> <p>
     * <code>COUNT</code> - Returns the number of matching items, rather than the
     * matching items themselves.</p> </li> <li> <p> <code>SPECIFIC_ATTRIBUTES</code> -
     * Returns only the attributes listed in <i>AttributesToGet</i>. This return value
     * is equivalent to specifying <i>AttributesToGet</i> without specifying any value
     * for <i>Select</i>.</p> </li> </ul> <p>If neither <i>Select</i> nor
     * <i>AttributesToGet</i> are specified, DynamoDB defaults to
     * <code>ALL_ATTRIBUTES</code>. You cannot use both <i>AttributesToGet</i> and
     * <i>Select</i> together in a single request, unless the value for <i>Select</i>
     * is <code>SPECIFIC_ATTRIBUTES</code>. (This usage is equivalent to specifying
     * <i>AttributesToGet</i> without any value for <i>Select</i>.)</p>
     */
    inline void SetSelect(Select&& value) { m_selectHasBeenSet = true; m_select = value; }

    /**
     * <p>The attributes to be returned in the result. You can retrieve all item
     * attributes, specific item attributes, or the count of matching items.</p> <ul>
     * <li> <p> <code>ALL_ATTRIBUTES</code> - Returns all of the item attributes.</p>
     * </li> <li> <p> <code>ALL_PROJECTED_ATTRIBUTES</code> - Allowed only when
     * querying an index. Retrieves all attributes that have been projected into the
     * index. If the index is configured to project all attributes, this return value
     * is equivalent to specifying <code>ALL_ATTRIBUTES</code>.</p> </li> <li> <p>
     * <code>COUNT</code> - Returns the number of matching items, rather than the
     * matching items themselves.</p> </li> <li> <p> <code>SPECIFIC_ATTRIBUTES</code> -
     * Returns only the attributes listed in <i>AttributesToGet</i>. This return value
     * is equivalent to specifying <i>AttributesToGet</i> without specifying any value
     * for <i>Select</i>.</p> </li> </ul> <p>If neither <i>Select</i> nor
     * <i>AttributesToGet</i> are specified, DynamoDB defaults to
     * <code>ALL_ATTRIBUTES</code>. You cannot use both <i>AttributesToGet</i> and
     * <i>Select</i> together in a single request, unless the value for <i>Select</i>
     * is <code>SPECIFIC_ATTRIBUTES</code>. (This usage is equivalent to specifying
     * <i>AttributesToGet</i> without any value for <i>Select</i>.)</p>
     */
    inline ScanRequest& WithSelect(const Select& value) { SetSelect(value); return *this;}

    /**
     * <p>The attributes to be returned in the result. You can retrieve all item
     * attributes, specific item attributes, or the count of matching items.</p> <ul>
     * <li> <p> <code>ALL_ATTRIBUTES</code> - Returns all of the item attributes.</p>
     * </li> <li> <p> <code>ALL_PROJECTED_ATTRIBUTES</code> - Allowed only when
     * querying an index. Retrieves all attributes that have been projected into the
     * index. If the index is configured to project all attributes, this return value
     * is equivalent to specifying <code>ALL_ATTRIBUTES</code>.</p> </li> <li> <p>
     * <code>COUNT</code> - Returns the number of matching items, rather than the
     * matching items themselves.</p> </li> <li> <p> <code>SPECIFIC_ATTRIBUTES</code> -
     * Returns only the attributes listed in <i>AttributesToGet</i>. This return value
     * is equivalent to specifying <i>AttributesToGet</i> without specifying any value
     * for <i>Select</i>.</p> </li> </ul> <p>If neither <i>Select</i> nor
     * <i>AttributesToGet</i> are specified, DynamoDB defaults to
     * <code>ALL_ATTRIBUTES</code>. You cannot use both <i>AttributesToGet</i> and
     * <i>Select</i> together in a single request, unless the value for <i>Select</i>
     * is <code>SPECIFIC_ATTRIBUTES</code>. (This usage is equivalent to specifying
     * <i>AttributesToGet</i> without any value for <i>Select</i>.)</p>
     */
    inline ScanRequest& WithSelect(Select&& value) { SetSelect(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the scan results and returns only the desired
     * values.</p> <note> <p>This parameter does not support attributes of type List or
     * Map.</p> </note> <p>If you specify more than one condition in the
     * <i>ScanFilter</i> map, then by default all of the conditions must evaluate to
     * true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Each <i>ScanFilter</i> element consists of an attribute name to
     * compare, along with the following:</p> <ul> <li> <p> <i>AttributeValueList</i> -
     * One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the operator specified in
     * <i>ComparisonOperator</i> .</p> <p>For type Number, value comparisons are
     * numeric.</p> <p>String value comparisons for greater than, equals, or less than
     * are based on ASCII character code values. For example, <code>a</code> is greater
     * than <code>A</code>, and <code>a</code> is greater than <code>B</code>. For a
     * list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>.</p>
     * </li> </ul>
     */
    inline const Aws::Map<Aws::String, Condition>& GetScanFilter() const{ return m_scanFilter; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the scan results and returns only the desired
     * values.</p> <note> <p>This parameter does not support attributes of type List or
     * Map.</p> </note> <p>If you specify more than one condition in the
     * <i>ScanFilter</i> map, then by default all of the conditions must evaluate to
     * true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Each <i>ScanFilter</i> element consists of an attribute name to
     * compare, along with the following:</p> <ul> <li> <p> <i>AttributeValueList</i> -
     * One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the operator specified in
     * <i>ComparisonOperator</i> .</p> <p>For type Number, value comparisons are
     * numeric.</p> <p>String value comparisons for greater than, equals, or less than
     * are based on ASCII character code values. For example, <code>a</code> is greater
     * than <code>A</code>, and <code>a</code> is greater than <code>B</code>. For a
     * list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>.</p>
     * </li> </ul>
     */
    inline void SetScanFilter(const Aws::Map<Aws::String, Condition>& value) { m_scanFilterHasBeenSet = true; m_scanFilter = value; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the scan results and returns only the desired
     * values.</p> <note> <p>This parameter does not support attributes of type List or
     * Map.</p> </note> <p>If you specify more than one condition in the
     * <i>ScanFilter</i> map, then by default all of the conditions must evaluate to
     * true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Each <i>ScanFilter</i> element consists of an attribute name to
     * compare, along with the following:</p> <ul> <li> <p> <i>AttributeValueList</i> -
     * One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the operator specified in
     * <i>ComparisonOperator</i> .</p> <p>For type Number, value comparisons are
     * numeric.</p> <p>String value comparisons for greater than, equals, or less than
     * are based on ASCII character code values. For example, <code>a</code> is greater
     * than <code>A</code>, and <code>a</code> is greater than <code>B</code>. For a
     * list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>.</p>
     * </li> </ul>
     */
    inline void SetScanFilter(Aws::Map<Aws::String, Condition>&& value) { m_scanFilterHasBeenSet = true; m_scanFilter = value; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the scan results and returns only the desired
     * values.</p> <note> <p>This parameter does not support attributes of type List or
     * Map.</p> </note> <p>If you specify more than one condition in the
     * <i>ScanFilter</i> map, then by default all of the conditions must evaluate to
     * true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Each <i>ScanFilter</i> element consists of an attribute name to
     * compare, along with the following:</p> <ul> <li> <p> <i>AttributeValueList</i> -
     * One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the operator specified in
     * <i>ComparisonOperator</i> .</p> <p>For type Number, value comparisons are
     * numeric.</p> <p>String value comparisons for greater than, equals, or less than
     * are based on ASCII character code values. For example, <code>a</code> is greater
     * than <code>A</code>, and <code>a</code> is greater than <code>B</code>. For a
     * list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>.</p>
     * </li> </ul>
     */
    inline ScanRequest& WithScanFilter(const Aws::Map<Aws::String, Condition>& value) { SetScanFilter(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the scan results and returns only the desired
     * values.</p> <note> <p>This parameter does not support attributes of type List or
     * Map.</p> </note> <p>If you specify more than one condition in the
     * <i>ScanFilter</i> map, then by default all of the conditions must evaluate to
     * true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Each <i>ScanFilter</i> element consists of an attribute name to
     * compare, along with the following:</p> <ul> <li> <p> <i>AttributeValueList</i> -
     * One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the operator specified in
     * <i>ComparisonOperator</i> .</p> <p>For type Number, value comparisons are
     * numeric.</p> <p>String value comparisons for greater than, equals, or less than
     * are based on ASCII character code values. For example, <code>a</code> is greater
     * than <code>A</code>, and <code>a</code> is greater than <code>B</code>. For a
     * list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>.</p>
     * </li> </ul>
     */
    inline ScanRequest& WithScanFilter(Aws::Map<Aws::String, Condition>&& value) { SetScanFilter(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the scan results and returns only the desired
     * values.</p> <note> <p>This parameter does not support attributes of type List or
     * Map.</p> </note> <p>If you specify more than one condition in the
     * <i>ScanFilter</i> map, then by default all of the conditions must evaluate to
     * true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Each <i>ScanFilter</i> element consists of an attribute name to
     * compare, along with the following:</p> <ul> <li> <p> <i>AttributeValueList</i> -
     * One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the operator specified in
     * <i>ComparisonOperator</i> .</p> <p>For type Number, value comparisons are
     * numeric.</p> <p>String value comparisons for greater than, equals, or less than
     * are based on ASCII character code values. For example, <code>a</code> is greater
     * than <code>A</code>, and <code>a</code> is greater than <code>B</code>. For a
     * list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>.</p>
     * </li> </ul>
     */
    inline ScanRequest& AddScanFilter(const Aws::String& key, const Condition& value) { m_scanFilterHasBeenSet = true; m_scanFilter[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the scan results and returns only the desired
     * values.</p> <note> <p>This parameter does not support attributes of type List or
     * Map.</p> </note> <p>If you specify more than one condition in the
     * <i>ScanFilter</i> map, then by default all of the conditions must evaluate to
     * true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Each <i>ScanFilter</i> element consists of an attribute name to
     * compare, along with the following:</p> <ul> <li> <p> <i>AttributeValueList</i> -
     * One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the operator specified in
     * <i>ComparisonOperator</i> .</p> <p>For type Number, value comparisons are
     * numeric.</p> <p>String value comparisons for greater than, equals, or less than
     * are based on ASCII character code values. For example, <code>a</code> is greater
     * than <code>A</code>, and <code>a</code> is greater than <code>B</code>. For a
     * list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>.</p>
     * </li> </ul>
     */
    inline ScanRequest& AddScanFilter(Aws::String&& key, const Condition& value) { m_scanFilterHasBeenSet = true; m_scanFilter[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the scan results and returns only the desired
     * values.</p> <note> <p>This parameter does not support attributes of type List or
     * Map.</p> </note> <p>If you specify more than one condition in the
     * <i>ScanFilter</i> map, then by default all of the conditions must evaluate to
     * true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Each <i>ScanFilter</i> element consists of an attribute name to
     * compare, along with the following:</p> <ul> <li> <p> <i>AttributeValueList</i> -
     * One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the operator specified in
     * <i>ComparisonOperator</i> .</p> <p>For type Number, value comparisons are
     * numeric.</p> <p>String value comparisons for greater than, equals, or less than
     * are based on ASCII character code values. For example, <code>a</code> is greater
     * than <code>A</code>, and <code>a</code> is greater than <code>B</code>. For a
     * list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>.</p>
     * </li> </ul>
     */
    inline ScanRequest& AddScanFilter(const Aws::String& key, Condition&& value) { m_scanFilterHasBeenSet = true; m_scanFilter[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the scan results and returns only the desired
     * values.</p> <note> <p>This parameter does not support attributes of type List or
     * Map.</p> </note> <p>If you specify more than one condition in the
     * <i>ScanFilter</i> map, then by default all of the conditions must evaluate to
     * true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Each <i>ScanFilter</i> element consists of an attribute name to
     * compare, along with the following:</p> <ul> <li> <p> <i>AttributeValueList</i> -
     * One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the operator specified in
     * <i>ComparisonOperator</i> .</p> <p>For type Number, value comparisons are
     * numeric.</p> <p>String value comparisons for greater than, equals, or less than
     * are based on ASCII character code values. For example, <code>a</code> is greater
     * than <code>A</code>, and <code>a</code> is greater than <code>B</code>. For a
     * list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>.</p>
     * </li> </ul>
     */
    inline ScanRequest& AddScanFilter(Aws::String&& key, Condition&& value) { m_scanFilterHasBeenSet = true; m_scanFilter[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the scan results and returns only the desired
     * values.</p> <note> <p>This parameter does not support attributes of type List or
     * Map.</p> </note> <p>If you specify more than one condition in the
     * <i>ScanFilter</i> map, then by default all of the conditions must evaluate to
     * true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Each <i>ScanFilter</i> element consists of an attribute name to
     * compare, along with the following:</p> <ul> <li> <p> <i>AttributeValueList</i> -
     * One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the operator specified in
     * <i>ComparisonOperator</i> .</p> <p>For type Number, value comparisons are
     * numeric.</p> <p>String value comparisons for greater than, equals, or less than
     * are based on ASCII character code values. For example, <code>a</code> is greater
     * than <code>A</code>, and <code>a</code> is greater than <code>B</code>. For a
     * list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>.</p>
     * </li> </ul>
     */
    inline ScanRequest& AddScanFilter(const char* key, Condition&& value) { m_scanFilterHasBeenSet = true; m_scanFilter[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * condition that evaluates the scan results and returns only the desired
     * values.</p> <note> <p>This parameter does not support attributes of type List or
     * Map.</p> </note> <p>If you specify more than one condition in the
     * <i>ScanFilter</i> map, then by default all of the conditions must evaluate to
     * true. In other words, the conditions are ANDed together. (You can use the
     * <i>ConditionalOperator</i> parameter to OR the conditions instead. If you do
     * this, then at least one of the conditions must evaluate to true, rather than all
     * of them.)</p> <p>Each <i>ScanFilter</i> element consists of an attribute name to
     * compare, along with the following:</p> <ul> <li> <p> <i>AttributeValueList</i> -
     * One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the operator specified in
     * <i>ComparisonOperator</i> .</p> <p>For type Number, value comparisons are
     * numeric.</p> <p>String value comparisons for greater than, equals, or less than
     * are based on ASCII character code values. For example, <code>a</code> is greater
     * than <code>A</code>, and <code>a</code> is greater than <code>B</code>. For a
     * list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li> <li>
     * <p> <i>ComparisonOperator</i> - A comparator for evaluating attributes. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>For
     * complete descriptions of all comparison operators, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/API_Condition.html">Condition</a>.</p>
     * </li> </ul>
     */
    inline ScanRequest& AddScanFilter(const char* key, const Condition& value) { m_scanFilterHasBeenSet = true; m_scanFilter[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * logical operator to apply to the conditions in a <i>ScanFilter</i> map:</p> <ul>
     * <li> <p> <code>AND</code> - If all of the conditions evaluate to true, then the
     * entire map evaluates to true.</p> </li> <li> <p> <code>OR</code> - If at least
     * one of the conditions evaluate to true, then the entire map evaluates to
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
     * logical operator to apply to the conditions in a <i>ScanFilter</i> map:</p> <ul>
     * <li> <p> <code>AND</code> - If all of the conditions evaluate to true, then the
     * entire map evaluates to true.</p> </li> <li> <p> <code>OR</code> - If at least
     * one of the conditions evaluate to true, then the entire map evaluates to
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
     * logical operator to apply to the conditions in a <i>ScanFilter</i> map:</p> <ul>
     * <li> <p> <code>AND</code> - If all of the conditions evaluate to true, then the
     * entire map evaluates to true.</p> </li> <li> <p> <code>OR</code> - If at least
     * one of the conditions evaluate to true, then the entire map evaluates to
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
     * logical operator to apply to the conditions in a <i>ScanFilter</i> map:</p> <ul>
     * <li> <p> <code>AND</code> - If all of the conditions evaluate to true, then the
     * entire map evaluates to true.</p> </li> <li> <p> <code>OR</code> - If at least
     * one of the conditions evaluate to true, then the entire map evaluates to
     * true.</p> </li> </ul> <p>If you omit <i>ConditionalOperator</i>, then
     * <code>AND</code> is the default.</p> <p>The operation will succeed only if the
     * entire map evaluates to true.</p> <note> <p>This parameter does not support
     * attributes of type List or Map.</p> </note>
     */
    inline ScanRequest& WithConditionalOperator(const ConditionalOperator& value) { SetConditionalOperator(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>FilterExpression</i> instead. Do not combine legacy
     * parameters and expression parameters in a single API call; otherwise, DynamoDB
     * will return a <i>ValidationException</i> exception.</p> </important> <p>A
     * logical operator to apply to the conditions in a <i>ScanFilter</i> map:</p> <ul>
     * <li> <p> <code>AND</code> - If all of the conditions evaluate to true, then the
     * entire map evaluates to true.</p> </li> <li> <p> <code>OR</code> - If at least
     * one of the conditions evaluate to true, then the entire map evaluates to
     * true.</p> </li> </ul> <p>If you omit <i>ConditionalOperator</i>, then
     * <code>AND</code> is the default.</p> <p>The operation will succeed only if the
     * entire map evaluates to true.</p> <note> <p>This parameter does not support
     * attributes of type List or Map.</p> </note>
     */
    inline ScanRequest& WithConditionalOperator(ConditionalOperator&& value) { SetConditionalOperator(value); return *this;}

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p> <p>In a parallel scan, a
     * <i>Scan</i> request that includes <i>ExclusiveStartKey</i> must specify the same
     * segment whose previous <i>Scan</i> returned the corresponding value of
     * <i>LastEvaluatedKey</i>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetExclusiveStartKey() const{ return m_exclusiveStartKey; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p> <p>In a parallel scan, a
     * <i>Scan</i> request that includes <i>ExclusiveStartKey</i> must specify the same
     * segment whose previous <i>Scan</i> returned the corresponding value of
     * <i>LastEvaluatedKey</i>.</p>
     */
    inline void SetExclusiveStartKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey = value; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p> <p>In a parallel scan, a
     * <i>Scan</i> request that includes <i>ExclusiveStartKey</i> must specify the same
     * segment whose previous <i>Scan</i> returned the corresponding value of
     * <i>LastEvaluatedKey</i>.</p>
     */
    inline void SetExclusiveStartKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey = value; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p> <p>In a parallel scan, a
     * <i>Scan</i> request that includes <i>ExclusiveStartKey</i> must specify the same
     * segment whose previous <i>Scan</i> returned the corresponding value of
     * <i>LastEvaluatedKey</i>.</p>
     */
    inline ScanRequest& WithExclusiveStartKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetExclusiveStartKey(value); return *this;}

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p> <p>In a parallel scan, a
     * <i>Scan</i> request that includes <i>ExclusiveStartKey</i> must specify the same
     * segment whose previous <i>Scan</i> returned the corresponding value of
     * <i>LastEvaluatedKey</i>.</p>
     */
    inline ScanRequest& WithExclusiveStartKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetExclusiveStartKey(value); return *this;}

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p> <p>In a parallel scan, a
     * <i>Scan</i> request that includes <i>ExclusiveStartKey</i> must specify the same
     * segment whose previous <i>Scan</i> returned the corresponding value of
     * <i>LastEvaluatedKey</i>.</p>
     */
    inline ScanRequest& AddExclusiveStartKey(const Aws::String& key, const AttributeValue& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey[key] = value; return *this; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p> <p>In a parallel scan, a
     * <i>Scan</i> request that includes <i>ExclusiveStartKey</i> must specify the same
     * segment whose previous <i>Scan</i> returned the corresponding value of
     * <i>LastEvaluatedKey</i>.</p>
     */
    inline ScanRequest& AddExclusiveStartKey(Aws::String&& key, const AttributeValue& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey[key] = value; return *this; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p> <p>In a parallel scan, a
     * <i>Scan</i> request that includes <i>ExclusiveStartKey</i> must specify the same
     * segment whose previous <i>Scan</i> returned the corresponding value of
     * <i>LastEvaluatedKey</i>.</p>
     */
    inline ScanRequest& AddExclusiveStartKey(const Aws::String& key, AttributeValue&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey[key] = value; return *this; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p> <p>In a parallel scan, a
     * <i>Scan</i> request that includes <i>ExclusiveStartKey</i> must specify the same
     * segment whose previous <i>Scan</i> returned the corresponding value of
     * <i>LastEvaluatedKey</i>.</p>
     */
    inline ScanRequest& AddExclusiveStartKey(Aws::String&& key, AttributeValue&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey[key] = value; return *this; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p> <p>In a parallel scan, a
     * <i>Scan</i> request that includes <i>ExclusiveStartKey</i> must specify the same
     * segment whose previous <i>Scan</i> returned the corresponding value of
     * <i>LastEvaluatedKey</i>.</p>
     */
    inline ScanRequest& AddExclusiveStartKey(const char* key, AttributeValue&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey[key] = value; return *this; }

    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <i>LastEvaluatedKey</i> in the previous
     * operation.</p> <p>The data type for <i>ExclusiveStartKey</i> must be String,
     * Number or Binary. No set data types are allowed.</p> <p>In a parallel scan, a
     * <i>Scan</i> request that includes <i>ExclusiveStartKey</i> must specify the same
     * segment whose previous <i>Scan</i> returned the corresponding value of
     * <i>LastEvaluatedKey</i>.</p>
     */
    inline ScanRequest& AddExclusiveStartKey(const char* key, const AttributeValue& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey[key] = value; return *this; }

    
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }

    
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline ScanRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}

    
    inline ScanRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(value); return *this;}

    /**
     * <p>For a parallel <i>Scan</i> request, <i>TotalSegments</i> represents the total
     * number of segments into which the <i>Scan</i> operation will be divided. The
     * value of <i>TotalSegments</i> corresponds to the number of application workers
     * that will perform the parallel scan. For example, if you want to use four
     * application threads to scan a table or an index, specify a <i>TotalSegments</i>
     * value of 4.</p> <p>The value for <i>TotalSegments</i> must be greater than or
     * equal to 1, and less than or equal to 1000000. If you specify a
     * <i>TotalSegments</i> value of 1, the <i>Scan</i> operation will be sequential
     * rather than parallel.</p> <p>If you specify <i>TotalSegments</i>, you must also
     * specify <i>Segment</i>.</p>
     */
    inline int GetTotalSegments() const{ return m_totalSegments; }

    /**
     * <p>For a parallel <i>Scan</i> request, <i>TotalSegments</i> represents the total
     * number of segments into which the <i>Scan</i> operation will be divided. The
     * value of <i>TotalSegments</i> corresponds to the number of application workers
     * that will perform the parallel scan. For example, if you want to use four
     * application threads to scan a table or an index, specify a <i>TotalSegments</i>
     * value of 4.</p> <p>The value for <i>TotalSegments</i> must be greater than or
     * equal to 1, and less than or equal to 1000000. If you specify a
     * <i>TotalSegments</i> value of 1, the <i>Scan</i> operation will be sequential
     * rather than parallel.</p> <p>If you specify <i>TotalSegments</i>, you must also
     * specify <i>Segment</i>.</p>
     */
    inline void SetTotalSegments(int value) { m_totalSegmentsHasBeenSet = true; m_totalSegments = value; }

    /**
     * <p>For a parallel <i>Scan</i> request, <i>TotalSegments</i> represents the total
     * number of segments into which the <i>Scan</i> operation will be divided. The
     * value of <i>TotalSegments</i> corresponds to the number of application workers
     * that will perform the parallel scan. For example, if you want to use four
     * application threads to scan a table or an index, specify a <i>TotalSegments</i>
     * value of 4.</p> <p>The value for <i>TotalSegments</i> must be greater than or
     * equal to 1, and less than or equal to 1000000. If you specify a
     * <i>TotalSegments</i> value of 1, the <i>Scan</i> operation will be sequential
     * rather than parallel.</p> <p>If you specify <i>TotalSegments</i>, you must also
     * specify <i>Segment</i>.</p>
     */
    inline ScanRequest& WithTotalSegments(int value) { SetTotalSegments(value); return *this;}

    /**
     * <p>For a parallel <i>Scan</i> request, <i>Segment</i> identifies an individual
     * segment to be scanned by an application worker.</p> <p>Segment IDs are
     * zero-based, so the first segment is always 0. For example, if you want to use
     * four application threads to scan a table or an index, then the first thread
     * specifies a <i>Segment</i> value of 0, the second thread specifies 1, and so
     * on.</p> <p>The value of <i>LastEvaluatedKey</i> returned from a parallel
     * <i>Scan</i> request must be used as <i>ExclusiveStartKey</i> with the same
     * segment ID in a subsequent <i>Scan</i> operation.</p> <p>The value for
     * <i>Segment</i> must be greater than or equal to 0, and less than the value
     * provided for <i>TotalSegments</i>.</p> <p>If you provide <i>Segment</i>, you
     * must also provide <i>TotalSegments</i>.</p>
     */
    inline int GetSegment() const{ return m_segment; }

    /**
     * <p>For a parallel <i>Scan</i> request, <i>Segment</i> identifies an individual
     * segment to be scanned by an application worker.</p> <p>Segment IDs are
     * zero-based, so the first segment is always 0. For example, if you want to use
     * four application threads to scan a table or an index, then the first thread
     * specifies a <i>Segment</i> value of 0, the second thread specifies 1, and so
     * on.</p> <p>The value of <i>LastEvaluatedKey</i> returned from a parallel
     * <i>Scan</i> request must be used as <i>ExclusiveStartKey</i> with the same
     * segment ID in a subsequent <i>Scan</i> operation.</p> <p>The value for
     * <i>Segment</i> must be greater than or equal to 0, and less than the value
     * provided for <i>TotalSegments</i>.</p> <p>If you provide <i>Segment</i>, you
     * must also provide <i>TotalSegments</i>.</p>
     */
    inline void SetSegment(int value) { m_segmentHasBeenSet = true; m_segment = value; }

    /**
     * <p>For a parallel <i>Scan</i> request, <i>Segment</i> identifies an individual
     * segment to be scanned by an application worker.</p> <p>Segment IDs are
     * zero-based, so the first segment is always 0. For example, if you want to use
     * four application threads to scan a table or an index, then the first thread
     * specifies a <i>Segment</i> value of 0, the second thread specifies 1, and so
     * on.</p> <p>The value of <i>LastEvaluatedKey</i> returned from a parallel
     * <i>Scan</i> request must be used as <i>ExclusiveStartKey</i> with the same
     * segment ID in a subsequent <i>Scan</i> operation.</p> <p>The value for
     * <i>Segment</i> must be greater than or equal to 0, and less than the value
     * provided for <i>TotalSegments</i>.</p> <p>If you provide <i>Segment</i>, you
     * must also provide <i>TotalSegments</i>.</p>
     */
    inline ScanRequest& WithSegment(int value) { SetSegment(value); return *this;}

    /**
     * <p>A string that identifies one or more attributes to retrieve from the
     * specified table or index. These attributes can include scalars, sets, or
     * elements of a JSON document. The attributes in the expression must be separated
     * by commas.</p> <p>If no attribute names are specified, then all attributes will
     * be returned. If any of the requested attributes are not found, they will not
     * appear in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline const Aws::String& GetProjectionExpression() const{ return m_projectionExpression; }

    /**
     * <p>A string that identifies one or more attributes to retrieve from the
     * specified table or index. These attributes can include scalars, sets, or
     * elements of a JSON document. The attributes in the expression must be separated
     * by commas.</p> <p>If no attribute names are specified, then all attributes will
     * be returned. If any of the requested attributes are not found, they will not
     * appear in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline void SetProjectionExpression(const Aws::String& value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression = value; }

    /**
     * <p>A string that identifies one or more attributes to retrieve from the
     * specified table or index. These attributes can include scalars, sets, or
     * elements of a JSON document. The attributes in the expression must be separated
     * by commas.</p> <p>If no attribute names are specified, then all attributes will
     * be returned. If any of the requested attributes are not found, they will not
     * appear in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline void SetProjectionExpression(Aws::String&& value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression = value; }

    /**
     * <p>A string that identifies one or more attributes to retrieve from the
     * specified table or index. These attributes can include scalars, sets, or
     * elements of a JSON document. The attributes in the expression must be separated
     * by commas.</p> <p>If no attribute names are specified, then all attributes will
     * be returned. If any of the requested attributes are not found, they will not
     * appear in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline void SetProjectionExpression(const char* value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression.assign(value); }

    /**
     * <p>A string that identifies one or more attributes to retrieve from the
     * specified table or index. These attributes can include scalars, sets, or
     * elements of a JSON document. The attributes in the expression must be separated
     * by commas.</p> <p>If no attribute names are specified, then all attributes will
     * be returned. If any of the requested attributes are not found, they will not
     * appear in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline ScanRequest& WithProjectionExpression(const Aws::String& value) { SetProjectionExpression(value); return *this;}

    /**
     * <p>A string that identifies one or more attributes to retrieve from the
     * specified table or index. These attributes can include scalars, sets, or
     * elements of a JSON document. The attributes in the expression must be separated
     * by commas.</p> <p>If no attribute names are specified, then all attributes will
     * be returned. If any of the requested attributes are not found, they will not
     * appear in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline ScanRequest& WithProjectionExpression(Aws::String&& value) { SetProjectionExpression(value); return *this;}

    /**
     * <p>A string that identifies one or more attributes to retrieve from the
     * specified table or index. These attributes can include scalars, sets, or
     * elements of a JSON document. The attributes in the expression must be separated
     * by commas.</p> <p>If no attribute names are specified, then all attributes will
     * be returned. If any of the requested attributes are not found, they will not
     * appear in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note>
     * <p> <i>ProjectionExpression</i> replaces the legacy <i>AttributesToGet</i>
     * parameter.</p> </note>
     */
    inline ScanRequest& WithProjectionExpression(const char* value) { SetProjectionExpression(value); return *this;}

    /**
     * <p>A string that contains conditions that DynamoDB applies after the <i>Scan</i>
     * operation, but before the data is returned to you. Items that do not satisfy the
     * <i>FilterExpression</i> criteria are not returned.</p> <note> <p>A
     * <i>FilterExpression</i> is applied after the items have already been read; the
     * process of filtering does not consume any additional read capacity units.</p>
     * </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>ScanFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline const Aws::String& GetFilterExpression() const{ return m_filterExpression; }

    /**
     * <p>A string that contains conditions that DynamoDB applies after the <i>Scan</i>
     * operation, but before the data is returned to you. Items that do not satisfy the
     * <i>FilterExpression</i> criteria are not returned.</p> <note> <p>A
     * <i>FilterExpression</i> is applied after the items have already been read; the
     * process of filtering does not consume any additional read capacity units.</p>
     * </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>ScanFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }

    /**
     * <p>A string that contains conditions that DynamoDB applies after the <i>Scan</i>
     * operation, but before the data is returned to you. Items that do not satisfy the
     * <i>FilterExpression</i> criteria are not returned.</p> <note> <p>A
     * <i>FilterExpression</i> is applied after the items have already been read; the
     * process of filtering does not consume any additional read capacity units.</p>
     * </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>ScanFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }

    /**
     * <p>A string that contains conditions that DynamoDB applies after the <i>Scan</i>
     * operation, but before the data is returned to you. Items that do not satisfy the
     * <i>FilterExpression</i> criteria are not returned.</p> <note> <p>A
     * <i>FilterExpression</i> is applied after the items have already been read; the
     * process of filtering does not consume any additional read capacity units.</p>
     * </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>ScanFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }

    /**
     * <p>A string that contains conditions that DynamoDB applies after the <i>Scan</i>
     * operation, but before the data is returned to you. Items that do not satisfy the
     * <i>FilterExpression</i> criteria are not returned.</p> <note> <p>A
     * <i>FilterExpression</i> is applied after the items have already been read; the
     * process of filtering does not consume any additional read capacity units.</p>
     * </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>ScanFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline ScanRequest& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}

    /**
     * <p>A string that contains conditions that DynamoDB applies after the <i>Scan</i>
     * operation, but before the data is returned to you. Items that do not satisfy the
     * <i>FilterExpression</i> criteria are not returned.</p> <note> <p>A
     * <i>FilterExpression</i> is applied after the items have already been read; the
     * process of filtering does not consume any additional read capacity units.</p>
     * </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>ScanFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline ScanRequest& WithFilterExpression(Aws::String&& value) { SetFilterExpression(value); return *this;}

    /**
     * <p>A string that contains conditions that DynamoDB applies after the <i>Scan</i>
     * operation, but before the data is returned to you. Items that do not satisfy the
     * <i>FilterExpression</i> criteria are not returned.</p> <note> <p>A
     * <i>FilterExpression</i> is applied after the items have already been read; the
     * process of filtering does not consume any additional read capacity units.</p>
     * </note> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html#FilteringResults">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>FilterExpression</i> replaces the legacy <i>ScanFilter</i> and
     * <i>ConditionalOperator</i> parameters.</p> </note>
     */
    inline ScanRequest& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}

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
    inline ScanRequest& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}

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
    inline ScanRequest& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(value); return *this;}

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
    inline ScanRequest& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline ScanRequest& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline ScanRequest& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline ScanRequest& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline ScanRequest& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline ScanRequest& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline ScanRequest& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline ScanRequest& WithExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { SetExpressionAttributeValues(value); return *this;}

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
    inline ScanRequest& WithExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { SetExpressionAttributeValues(value); return *this;}

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
    inline ScanRequest& AddExpressionAttributeValues(const Aws::String& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

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
    inline ScanRequest& AddExpressionAttributeValues(Aws::String&& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

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
    inline ScanRequest& AddExpressionAttributeValues(const Aws::String& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

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
    inline ScanRequest& AddExpressionAttributeValues(Aws::String&& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

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
    inline ScanRequest& AddExpressionAttributeValues(const char* key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

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
    inline ScanRequest& AddExpressionAttributeValues(const char* key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

    /**
     * <p>A Boolean value that determines the read consistency model during the
     * scan:</p> <ul> <li> <p>If <i>ConsistentRead</i> is <code>false</code>, then the
     * data returned from <i>Scan</i> might not contain the results from other recently
     * completed write operations (PutItem, UpdateItem or DeleteItem).</p> </li> <li>
     * <p>If <i>ConsistentRead</i> is <code>true</code>, then all of the write
     * operations that completed before the <i>Scan</i> began are guaranteed to be
     * contained in the <i>Scan</i> response.</p> </li> </ul> <p>The default setting
     * for <i>ConsistentRead</i> is <code>false</code>.</p> <p>The
     * <i>ConsistentRead</i> parameter is not supported on global secondary indexes. If
     * you scan a global secondary index with <i>ConsistentRead</i> set to true, you
     * will receive a <i>ValidationException</i>.</p>
     */
    inline bool GetConsistentRead() const{ return m_consistentRead; }

    /**
     * <p>A Boolean value that determines the read consistency model during the
     * scan:</p> <ul> <li> <p>If <i>ConsistentRead</i> is <code>false</code>, then the
     * data returned from <i>Scan</i> might not contain the results from other recently
     * completed write operations (PutItem, UpdateItem or DeleteItem).</p> </li> <li>
     * <p>If <i>ConsistentRead</i> is <code>true</code>, then all of the write
     * operations that completed before the <i>Scan</i> began are guaranteed to be
     * contained in the <i>Scan</i> response.</p> </li> </ul> <p>The default setting
     * for <i>ConsistentRead</i> is <code>false</code>.</p> <p>The
     * <i>ConsistentRead</i> parameter is not supported on global secondary indexes. If
     * you scan a global secondary index with <i>ConsistentRead</i> set to true, you
     * will receive a <i>ValidationException</i>.</p>
     */
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }

    /**
     * <p>A Boolean value that determines the read consistency model during the
     * scan:</p> <ul> <li> <p>If <i>ConsistentRead</i> is <code>false</code>, then the
     * data returned from <i>Scan</i> might not contain the results from other recently
     * completed write operations (PutItem, UpdateItem or DeleteItem).</p> </li> <li>
     * <p>If <i>ConsistentRead</i> is <code>true</code>, then all of the write
     * operations that completed before the <i>Scan</i> began are guaranteed to be
     * contained in the <i>Scan</i> response.</p> </li> </ul> <p>The default setting
     * for <i>ConsistentRead</i> is <code>false</code>.</p> <p>The
     * <i>ConsistentRead</i> parameter is not supported on global secondary indexes. If
     * you scan a global secondary index with <i>ConsistentRead</i> set to true, you
     * will receive a <i>ValidationException</i>.</p>
     */
    inline ScanRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}

  private:
    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;
    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;
    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Select m_select;
    bool m_selectHasBeenSet;
    Aws::Map<Aws::String, Condition> m_scanFilter;
    bool m_scanFilterHasBeenSet;
    ConditionalOperator m_conditionalOperator;
    bool m_conditionalOperatorHasBeenSet;
    Aws::Map<Aws::String, AttributeValue> m_exclusiveStartKey;
    bool m_exclusiveStartKeyHasBeenSet;
    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet;
    int m_totalSegments;
    bool m_totalSegmentsHasBeenSet;
    int m_segment;
    bool m_segmentHasBeenSet;
    Aws::String m_projectionExpression;
    bool m_projectionExpressionHasBeenSet;
    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet;
    Aws::Map<Aws::String, AttributeValue> m_expressionAttributeValues;
    bool m_expressionAttributeValuesHasBeenSet;
    bool m_consistentRead;
    bool m_consistentReadHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
