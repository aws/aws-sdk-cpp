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
#include <aws/dynamodb/model/ConditionalOperator.h>
#include <aws/dynamodb/model/ReturnValue.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/ReturnItemCollectionMetrics.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/ExpectedAttributeValue.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <i>DeleteItem</i> operation.</p>
   */
  class AWS_DYNAMODB_API DeleteItemRequest : public DynamoDBRequest
  {
  public:
    DeleteItemRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the table from which to delete the item.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table from which to delete the item.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table from which to delete the item.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table from which to delete the item.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table from which to delete the item.</p>
     */
    inline DeleteItemRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table from which to delete the item.</p>
     */
    inline DeleteItemRequest& WithTableName(Aws::String&& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table from which to delete the item.</p>
     */
    inline DeleteItemRequest& WithTableName(const char* value) { SetTableName(value); return *this;}

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to delete.</p> <p>For the primary key, you must provide
     * all of the attributes. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide values for both the partition key and the sort key.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetKey() const{ return m_key; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to delete.</p> <p>For the primary key, you must provide
     * all of the attributes. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide values for both the partition key and the sort key.</p>
     */
    inline void SetKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to delete.</p> <p>For the primary key, you must provide
     * all of the attributes. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide values for both the partition key and the sort key.</p>
     */
    inline void SetKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to delete.</p> <p>For the primary key, you must provide
     * all of the attributes. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide values for both the partition key and the sort key.</p>
     */
    inline DeleteItemRequest& WithKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetKey(value); return *this;}

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to delete.</p> <p>For the primary key, you must provide
     * all of the attributes. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide values for both the partition key and the sort key.</p>
     */
    inline DeleteItemRequest& WithKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetKey(value); return *this;}

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to delete.</p> <p>For the primary key, you must provide
     * all of the attributes. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide values for both the partition key and the sort key.</p>
     */
    inline DeleteItemRequest& AddKey(const Aws::String& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to delete.</p> <p>For the primary key, you must provide
     * all of the attributes. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide values for both the partition key and the sort key.</p>
     */
    inline DeleteItemRequest& AddKey(Aws::String&& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to delete.</p> <p>For the primary key, you must provide
     * all of the attributes. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide values for both the partition key and the sort key.</p>
     */
    inline DeleteItemRequest& AddKey(const Aws::String& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to delete.</p> <p>For the primary key, you must provide
     * all of the attributes. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide values for both the partition key and the sort key.</p>
     */
    inline DeleteItemRequest& AddKey(Aws::String&& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to delete.</p> <p>For the primary key, you must provide
     * all of the attributes. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide values for both the partition key and the sort key.</p>
     */
    inline DeleteItemRequest& AddKey(const char* key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key[key] = value; return *this; }

    /**
     * <p>A map of attribute names to <i>AttributeValue</i> objects, representing the
     * primary key of the item to delete.</p> <p>For the primary key, you must provide
     * all of the attributes. For example, with a simple primary key, you only need to
     * provide a value for the partition key. For a composite primary key, you must
     * provide values for both the partition key and the sort key.</p>
     */
    inline DeleteItemRequest& AddKey(const char* key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A map of attribute/condition pairs. <i>Expected</i> provides a conditional
     * block for the <i>DeleteItem</i> operation.</p> <p>Each element of
     * <i>Expected</i> consists of an attribute name, a comparison operator, and one or
     * more values. DynamoDB compares the attribute with the value(s) you supplied,
     * using the comparison operator. For each <i>Expected</i> element, the result of
     * the evaluation is either true or false.</p> <p>If you specify more than one
     * element in the <i>Expected</i> map, then by default all of the conditions must
     * evaluate to true. In other words, the conditions are ANDed together. (You can
     * use the <i>ConditionalOperator</i> parameter to OR the conditions instead. If
     * you do this, then at least one of the conditions must evaluate to true, rather
     * than all of them.)</p> <p>If the <i>Expected</i> map evaluates to true, then the
     * conditional operation succeeds; otherwise, it fails.</p> <p> <i>Expected</i>
     * contains the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or
     * more values to evaluate against the supplied attribute. The number of values in
     * the list depends on the <i>ComparisonOperator</i> being used.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes in the <i>AttributeValueList</i>. When
     * performing the comparison, DynamoDB uses strongly consistent reads.</p> <p>The
     * following comparison operators are available:</p> <p> <code>EQ | NE | LE | LT |
     * GE | GT | NOT_NULL | NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN |
     * BETWEEN</code> </p> <p>The following are descriptions of each comparison
     * operator.</p> <ul> <li> <p> <code>EQ</code> : Equal. <code>EQ</code> is
     * supported for all datatypes, including lists and maps.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, Binary, String Set, Number Set, or Binary Set. If an item
     * contains an <i>AttributeValue</i> element of a different type than the one
     * provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not equal <code>{"NS":["6", "2", "1"]}</code>.</p>
     * <p/> </li> <li> <p> <code>NE</code> : Not equal. <code>NE</code> is supported
     * for all datatypes, including lists and maps.</p> <p> <i>AttributeValueList</i>
     * can contain only one <i>AttributeValue</i> of type String, Number, Binary,
     * String Set, Number Set, or Binary Set. If an item contains an
     * <i>AttributeValue</i> of a different type than the one provided in the request,
     * the value does not match. For example, <code>{"S":"6"}</code> does not equal
     * <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
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
     * <code>NOT_NULL</code> : The attribute exists. <code>NOT_NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the existence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using
     * <code>NOT_NULL</code>, the result is a Boolean <i>true</i>. This result is
     * because the attribute "<code>a</code>" exists; its data type is not relevant to
     * the <code>NOT_NULL</code> comparison operator.</p> </note> </li> <li> <p>
     * <code>NULL</code> : The attribute does not exist. <code>NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the nonexistence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using <code>NULL</code>,
     * the result is a Boolean <i>false</i>. This is because the attribute
     * "<code>a</code>" exists; its data type is not relevant to the <code>NULL</code>
     * comparison operator.</p> </note> </li> <li> <p> <code>CONTAINS</code> : Checks
     * for a subsequence, or value in a set.</p> <p> <i>AttributeValueList</i> can
     * contain only one <i>AttributeValue</i> element of type String, Number, or Binary
     * (not a set type). If the target attribute of the comparison is of type String,
     * then the operator checks for a substring match. If the target attribute of the
     * comparison is of type Binary, then the operator looks for a subsequence of the
     * target that matches the input. If the target attribute of the comparison is a
     * set ("<code>SS</code>", "<code>NS</code>", or "<code>BS</code>"), then the
     * operator evaluates to true if it finds an exact match with any member of the
     * set.</p> <p>CONTAINS is supported for lists: When evaluating "<code>a CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>NOT_CONTAINS</code> : Checks for
     * absence of a subsequence, or absence of a value in a set.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If the target attribute of the
     * comparison is a String, then the operator checks for the absence of a substring
     * match. If the target attribute of the comparison is Binary, then the operator
     * checks for the absence of a subsequence of the target that matches the input. If
     * the target attribute of the comparison is a set ("<code>SS</code>",
     * "<code>NS</code>", or "<code>BS</code>"), then the operator evaluates to true if
     * it <i>does not</i> find an exact match with any member of the set.</p>
     * <p>NOT_CONTAINS is supported for lists: When evaluating "<code>a NOT CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>BEGINS_WITH</code> : Checks for
     * a prefix. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> of type String or Binary (not a Number or a set type). The
     * target attribute of the comparison must be of type String or Binary (not a
     * Number or a set type).</p> <p/> </li> <li> <p> <code>IN</code> : Checks for
     * matching elements within two sets.</p> <p> <i>AttributeValueList</i> can contain
     * one or more <i>AttributeValue</i> elements of type String, Number, or Binary
     * (not a set type). These attributes are compared against an existing set type
     * attribute of an item. If any elements of the input set are present in the item
     * attribute, the expression evaluates to true.</p> </li> <li> <p>
     * <code>BETWEEN</code> : Greater than or equal to the first value, and less than
     * or equal to the second value. </p> <p> <i>AttributeValueList</i> must contain
     * two <i>AttributeValue</i> elements of the same type, either String, Number, or
     * Binary (not a set type). A target attribute matches if the target value is
     * greater than, or equal to, the first element and less than, or equal to, the
     * second element. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not compare to <code>{"N":"6"}</code>.
     * Also, <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage examples of
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     * <p>For backward compatibility with previous DynamoDB releases, the following
     * parameters can be used instead of <i>AttributeValueList</i> and
     * <i>ComparisonOperator</i>:</p> <ul> <li> <p> <i>Value</i> - A value for DynamoDB
     * to compare with an attribute.</p> </li> <li> <p> <i>Exists</i> - A Boolean value
     * that causes DynamoDB to evaluate the value before attempting the conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the condition evaluates to true; otherwise the condition evaluate to
     * false.</p> </li> <li> <p>If <i>Exists</i> is <code>false</code>, DynamoDB
     * assumes that the attribute value does <i>not</i> exist in the table. If in fact
     * the value does not exist, then the assumption is valid and the condition
     * evaluates to true. If the value is found, despite the assumption that it does
     * not exist, the condition evaluates to false.</p> </li> </ul> <p>Note that the
     * default value for <i>Exists</i> is <code>true</code>.</p> </li> </ul> <p>The
     * <i>Value</i> and <i>Exists</i> parameters are incompatible with
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>. Note that if you use
     * both sets of parameters at once, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <note> <p>This parameter does not
     * support attributes of type List or Map.</p> </note>
     */
    inline const Aws::Map<Aws::String, ExpectedAttributeValue>& GetExpected() const{ return m_expected; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A map of attribute/condition pairs. <i>Expected</i> provides a conditional
     * block for the <i>DeleteItem</i> operation.</p> <p>Each element of
     * <i>Expected</i> consists of an attribute name, a comparison operator, and one or
     * more values. DynamoDB compares the attribute with the value(s) you supplied,
     * using the comparison operator. For each <i>Expected</i> element, the result of
     * the evaluation is either true or false.</p> <p>If you specify more than one
     * element in the <i>Expected</i> map, then by default all of the conditions must
     * evaluate to true. In other words, the conditions are ANDed together. (You can
     * use the <i>ConditionalOperator</i> parameter to OR the conditions instead. If
     * you do this, then at least one of the conditions must evaluate to true, rather
     * than all of them.)</p> <p>If the <i>Expected</i> map evaluates to true, then the
     * conditional operation succeeds; otherwise, it fails.</p> <p> <i>Expected</i>
     * contains the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or
     * more values to evaluate against the supplied attribute. The number of values in
     * the list depends on the <i>ComparisonOperator</i> being used.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes in the <i>AttributeValueList</i>. When
     * performing the comparison, DynamoDB uses strongly consistent reads.</p> <p>The
     * following comparison operators are available:</p> <p> <code>EQ | NE | LE | LT |
     * GE | GT | NOT_NULL | NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN |
     * BETWEEN</code> </p> <p>The following are descriptions of each comparison
     * operator.</p> <ul> <li> <p> <code>EQ</code> : Equal. <code>EQ</code> is
     * supported for all datatypes, including lists and maps.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, Binary, String Set, Number Set, or Binary Set. If an item
     * contains an <i>AttributeValue</i> element of a different type than the one
     * provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not equal <code>{"NS":["6", "2", "1"]}</code>.</p>
     * <p/> </li> <li> <p> <code>NE</code> : Not equal. <code>NE</code> is supported
     * for all datatypes, including lists and maps.</p> <p> <i>AttributeValueList</i>
     * can contain only one <i>AttributeValue</i> of type String, Number, Binary,
     * String Set, Number Set, or Binary Set. If an item contains an
     * <i>AttributeValue</i> of a different type than the one provided in the request,
     * the value does not match. For example, <code>{"S":"6"}</code> does not equal
     * <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
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
     * <code>NOT_NULL</code> : The attribute exists. <code>NOT_NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the existence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using
     * <code>NOT_NULL</code>, the result is a Boolean <i>true</i>. This result is
     * because the attribute "<code>a</code>" exists; its data type is not relevant to
     * the <code>NOT_NULL</code> comparison operator.</p> </note> </li> <li> <p>
     * <code>NULL</code> : The attribute does not exist. <code>NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the nonexistence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using <code>NULL</code>,
     * the result is a Boolean <i>false</i>. This is because the attribute
     * "<code>a</code>" exists; its data type is not relevant to the <code>NULL</code>
     * comparison operator.</p> </note> </li> <li> <p> <code>CONTAINS</code> : Checks
     * for a subsequence, or value in a set.</p> <p> <i>AttributeValueList</i> can
     * contain only one <i>AttributeValue</i> element of type String, Number, or Binary
     * (not a set type). If the target attribute of the comparison is of type String,
     * then the operator checks for a substring match. If the target attribute of the
     * comparison is of type Binary, then the operator looks for a subsequence of the
     * target that matches the input. If the target attribute of the comparison is a
     * set ("<code>SS</code>", "<code>NS</code>", or "<code>BS</code>"), then the
     * operator evaluates to true if it finds an exact match with any member of the
     * set.</p> <p>CONTAINS is supported for lists: When evaluating "<code>a CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>NOT_CONTAINS</code> : Checks for
     * absence of a subsequence, or absence of a value in a set.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If the target attribute of the
     * comparison is a String, then the operator checks for the absence of a substring
     * match. If the target attribute of the comparison is Binary, then the operator
     * checks for the absence of a subsequence of the target that matches the input. If
     * the target attribute of the comparison is a set ("<code>SS</code>",
     * "<code>NS</code>", or "<code>BS</code>"), then the operator evaluates to true if
     * it <i>does not</i> find an exact match with any member of the set.</p>
     * <p>NOT_CONTAINS is supported for lists: When evaluating "<code>a NOT CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>BEGINS_WITH</code> : Checks for
     * a prefix. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> of type String or Binary (not a Number or a set type). The
     * target attribute of the comparison must be of type String or Binary (not a
     * Number or a set type).</p> <p/> </li> <li> <p> <code>IN</code> : Checks for
     * matching elements within two sets.</p> <p> <i>AttributeValueList</i> can contain
     * one or more <i>AttributeValue</i> elements of type String, Number, or Binary
     * (not a set type). These attributes are compared against an existing set type
     * attribute of an item. If any elements of the input set are present in the item
     * attribute, the expression evaluates to true.</p> </li> <li> <p>
     * <code>BETWEEN</code> : Greater than or equal to the first value, and less than
     * or equal to the second value. </p> <p> <i>AttributeValueList</i> must contain
     * two <i>AttributeValue</i> elements of the same type, either String, Number, or
     * Binary (not a set type). A target attribute matches if the target value is
     * greater than, or equal to, the first element and less than, or equal to, the
     * second element. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not compare to <code>{"N":"6"}</code>.
     * Also, <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage examples of
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     * <p>For backward compatibility with previous DynamoDB releases, the following
     * parameters can be used instead of <i>AttributeValueList</i> and
     * <i>ComparisonOperator</i>:</p> <ul> <li> <p> <i>Value</i> - A value for DynamoDB
     * to compare with an attribute.</p> </li> <li> <p> <i>Exists</i> - A Boolean value
     * that causes DynamoDB to evaluate the value before attempting the conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the condition evaluates to true; otherwise the condition evaluate to
     * false.</p> </li> <li> <p>If <i>Exists</i> is <code>false</code>, DynamoDB
     * assumes that the attribute value does <i>not</i> exist in the table. If in fact
     * the value does not exist, then the assumption is valid and the condition
     * evaluates to true. If the value is found, despite the assumption that it does
     * not exist, the condition evaluates to false.</p> </li> </ul> <p>Note that the
     * default value for <i>Exists</i> is <code>true</code>.</p> </li> </ul> <p>The
     * <i>Value</i> and <i>Exists</i> parameters are incompatible with
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>. Note that if you use
     * both sets of parameters at once, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <note> <p>This parameter does not
     * support attributes of type List or Map.</p> </note>
     */
    inline void SetExpected(const Aws::Map<Aws::String, ExpectedAttributeValue>& value) { m_expectedHasBeenSet = true; m_expected = value; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A map of attribute/condition pairs. <i>Expected</i> provides a conditional
     * block for the <i>DeleteItem</i> operation.</p> <p>Each element of
     * <i>Expected</i> consists of an attribute name, a comparison operator, and one or
     * more values. DynamoDB compares the attribute with the value(s) you supplied,
     * using the comparison operator. For each <i>Expected</i> element, the result of
     * the evaluation is either true or false.</p> <p>If you specify more than one
     * element in the <i>Expected</i> map, then by default all of the conditions must
     * evaluate to true. In other words, the conditions are ANDed together. (You can
     * use the <i>ConditionalOperator</i> parameter to OR the conditions instead. If
     * you do this, then at least one of the conditions must evaluate to true, rather
     * than all of them.)</p> <p>If the <i>Expected</i> map evaluates to true, then the
     * conditional operation succeeds; otherwise, it fails.</p> <p> <i>Expected</i>
     * contains the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or
     * more values to evaluate against the supplied attribute. The number of values in
     * the list depends on the <i>ComparisonOperator</i> being used.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes in the <i>AttributeValueList</i>. When
     * performing the comparison, DynamoDB uses strongly consistent reads.</p> <p>The
     * following comparison operators are available:</p> <p> <code>EQ | NE | LE | LT |
     * GE | GT | NOT_NULL | NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN |
     * BETWEEN</code> </p> <p>The following are descriptions of each comparison
     * operator.</p> <ul> <li> <p> <code>EQ</code> : Equal. <code>EQ</code> is
     * supported for all datatypes, including lists and maps.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, Binary, String Set, Number Set, or Binary Set. If an item
     * contains an <i>AttributeValue</i> element of a different type than the one
     * provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not equal <code>{"NS":["6", "2", "1"]}</code>.</p>
     * <p/> </li> <li> <p> <code>NE</code> : Not equal. <code>NE</code> is supported
     * for all datatypes, including lists and maps.</p> <p> <i>AttributeValueList</i>
     * can contain only one <i>AttributeValue</i> of type String, Number, Binary,
     * String Set, Number Set, or Binary Set. If an item contains an
     * <i>AttributeValue</i> of a different type than the one provided in the request,
     * the value does not match. For example, <code>{"S":"6"}</code> does not equal
     * <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
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
     * <code>NOT_NULL</code> : The attribute exists. <code>NOT_NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the existence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using
     * <code>NOT_NULL</code>, the result is a Boolean <i>true</i>. This result is
     * because the attribute "<code>a</code>" exists; its data type is not relevant to
     * the <code>NOT_NULL</code> comparison operator.</p> </note> </li> <li> <p>
     * <code>NULL</code> : The attribute does not exist. <code>NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the nonexistence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using <code>NULL</code>,
     * the result is a Boolean <i>false</i>. This is because the attribute
     * "<code>a</code>" exists; its data type is not relevant to the <code>NULL</code>
     * comparison operator.</p> </note> </li> <li> <p> <code>CONTAINS</code> : Checks
     * for a subsequence, or value in a set.</p> <p> <i>AttributeValueList</i> can
     * contain only one <i>AttributeValue</i> element of type String, Number, or Binary
     * (not a set type). If the target attribute of the comparison is of type String,
     * then the operator checks for a substring match. If the target attribute of the
     * comparison is of type Binary, then the operator looks for a subsequence of the
     * target that matches the input. If the target attribute of the comparison is a
     * set ("<code>SS</code>", "<code>NS</code>", or "<code>BS</code>"), then the
     * operator evaluates to true if it finds an exact match with any member of the
     * set.</p> <p>CONTAINS is supported for lists: When evaluating "<code>a CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>NOT_CONTAINS</code> : Checks for
     * absence of a subsequence, or absence of a value in a set.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If the target attribute of the
     * comparison is a String, then the operator checks for the absence of a substring
     * match. If the target attribute of the comparison is Binary, then the operator
     * checks for the absence of a subsequence of the target that matches the input. If
     * the target attribute of the comparison is a set ("<code>SS</code>",
     * "<code>NS</code>", or "<code>BS</code>"), then the operator evaluates to true if
     * it <i>does not</i> find an exact match with any member of the set.</p>
     * <p>NOT_CONTAINS is supported for lists: When evaluating "<code>a NOT CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>BEGINS_WITH</code> : Checks for
     * a prefix. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> of type String or Binary (not a Number or a set type). The
     * target attribute of the comparison must be of type String or Binary (not a
     * Number or a set type).</p> <p/> </li> <li> <p> <code>IN</code> : Checks for
     * matching elements within two sets.</p> <p> <i>AttributeValueList</i> can contain
     * one or more <i>AttributeValue</i> elements of type String, Number, or Binary
     * (not a set type). These attributes are compared against an existing set type
     * attribute of an item. If any elements of the input set are present in the item
     * attribute, the expression evaluates to true.</p> </li> <li> <p>
     * <code>BETWEEN</code> : Greater than or equal to the first value, and less than
     * or equal to the second value. </p> <p> <i>AttributeValueList</i> must contain
     * two <i>AttributeValue</i> elements of the same type, either String, Number, or
     * Binary (not a set type). A target attribute matches if the target value is
     * greater than, or equal to, the first element and less than, or equal to, the
     * second element. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not compare to <code>{"N":"6"}</code>.
     * Also, <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage examples of
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     * <p>For backward compatibility with previous DynamoDB releases, the following
     * parameters can be used instead of <i>AttributeValueList</i> and
     * <i>ComparisonOperator</i>:</p> <ul> <li> <p> <i>Value</i> - A value for DynamoDB
     * to compare with an attribute.</p> </li> <li> <p> <i>Exists</i> - A Boolean value
     * that causes DynamoDB to evaluate the value before attempting the conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the condition evaluates to true; otherwise the condition evaluate to
     * false.</p> </li> <li> <p>If <i>Exists</i> is <code>false</code>, DynamoDB
     * assumes that the attribute value does <i>not</i> exist in the table. If in fact
     * the value does not exist, then the assumption is valid and the condition
     * evaluates to true. If the value is found, despite the assumption that it does
     * not exist, the condition evaluates to false.</p> </li> </ul> <p>Note that the
     * default value for <i>Exists</i> is <code>true</code>.</p> </li> </ul> <p>The
     * <i>Value</i> and <i>Exists</i> parameters are incompatible with
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>. Note that if you use
     * both sets of parameters at once, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <note> <p>This parameter does not
     * support attributes of type List or Map.</p> </note>
     */
    inline void SetExpected(Aws::Map<Aws::String, ExpectedAttributeValue>&& value) { m_expectedHasBeenSet = true; m_expected = value; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A map of attribute/condition pairs. <i>Expected</i> provides a conditional
     * block for the <i>DeleteItem</i> operation.</p> <p>Each element of
     * <i>Expected</i> consists of an attribute name, a comparison operator, and one or
     * more values. DynamoDB compares the attribute with the value(s) you supplied,
     * using the comparison operator. For each <i>Expected</i> element, the result of
     * the evaluation is either true or false.</p> <p>If you specify more than one
     * element in the <i>Expected</i> map, then by default all of the conditions must
     * evaluate to true. In other words, the conditions are ANDed together. (You can
     * use the <i>ConditionalOperator</i> parameter to OR the conditions instead. If
     * you do this, then at least one of the conditions must evaluate to true, rather
     * than all of them.)</p> <p>If the <i>Expected</i> map evaluates to true, then the
     * conditional operation succeeds; otherwise, it fails.</p> <p> <i>Expected</i>
     * contains the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or
     * more values to evaluate against the supplied attribute. The number of values in
     * the list depends on the <i>ComparisonOperator</i> being used.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes in the <i>AttributeValueList</i>. When
     * performing the comparison, DynamoDB uses strongly consistent reads.</p> <p>The
     * following comparison operators are available:</p> <p> <code>EQ | NE | LE | LT |
     * GE | GT | NOT_NULL | NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN |
     * BETWEEN</code> </p> <p>The following are descriptions of each comparison
     * operator.</p> <ul> <li> <p> <code>EQ</code> : Equal. <code>EQ</code> is
     * supported for all datatypes, including lists and maps.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, Binary, String Set, Number Set, or Binary Set. If an item
     * contains an <i>AttributeValue</i> element of a different type than the one
     * provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not equal <code>{"NS":["6", "2", "1"]}</code>.</p>
     * <p/> </li> <li> <p> <code>NE</code> : Not equal. <code>NE</code> is supported
     * for all datatypes, including lists and maps.</p> <p> <i>AttributeValueList</i>
     * can contain only one <i>AttributeValue</i> of type String, Number, Binary,
     * String Set, Number Set, or Binary Set. If an item contains an
     * <i>AttributeValue</i> of a different type than the one provided in the request,
     * the value does not match. For example, <code>{"S":"6"}</code> does not equal
     * <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
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
     * <code>NOT_NULL</code> : The attribute exists. <code>NOT_NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the existence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using
     * <code>NOT_NULL</code>, the result is a Boolean <i>true</i>. This result is
     * because the attribute "<code>a</code>" exists; its data type is not relevant to
     * the <code>NOT_NULL</code> comparison operator.</p> </note> </li> <li> <p>
     * <code>NULL</code> : The attribute does not exist. <code>NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the nonexistence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using <code>NULL</code>,
     * the result is a Boolean <i>false</i>. This is because the attribute
     * "<code>a</code>" exists; its data type is not relevant to the <code>NULL</code>
     * comparison operator.</p> </note> </li> <li> <p> <code>CONTAINS</code> : Checks
     * for a subsequence, or value in a set.</p> <p> <i>AttributeValueList</i> can
     * contain only one <i>AttributeValue</i> element of type String, Number, or Binary
     * (not a set type). If the target attribute of the comparison is of type String,
     * then the operator checks for a substring match. If the target attribute of the
     * comparison is of type Binary, then the operator looks for a subsequence of the
     * target that matches the input. If the target attribute of the comparison is a
     * set ("<code>SS</code>", "<code>NS</code>", or "<code>BS</code>"), then the
     * operator evaluates to true if it finds an exact match with any member of the
     * set.</p> <p>CONTAINS is supported for lists: When evaluating "<code>a CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>NOT_CONTAINS</code> : Checks for
     * absence of a subsequence, or absence of a value in a set.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If the target attribute of the
     * comparison is a String, then the operator checks for the absence of a substring
     * match. If the target attribute of the comparison is Binary, then the operator
     * checks for the absence of a subsequence of the target that matches the input. If
     * the target attribute of the comparison is a set ("<code>SS</code>",
     * "<code>NS</code>", or "<code>BS</code>"), then the operator evaluates to true if
     * it <i>does not</i> find an exact match with any member of the set.</p>
     * <p>NOT_CONTAINS is supported for lists: When evaluating "<code>a NOT CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>BEGINS_WITH</code> : Checks for
     * a prefix. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> of type String or Binary (not a Number or a set type). The
     * target attribute of the comparison must be of type String or Binary (not a
     * Number or a set type).</p> <p/> </li> <li> <p> <code>IN</code> : Checks for
     * matching elements within two sets.</p> <p> <i>AttributeValueList</i> can contain
     * one or more <i>AttributeValue</i> elements of type String, Number, or Binary
     * (not a set type). These attributes are compared against an existing set type
     * attribute of an item. If any elements of the input set are present in the item
     * attribute, the expression evaluates to true.</p> </li> <li> <p>
     * <code>BETWEEN</code> : Greater than or equal to the first value, and less than
     * or equal to the second value. </p> <p> <i>AttributeValueList</i> must contain
     * two <i>AttributeValue</i> elements of the same type, either String, Number, or
     * Binary (not a set type). A target attribute matches if the target value is
     * greater than, or equal to, the first element and less than, or equal to, the
     * second element. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not compare to <code>{"N":"6"}</code>.
     * Also, <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage examples of
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     * <p>For backward compatibility with previous DynamoDB releases, the following
     * parameters can be used instead of <i>AttributeValueList</i> and
     * <i>ComparisonOperator</i>:</p> <ul> <li> <p> <i>Value</i> - A value for DynamoDB
     * to compare with an attribute.</p> </li> <li> <p> <i>Exists</i> - A Boolean value
     * that causes DynamoDB to evaluate the value before attempting the conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the condition evaluates to true; otherwise the condition evaluate to
     * false.</p> </li> <li> <p>If <i>Exists</i> is <code>false</code>, DynamoDB
     * assumes that the attribute value does <i>not</i> exist in the table. If in fact
     * the value does not exist, then the assumption is valid and the condition
     * evaluates to true. If the value is found, despite the assumption that it does
     * not exist, the condition evaluates to false.</p> </li> </ul> <p>Note that the
     * default value for <i>Exists</i> is <code>true</code>.</p> </li> </ul> <p>The
     * <i>Value</i> and <i>Exists</i> parameters are incompatible with
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>. Note that if you use
     * both sets of parameters at once, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <note> <p>This parameter does not
     * support attributes of type List or Map.</p> </note>
     */
    inline DeleteItemRequest& WithExpected(const Aws::Map<Aws::String, ExpectedAttributeValue>& value) { SetExpected(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A map of attribute/condition pairs. <i>Expected</i> provides a conditional
     * block for the <i>DeleteItem</i> operation.</p> <p>Each element of
     * <i>Expected</i> consists of an attribute name, a comparison operator, and one or
     * more values. DynamoDB compares the attribute with the value(s) you supplied,
     * using the comparison operator. For each <i>Expected</i> element, the result of
     * the evaluation is either true or false.</p> <p>If you specify more than one
     * element in the <i>Expected</i> map, then by default all of the conditions must
     * evaluate to true. In other words, the conditions are ANDed together. (You can
     * use the <i>ConditionalOperator</i> parameter to OR the conditions instead. If
     * you do this, then at least one of the conditions must evaluate to true, rather
     * than all of them.)</p> <p>If the <i>Expected</i> map evaluates to true, then the
     * conditional operation succeeds; otherwise, it fails.</p> <p> <i>Expected</i>
     * contains the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or
     * more values to evaluate against the supplied attribute. The number of values in
     * the list depends on the <i>ComparisonOperator</i> being used.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes in the <i>AttributeValueList</i>. When
     * performing the comparison, DynamoDB uses strongly consistent reads.</p> <p>The
     * following comparison operators are available:</p> <p> <code>EQ | NE | LE | LT |
     * GE | GT | NOT_NULL | NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN |
     * BETWEEN</code> </p> <p>The following are descriptions of each comparison
     * operator.</p> <ul> <li> <p> <code>EQ</code> : Equal. <code>EQ</code> is
     * supported for all datatypes, including lists and maps.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, Binary, String Set, Number Set, or Binary Set. If an item
     * contains an <i>AttributeValue</i> element of a different type than the one
     * provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not equal <code>{"NS":["6", "2", "1"]}</code>.</p>
     * <p/> </li> <li> <p> <code>NE</code> : Not equal. <code>NE</code> is supported
     * for all datatypes, including lists and maps.</p> <p> <i>AttributeValueList</i>
     * can contain only one <i>AttributeValue</i> of type String, Number, Binary,
     * String Set, Number Set, or Binary Set. If an item contains an
     * <i>AttributeValue</i> of a different type than the one provided in the request,
     * the value does not match. For example, <code>{"S":"6"}</code> does not equal
     * <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
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
     * <code>NOT_NULL</code> : The attribute exists. <code>NOT_NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the existence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using
     * <code>NOT_NULL</code>, the result is a Boolean <i>true</i>. This result is
     * because the attribute "<code>a</code>" exists; its data type is not relevant to
     * the <code>NOT_NULL</code> comparison operator.</p> </note> </li> <li> <p>
     * <code>NULL</code> : The attribute does not exist. <code>NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the nonexistence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using <code>NULL</code>,
     * the result is a Boolean <i>false</i>. This is because the attribute
     * "<code>a</code>" exists; its data type is not relevant to the <code>NULL</code>
     * comparison operator.</p> </note> </li> <li> <p> <code>CONTAINS</code> : Checks
     * for a subsequence, or value in a set.</p> <p> <i>AttributeValueList</i> can
     * contain only one <i>AttributeValue</i> element of type String, Number, or Binary
     * (not a set type). If the target attribute of the comparison is of type String,
     * then the operator checks for a substring match. If the target attribute of the
     * comparison is of type Binary, then the operator looks for a subsequence of the
     * target that matches the input. If the target attribute of the comparison is a
     * set ("<code>SS</code>", "<code>NS</code>", or "<code>BS</code>"), then the
     * operator evaluates to true if it finds an exact match with any member of the
     * set.</p> <p>CONTAINS is supported for lists: When evaluating "<code>a CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>NOT_CONTAINS</code> : Checks for
     * absence of a subsequence, or absence of a value in a set.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If the target attribute of the
     * comparison is a String, then the operator checks for the absence of a substring
     * match. If the target attribute of the comparison is Binary, then the operator
     * checks for the absence of a subsequence of the target that matches the input. If
     * the target attribute of the comparison is a set ("<code>SS</code>",
     * "<code>NS</code>", or "<code>BS</code>"), then the operator evaluates to true if
     * it <i>does not</i> find an exact match with any member of the set.</p>
     * <p>NOT_CONTAINS is supported for lists: When evaluating "<code>a NOT CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>BEGINS_WITH</code> : Checks for
     * a prefix. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> of type String or Binary (not a Number or a set type). The
     * target attribute of the comparison must be of type String or Binary (not a
     * Number or a set type).</p> <p/> </li> <li> <p> <code>IN</code> : Checks for
     * matching elements within two sets.</p> <p> <i>AttributeValueList</i> can contain
     * one or more <i>AttributeValue</i> elements of type String, Number, or Binary
     * (not a set type). These attributes are compared against an existing set type
     * attribute of an item. If any elements of the input set are present in the item
     * attribute, the expression evaluates to true.</p> </li> <li> <p>
     * <code>BETWEEN</code> : Greater than or equal to the first value, and less than
     * or equal to the second value. </p> <p> <i>AttributeValueList</i> must contain
     * two <i>AttributeValue</i> elements of the same type, either String, Number, or
     * Binary (not a set type). A target attribute matches if the target value is
     * greater than, or equal to, the first element and less than, or equal to, the
     * second element. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not compare to <code>{"N":"6"}</code>.
     * Also, <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage examples of
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     * <p>For backward compatibility with previous DynamoDB releases, the following
     * parameters can be used instead of <i>AttributeValueList</i> and
     * <i>ComparisonOperator</i>:</p> <ul> <li> <p> <i>Value</i> - A value for DynamoDB
     * to compare with an attribute.</p> </li> <li> <p> <i>Exists</i> - A Boolean value
     * that causes DynamoDB to evaluate the value before attempting the conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the condition evaluates to true; otherwise the condition evaluate to
     * false.</p> </li> <li> <p>If <i>Exists</i> is <code>false</code>, DynamoDB
     * assumes that the attribute value does <i>not</i> exist in the table. If in fact
     * the value does not exist, then the assumption is valid and the condition
     * evaluates to true. If the value is found, despite the assumption that it does
     * not exist, the condition evaluates to false.</p> </li> </ul> <p>Note that the
     * default value for <i>Exists</i> is <code>true</code>.</p> </li> </ul> <p>The
     * <i>Value</i> and <i>Exists</i> parameters are incompatible with
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>. Note that if you use
     * both sets of parameters at once, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <note> <p>This parameter does not
     * support attributes of type List or Map.</p> </note>
     */
    inline DeleteItemRequest& WithExpected(Aws::Map<Aws::String, ExpectedAttributeValue>&& value) { SetExpected(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A map of attribute/condition pairs. <i>Expected</i> provides a conditional
     * block for the <i>DeleteItem</i> operation.</p> <p>Each element of
     * <i>Expected</i> consists of an attribute name, a comparison operator, and one or
     * more values. DynamoDB compares the attribute with the value(s) you supplied,
     * using the comparison operator. For each <i>Expected</i> element, the result of
     * the evaluation is either true or false.</p> <p>If you specify more than one
     * element in the <i>Expected</i> map, then by default all of the conditions must
     * evaluate to true. In other words, the conditions are ANDed together. (You can
     * use the <i>ConditionalOperator</i> parameter to OR the conditions instead. If
     * you do this, then at least one of the conditions must evaluate to true, rather
     * than all of them.)</p> <p>If the <i>Expected</i> map evaluates to true, then the
     * conditional operation succeeds; otherwise, it fails.</p> <p> <i>Expected</i>
     * contains the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or
     * more values to evaluate against the supplied attribute. The number of values in
     * the list depends on the <i>ComparisonOperator</i> being used.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes in the <i>AttributeValueList</i>. When
     * performing the comparison, DynamoDB uses strongly consistent reads.</p> <p>The
     * following comparison operators are available:</p> <p> <code>EQ | NE | LE | LT |
     * GE | GT | NOT_NULL | NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN |
     * BETWEEN</code> </p> <p>The following are descriptions of each comparison
     * operator.</p> <ul> <li> <p> <code>EQ</code> : Equal. <code>EQ</code> is
     * supported for all datatypes, including lists and maps.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, Binary, String Set, Number Set, or Binary Set. If an item
     * contains an <i>AttributeValue</i> element of a different type than the one
     * provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not equal <code>{"NS":["6", "2", "1"]}</code>.</p>
     * <p/> </li> <li> <p> <code>NE</code> : Not equal. <code>NE</code> is supported
     * for all datatypes, including lists and maps.</p> <p> <i>AttributeValueList</i>
     * can contain only one <i>AttributeValue</i> of type String, Number, Binary,
     * String Set, Number Set, or Binary Set. If an item contains an
     * <i>AttributeValue</i> of a different type than the one provided in the request,
     * the value does not match. For example, <code>{"S":"6"}</code> does not equal
     * <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
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
     * <code>NOT_NULL</code> : The attribute exists. <code>NOT_NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the existence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using
     * <code>NOT_NULL</code>, the result is a Boolean <i>true</i>. This result is
     * because the attribute "<code>a</code>" exists; its data type is not relevant to
     * the <code>NOT_NULL</code> comparison operator.</p> </note> </li> <li> <p>
     * <code>NULL</code> : The attribute does not exist. <code>NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the nonexistence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using <code>NULL</code>,
     * the result is a Boolean <i>false</i>. This is because the attribute
     * "<code>a</code>" exists; its data type is not relevant to the <code>NULL</code>
     * comparison operator.</p> </note> </li> <li> <p> <code>CONTAINS</code> : Checks
     * for a subsequence, or value in a set.</p> <p> <i>AttributeValueList</i> can
     * contain only one <i>AttributeValue</i> element of type String, Number, or Binary
     * (not a set type). If the target attribute of the comparison is of type String,
     * then the operator checks for a substring match. If the target attribute of the
     * comparison is of type Binary, then the operator looks for a subsequence of the
     * target that matches the input. If the target attribute of the comparison is a
     * set ("<code>SS</code>", "<code>NS</code>", or "<code>BS</code>"), then the
     * operator evaluates to true if it finds an exact match with any member of the
     * set.</p> <p>CONTAINS is supported for lists: When evaluating "<code>a CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>NOT_CONTAINS</code> : Checks for
     * absence of a subsequence, or absence of a value in a set.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If the target attribute of the
     * comparison is a String, then the operator checks for the absence of a substring
     * match. If the target attribute of the comparison is Binary, then the operator
     * checks for the absence of a subsequence of the target that matches the input. If
     * the target attribute of the comparison is a set ("<code>SS</code>",
     * "<code>NS</code>", or "<code>BS</code>"), then the operator evaluates to true if
     * it <i>does not</i> find an exact match with any member of the set.</p>
     * <p>NOT_CONTAINS is supported for lists: When evaluating "<code>a NOT CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>BEGINS_WITH</code> : Checks for
     * a prefix. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> of type String or Binary (not a Number or a set type). The
     * target attribute of the comparison must be of type String or Binary (not a
     * Number or a set type).</p> <p/> </li> <li> <p> <code>IN</code> : Checks for
     * matching elements within two sets.</p> <p> <i>AttributeValueList</i> can contain
     * one or more <i>AttributeValue</i> elements of type String, Number, or Binary
     * (not a set type). These attributes are compared against an existing set type
     * attribute of an item. If any elements of the input set are present in the item
     * attribute, the expression evaluates to true.</p> </li> <li> <p>
     * <code>BETWEEN</code> : Greater than or equal to the first value, and less than
     * or equal to the second value. </p> <p> <i>AttributeValueList</i> must contain
     * two <i>AttributeValue</i> elements of the same type, either String, Number, or
     * Binary (not a set type). A target attribute matches if the target value is
     * greater than, or equal to, the first element and less than, or equal to, the
     * second element. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not compare to <code>{"N":"6"}</code>.
     * Also, <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage examples of
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     * <p>For backward compatibility with previous DynamoDB releases, the following
     * parameters can be used instead of <i>AttributeValueList</i> and
     * <i>ComparisonOperator</i>:</p> <ul> <li> <p> <i>Value</i> - A value for DynamoDB
     * to compare with an attribute.</p> </li> <li> <p> <i>Exists</i> - A Boolean value
     * that causes DynamoDB to evaluate the value before attempting the conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the condition evaluates to true; otherwise the condition evaluate to
     * false.</p> </li> <li> <p>If <i>Exists</i> is <code>false</code>, DynamoDB
     * assumes that the attribute value does <i>not</i> exist in the table. If in fact
     * the value does not exist, then the assumption is valid and the condition
     * evaluates to true. If the value is found, despite the assumption that it does
     * not exist, the condition evaluates to false.</p> </li> </ul> <p>Note that the
     * default value for <i>Exists</i> is <code>true</code>.</p> </li> </ul> <p>The
     * <i>Value</i> and <i>Exists</i> parameters are incompatible with
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>. Note that if you use
     * both sets of parameters at once, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <note> <p>This parameter does not
     * support attributes of type List or Map.</p> </note>
     */
    inline DeleteItemRequest& AddExpected(const Aws::String& key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A map of attribute/condition pairs. <i>Expected</i> provides a conditional
     * block for the <i>DeleteItem</i> operation.</p> <p>Each element of
     * <i>Expected</i> consists of an attribute name, a comparison operator, and one or
     * more values. DynamoDB compares the attribute with the value(s) you supplied,
     * using the comparison operator. For each <i>Expected</i> element, the result of
     * the evaluation is either true or false.</p> <p>If you specify more than one
     * element in the <i>Expected</i> map, then by default all of the conditions must
     * evaluate to true. In other words, the conditions are ANDed together. (You can
     * use the <i>ConditionalOperator</i> parameter to OR the conditions instead. If
     * you do this, then at least one of the conditions must evaluate to true, rather
     * than all of them.)</p> <p>If the <i>Expected</i> map evaluates to true, then the
     * conditional operation succeeds; otherwise, it fails.</p> <p> <i>Expected</i>
     * contains the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or
     * more values to evaluate against the supplied attribute. The number of values in
     * the list depends on the <i>ComparisonOperator</i> being used.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes in the <i>AttributeValueList</i>. When
     * performing the comparison, DynamoDB uses strongly consistent reads.</p> <p>The
     * following comparison operators are available:</p> <p> <code>EQ | NE | LE | LT |
     * GE | GT | NOT_NULL | NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN |
     * BETWEEN</code> </p> <p>The following are descriptions of each comparison
     * operator.</p> <ul> <li> <p> <code>EQ</code> : Equal. <code>EQ</code> is
     * supported for all datatypes, including lists and maps.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, Binary, String Set, Number Set, or Binary Set. If an item
     * contains an <i>AttributeValue</i> element of a different type than the one
     * provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not equal <code>{"NS":["6", "2", "1"]}</code>.</p>
     * <p/> </li> <li> <p> <code>NE</code> : Not equal. <code>NE</code> is supported
     * for all datatypes, including lists and maps.</p> <p> <i>AttributeValueList</i>
     * can contain only one <i>AttributeValue</i> of type String, Number, Binary,
     * String Set, Number Set, or Binary Set. If an item contains an
     * <i>AttributeValue</i> of a different type than the one provided in the request,
     * the value does not match. For example, <code>{"S":"6"}</code> does not equal
     * <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
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
     * <code>NOT_NULL</code> : The attribute exists. <code>NOT_NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the existence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using
     * <code>NOT_NULL</code>, the result is a Boolean <i>true</i>. This result is
     * because the attribute "<code>a</code>" exists; its data type is not relevant to
     * the <code>NOT_NULL</code> comparison operator.</p> </note> </li> <li> <p>
     * <code>NULL</code> : The attribute does not exist. <code>NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the nonexistence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using <code>NULL</code>,
     * the result is a Boolean <i>false</i>. This is because the attribute
     * "<code>a</code>" exists; its data type is not relevant to the <code>NULL</code>
     * comparison operator.</p> </note> </li> <li> <p> <code>CONTAINS</code> : Checks
     * for a subsequence, or value in a set.</p> <p> <i>AttributeValueList</i> can
     * contain only one <i>AttributeValue</i> element of type String, Number, or Binary
     * (not a set type). If the target attribute of the comparison is of type String,
     * then the operator checks for a substring match. If the target attribute of the
     * comparison is of type Binary, then the operator looks for a subsequence of the
     * target that matches the input. If the target attribute of the comparison is a
     * set ("<code>SS</code>", "<code>NS</code>", or "<code>BS</code>"), then the
     * operator evaluates to true if it finds an exact match with any member of the
     * set.</p> <p>CONTAINS is supported for lists: When evaluating "<code>a CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>NOT_CONTAINS</code> : Checks for
     * absence of a subsequence, or absence of a value in a set.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If the target attribute of the
     * comparison is a String, then the operator checks for the absence of a substring
     * match. If the target attribute of the comparison is Binary, then the operator
     * checks for the absence of a subsequence of the target that matches the input. If
     * the target attribute of the comparison is a set ("<code>SS</code>",
     * "<code>NS</code>", or "<code>BS</code>"), then the operator evaluates to true if
     * it <i>does not</i> find an exact match with any member of the set.</p>
     * <p>NOT_CONTAINS is supported for lists: When evaluating "<code>a NOT CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>BEGINS_WITH</code> : Checks for
     * a prefix. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> of type String or Binary (not a Number or a set type). The
     * target attribute of the comparison must be of type String or Binary (not a
     * Number or a set type).</p> <p/> </li> <li> <p> <code>IN</code> : Checks for
     * matching elements within two sets.</p> <p> <i>AttributeValueList</i> can contain
     * one or more <i>AttributeValue</i> elements of type String, Number, or Binary
     * (not a set type). These attributes are compared against an existing set type
     * attribute of an item. If any elements of the input set are present in the item
     * attribute, the expression evaluates to true.</p> </li> <li> <p>
     * <code>BETWEEN</code> : Greater than or equal to the first value, and less than
     * or equal to the second value. </p> <p> <i>AttributeValueList</i> must contain
     * two <i>AttributeValue</i> elements of the same type, either String, Number, or
     * Binary (not a set type). A target attribute matches if the target value is
     * greater than, or equal to, the first element and less than, or equal to, the
     * second element. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not compare to <code>{"N":"6"}</code>.
     * Also, <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage examples of
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     * <p>For backward compatibility with previous DynamoDB releases, the following
     * parameters can be used instead of <i>AttributeValueList</i> and
     * <i>ComparisonOperator</i>:</p> <ul> <li> <p> <i>Value</i> - A value for DynamoDB
     * to compare with an attribute.</p> </li> <li> <p> <i>Exists</i> - A Boolean value
     * that causes DynamoDB to evaluate the value before attempting the conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the condition evaluates to true; otherwise the condition evaluate to
     * false.</p> </li> <li> <p>If <i>Exists</i> is <code>false</code>, DynamoDB
     * assumes that the attribute value does <i>not</i> exist in the table. If in fact
     * the value does not exist, then the assumption is valid and the condition
     * evaluates to true. If the value is found, despite the assumption that it does
     * not exist, the condition evaluates to false.</p> </li> </ul> <p>Note that the
     * default value for <i>Exists</i> is <code>true</code>.</p> </li> </ul> <p>The
     * <i>Value</i> and <i>Exists</i> parameters are incompatible with
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>. Note that if you use
     * both sets of parameters at once, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <note> <p>This parameter does not
     * support attributes of type List or Map.</p> </note>
     */
    inline DeleteItemRequest& AddExpected(Aws::String&& key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A map of attribute/condition pairs. <i>Expected</i> provides a conditional
     * block for the <i>DeleteItem</i> operation.</p> <p>Each element of
     * <i>Expected</i> consists of an attribute name, a comparison operator, and one or
     * more values. DynamoDB compares the attribute with the value(s) you supplied,
     * using the comparison operator. For each <i>Expected</i> element, the result of
     * the evaluation is either true or false.</p> <p>If you specify more than one
     * element in the <i>Expected</i> map, then by default all of the conditions must
     * evaluate to true. In other words, the conditions are ANDed together. (You can
     * use the <i>ConditionalOperator</i> parameter to OR the conditions instead. If
     * you do this, then at least one of the conditions must evaluate to true, rather
     * than all of them.)</p> <p>If the <i>Expected</i> map evaluates to true, then the
     * conditional operation succeeds; otherwise, it fails.</p> <p> <i>Expected</i>
     * contains the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or
     * more values to evaluate against the supplied attribute. The number of values in
     * the list depends on the <i>ComparisonOperator</i> being used.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes in the <i>AttributeValueList</i>. When
     * performing the comparison, DynamoDB uses strongly consistent reads.</p> <p>The
     * following comparison operators are available:</p> <p> <code>EQ | NE | LE | LT |
     * GE | GT | NOT_NULL | NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN |
     * BETWEEN</code> </p> <p>The following are descriptions of each comparison
     * operator.</p> <ul> <li> <p> <code>EQ</code> : Equal. <code>EQ</code> is
     * supported for all datatypes, including lists and maps.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, Binary, String Set, Number Set, or Binary Set. If an item
     * contains an <i>AttributeValue</i> element of a different type than the one
     * provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not equal <code>{"NS":["6", "2", "1"]}</code>.</p>
     * <p/> </li> <li> <p> <code>NE</code> : Not equal. <code>NE</code> is supported
     * for all datatypes, including lists and maps.</p> <p> <i>AttributeValueList</i>
     * can contain only one <i>AttributeValue</i> of type String, Number, Binary,
     * String Set, Number Set, or Binary Set. If an item contains an
     * <i>AttributeValue</i> of a different type than the one provided in the request,
     * the value does not match. For example, <code>{"S":"6"}</code> does not equal
     * <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
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
     * <code>NOT_NULL</code> : The attribute exists. <code>NOT_NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the existence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using
     * <code>NOT_NULL</code>, the result is a Boolean <i>true</i>. This result is
     * because the attribute "<code>a</code>" exists; its data type is not relevant to
     * the <code>NOT_NULL</code> comparison operator.</p> </note> </li> <li> <p>
     * <code>NULL</code> : The attribute does not exist. <code>NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the nonexistence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using <code>NULL</code>,
     * the result is a Boolean <i>false</i>. This is because the attribute
     * "<code>a</code>" exists; its data type is not relevant to the <code>NULL</code>
     * comparison operator.</p> </note> </li> <li> <p> <code>CONTAINS</code> : Checks
     * for a subsequence, or value in a set.</p> <p> <i>AttributeValueList</i> can
     * contain only one <i>AttributeValue</i> element of type String, Number, or Binary
     * (not a set type). If the target attribute of the comparison is of type String,
     * then the operator checks for a substring match. If the target attribute of the
     * comparison is of type Binary, then the operator looks for a subsequence of the
     * target that matches the input. If the target attribute of the comparison is a
     * set ("<code>SS</code>", "<code>NS</code>", or "<code>BS</code>"), then the
     * operator evaluates to true if it finds an exact match with any member of the
     * set.</p> <p>CONTAINS is supported for lists: When evaluating "<code>a CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>NOT_CONTAINS</code> : Checks for
     * absence of a subsequence, or absence of a value in a set.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If the target attribute of the
     * comparison is a String, then the operator checks for the absence of a substring
     * match. If the target attribute of the comparison is Binary, then the operator
     * checks for the absence of a subsequence of the target that matches the input. If
     * the target attribute of the comparison is a set ("<code>SS</code>",
     * "<code>NS</code>", or "<code>BS</code>"), then the operator evaluates to true if
     * it <i>does not</i> find an exact match with any member of the set.</p>
     * <p>NOT_CONTAINS is supported for lists: When evaluating "<code>a NOT CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>BEGINS_WITH</code> : Checks for
     * a prefix. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> of type String or Binary (not a Number or a set type). The
     * target attribute of the comparison must be of type String or Binary (not a
     * Number or a set type).</p> <p/> </li> <li> <p> <code>IN</code> : Checks for
     * matching elements within two sets.</p> <p> <i>AttributeValueList</i> can contain
     * one or more <i>AttributeValue</i> elements of type String, Number, or Binary
     * (not a set type). These attributes are compared against an existing set type
     * attribute of an item. If any elements of the input set are present in the item
     * attribute, the expression evaluates to true.</p> </li> <li> <p>
     * <code>BETWEEN</code> : Greater than or equal to the first value, and less than
     * or equal to the second value. </p> <p> <i>AttributeValueList</i> must contain
     * two <i>AttributeValue</i> elements of the same type, either String, Number, or
     * Binary (not a set type). A target attribute matches if the target value is
     * greater than, or equal to, the first element and less than, or equal to, the
     * second element. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not compare to <code>{"N":"6"}</code>.
     * Also, <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage examples of
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     * <p>For backward compatibility with previous DynamoDB releases, the following
     * parameters can be used instead of <i>AttributeValueList</i> and
     * <i>ComparisonOperator</i>:</p> <ul> <li> <p> <i>Value</i> - A value for DynamoDB
     * to compare with an attribute.</p> </li> <li> <p> <i>Exists</i> - A Boolean value
     * that causes DynamoDB to evaluate the value before attempting the conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the condition evaluates to true; otherwise the condition evaluate to
     * false.</p> </li> <li> <p>If <i>Exists</i> is <code>false</code>, DynamoDB
     * assumes that the attribute value does <i>not</i> exist in the table. If in fact
     * the value does not exist, then the assumption is valid and the condition
     * evaluates to true. If the value is found, despite the assumption that it does
     * not exist, the condition evaluates to false.</p> </li> </ul> <p>Note that the
     * default value for <i>Exists</i> is <code>true</code>.</p> </li> </ul> <p>The
     * <i>Value</i> and <i>Exists</i> parameters are incompatible with
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>. Note that if you use
     * both sets of parameters at once, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <note> <p>This parameter does not
     * support attributes of type List or Map.</p> </note>
     */
    inline DeleteItemRequest& AddExpected(const Aws::String& key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A map of attribute/condition pairs. <i>Expected</i> provides a conditional
     * block for the <i>DeleteItem</i> operation.</p> <p>Each element of
     * <i>Expected</i> consists of an attribute name, a comparison operator, and one or
     * more values. DynamoDB compares the attribute with the value(s) you supplied,
     * using the comparison operator. For each <i>Expected</i> element, the result of
     * the evaluation is either true or false.</p> <p>If you specify more than one
     * element in the <i>Expected</i> map, then by default all of the conditions must
     * evaluate to true. In other words, the conditions are ANDed together. (You can
     * use the <i>ConditionalOperator</i> parameter to OR the conditions instead. If
     * you do this, then at least one of the conditions must evaluate to true, rather
     * than all of them.)</p> <p>If the <i>Expected</i> map evaluates to true, then the
     * conditional operation succeeds; otherwise, it fails.</p> <p> <i>Expected</i>
     * contains the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or
     * more values to evaluate against the supplied attribute. The number of values in
     * the list depends on the <i>ComparisonOperator</i> being used.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes in the <i>AttributeValueList</i>. When
     * performing the comparison, DynamoDB uses strongly consistent reads.</p> <p>The
     * following comparison operators are available:</p> <p> <code>EQ | NE | LE | LT |
     * GE | GT | NOT_NULL | NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN |
     * BETWEEN</code> </p> <p>The following are descriptions of each comparison
     * operator.</p> <ul> <li> <p> <code>EQ</code> : Equal. <code>EQ</code> is
     * supported for all datatypes, including lists and maps.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, Binary, String Set, Number Set, or Binary Set. If an item
     * contains an <i>AttributeValue</i> element of a different type than the one
     * provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not equal <code>{"NS":["6", "2", "1"]}</code>.</p>
     * <p/> </li> <li> <p> <code>NE</code> : Not equal. <code>NE</code> is supported
     * for all datatypes, including lists and maps.</p> <p> <i>AttributeValueList</i>
     * can contain only one <i>AttributeValue</i> of type String, Number, Binary,
     * String Set, Number Set, or Binary Set. If an item contains an
     * <i>AttributeValue</i> of a different type than the one provided in the request,
     * the value does not match. For example, <code>{"S":"6"}</code> does not equal
     * <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
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
     * <code>NOT_NULL</code> : The attribute exists. <code>NOT_NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the existence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using
     * <code>NOT_NULL</code>, the result is a Boolean <i>true</i>. This result is
     * because the attribute "<code>a</code>" exists; its data type is not relevant to
     * the <code>NOT_NULL</code> comparison operator.</p> </note> </li> <li> <p>
     * <code>NULL</code> : The attribute does not exist. <code>NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the nonexistence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using <code>NULL</code>,
     * the result is a Boolean <i>false</i>. This is because the attribute
     * "<code>a</code>" exists; its data type is not relevant to the <code>NULL</code>
     * comparison operator.</p> </note> </li> <li> <p> <code>CONTAINS</code> : Checks
     * for a subsequence, or value in a set.</p> <p> <i>AttributeValueList</i> can
     * contain only one <i>AttributeValue</i> element of type String, Number, or Binary
     * (not a set type). If the target attribute of the comparison is of type String,
     * then the operator checks for a substring match. If the target attribute of the
     * comparison is of type Binary, then the operator looks for a subsequence of the
     * target that matches the input. If the target attribute of the comparison is a
     * set ("<code>SS</code>", "<code>NS</code>", or "<code>BS</code>"), then the
     * operator evaluates to true if it finds an exact match with any member of the
     * set.</p> <p>CONTAINS is supported for lists: When evaluating "<code>a CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>NOT_CONTAINS</code> : Checks for
     * absence of a subsequence, or absence of a value in a set.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If the target attribute of the
     * comparison is a String, then the operator checks for the absence of a substring
     * match. If the target attribute of the comparison is Binary, then the operator
     * checks for the absence of a subsequence of the target that matches the input. If
     * the target attribute of the comparison is a set ("<code>SS</code>",
     * "<code>NS</code>", or "<code>BS</code>"), then the operator evaluates to true if
     * it <i>does not</i> find an exact match with any member of the set.</p>
     * <p>NOT_CONTAINS is supported for lists: When evaluating "<code>a NOT CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>BEGINS_WITH</code> : Checks for
     * a prefix. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> of type String or Binary (not a Number or a set type). The
     * target attribute of the comparison must be of type String or Binary (not a
     * Number or a set type).</p> <p/> </li> <li> <p> <code>IN</code> : Checks for
     * matching elements within two sets.</p> <p> <i>AttributeValueList</i> can contain
     * one or more <i>AttributeValue</i> elements of type String, Number, or Binary
     * (not a set type). These attributes are compared against an existing set type
     * attribute of an item. If any elements of the input set are present in the item
     * attribute, the expression evaluates to true.</p> </li> <li> <p>
     * <code>BETWEEN</code> : Greater than or equal to the first value, and less than
     * or equal to the second value. </p> <p> <i>AttributeValueList</i> must contain
     * two <i>AttributeValue</i> elements of the same type, either String, Number, or
     * Binary (not a set type). A target attribute matches if the target value is
     * greater than, or equal to, the first element and less than, or equal to, the
     * second element. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not compare to <code>{"N":"6"}</code>.
     * Also, <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage examples of
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     * <p>For backward compatibility with previous DynamoDB releases, the following
     * parameters can be used instead of <i>AttributeValueList</i> and
     * <i>ComparisonOperator</i>:</p> <ul> <li> <p> <i>Value</i> - A value for DynamoDB
     * to compare with an attribute.</p> </li> <li> <p> <i>Exists</i> - A Boolean value
     * that causes DynamoDB to evaluate the value before attempting the conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the condition evaluates to true; otherwise the condition evaluate to
     * false.</p> </li> <li> <p>If <i>Exists</i> is <code>false</code>, DynamoDB
     * assumes that the attribute value does <i>not</i> exist in the table. If in fact
     * the value does not exist, then the assumption is valid and the condition
     * evaluates to true. If the value is found, despite the assumption that it does
     * not exist, the condition evaluates to false.</p> </li> </ul> <p>Note that the
     * default value for <i>Exists</i> is <code>true</code>.</p> </li> </ul> <p>The
     * <i>Value</i> and <i>Exists</i> parameters are incompatible with
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>. Note that if you use
     * both sets of parameters at once, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <note> <p>This parameter does not
     * support attributes of type List or Map.</p> </note>
     */
    inline DeleteItemRequest& AddExpected(Aws::String&& key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A map of attribute/condition pairs. <i>Expected</i> provides a conditional
     * block for the <i>DeleteItem</i> operation.</p> <p>Each element of
     * <i>Expected</i> consists of an attribute name, a comparison operator, and one or
     * more values. DynamoDB compares the attribute with the value(s) you supplied,
     * using the comparison operator. For each <i>Expected</i> element, the result of
     * the evaluation is either true or false.</p> <p>If you specify more than one
     * element in the <i>Expected</i> map, then by default all of the conditions must
     * evaluate to true. In other words, the conditions are ANDed together. (You can
     * use the <i>ConditionalOperator</i> parameter to OR the conditions instead. If
     * you do this, then at least one of the conditions must evaluate to true, rather
     * than all of them.)</p> <p>If the <i>Expected</i> map evaluates to true, then the
     * conditional operation succeeds; otherwise, it fails.</p> <p> <i>Expected</i>
     * contains the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or
     * more values to evaluate against the supplied attribute. The number of values in
     * the list depends on the <i>ComparisonOperator</i> being used.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes in the <i>AttributeValueList</i>. When
     * performing the comparison, DynamoDB uses strongly consistent reads.</p> <p>The
     * following comparison operators are available:</p> <p> <code>EQ | NE | LE | LT |
     * GE | GT | NOT_NULL | NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN |
     * BETWEEN</code> </p> <p>The following are descriptions of each comparison
     * operator.</p> <ul> <li> <p> <code>EQ</code> : Equal. <code>EQ</code> is
     * supported for all datatypes, including lists and maps.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, Binary, String Set, Number Set, or Binary Set. If an item
     * contains an <i>AttributeValue</i> element of a different type than the one
     * provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not equal <code>{"NS":["6", "2", "1"]}</code>.</p>
     * <p/> </li> <li> <p> <code>NE</code> : Not equal. <code>NE</code> is supported
     * for all datatypes, including lists and maps.</p> <p> <i>AttributeValueList</i>
     * can contain only one <i>AttributeValue</i> of type String, Number, Binary,
     * String Set, Number Set, or Binary Set. If an item contains an
     * <i>AttributeValue</i> of a different type than the one provided in the request,
     * the value does not match. For example, <code>{"S":"6"}</code> does not equal
     * <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
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
     * <code>NOT_NULL</code> : The attribute exists. <code>NOT_NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the existence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using
     * <code>NOT_NULL</code>, the result is a Boolean <i>true</i>. This result is
     * because the attribute "<code>a</code>" exists; its data type is not relevant to
     * the <code>NOT_NULL</code> comparison operator.</p> </note> </li> <li> <p>
     * <code>NULL</code> : The attribute does not exist. <code>NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the nonexistence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using <code>NULL</code>,
     * the result is a Boolean <i>false</i>. This is because the attribute
     * "<code>a</code>" exists; its data type is not relevant to the <code>NULL</code>
     * comparison operator.</p> </note> </li> <li> <p> <code>CONTAINS</code> : Checks
     * for a subsequence, or value in a set.</p> <p> <i>AttributeValueList</i> can
     * contain only one <i>AttributeValue</i> element of type String, Number, or Binary
     * (not a set type). If the target attribute of the comparison is of type String,
     * then the operator checks for a substring match. If the target attribute of the
     * comparison is of type Binary, then the operator looks for a subsequence of the
     * target that matches the input. If the target attribute of the comparison is a
     * set ("<code>SS</code>", "<code>NS</code>", or "<code>BS</code>"), then the
     * operator evaluates to true if it finds an exact match with any member of the
     * set.</p> <p>CONTAINS is supported for lists: When evaluating "<code>a CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>NOT_CONTAINS</code> : Checks for
     * absence of a subsequence, or absence of a value in a set.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If the target attribute of the
     * comparison is a String, then the operator checks for the absence of a substring
     * match. If the target attribute of the comparison is Binary, then the operator
     * checks for the absence of a subsequence of the target that matches the input. If
     * the target attribute of the comparison is a set ("<code>SS</code>",
     * "<code>NS</code>", or "<code>BS</code>"), then the operator evaluates to true if
     * it <i>does not</i> find an exact match with any member of the set.</p>
     * <p>NOT_CONTAINS is supported for lists: When evaluating "<code>a NOT CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>BEGINS_WITH</code> : Checks for
     * a prefix. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> of type String or Binary (not a Number or a set type). The
     * target attribute of the comparison must be of type String or Binary (not a
     * Number or a set type).</p> <p/> </li> <li> <p> <code>IN</code> : Checks for
     * matching elements within two sets.</p> <p> <i>AttributeValueList</i> can contain
     * one or more <i>AttributeValue</i> elements of type String, Number, or Binary
     * (not a set type). These attributes are compared against an existing set type
     * attribute of an item. If any elements of the input set are present in the item
     * attribute, the expression evaluates to true.</p> </li> <li> <p>
     * <code>BETWEEN</code> : Greater than or equal to the first value, and less than
     * or equal to the second value. </p> <p> <i>AttributeValueList</i> must contain
     * two <i>AttributeValue</i> elements of the same type, either String, Number, or
     * Binary (not a set type). A target attribute matches if the target value is
     * greater than, or equal to, the first element and less than, or equal to, the
     * second element. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not compare to <code>{"N":"6"}</code>.
     * Also, <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage examples of
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     * <p>For backward compatibility with previous DynamoDB releases, the following
     * parameters can be used instead of <i>AttributeValueList</i> and
     * <i>ComparisonOperator</i>:</p> <ul> <li> <p> <i>Value</i> - A value for DynamoDB
     * to compare with an attribute.</p> </li> <li> <p> <i>Exists</i> - A Boolean value
     * that causes DynamoDB to evaluate the value before attempting the conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the condition evaluates to true; otherwise the condition evaluate to
     * false.</p> </li> <li> <p>If <i>Exists</i> is <code>false</code>, DynamoDB
     * assumes that the attribute value does <i>not</i> exist in the table. If in fact
     * the value does not exist, then the assumption is valid and the condition
     * evaluates to true. If the value is found, despite the assumption that it does
     * not exist, the condition evaluates to false.</p> </li> </ul> <p>Note that the
     * default value for <i>Exists</i> is <code>true</code>.</p> </li> </ul> <p>The
     * <i>Value</i> and <i>Exists</i> parameters are incompatible with
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>. Note that if you use
     * both sets of parameters at once, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <note> <p>This parameter does not
     * support attributes of type List or Map.</p> </note>
     */
    inline DeleteItemRequest& AddExpected(const char* key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A map of attribute/condition pairs. <i>Expected</i> provides a conditional
     * block for the <i>DeleteItem</i> operation.</p> <p>Each element of
     * <i>Expected</i> consists of an attribute name, a comparison operator, and one or
     * more values. DynamoDB compares the attribute with the value(s) you supplied,
     * using the comparison operator. For each <i>Expected</i> element, the result of
     * the evaluation is either true or false.</p> <p>If you specify more than one
     * element in the <i>Expected</i> map, then by default all of the conditions must
     * evaluate to true. In other words, the conditions are ANDed together. (You can
     * use the <i>ConditionalOperator</i> parameter to OR the conditions instead. If
     * you do this, then at least one of the conditions must evaluate to true, rather
     * than all of them.)</p> <p>If the <i>Expected</i> map evaluates to true, then the
     * conditional operation succeeds; otherwise, it fails.</p> <p> <i>Expected</i>
     * contains the following:</p> <ul> <li> <p> <i>AttributeValueList</i> - One or
     * more values to evaluate against the supplied attribute. The number of values in
     * the list depends on the <i>ComparisonOperator</i> being used.</p> <p>For type
     * Number, value comparisons are numeric.</p> <p>String value comparisons for
     * greater than, equals, or less than are based on ASCII character code values. For
     * example, <code>a</code> is greater than <code>A</code>, and <code>a</code> is
     * greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For type Binary, DynamoDB treats each byte of the binary data as unsigned
     * when it compares binary values.</p> </li> <li> <p> <i>ComparisonOperator</i> - A
     * comparator for evaluating attributes in the <i>AttributeValueList</i>. When
     * performing the comparison, DynamoDB uses strongly consistent reads.</p> <p>The
     * following comparison operators are available:</p> <p> <code>EQ | NE | LE | LT |
     * GE | GT | NOT_NULL | NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN |
     * BETWEEN</code> </p> <p>The following are descriptions of each comparison
     * operator.</p> <ul> <li> <p> <code>EQ</code> : Equal. <code>EQ</code> is
     * supported for all datatypes, including lists and maps.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, Binary, String Set, Number Set, or Binary Set. If an item
     * contains an <i>AttributeValue</i> element of a different type than the one
     * provided in the request, the value does not match. For example,
     * <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
     * <code>{"N":"6"}</code> does not equal <code>{"NS":["6", "2", "1"]}</code>.</p>
     * <p/> </li> <li> <p> <code>NE</code> : Not equal. <code>NE</code> is supported
     * for all datatypes, including lists and maps.</p> <p> <i>AttributeValueList</i>
     * can contain only one <i>AttributeValue</i> of type String, Number, Binary,
     * String Set, Number Set, or Binary Set. If an item contains an
     * <i>AttributeValue</i> of a different type than the one provided in the request,
     * the value does not match. For example, <code>{"S":"6"}</code> does not equal
     * <code>{"N":"6"}</code>. Also, <code>{"N":"6"}</code> does not equal
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
     * <code>NOT_NULL</code> : The attribute exists. <code>NOT_NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the existence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using
     * <code>NOT_NULL</code>, the result is a Boolean <i>true</i>. This result is
     * because the attribute "<code>a</code>" exists; its data type is not relevant to
     * the <code>NOT_NULL</code> comparison operator.</p> </note> </li> <li> <p>
     * <code>NULL</code> : The attribute does not exist. <code>NULL</code> is supported
     * for all datatypes, including lists and maps.</p> <note> <p>This operator tests
     * for the nonexistence of an attribute, not its data type. If the data type of
     * attribute "<code>a</code>" is null, and you evaluate it using <code>NULL</code>,
     * the result is a Boolean <i>false</i>. This is because the attribute
     * "<code>a</code>" exists; its data type is not relevant to the <code>NULL</code>
     * comparison operator.</p> </note> </li> <li> <p> <code>CONTAINS</code> : Checks
     * for a subsequence, or value in a set.</p> <p> <i>AttributeValueList</i> can
     * contain only one <i>AttributeValue</i> element of type String, Number, or Binary
     * (not a set type). If the target attribute of the comparison is of type String,
     * then the operator checks for a substring match. If the target attribute of the
     * comparison is of type Binary, then the operator looks for a subsequence of the
     * target that matches the input. If the target attribute of the comparison is a
     * set ("<code>SS</code>", "<code>NS</code>", or "<code>BS</code>"), then the
     * operator evaluates to true if it finds an exact match with any member of the
     * set.</p> <p>CONTAINS is supported for lists: When evaluating "<code>a CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>NOT_CONTAINS</code> : Checks for
     * absence of a subsequence, or absence of a value in a set.</p> <p>
     * <i>AttributeValueList</i> can contain only one <i>AttributeValue</i> element of
     * type String, Number, or Binary (not a set type). If the target attribute of the
     * comparison is a String, then the operator checks for the absence of a substring
     * match. If the target attribute of the comparison is Binary, then the operator
     * checks for the absence of a subsequence of the target that matches the input. If
     * the target attribute of the comparison is a set ("<code>SS</code>",
     * "<code>NS</code>", or "<code>BS</code>"), then the operator evaluates to true if
     * it <i>does not</i> find an exact match with any member of the set.</p>
     * <p>NOT_CONTAINS is supported for lists: When evaluating "<code>a NOT CONTAINS
     * b</code>", "<code>a</code>" can be a list; however, "<code>b</code>" cannot be a
     * set, a map, or a list.</p> </li> <li> <p> <code>BEGINS_WITH</code> : Checks for
     * a prefix. </p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> of type String or Binary (not a Number or a set type). The
     * target attribute of the comparison must be of type String or Binary (not a
     * Number or a set type).</p> <p/> </li> <li> <p> <code>IN</code> : Checks for
     * matching elements within two sets.</p> <p> <i>AttributeValueList</i> can contain
     * one or more <i>AttributeValue</i> elements of type String, Number, or Binary
     * (not a set type). These attributes are compared against an existing set type
     * attribute of an item. If any elements of the input set are present in the item
     * attribute, the expression evaluates to true.</p> </li> <li> <p>
     * <code>BETWEEN</code> : Greater than or equal to the first value, and less than
     * or equal to the second value. </p> <p> <i>AttributeValueList</i> must contain
     * two <i>AttributeValue</i> elements of the same type, either String, Number, or
     * Binary (not a set type). A target attribute matches if the target value is
     * greater than, or equal to, the first element and less than, or equal to, the
     * second element. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not compare to <code>{"N":"6"}</code>.
     * Also, <code>{"N":"6"}</code> does not compare to <code>{"NS":["6", "2",
     * "1"]}</code> </p> </li> </ul> </li> </ul> <p>For usage examples of
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.html">Legacy
     * Conditional Parameters</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     * <p>For backward compatibility with previous DynamoDB releases, the following
     * parameters can be used instead of <i>AttributeValueList</i> and
     * <i>ComparisonOperator</i>:</p> <ul> <li> <p> <i>Value</i> - A value for DynamoDB
     * to compare with an attribute.</p> </li> <li> <p> <i>Exists</i> - A Boolean value
     * that causes DynamoDB to evaluate the value before attempting the conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the condition evaluates to true; otherwise the condition evaluate to
     * false.</p> </li> <li> <p>If <i>Exists</i> is <code>false</code>, DynamoDB
     * assumes that the attribute value does <i>not</i> exist in the table. If in fact
     * the value does not exist, then the assumption is valid and the condition
     * evaluates to true. If the value is found, despite the assumption that it does
     * not exist, the condition evaluates to false.</p> </li> </ul> <p>Note that the
     * default value for <i>Exists</i> is <code>true</code>.</p> </li> </ul> <p>The
     * <i>Value</i> and <i>Exists</i> parameters are incompatible with
     * <i>AttributeValueList</i> and <i>ComparisonOperator</i>. Note that if you use
     * both sets of parameters at once, DynamoDB will return a
     * <i>ValidationException</i> exception.</p> <note> <p>This parameter does not
     * support attributes of type List or Map.</p> </note>
     */
    inline DeleteItemRequest& AddExpected(const char* key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected[key] = value; return *this; }

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A logical operator to apply to the conditions in the <i>Expected</i> map:</p>
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
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A logical operator to apply to the conditions in the <i>Expected</i> map:</p>
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
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A logical operator to apply to the conditions in the <i>Expected</i> map:</p>
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
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A logical operator to apply to the conditions in the <i>Expected</i> map:</p>
     * <ul> <li> <p> <code>AND</code> - If all of the conditions evaluate to true, then
     * the entire map evaluates to true.</p> </li> <li> <p> <code>OR</code> - If at
     * least one of the conditions evaluate to true, then the entire map evaluates to
     * true.</p> </li> </ul> <p>If you omit <i>ConditionalOperator</i>, then
     * <code>AND</code> is the default.</p> <p>The operation will succeed only if the
     * entire map evaluates to true.</p> <note> <p>This parameter does not support
     * attributes of type List or Map.</p> </note>
     */
    inline DeleteItemRequest& WithConditionalOperator(const ConditionalOperator& value) { SetConditionalOperator(value); return *this;}

    /**
     * <important> <p>This is a legacy parameter, for backward compatibility. New
     * applications should use <i>ConditionExpression</i> instead. Do not combine
     * legacy parameters and expression parameters in a single API call; otherwise,
     * DynamoDB will return a <i>ValidationException</i> exception.</p> </important>
     * <p>A logical operator to apply to the conditions in the <i>Expected</i> map:</p>
     * <ul> <li> <p> <code>AND</code> - If all of the conditions evaluate to true, then
     * the entire map evaluates to true.</p> </li> <li> <p> <code>OR</code> - If at
     * least one of the conditions evaluate to true, then the entire map evaluates to
     * true.</p> </li> </ul> <p>If you omit <i>ConditionalOperator</i>, then
     * <code>AND</code> is the default.</p> <p>The operation will succeed only if the
     * entire map evaluates to true.</p> <note> <p>This parameter does not support
     * attributes of type List or Map.</p> </note>
     */
    inline DeleteItemRequest& WithConditionalOperator(ConditionalOperator&& value) { SetConditionalOperator(value); return *this;}

    /**
     * <p>Use <i>ReturnValues</i> if you want to get the item attributes as they
     * appeared before they were deleted. For <i>DeleteItem</i>, the valid values
     * are:</p> <ul> <li> <p> <code>NONE</code> - If <i>ReturnValues</i> is not
     * specified, or if its value is <code>NONE</code>, then nothing is returned. (This
     * setting is the default for <i>ReturnValues</i>.)</p> </li> <li> <p>
     * <code>ALL_OLD</code> - The content of the old item is returned.</p> </li> </ul>
     * <note> <p>The <i>ReturnValues</i> parameter is used by several DynamoDB
     * operations; however, <i>DeleteItem</i> does not recognize any values other than
     * <code>NONE</code> or <code>ALL_OLD</code>.</p> </note>
     */
    inline const ReturnValue& GetReturnValues() const{ return m_returnValues; }

    /**
     * <p>Use <i>ReturnValues</i> if you want to get the item attributes as they
     * appeared before they were deleted. For <i>DeleteItem</i>, the valid values
     * are:</p> <ul> <li> <p> <code>NONE</code> - If <i>ReturnValues</i> is not
     * specified, or if its value is <code>NONE</code>, then nothing is returned. (This
     * setting is the default for <i>ReturnValues</i>.)</p> </li> <li> <p>
     * <code>ALL_OLD</code> - The content of the old item is returned.</p> </li> </ul>
     * <note> <p>The <i>ReturnValues</i> parameter is used by several DynamoDB
     * operations; however, <i>DeleteItem</i> does not recognize any values other than
     * <code>NONE</code> or <code>ALL_OLD</code>.</p> </note>
     */
    inline void SetReturnValues(const ReturnValue& value) { m_returnValuesHasBeenSet = true; m_returnValues = value; }

    /**
     * <p>Use <i>ReturnValues</i> if you want to get the item attributes as they
     * appeared before they were deleted. For <i>DeleteItem</i>, the valid values
     * are:</p> <ul> <li> <p> <code>NONE</code> - If <i>ReturnValues</i> is not
     * specified, or if its value is <code>NONE</code>, then nothing is returned. (This
     * setting is the default for <i>ReturnValues</i>.)</p> </li> <li> <p>
     * <code>ALL_OLD</code> - The content of the old item is returned.</p> </li> </ul>
     * <note> <p>The <i>ReturnValues</i> parameter is used by several DynamoDB
     * operations; however, <i>DeleteItem</i> does not recognize any values other than
     * <code>NONE</code> or <code>ALL_OLD</code>.</p> </note>
     */
    inline void SetReturnValues(ReturnValue&& value) { m_returnValuesHasBeenSet = true; m_returnValues = value; }

    /**
     * <p>Use <i>ReturnValues</i> if you want to get the item attributes as they
     * appeared before they were deleted. For <i>DeleteItem</i>, the valid values
     * are:</p> <ul> <li> <p> <code>NONE</code> - If <i>ReturnValues</i> is not
     * specified, or if its value is <code>NONE</code>, then nothing is returned. (This
     * setting is the default for <i>ReturnValues</i>.)</p> </li> <li> <p>
     * <code>ALL_OLD</code> - The content of the old item is returned.</p> </li> </ul>
     * <note> <p>The <i>ReturnValues</i> parameter is used by several DynamoDB
     * operations; however, <i>DeleteItem</i> does not recognize any values other than
     * <code>NONE</code> or <code>ALL_OLD</code>.</p> </note>
     */
    inline DeleteItemRequest& WithReturnValues(const ReturnValue& value) { SetReturnValues(value); return *this;}

    /**
     * <p>Use <i>ReturnValues</i> if you want to get the item attributes as they
     * appeared before they were deleted. For <i>DeleteItem</i>, the valid values
     * are:</p> <ul> <li> <p> <code>NONE</code> - If <i>ReturnValues</i> is not
     * specified, or if its value is <code>NONE</code>, then nothing is returned. (This
     * setting is the default for <i>ReturnValues</i>.)</p> </li> <li> <p>
     * <code>ALL_OLD</code> - The content of the old item is returned.</p> </li> </ul>
     * <note> <p>The <i>ReturnValues</i> parameter is used by several DynamoDB
     * operations; however, <i>DeleteItem</i> does not recognize any values other than
     * <code>NONE</code> or <code>ALL_OLD</code>.</p> </note>
     */
    inline DeleteItemRequest& WithReturnValues(ReturnValue&& value) { SetReturnValues(value); return *this;}

    
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }

    
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }

    
    inline DeleteItemRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}

    
    inline DeleteItemRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(value); return *this;}

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
    inline DeleteItemRequest& WithReturnItemCollectionMetrics(const ReturnItemCollectionMetrics& value) { SetReturnItemCollectionMetrics(value); return *this;}

    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline DeleteItemRequest& WithReturnItemCollectionMetrics(ReturnItemCollectionMetrics&& value) { SetReturnItemCollectionMetrics(value); return *this;}

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <i>DeleteItem</i> to succeed.</p> <p>An expression can contain any of the
     * following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &amp;#x3C;&amp;#x3E; | &amp;#x3C; | &amp;#x3E; |
     * &amp;#x3C;= | &amp;#x3E;= | BETWEEN | IN</code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>ConditionExpression</i> replaces the legacy <i>ConditionalOperator</i> and
     * <i>Expected</i> parameters.</p> </note>
     */
    inline const Aws::String& GetConditionExpression() const{ return m_conditionExpression; }

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <i>DeleteItem</i> to succeed.</p> <p>An expression can contain any of the
     * following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &amp;#x3C;&amp;#x3E; | &amp;#x3C; | &amp;#x3E; |
     * &amp;#x3C;= | &amp;#x3E;= | BETWEEN | IN</code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>ConditionExpression</i> replaces the legacy <i>ConditionalOperator</i> and
     * <i>Expected</i> parameters.</p> </note>
     */
    inline void SetConditionExpression(const Aws::String& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = value; }

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <i>DeleteItem</i> to succeed.</p> <p>An expression can contain any of the
     * following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &amp;#x3C;&amp;#x3E; | &amp;#x3C; | &amp;#x3E; |
     * &amp;#x3C;= | &amp;#x3E;= | BETWEEN | IN</code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>ConditionExpression</i> replaces the legacy <i>ConditionalOperator</i> and
     * <i>Expected</i> parameters.</p> </note>
     */
    inline void SetConditionExpression(Aws::String&& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = value; }

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <i>DeleteItem</i> to succeed.</p> <p>An expression can contain any of the
     * following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &amp;#x3C;&amp;#x3E; | &amp;#x3C; | &amp;#x3E; |
     * &amp;#x3C;= | &amp;#x3E;= | BETWEEN | IN</code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>ConditionExpression</i> replaces the legacy <i>ConditionalOperator</i> and
     * <i>Expected</i> parameters.</p> </note>
     */
    inline void SetConditionExpression(const char* value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression.assign(value); }

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <i>DeleteItem</i> to succeed.</p> <p>An expression can contain any of the
     * following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &amp;#x3C;&amp;#x3E; | &amp;#x3C; | &amp;#x3E; |
     * &amp;#x3C;= | &amp;#x3E;= | BETWEEN | IN</code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>ConditionExpression</i> replaces the legacy <i>ConditionalOperator</i> and
     * <i>Expected</i> parameters.</p> </note>
     */
    inline DeleteItemRequest& WithConditionExpression(const Aws::String& value) { SetConditionExpression(value); return *this;}

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <i>DeleteItem</i> to succeed.</p> <p>An expression can contain any of the
     * following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &amp;#x3C;&amp;#x3E; | &amp;#x3C; | &amp;#x3E; |
     * &amp;#x3C;= | &amp;#x3E;= | BETWEEN | IN</code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>ConditionExpression</i> replaces the legacy <i>ConditionalOperator</i> and
     * <i>Expected</i> parameters.</p> </note>
     */
    inline DeleteItemRequest& WithConditionExpression(Aws::String&& value) { SetConditionExpression(value); return *this;}

    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <i>DeleteItem</i> to succeed.</p> <p>An expression can contain any of the
     * following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code> = | &amp;#x3C;&amp;#x3E; | &amp;#x3C; | &amp;#x3E; |
     * &amp;#x3C;= | &amp;#x3E;= | BETWEEN | IN</code> </p> </li> <li> <p> Logical
     * operators: <code>AND | OR | NOT</code> </p> </li> </ul> <p>For more information
     * on condition expressions, see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <note> <p>
     * <i>ConditionExpression</i> replaces the legacy <i>ConditionalOperator</i> and
     * <i>Expected</i> parameters.</p> </note>
     */
    inline DeleteItemRequest& WithConditionExpression(const char* value) { SetConditionExpression(value); return *this;}

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
    inline DeleteItemRequest& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}

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
    inline DeleteItemRequest& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(value); return *this;}

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
    inline DeleteItemRequest& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline DeleteItemRequest& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline DeleteItemRequest& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline DeleteItemRequest& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline DeleteItemRequest& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline DeleteItemRequest& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline DeleteItemRequest& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames[key] = value; return *this; }

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
    inline DeleteItemRequest& WithExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { SetExpressionAttributeValues(value); return *this;}

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
    inline DeleteItemRequest& WithExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { SetExpressionAttributeValues(value); return *this;}

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
    inline DeleteItemRequest& AddExpressionAttributeValues(const Aws::String& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

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
    inline DeleteItemRequest& AddExpressionAttributeValues(Aws::String&& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

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
    inline DeleteItemRequest& AddExpressionAttributeValues(const Aws::String& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

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
    inline DeleteItemRequest& AddExpressionAttributeValues(Aws::String&& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

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
    inline DeleteItemRequest& AddExpressionAttributeValues(const char* key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

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
    inline DeleteItemRequest& AddExpressionAttributeValues(const char* key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues[key] = value; return *this; }

  private:
    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;
    Aws::Map<Aws::String, AttributeValue> m_key;
    bool m_keyHasBeenSet;
    Aws::Map<Aws::String, ExpectedAttributeValue> m_expected;
    bool m_expectedHasBeenSet;
    ConditionalOperator m_conditionalOperator;
    bool m_conditionalOperatorHasBeenSet;
    ReturnValue m_returnValues;
    bool m_returnValuesHasBeenSet;
    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet;
    ReturnItemCollectionMetrics m_returnItemCollectionMetrics;
    bool m_returnItemCollectionMetricsHasBeenSet;
    Aws::String m_conditionExpression;
    bool m_conditionExpressionHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet;
    Aws::Map<Aws::String, AttributeValue> m_expressionAttributeValues;
    bool m_expressionAttributeValuesHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
