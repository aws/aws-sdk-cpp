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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/KeysAndAttributes.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <i>BatchGetItem</i> operation.</p>
   */
  class AWS_DYNAMODB_API BatchGetItemRequest : public DynamoDBRequest
  {
  public:
    BatchGetItemRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <i>BatchGetItem</i> request.</p> <p>Each element in the map of items to
     * retrieve consists of the following:</p> <ul> <li> <p> <i>ConsistentRead</i> - If
     * <code>true</code>, a strongly consistent read is used; if <code>false</code>
     * (the default), an eventually consistent read is used.</p> </li> <li> <p>
     * <i>ExpressionAttributeNames</i> - One or more substitution tokens for attribute
     * names in the <i>ProjectionExpression</i> parameter. The following are some use
     * cases for using <i>ExpressionAttributeNames</i>:</p> <ul> <li> <p>To access an
     * attribute whose name conflicts with a DynamoDB reserved word.</p> </li> <li>
     * <p>To create a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
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
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>Keys</i> - An array of primary key attribute values that define
     * specific items in the table. For each primary key, you must provide <i>all</i>
     * of the key attributes. For example, with a simple primary key, you only need to
     * provide the partition key value. For a composite key, you must provide
     * <i>both</i> the partition key value and the sort key value.</p> </li> <li> <p>
     * <i>ProjectionExpression</i> - A string that identifies one or more attributes to
     * retrieve from the table. These attributes can include scalars, sets, or elements
     * of a JSON document. The attributes in the expression must be separated by
     * commas.</p> <p>If no attribute names are specified, then all attributes will be
     * returned. If any of the requested attributes are not found, they will not appear
     * in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>AttributesToGet</i> - </p> <important> <p>This is a legacy
     * parameter, for backward compatibility. New applications should use
     * <i>ProjectionExpression</i> instead. Do not combine legacy parameters and
     * expression parameters in a single API call; otherwise, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <p>This parameter allows you to
     * retrieve attributes of type List or Map; however, it cannot retrieve individual
     * elements within a List or a Map.</p> </important> <p>The names of one or more
     * attributes to retrieve. If no attribute names are provided, then all attributes
     * will be returned. If any of the requested attributes are not found, they will
     * not appear in the result.</p> <p>Note that <i>AttributesToGet</i> has no effect
     * on provisioned throughput consumption. DynamoDB determines capacity units
     * consumed based on item size, not on the amount of data that is returned to an
     * application.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, KeysAndAttributes>& GetRequestItems() const{ return m_requestItems; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <i>BatchGetItem</i> request.</p> <p>Each element in the map of items to
     * retrieve consists of the following:</p> <ul> <li> <p> <i>ConsistentRead</i> - If
     * <code>true</code>, a strongly consistent read is used; if <code>false</code>
     * (the default), an eventually consistent read is used.</p> </li> <li> <p>
     * <i>ExpressionAttributeNames</i> - One or more substitution tokens for attribute
     * names in the <i>ProjectionExpression</i> parameter. The following are some use
     * cases for using <i>ExpressionAttributeNames</i>:</p> <ul> <li> <p>To access an
     * attribute whose name conflicts with a DynamoDB reserved word.</p> </li> <li>
     * <p>To create a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
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
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>Keys</i> - An array of primary key attribute values that define
     * specific items in the table. For each primary key, you must provide <i>all</i>
     * of the key attributes. For example, with a simple primary key, you only need to
     * provide the partition key value. For a composite key, you must provide
     * <i>both</i> the partition key value and the sort key value.</p> </li> <li> <p>
     * <i>ProjectionExpression</i> - A string that identifies one or more attributes to
     * retrieve from the table. These attributes can include scalars, sets, or elements
     * of a JSON document. The attributes in the expression must be separated by
     * commas.</p> <p>If no attribute names are specified, then all attributes will be
     * returned. If any of the requested attributes are not found, they will not appear
     * in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>AttributesToGet</i> - </p> <important> <p>This is a legacy
     * parameter, for backward compatibility. New applications should use
     * <i>ProjectionExpression</i> instead. Do not combine legacy parameters and
     * expression parameters in a single API call; otherwise, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <p>This parameter allows you to
     * retrieve attributes of type List or Map; however, it cannot retrieve individual
     * elements within a List or a Map.</p> </important> <p>The names of one or more
     * attributes to retrieve. If no attribute names are provided, then all attributes
     * will be returned. If any of the requested attributes are not found, they will
     * not appear in the result.</p> <p>Note that <i>AttributesToGet</i> has no effect
     * on provisioned throughput consumption. DynamoDB determines capacity units
     * consumed based on item size, not on the amount of data that is returned to an
     * application.</p> </li> </ul>
     */
    inline void SetRequestItems(const Aws::Map<Aws::String, KeysAndAttributes>& value) { m_requestItemsHasBeenSet = true; m_requestItems = value; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <i>BatchGetItem</i> request.</p> <p>Each element in the map of items to
     * retrieve consists of the following:</p> <ul> <li> <p> <i>ConsistentRead</i> - If
     * <code>true</code>, a strongly consistent read is used; if <code>false</code>
     * (the default), an eventually consistent read is used.</p> </li> <li> <p>
     * <i>ExpressionAttributeNames</i> - One or more substitution tokens for attribute
     * names in the <i>ProjectionExpression</i> parameter. The following are some use
     * cases for using <i>ExpressionAttributeNames</i>:</p> <ul> <li> <p>To access an
     * attribute whose name conflicts with a DynamoDB reserved word.</p> </li> <li>
     * <p>To create a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
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
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>Keys</i> - An array of primary key attribute values that define
     * specific items in the table. For each primary key, you must provide <i>all</i>
     * of the key attributes. For example, with a simple primary key, you only need to
     * provide the partition key value. For a composite key, you must provide
     * <i>both</i> the partition key value and the sort key value.</p> </li> <li> <p>
     * <i>ProjectionExpression</i> - A string that identifies one or more attributes to
     * retrieve from the table. These attributes can include scalars, sets, or elements
     * of a JSON document. The attributes in the expression must be separated by
     * commas.</p> <p>If no attribute names are specified, then all attributes will be
     * returned. If any of the requested attributes are not found, they will not appear
     * in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>AttributesToGet</i> - </p> <important> <p>This is a legacy
     * parameter, for backward compatibility. New applications should use
     * <i>ProjectionExpression</i> instead. Do not combine legacy parameters and
     * expression parameters in a single API call; otherwise, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <p>This parameter allows you to
     * retrieve attributes of type List or Map; however, it cannot retrieve individual
     * elements within a List or a Map.</p> </important> <p>The names of one or more
     * attributes to retrieve. If no attribute names are provided, then all attributes
     * will be returned. If any of the requested attributes are not found, they will
     * not appear in the result.</p> <p>Note that <i>AttributesToGet</i> has no effect
     * on provisioned throughput consumption. DynamoDB determines capacity units
     * consumed based on item size, not on the amount of data that is returned to an
     * application.</p> </li> </ul>
     */
    inline void SetRequestItems(Aws::Map<Aws::String, KeysAndAttributes>&& value) { m_requestItemsHasBeenSet = true; m_requestItems = value; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <i>BatchGetItem</i> request.</p> <p>Each element in the map of items to
     * retrieve consists of the following:</p> <ul> <li> <p> <i>ConsistentRead</i> - If
     * <code>true</code>, a strongly consistent read is used; if <code>false</code>
     * (the default), an eventually consistent read is used.</p> </li> <li> <p>
     * <i>ExpressionAttributeNames</i> - One or more substitution tokens for attribute
     * names in the <i>ProjectionExpression</i> parameter. The following are some use
     * cases for using <i>ExpressionAttributeNames</i>:</p> <ul> <li> <p>To access an
     * attribute whose name conflicts with a DynamoDB reserved word.</p> </li> <li>
     * <p>To create a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
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
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>Keys</i> - An array of primary key attribute values that define
     * specific items in the table. For each primary key, you must provide <i>all</i>
     * of the key attributes. For example, with a simple primary key, you only need to
     * provide the partition key value. For a composite key, you must provide
     * <i>both</i> the partition key value and the sort key value.</p> </li> <li> <p>
     * <i>ProjectionExpression</i> - A string that identifies one or more attributes to
     * retrieve from the table. These attributes can include scalars, sets, or elements
     * of a JSON document. The attributes in the expression must be separated by
     * commas.</p> <p>If no attribute names are specified, then all attributes will be
     * returned. If any of the requested attributes are not found, they will not appear
     * in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>AttributesToGet</i> - </p> <important> <p>This is a legacy
     * parameter, for backward compatibility. New applications should use
     * <i>ProjectionExpression</i> instead. Do not combine legacy parameters and
     * expression parameters in a single API call; otherwise, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <p>This parameter allows you to
     * retrieve attributes of type List or Map; however, it cannot retrieve individual
     * elements within a List or a Map.</p> </important> <p>The names of one or more
     * attributes to retrieve. If no attribute names are provided, then all attributes
     * will be returned. If any of the requested attributes are not found, they will
     * not appear in the result.</p> <p>Note that <i>AttributesToGet</i> has no effect
     * on provisioned throughput consumption. DynamoDB determines capacity units
     * consumed based on item size, not on the amount of data that is returned to an
     * application.</p> </li> </ul>
     */
    inline BatchGetItemRequest& WithRequestItems(const Aws::Map<Aws::String, KeysAndAttributes>& value) { SetRequestItems(value); return *this;}

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <i>BatchGetItem</i> request.</p> <p>Each element in the map of items to
     * retrieve consists of the following:</p> <ul> <li> <p> <i>ConsistentRead</i> - If
     * <code>true</code>, a strongly consistent read is used; if <code>false</code>
     * (the default), an eventually consistent read is used.</p> </li> <li> <p>
     * <i>ExpressionAttributeNames</i> - One or more substitution tokens for attribute
     * names in the <i>ProjectionExpression</i> parameter. The following are some use
     * cases for using <i>ExpressionAttributeNames</i>:</p> <ul> <li> <p>To access an
     * attribute whose name conflicts with a DynamoDB reserved word.</p> </li> <li>
     * <p>To create a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
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
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>Keys</i> - An array of primary key attribute values that define
     * specific items in the table. For each primary key, you must provide <i>all</i>
     * of the key attributes. For example, with a simple primary key, you only need to
     * provide the partition key value. For a composite key, you must provide
     * <i>both</i> the partition key value and the sort key value.</p> </li> <li> <p>
     * <i>ProjectionExpression</i> - A string that identifies one or more attributes to
     * retrieve from the table. These attributes can include scalars, sets, or elements
     * of a JSON document. The attributes in the expression must be separated by
     * commas.</p> <p>If no attribute names are specified, then all attributes will be
     * returned. If any of the requested attributes are not found, they will not appear
     * in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>AttributesToGet</i> - </p> <important> <p>This is a legacy
     * parameter, for backward compatibility. New applications should use
     * <i>ProjectionExpression</i> instead. Do not combine legacy parameters and
     * expression parameters in a single API call; otherwise, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <p>This parameter allows you to
     * retrieve attributes of type List or Map; however, it cannot retrieve individual
     * elements within a List or a Map.</p> </important> <p>The names of one or more
     * attributes to retrieve. If no attribute names are provided, then all attributes
     * will be returned. If any of the requested attributes are not found, they will
     * not appear in the result.</p> <p>Note that <i>AttributesToGet</i> has no effect
     * on provisioned throughput consumption. DynamoDB determines capacity units
     * consumed based on item size, not on the amount of data that is returned to an
     * application.</p> </li> </ul>
     */
    inline BatchGetItemRequest& WithRequestItems(Aws::Map<Aws::String, KeysAndAttributes>&& value) { SetRequestItems(value); return *this;}

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <i>BatchGetItem</i> request.</p> <p>Each element in the map of items to
     * retrieve consists of the following:</p> <ul> <li> <p> <i>ConsistentRead</i> - If
     * <code>true</code>, a strongly consistent read is used; if <code>false</code>
     * (the default), an eventually consistent read is used.</p> </li> <li> <p>
     * <i>ExpressionAttributeNames</i> - One or more substitution tokens for attribute
     * names in the <i>ProjectionExpression</i> parameter. The following are some use
     * cases for using <i>ExpressionAttributeNames</i>:</p> <ul> <li> <p>To access an
     * attribute whose name conflicts with a DynamoDB reserved word.</p> </li> <li>
     * <p>To create a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
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
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>Keys</i> - An array of primary key attribute values that define
     * specific items in the table. For each primary key, you must provide <i>all</i>
     * of the key attributes. For example, with a simple primary key, you only need to
     * provide the partition key value. For a composite key, you must provide
     * <i>both</i> the partition key value and the sort key value.</p> </li> <li> <p>
     * <i>ProjectionExpression</i> - A string that identifies one or more attributes to
     * retrieve from the table. These attributes can include scalars, sets, or elements
     * of a JSON document. The attributes in the expression must be separated by
     * commas.</p> <p>If no attribute names are specified, then all attributes will be
     * returned. If any of the requested attributes are not found, they will not appear
     * in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>AttributesToGet</i> - </p> <important> <p>This is a legacy
     * parameter, for backward compatibility. New applications should use
     * <i>ProjectionExpression</i> instead. Do not combine legacy parameters and
     * expression parameters in a single API call; otherwise, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <p>This parameter allows you to
     * retrieve attributes of type List or Map; however, it cannot retrieve individual
     * elements within a List or a Map.</p> </important> <p>The names of one or more
     * attributes to retrieve. If no attribute names are provided, then all attributes
     * will be returned. If any of the requested attributes are not found, they will
     * not appear in the result.</p> <p>Note that <i>AttributesToGet</i> has no effect
     * on provisioned throughput consumption. DynamoDB determines capacity units
     * consumed based on item size, not on the amount of data that is returned to an
     * application.</p> </li> </ul>
     */
    inline BatchGetItemRequest& AddRequestItems(const Aws::String& key, const KeysAndAttributes& value) { m_requestItemsHasBeenSet = true; m_requestItems[key] = value; return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <i>BatchGetItem</i> request.</p> <p>Each element in the map of items to
     * retrieve consists of the following:</p> <ul> <li> <p> <i>ConsistentRead</i> - If
     * <code>true</code>, a strongly consistent read is used; if <code>false</code>
     * (the default), an eventually consistent read is used.</p> </li> <li> <p>
     * <i>ExpressionAttributeNames</i> - One or more substitution tokens for attribute
     * names in the <i>ProjectionExpression</i> parameter. The following are some use
     * cases for using <i>ExpressionAttributeNames</i>:</p> <ul> <li> <p>To access an
     * attribute whose name conflicts with a DynamoDB reserved word.</p> </li> <li>
     * <p>To create a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
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
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>Keys</i> - An array of primary key attribute values that define
     * specific items in the table. For each primary key, you must provide <i>all</i>
     * of the key attributes. For example, with a simple primary key, you only need to
     * provide the partition key value. For a composite key, you must provide
     * <i>both</i> the partition key value and the sort key value.</p> </li> <li> <p>
     * <i>ProjectionExpression</i> - A string that identifies one or more attributes to
     * retrieve from the table. These attributes can include scalars, sets, or elements
     * of a JSON document. The attributes in the expression must be separated by
     * commas.</p> <p>If no attribute names are specified, then all attributes will be
     * returned. If any of the requested attributes are not found, they will not appear
     * in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>AttributesToGet</i> - </p> <important> <p>This is a legacy
     * parameter, for backward compatibility. New applications should use
     * <i>ProjectionExpression</i> instead. Do not combine legacy parameters and
     * expression parameters in a single API call; otherwise, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <p>This parameter allows you to
     * retrieve attributes of type List or Map; however, it cannot retrieve individual
     * elements within a List or a Map.</p> </important> <p>The names of one or more
     * attributes to retrieve. If no attribute names are provided, then all attributes
     * will be returned. If any of the requested attributes are not found, they will
     * not appear in the result.</p> <p>Note that <i>AttributesToGet</i> has no effect
     * on provisioned throughput consumption. DynamoDB determines capacity units
     * consumed based on item size, not on the amount of data that is returned to an
     * application.</p> </li> </ul>
     */
    inline BatchGetItemRequest& AddRequestItems(Aws::String&& key, const KeysAndAttributes& value) { m_requestItemsHasBeenSet = true; m_requestItems[key] = value; return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <i>BatchGetItem</i> request.</p> <p>Each element in the map of items to
     * retrieve consists of the following:</p> <ul> <li> <p> <i>ConsistentRead</i> - If
     * <code>true</code>, a strongly consistent read is used; if <code>false</code>
     * (the default), an eventually consistent read is used.</p> </li> <li> <p>
     * <i>ExpressionAttributeNames</i> - One or more substitution tokens for attribute
     * names in the <i>ProjectionExpression</i> parameter. The following are some use
     * cases for using <i>ExpressionAttributeNames</i>:</p> <ul> <li> <p>To access an
     * attribute whose name conflicts with a DynamoDB reserved word.</p> </li> <li>
     * <p>To create a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
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
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>Keys</i> - An array of primary key attribute values that define
     * specific items in the table. For each primary key, you must provide <i>all</i>
     * of the key attributes. For example, with a simple primary key, you only need to
     * provide the partition key value. For a composite key, you must provide
     * <i>both</i> the partition key value and the sort key value.</p> </li> <li> <p>
     * <i>ProjectionExpression</i> - A string that identifies one or more attributes to
     * retrieve from the table. These attributes can include scalars, sets, or elements
     * of a JSON document. The attributes in the expression must be separated by
     * commas.</p> <p>If no attribute names are specified, then all attributes will be
     * returned. If any of the requested attributes are not found, they will not appear
     * in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>AttributesToGet</i> - </p> <important> <p>This is a legacy
     * parameter, for backward compatibility. New applications should use
     * <i>ProjectionExpression</i> instead. Do not combine legacy parameters and
     * expression parameters in a single API call; otherwise, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <p>This parameter allows you to
     * retrieve attributes of type List or Map; however, it cannot retrieve individual
     * elements within a List or a Map.</p> </important> <p>The names of one or more
     * attributes to retrieve. If no attribute names are provided, then all attributes
     * will be returned. If any of the requested attributes are not found, they will
     * not appear in the result.</p> <p>Note that <i>AttributesToGet</i> has no effect
     * on provisioned throughput consumption. DynamoDB determines capacity units
     * consumed based on item size, not on the amount of data that is returned to an
     * application.</p> </li> </ul>
     */
    inline BatchGetItemRequest& AddRequestItems(const Aws::String& key, KeysAndAttributes&& value) { m_requestItemsHasBeenSet = true; m_requestItems[key] = value; return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <i>BatchGetItem</i> request.</p> <p>Each element in the map of items to
     * retrieve consists of the following:</p> <ul> <li> <p> <i>ConsistentRead</i> - If
     * <code>true</code>, a strongly consistent read is used; if <code>false</code>
     * (the default), an eventually consistent read is used.</p> </li> <li> <p>
     * <i>ExpressionAttributeNames</i> - One or more substitution tokens for attribute
     * names in the <i>ProjectionExpression</i> parameter. The following are some use
     * cases for using <i>ExpressionAttributeNames</i>:</p> <ul> <li> <p>To access an
     * attribute whose name conflicts with a DynamoDB reserved word.</p> </li> <li>
     * <p>To create a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
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
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>Keys</i> - An array of primary key attribute values that define
     * specific items in the table. For each primary key, you must provide <i>all</i>
     * of the key attributes. For example, with a simple primary key, you only need to
     * provide the partition key value. For a composite key, you must provide
     * <i>both</i> the partition key value and the sort key value.</p> </li> <li> <p>
     * <i>ProjectionExpression</i> - A string that identifies one or more attributes to
     * retrieve from the table. These attributes can include scalars, sets, or elements
     * of a JSON document. The attributes in the expression must be separated by
     * commas.</p> <p>If no attribute names are specified, then all attributes will be
     * returned. If any of the requested attributes are not found, they will not appear
     * in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>AttributesToGet</i> - </p> <important> <p>This is a legacy
     * parameter, for backward compatibility. New applications should use
     * <i>ProjectionExpression</i> instead. Do not combine legacy parameters and
     * expression parameters in a single API call; otherwise, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <p>This parameter allows you to
     * retrieve attributes of type List or Map; however, it cannot retrieve individual
     * elements within a List or a Map.</p> </important> <p>The names of one or more
     * attributes to retrieve. If no attribute names are provided, then all attributes
     * will be returned. If any of the requested attributes are not found, they will
     * not appear in the result.</p> <p>Note that <i>AttributesToGet</i> has no effect
     * on provisioned throughput consumption. DynamoDB determines capacity units
     * consumed based on item size, not on the amount of data that is returned to an
     * application.</p> </li> </ul>
     */
    inline BatchGetItemRequest& AddRequestItems(Aws::String&& key, KeysAndAttributes&& value) { m_requestItemsHasBeenSet = true; m_requestItems[key] = value; return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <i>BatchGetItem</i> request.</p> <p>Each element in the map of items to
     * retrieve consists of the following:</p> <ul> <li> <p> <i>ConsistentRead</i> - If
     * <code>true</code>, a strongly consistent read is used; if <code>false</code>
     * (the default), an eventually consistent read is used.</p> </li> <li> <p>
     * <i>ExpressionAttributeNames</i> - One or more substitution tokens for attribute
     * names in the <i>ProjectionExpression</i> parameter. The following are some use
     * cases for using <i>ExpressionAttributeNames</i>:</p> <ul> <li> <p>To access an
     * attribute whose name conflicts with a DynamoDB reserved word.</p> </li> <li>
     * <p>To create a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
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
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>Keys</i> - An array of primary key attribute values that define
     * specific items in the table. For each primary key, you must provide <i>all</i>
     * of the key attributes. For example, with a simple primary key, you only need to
     * provide the partition key value. For a composite key, you must provide
     * <i>both</i> the partition key value and the sort key value.</p> </li> <li> <p>
     * <i>ProjectionExpression</i> - A string that identifies one or more attributes to
     * retrieve from the table. These attributes can include scalars, sets, or elements
     * of a JSON document. The attributes in the expression must be separated by
     * commas.</p> <p>If no attribute names are specified, then all attributes will be
     * returned. If any of the requested attributes are not found, they will not appear
     * in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>AttributesToGet</i> - </p> <important> <p>This is a legacy
     * parameter, for backward compatibility. New applications should use
     * <i>ProjectionExpression</i> instead. Do not combine legacy parameters and
     * expression parameters in a single API call; otherwise, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <p>This parameter allows you to
     * retrieve attributes of type List or Map; however, it cannot retrieve individual
     * elements within a List or a Map.</p> </important> <p>The names of one or more
     * attributes to retrieve. If no attribute names are provided, then all attributes
     * will be returned. If any of the requested attributes are not found, they will
     * not appear in the result.</p> <p>Note that <i>AttributesToGet</i> has no effect
     * on provisioned throughput consumption. DynamoDB determines capacity units
     * consumed based on item size, not on the amount of data that is returned to an
     * application.</p> </li> </ul>
     */
    inline BatchGetItemRequest& AddRequestItems(const char* key, KeysAndAttributes&& value) { m_requestItemsHasBeenSet = true; m_requestItems[key] = value; return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <i>BatchGetItem</i> request.</p> <p>Each element in the map of items to
     * retrieve consists of the following:</p> <ul> <li> <p> <i>ConsistentRead</i> - If
     * <code>true</code>, a strongly consistent read is used; if <code>false</code>
     * (the default), an eventually consistent read is used.</p> </li> <li> <p>
     * <i>ExpressionAttributeNames</i> - One or more substitution tokens for attribute
     * names in the <i>ProjectionExpression</i> parameter. The following are some use
     * cases for using <i>ExpressionAttributeNames</i>:</p> <ul> <li> <p>To access an
     * attribute whose name conflicts with a DynamoDB reserved word.</p> </li> <li>
     * <p>To create a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
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
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>Keys</i> - An array of primary key attribute values that define
     * specific items in the table. For each primary key, you must provide <i>all</i>
     * of the key attributes. For example, with a simple primary key, you only need to
     * provide the partition key value. For a composite key, you must provide
     * <i>both</i> the partition key value and the sort key value.</p> </li> <li> <p>
     * <i>ProjectionExpression</i> - A string that identifies one or more attributes to
     * retrieve from the table. These attributes can include scalars, sets, or elements
     * of a JSON document. The attributes in the expression must be separated by
     * commas.</p> <p>If no attribute names are specified, then all attributes will be
     * returned. If any of the requested attributes are not found, they will not appear
     * in the result.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <i>AttributesToGet</i> - </p> <important> <p>This is a legacy
     * parameter, for backward compatibility. New applications should use
     * <i>ProjectionExpression</i> instead. Do not combine legacy parameters and
     * expression parameters in a single API call; otherwise, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <p>This parameter allows you to
     * retrieve attributes of type List or Map; however, it cannot retrieve individual
     * elements within a List or a Map.</p> </important> <p>The names of one or more
     * attributes to retrieve. If no attribute names are provided, then all attributes
     * will be returned. If any of the requested attributes are not found, they will
     * not appear in the result.</p> <p>Note that <i>AttributesToGet</i> has no effect
     * on provisioned throughput consumption. DynamoDB determines capacity units
     * consumed based on item size, not on the amount of data that is returned to an
     * application.</p> </li> </ul>
     */
    inline BatchGetItemRequest& AddRequestItems(const char* key, const KeysAndAttributes& value) { m_requestItemsHasBeenSet = true; m_requestItems[key] = value; return *this; }

    
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }

    
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline BatchGetItemRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}

    
    inline BatchGetItemRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(value); return *this;}

  private:
    Aws::Map<Aws::String, KeysAndAttributes> m_requestItems;
    bool m_requestItemsHasBeenSet;
    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
