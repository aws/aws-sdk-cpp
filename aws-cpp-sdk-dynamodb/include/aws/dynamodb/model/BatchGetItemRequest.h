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
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/KeysAndAttributes.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>BatchGetItem</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BatchGetItemInput">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API BatchGetItemRequest : public DynamoDBRequest
  {
  public:
    BatchGetItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetItem"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <code>BatchGetItem</code> request.</p> <p>Each element in the map of
     * items to retrieve consists of the following:</p> <ul> <li> <p>
     * <code>ConsistentRead</code> - If <code>true</code>, a strongly consistent read
     * is used; if <code>false</code> (the default), an eventually consistent read is
     * used.</p> </li> <li> <p> <code>ExpressionAttributeNames</code> - One or more
     * substitution tokens for attribute names in the <code>ProjectionExpression</code>
     * parameter. The following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>Keys</code> - An array of primary key attribute values that
     * define specific items in the table. For each primary key, you must provide
     * <i>all</i> of the key attributes. For example, with a simple primary key, you
     * only need to provide the partition key value. For a composite key, you must
     * provide <i>both</i> the partition key value and the sort key value.</p> </li>
     * <li> <p> <code>ProjectionExpression</code> - A string that identifies one or
     * more attributes to retrieve from the table. These attributes can include
     * scalars, sets, or elements of a JSON document. The attributes in the expression
     * must be separated by commas.</p> <p>If no attribute names are specified, then
     * all attributes are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>AttributesToGet</code> - This is a legacy parameter. Use
     * <code>ProjectionExpression</code> instead. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>. </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, KeysAndAttributes>& GetRequestItems() const{ return m_requestItems; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <code>BatchGetItem</code> request.</p> <p>Each element in the map of
     * items to retrieve consists of the following:</p> <ul> <li> <p>
     * <code>ConsistentRead</code> - If <code>true</code>, a strongly consistent read
     * is used; if <code>false</code> (the default), an eventually consistent read is
     * used.</p> </li> <li> <p> <code>ExpressionAttributeNames</code> - One or more
     * substitution tokens for attribute names in the <code>ProjectionExpression</code>
     * parameter. The following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>Keys</code> - An array of primary key attribute values that
     * define specific items in the table. For each primary key, you must provide
     * <i>all</i> of the key attributes. For example, with a simple primary key, you
     * only need to provide the partition key value. For a composite key, you must
     * provide <i>both</i> the partition key value and the sort key value.</p> </li>
     * <li> <p> <code>ProjectionExpression</code> - A string that identifies one or
     * more attributes to retrieve from the table. These attributes can include
     * scalars, sets, or elements of a JSON document. The attributes in the expression
     * must be separated by commas.</p> <p>If no attribute names are specified, then
     * all attributes are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>AttributesToGet</code> - This is a legacy parameter. Use
     * <code>ProjectionExpression</code> instead. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>. </p> </li> </ul>
     */
    inline bool RequestItemsHasBeenSet() const { return m_requestItemsHasBeenSet; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <code>BatchGetItem</code> request.</p> <p>Each element in the map of
     * items to retrieve consists of the following:</p> <ul> <li> <p>
     * <code>ConsistentRead</code> - If <code>true</code>, a strongly consistent read
     * is used; if <code>false</code> (the default), an eventually consistent read is
     * used.</p> </li> <li> <p> <code>ExpressionAttributeNames</code> - One or more
     * substitution tokens for attribute names in the <code>ProjectionExpression</code>
     * parameter. The following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>Keys</code> - An array of primary key attribute values that
     * define specific items in the table. For each primary key, you must provide
     * <i>all</i> of the key attributes. For example, with a simple primary key, you
     * only need to provide the partition key value. For a composite key, you must
     * provide <i>both</i> the partition key value and the sort key value.</p> </li>
     * <li> <p> <code>ProjectionExpression</code> - A string that identifies one or
     * more attributes to retrieve from the table. These attributes can include
     * scalars, sets, or elements of a JSON document. The attributes in the expression
     * must be separated by commas.</p> <p>If no attribute names are specified, then
     * all attributes are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>AttributesToGet</code> - This is a legacy parameter. Use
     * <code>ProjectionExpression</code> instead. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>. </p> </li> </ul>
     */
    inline void SetRequestItems(const Aws::Map<Aws::String, KeysAndAttributes>& value) { m_requestItemsHasBeenSet = true; m_requestItems = value; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <code>BatchGetItem</code> request.</p> <p>Each element in the map of
     * items to retrieve consists of the following:</p> <ul> <li> <p>
     * <code>ConsistentRead</code> - If <code>true</code>, a strongly consistent read
     * is used; if <code>false</code> (the default), an eventually consistent read is
     * used.</p> </li> <li> <p> <code>ExpressionAttributeNames</code> - One or more
     * substitution tokens for attribute names in the <code>ProjectionExpression</code>
     * parameter. The following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>Keys</code> - An array of primary key attribute values that
     * define specific items in the table. For each primary key, you must provide
     * <i>all</i> of the key attributes. For example, with a simple primary key, you
     * only need to provide the partition key value. For a composite key, you must
     * provide <i>both</i> the partition key value and the sort key value.</p> </li>
     * <li> <p> <code>ProjectionExpression</code> - A string that identifies one or
     * more attributes to retrieve from the table. These attributes can include
     * scalars, sets, or elements of a JSON document. The attributes in the expression
     * must be separated by commas.</p> <p>If no attribute names are specified, then
     * all attributes are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>AttributesToGet</code> - This is a legacy parameter. Use
     * <code>ProjectionExpression</code> instead. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>. </p> </li> </ul>
     */
    inline void SetRequestItems(Aws::Map<Aws::String, KeysAndAttributes>&& value) { m_requestItemsHasBeenSet = true; m_requestItems = std::move(value); }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <code>BatchGetItem</code> request.</p> <p>Each element in the map of
     * items to retrieve consists of the following:</p> <ul> <li> <p>
     * <code>ConsistentRead</code> - If <code>true</code>, a strongly consistent read
     * is used; if <code>false</code> (the default), an eventually consistent read is
     * used.</p> </li> <li> <p> <code>ExpressionAttributeNames</code> - One or more
     * substitution tokens for attribute names in the <code>ProjectionExpression</code>
     * parameter. The following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>Keys</code> - An array of primary key attribute values that
     * define specific items in the table. For each primary key, you must provide
     * <i>all</i> of the key attributes. For example, with a simple primary key, you
     * only need to provide the partition key value. For a composite key, you must
     * provide <i>both</i> the partition key value and the sort key value.</p> </li>
     * <li> <p> <code>ProjectionExpression</code> - A string that identifies one or
     * more attributes to retrieve from the table. These attributes can include
     * scalars, sets, or elements of a JSON document. The attributes in the expression
     * must be separated by commas.</p> <p>If no attribute names are specified, then
     * all attributes are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>AttributesToGet</code> - This is a legacy parameter. Use
     * <code>ProjectionExpression</code> instead. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>. </p> </li> </ul>
     */
    inline BatchGetItemRequest& WithRequestItems(const Aws::Map<Aws::String, KeysAndAttributes>& value) { SetRequestItems(value); return *this;}

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <code>BatchGetItem</code> request.</p> <p>Each element in the map of
     * items to retrieve consists of the following:</p> <ul> <li> <p>
     * <code>ConsistentRead</code> - If <code>true</code>, a strongly consistent read
     * is used; if <code>false</code> (the default), an eventually consistent read is
     * used.</p> </li> <li> <p> <code>ExpressionAttributeNames</code> - One or more
     * substitution tokens for attribute names in the <code>ProjectionExpression</code>
     * parameter. The following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>Keys</code> - An array of primary key attribute values that
     * define specific items in the table. For each primary key, you must provide
     * <i>all</i> of the key attributes. For example, with a simple primary key, you
     * only need to provide the partition key value. For a composite key, you must
     * provide <i>both</i> the partition key value and the sort key value.</p> </li>
     * <li> <p> <code>ProjectionExpression</code> - A string that identifies one or
     * more attributes to retrieve from the table. These attributes can include
     * scalars, sets, or elements of a JSON document. The attributes in the expression
     * must be separated by commas.</p> <p>If no attribute names are specified, then
     * all attributes are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>AttributesToGet</code> - This is a legacy parameter. Use
     * <code>ProjectionExpression</code> instead. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>. </p> </li> </ul>
     */
    inline BatchGetItemRequest& WithRequestItems(Aws::Map<Aws::String, KeysAndAttributes>&& value) { SetRequestItems(std::move(value)); return *this;}

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <code>BatchGetItem</code> request.</p> <p>Each element in the map of
     * items to retrieve consists of the following:</p> <ul> <li> <p>
     * <code>ConsistentRead</code> - If <code>true</code>, a strongly consistent read
     * is used; if <code>false</code> (the default), an eventually consistent read is
     * used.</p> </li> <li> <p> <code>ExpressionAttributeNames</code> - One or more
     * substitution tokens for attribute names in the <code>ProjectionExpression</code>
     * parameter. The following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>Keys</code> - An array of primary key attribute values that
     * define specific items in the table. For each primary key, you must provide
     * <i>all</i> of the key attributes. For example, with a simple primary key, you
     * only need to provide the partition key value. For a composite key, you must
     * provide <i>both</i> the partition key value and the sort key value.</p> </li>
     * <li> <p> <code>ProjectionExpression</code> - A string that identifies one or
     * more attributes to retrieve from the table. These attributes can include
     * scalars, sets, or elements of a JSON document. The attributes in the expression
     * must be separated by commas.</p> <p>If no attribute names are specified, then
     * all attributes are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>AttributesToGet</code> - This is a legacy parameter. Use
     * <code>ProjectionExpression</code> instead. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>. </p> </li> </ul>
     */
    inline BatchGetItemRequest& AddRequestItems(const Aws::String& key, const KeysAndAttributes& value) { m_requestItemsHasBeenSet = true; m_requestItems.emplace(key, value); return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <code>BatchGetItem</code> request.</p> <p>Each element in the map of
     * items to retrieve consists of the following:</p> <ul> <li> <p>
     * <code>ConsistentRead</code> - If <code>true</code>, a strongly consistent read
     * is used; if <code>false</code> (the default), an eventually consistent read is
     * used.</p> </li> <li> <p> <code>ExpressionAttributeNames</code> - One or more
     * substitution tokens for attribute names in the <code>ProjectionExpression</code>
     * parameter. The following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>Keys</code> - An array of primary key attribute values that
     * define specific items in the table. For each primary key, you must provide
     * <i>all</i> of the key attributes. For example, with a simple primary key, you
     * only need to provide the partition key value. For a composite key, you must
     * provide <i>both</i> the partition key value and the sort key value.</p> </li>
     * <li> <p> <code>ProjectionExpression</code> - A string that identifies one or
     * more attributes to retrieve from the table. These attributes can include
     * scalars, sets, or elements of a JSON document. The attributes in the expression
     * must be separated by commas.</p> <p>If no attribute names are specified, then
     * all attributes are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>AttributesToGet</code> - This is a legacy parameter. Use
     * <code>ProjectionExpression</code> instead. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>. </p> </li> </ul>
     */
    inline BatchGetItemRequest& AddRequestItems(Aws::String&& key, const KeysAndAttributes& value) { m_requestItemsHasBeenSet = true; m_requestItems.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <code>BatchGetItem</code> request.</p> <p>Each element in the map of
     * items to retrieve consists of the following:</p> <ul> <li> <p>
     * <code>ConsistentRead</code> - If <code>true</code>, a strongly consistent read
     * is used; if <code>false</code> (the default), an eventually consistent read is
     * used.</p> </li> <li> <p> <code>ExpressionAttributeNames</code> - One or more
     * substitution tokens for attribute names in the <code>ProjectionExpression</code>
     * parameter. The following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>Keys</code> - An array of primary key attribute values that
     * define specific items in the table. For each primary key, you must provide
     * <i>all</i> of the key attributes. For example, with a simple primary key, you
     * only need to provide the partition key value. For a composite key, you must
     * provide <i>both</i> the partition key value and the sort key value.</p> </li>
     * <li> <p> <code>ProjectionExpression</code> - A string that identifies one or
     * more attributes to retrieve from the table. These attributes can include
     * scalars, sets, or elements of a JSON document. The attributes in the expression
     * must be separated by commas.</p> <p>If no attribute names are specified, then
     * all attributes are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>AttributesToGet</code> - This is a legacy parameter. Use
     * <code>ProjectionExpression</code> instead. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>. </p> </li> </ul>
     */
    inline BatchGetItemRequest& AddRequestItems(const Aws::String& key, KeysAndAttributes&& value) { m_requestItemsHasBeenSet = true; m_requestItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <code>BatchGetItem</code> request.</p> <p>Each element in the map of
     * items to retrieve consists of the following:</p> <ul> <li> <p>
     * <code>ConsistentRead</code> - If <code>true</code>, a strongly consistent read
     * is used; if <code>false</code> (the default), an eventually consistent read is
     * used.</p> </li> <li> <p> <code>ExpressionAttributeNames</code> - One or more
     * substitution tokens for attribute names in the <code>ProjectionExpression</code>
     * parameter. The following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>Keys</code> - An array of primary key attribute values that
     * define specific items in the table. For each primary key, you must provide
     * <i>all</i> of the key attributes. For example, with a simple primary key, you
     * only need to provide the partition key value. For a composite key, you must
     * provide <i>both</i> the partition key value and the sort key value.</p> </li>
     * <li> <p> <code>ProjectionExpression</code> - A string that identifies one or
     * more attributes to retrieve from the table. These attributes can include
     * scalars, sets, or elements of a JSON document. The attributes in the expression
     * must be separated by commas.</p> <p>If no attribute names are specified, then
     * all attributes are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>AttributesToGet</code> - This is a legacy parameter. Use
     * <code>ProjectionExpression</code> instead. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>. </p> </li> </ul>
     */
    inline BatchGetItemRequest& AddRequestItems(Aws::String&& key, KeysAndAttributes&& value) { m_requestItemsHasBeenSet = true; m_requestItems.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <code>BatchGetItem</code> request.</p> <p>Each element in the map of
     * items to retrieve consists of the following:</p> <ul> <li> <p>
     * <code>ConsistentRead</code> - If <code>true</code>, a strongly consistent read
     * is used; if <code>false</code> (the default), an eventually consistent read is
     * used.</p> </li> <li> <p> <code>ExpressionAttributeNames</code> - One or more
     * substitution tokens for attribute names in the <code>ProjectionExpression</code>
     * parameter. The following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>Keys</code> - An array of primary key attribute values that
     * define specific items in the table. For each primary key, you must provide
     * <i>all</i> of the key attributes. For example, with a simple primary key, you
     * only need to provide the partition key value. For a composite key, you must
     * provide <i>both</i> the partition key value and the sort key value.</p> </li>
     * <li> <p> <code>ProjectionExpression</code> - A string that identifies one or
     * more attributes to retrieve from the table. These attributes can include
     * scalars, sets, or elements of a JSON document. The attributes in the expression
     * must be separated by commas.</p> <p>If no attribute names are specified, then
     * all attributes are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>AttributesToGet</code> - This is a legacy parameter. Use
     * <code>ProjectionExpression</code> instead. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>. </p> </li> </ul>
     */
    inline BatchGetItemRequest& AddRequestItems(const char* key, KeysAndAttributes&& value) { m_requestItemsHasBeenSet = true; m_requestItems.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of one or more table names and, for each table, a map that describes
     * one or more items to retrieve from that table. Each table name can be used only
     * once per <code>BatchGetItem</code> request.</p> <p>Each element in the map of
     * items to retrieve consists of the following:</p> <ul> <li> <p>
     * <code>ConsistentRead</code> - If <code>true</code>, a strongly consistent read
     * is used; if <code>false</code> (the default), an eventually consistent read is
     * used.</p> </li> <li> <p> <code>ExpressionAttributeNames</code> - One or more
     * substitution tokens for attribute names in the <code>ProjectionExpression</code>
     * parameter. The following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul> <note> <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p> </note> <p>For more
     * information about expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>Keys</code> - An array of primary key attribute values that
     * define specific items in the table. For each primary key, you must provide
     * <i>all</i> of the key attributes. For example, with a simple primary key, you
     * only need to provide the partition key value. For a composite key, you must
     * provide <i>both</i> the partition key value and the sort key value.</p> </li>
     * <li> <p> <code>ProjectionExpression</code> - A string that identifies one or
     * more attributes to retrieve from the table. These attributes can include
     * scalars, sets, or elements of a JSON document. The attributes in the expression
     * must be separated by commas.</p> <p>If no attribute names are specified, then
     * all attributes are returned. If any of the requested attributes are not found,
     * they do not appear in the result.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> </li>
     * <li> <p> <code>AttributesToGet</code> - This is a legacy parameter. Use
     * <code>ProjectionExpression</code> instead. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>. </p> </li> </ul>
     */
    inline BatchGetItemRequest& AddRequestItems(const char* key, const KeysAndAttributes& value) { m_requestItemsHasBeenSet = true; m_requestItems.emplace(key, value); return *this; }


    
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }

    
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }

    
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = std::move(value); }

    
    inline BatchGetItemRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}

    
    inline BatchGetItemRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, KeysAndAttributes> m_requestItems;
    bool m_requestItemsHasBeenSet;

    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
