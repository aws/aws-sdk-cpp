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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/AttributeValue.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <i>GetItem</i> operation.</p>
   */
  class AWS_DYNAMODB_API GetItemRequest : public DynamoDBRequest
  {
  public:
    GetItemRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the table containing the requested item.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table containing the requested item.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table containing the requested item.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table containing the requested item.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table containing the requested item.</p>
     */
    inline GetItemRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table containing the requested item.</p>
     */
    inline GetItemRequest& WithTableName(Aws::String&& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table containing the requested item.</p>
     */
    inline GetItemRequest& WithTableName(const char* value) { SetTableName(value); return *this;}

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to retrieve.</p> <p>For the primary key, you must
     * provide all of the attributes. For example, with a simple primary key, you only
     * need to provide a value for the partition key. For a composite primary key, you
     * must provide values for both the partition key and the sort key.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetKey() const{ return m_key; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to retrieve.</p> <p>For the primary key, you must
     * provide all of the attributes. For example, with a simple primary key, you only
     * need to provide a value for the partition key. For a composite primary key, you
     * must provide values for both the partition key and the sort key.</p>
     */
    inline void SetKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to retrieve.</p> <p>For the primary key, you must
     * provide all of the attributes. For example, with a simple primary key, you only
     * need to provide a value for the partition key. For a composite primary key, you
     * must provide values for both the partition key and the sort key.</p>
     */
    inline void SetKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to retrieve.</p> <p>For the primary key, you must
     * provide all of the attributes. For example, with a simple primary key, you only
     * need to provide a value for the partition key. For a composite primary key, you
     * must provide values for both the partition key and the sort key.</p>
     */
    inline GetItemRequest& WithKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetKey(value); return *this;}

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to retrieve.</p> <p>For the primary key, you must
     * provide all of the attributes. For example, with a simple primary key, you only
     * need to provide a value for the partition key. For a composite primary key, you
     * must provide values for both the partition key and the sort key.</p>
     */
    inline GetItemRequest& WithKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetKey(value); return *this;}

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to retrieve.</p> <p>For the primary key, you must
     * provide all of the attributes. For example, with a simple primary key, you only
     * need to provide a value for the partition key. For a composite primary key, you
     * must provide values for both the partition key and the sort key.</p>
     */
    inline GetItemRequest& AddKey(const Aws::String& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to retrieve.</p> <p>For the primary key, you must
     * provide all of the attributes. For example, with a simple primary key, you only
     * need to provide a value for the partition key. For a composite primary key, you
     * must provide values for both the partition key and the sort key.</p>
     */
    inline GetItemRequest& AddKey(Aws::String&& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to retrieve.</p> <p>For the primary key, you must
     * provide all of the attributes. For example, with a simple primary key, you only
     * need to provide a value for the partition key. For a composite primary key, you
     * must provide values for both the partition key and the sort key.</p>
     */
    inline GetItemRequest& AddKey(const Aws::String& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to retrieve.</p> <p>For the primary key, you must
     * provide all of the attributes. For example, with a simple primary key, you only
     * need to provide a value for the partition key. For a composite primary key, you
     * must provide values for both the partition key and the sort key.</p>
     */
    inline GetItemRequest& AddKey(Aws::String&& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to retrieve.</p> <p>For the primary key, you must
     * provide all of the attributes. For example, with a simple primary key, you only
     * need to provide a value for the partition key. For a composite primary key, you
     * must provide values for both the partition key and the sort key.</p>
     */
    inline GetItemRequest& AddKey(const char* key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to retrieve.</p> <p>For the primary key, you must
     * provide all of the attributes. For example, with a simple primary key, you only
     * need to provide a value for the partition key. For a composite primary key, you
     * must provide values for both the partition key and the sort key.</p>
     */
    inline GetItemRequest& AddKey(const char* key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key[key] = value; return *this; }

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
    inline GetItemRequest& WithAttributesToGet(const Aws::Vector<Aws::String>& value) { SetAttributesToGet(value); return *this;}

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
    inline GetItemRequest& WithAttributesToGet(Aws::Vector<Aws::String>&& value) { SetAttributesToGet(value); return *this;}

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
    inline GetItemRequest& AddAttributesToGet(const Aws::String& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }

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
    inline GetItemRequest& AddAttributesToGet(Aws::String&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }

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
    inline GetItemRequest& AddAttributesToGet(const char* value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }

    /**
     * <p>Determines the read consistency model: If set to <code>true</code>, then the
     * operation uses strongly consistent reads; otherwise, the operation uses
     * eventually consistent reads.</p>
     */
    inline bool GetConsistentRead() const{ return m_consistentRead; }

    /**
     * <p>Determines the read consistency model: If set to <code>true</code>, then the
     * operation uses strongly consistent reads; otherwise, the operation uses
     * eventually consistent reads.</p>
     */
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }

    /**
     * <p>Determines the read consistency model: If set to <code>true</code>, then the
     * operation uses strongly consistent reads; otherwise, the operation uses
     * eventually consistent reads.</p>
     */
    inline GetItemRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}

    
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }

    
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline GetItemRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}

    
    inline GetItemRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(value); return *this;}

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
    inline GetItemRequest& WithProjectionExpression(const Aws::String& value) { SetProjectionExpression(value); return *this;}

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
    inline GetItemRequest& WithProjectionExpression(Aws::String&& value) { SetProjectionExpression(value); return *this;}

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
    inline GetItemRequest& WithProjectionExpression(const char* value) { SetProjectionExpression(value); return *this;}

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
    inline GetItemRequest& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}

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
    inline GetItemRequest& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(value); return *this;}

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
    inline GetItemRequest& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline GetItemRequest& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline GetItemRequest& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline GetItemRequest& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline GetItemRequest& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline GetItemRequest& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline GetItemRequest& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

  private:
    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;
    Aws::Map<Aws::String, AttributeValue> m_key;
    bool m_keyHasBeenSet;
    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet;
    bool m_consistentRead;
    bool m_consistentReadHasBeenSet;
    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet;
    Aws::String m_projectionExpression;
    bool m_projectionExpressionHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
