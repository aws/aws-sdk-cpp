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
#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/ComparisonOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
   * <p>Represents a condition to be compared with an attribute value. This condition
   * can be used with <i>DeleteItem</i>, <i>PutItem</i> or <i>UpdateItem</i>
   * operations; if the comparison evaluates to true, the operation succeeds; if not,
   * the operation fails. You can use <i>ExpectedAttributeValue</i> in one of two
   * different ways:</p> <ul> <li> <p>Use <i>AttributeValueList</i> to specify one or
   * more values to compare against an attribute. Use <i>ComparisonOperator</i> to
   * specify how you want to perform the comparison. If the comparison evaluates to
   * true, then the conditional operation succeeds.</p> </li> <li> <p>Use
   * <i>Value</i> to specify a value that DynamoDB will compare against an attribute.
   * If the values match, then <i>ExpectedAttributeValue</i> evaluates to true and
   * the conditional operation succeeds. Optionally, you can also set <i>Exists</i>
   * to false, indicating that you <i>do not</i> expect to find the attribute value
   * in the table. In this case, the conditional operation succeeds only if the
   * comparison evaluates to false.</p> </li> </ul> <p> <i>Value</i> and
   * <i>Exists</i> are incompatible with <i>AttributeValueList</i> and
   * <i>ComparisonOperator</i>. Note that if you use both sets of parameters at once,
   * DynamoDB will return a <i>ValidationException</i> exception.</p>
   */
  class AWS_DYNAMODB_API ExpectedAttributeValue
  {
  public:
    ExpectedAttributeValue();
    ExpectedAttributeValue(const Aws::Utils::Json::JsonValue& jsonValue);
    ExpectedAttributeValue& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const AttributeValue& GetValue() const{ return m_value; }

    
    inline void SetValue(const AttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }

    
    inline void SetValue(AttributeValue&& value) { m_valueHasBeenSet = true; m_value = value; }

    
    inline ExpectedAttributeValue& WithValue(const AttributeValue& value) { SetValue(value); return *this;}

    
    inline ExpectedAttributeValue& WithValue(AttributeValue&& value) { SetValue(value); return *this;}

    /**
     * <p>Causes DynamoDB to evaluate the value before attempting a conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the operation succeeds. If it is not found, the operation fails with
     * a <i>ConditionalCheckFailedException</i>.</p> </li> <li> <p>If <i>Exists</i> is
     * <code>false</code>, DynamoDB assumes that the attribute value does not exist in
     * the table. If in fact the value does not exist, then the assumption is valid and
     * the operation succeeds. If the value is found, despite the assumption that it
     * does not exist, the operation fails with a
     * <i>ConditionalCheckFailedException</i>.</p> </li> </ul> <p>The default setting
     * for <i>Exists</i> is <code>true</code>. If you supply a <i>Value</i> all by
     * itself, DynamoDB assumes the attribute exists: You don't have to set
     * <i>Exists</i> to <code>true</code>, because it is implied.</p> <p>DynamoDB
     * returns a <i>ValidationException</i> if:</p> <ul> <li> <p> <i>Exists</i> is
     * <code>true</code> but there is no <i>Value</i> to check. (You expect a value to
     * exist, but don't specify what that value is.)</p> </li> <li> <p> <i>Exists</i>
     * is <code>false</code> but you also provide a <i>Value</i>. (You cannot expect an
     * attribute to have a value, while also expecting it not to exist.)</p> </li>
     * </ul>
     */
    inline bool GetExists() const{ return m_exists; }

    /**
     * <p>Causes DynamoDB to evaluate the value before attempting a conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the operation succeeds. If it is not found, the operation fails with
     * a <i>ConditionalCheckFailedException</i>.</p> </li> <li> <p>If <i>Exists</i> is
     * <code>false</code>, DynamoDB assumes that the attribute value does not exist in
     * the table. If in fact the value does not exist, then the assumption is valid and
     * the operation succeeds. If the value is found, despite the assumption that it
     * does not exist, the operation fails with a
     * <i>ConditionalCheckFailedException</i>.</p> </li> </ul> <p>The default setting
     * for <i>Exists</i> is <code>true</code>. If you supply a <i>Value</i> all by
     * itself, DynamoDB assumes the attribute exists: You don't have to set
     * <i>Exists</i> to <code>true</code>, because it is implied.</p> <p>DynamoDB
     * returns a <i>ValidationException</i> if:</p> <ul> <li> <p> <i>Exists</i> is
     * <code>true</code> but there is no <i>Value</i> to check. (You expect a value to
     * exist, but don't specify what that value is.)</p> </li> <li> <p> <i>Exists</i>
     * is <code>false</code> but you also provide a <i>Value</i>. (You cannot expect an
     * attribute to have a value, while also expecting it not to exist.)</p> </li>
     * </ul>
     */
    inline void SetExists(bool value) { m_existsHasBeenSet = true; m_exists = value; }

    /**
     * <p>Causes DynamoDB to evaluate the value before attempting a conditional
     * operation:</p> <ul> <li> <p>If <i>Exists</i> is <code>true</code>, DynamoDB will
     * check to see if that attribute value already exists in the table. If it is
     * found, then the operation succeeds. If it is not found, the operation fails with
     * a <i>ConditionalCheckFailedException</i>.</p> </li> <li> <p>If <i>Exists</i> is
     * <code>false</code>, DynamoDB assumes that the attribute value does not exist in
     * the table. If in fact the value does not exist, then the assumption is valid and
     * the operation succeeds. If the value is found, despite the assumption that it
     * does not exist, the operation fails with a
     * <i>ConditionalCheckFailedException</i>.</p> </li> </ul> <p>The default setting
     * for <i>Exists</i> is <code>true</code>. If you supply a <i>Value</i> all by
     * itself, DynamoDB assumes the attribute exists: You don't have to set
     * <i>Exists</i> to <code>true</code>, because it is implied.</p> <p>DynamoDB
     * returns a <i>ValidationException</i> if:</p> <ul> <li> <p> <i>Exists</i> is
     * <code>true</code> but there is no <i>Value</i> to check. (You expect a value to
     * exist, but don't specify what that value is.)</p> </li> <li> <p> <i>Exists</i>
     * is <code>false</code> but you also provide a <i>Value</i>. (You cannot expect an
     * attribute to have a value, while also expecting it not to exist.)</p> </li>
     * </ul>
     */
    inline ExpectedAttributeValue& WithExists(bool value) { SetExists(value); return *this;}

    /**
     * <p>A comparator for evaluating attributes in the <i>AttributeValueList</i>. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>The
     * following are descriptions of each comparison operator.</p> <ul> <li> <p>
     * <code>EQ</code> : Equal. <code>EQ</code> is supported for all datatypes,
     * including lists and maps.</p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, Binary, String Set, Number
     * Set, or Binary Set. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
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
     * "1"]}</code> </p> </li> </ul>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>A comparator for evaluating attributes in the <i>AttributeValueList</i>. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>The
     * following are descriptions of each comparison operator.</p> <ul> <li> <p>
     * <code>EQ</code> : Equal. <code>EQ</code> is supported for all datatypes,
     * including lists and maps.</p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, Binary, String Set, Number
     * Set, or Binary Set. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
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
     * "1"]}</code> </p> </li> </ul>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>A comparator for evaluating attributes in the <i>AttributeValueList</i>. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>The
     * following are descriptions of each comparison operator.</p> <ul> <li> <p>
     * <code>EQ</code> : Equal. <code>EQ</code> is supported for all datatypes,
     * including lists and maps.</p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, Binary, String Set, Number
     * Set, or Binary Set. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
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
     * "1"]}</code> </p> </li> </ul>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>A comparator for evaluating attributes in the <i>AttributeValueList</i>. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>The
     * following are descriptions of each comparison operator.</p> <ul> <li> <p>
     * <code>EQ</code> : Equal. <code>EQ</code> is supported for all datatypes,
     * including lists and maps.</p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, Binary, String Set, Number
     * Set, or Binary Set. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
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
     * "1"]}</code> </p> </li> </ul>
     */
    inline ExpectedAttributeValue& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>A comparator for evaluating attributes in the <i>AttributeValueList</i>. For
     * example, equals, greater than, less than, etc.</p> <p>The following comparison
     * operators are available:</p> <p> <code>EQ | NE | LE | LT | GE | GT | NOT_NULL |
     * NULL | CONTAINS | NOT_CONTAINS | BEGINS_WITH | IN | BETWEEN</code> </p> <p>The
     * following are descriptions of each comparison operator.</p> <ul> <li> <p>
     * <code>EQ</code> : Equal. <code>EQ</code> is supported for all datatypes,
     * including lists and maps.</p> <p> <i>AttributeValueList</i> can contain only one
     * <i>AttributeValue</i> element of type String, Number, Binary, String Set, Number
     * Set, or Binary Set. If an item contains an <i>AttributeValue</i> element of a
     * different type than the one provided in the request, the value does not match.
     * For example, <code>{"S":"6"}</code> does not equal <code>{"N":"6"}</code>. Also,
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
     * "1"]}</code> </p> </li> </ul>
     */
    inline ExpectedAttributeValue& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the <i>ComparisonOperator</i> being used.</p>
     * <p>For type Number, value comparisons are numeric.</p> <p>String value
     * comparisons for greater than, equals, or less than are based on ASCII character
     * code values. For example, <code>a</code> is greater than <code>A</code>, and
     * <code>a</code> is greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Vector<AttributeValue>& GetAttributeValueList() const{ return m_attributeValueList; }

    /**
     * <p>One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the <i>ComparisonOperator</i> being used.</p>
     * <p>For type Number, value comparisons are numeric.</p> <p>String value
     * comparisons for greater than, equals, or less than are based on ASCII character
     * code values. For example, <code>a</code> is greater than <code>A</code>, and
     * <code>a</code> is greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetAttributeValueList(const Aws::Vector<AttributeValue>& value) { m_attributeValueListHasBeenSet = true; m_attributeValueList = value; }

    /**
     * <p>One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the <i>ComparisonOperator</i> being used.</p>
     * <p>For type Number, value comparisons are numeric.</p> <p>String value
     * comparisons for greater than, equals, or less than are based on ASCII character
     * code values. For example, <code>a</code> is greater than <code>A</code>, and
     * <code>a</code> is greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline void SetAttributeValueList(Aws::Vector<AttributeValue>&& value) { m_attributeValueListHasBeenSet = true; m_attributeValueList = value; }

    /**
     * <p>One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the <i>ComparisonOperator</i> being used.</p>
     * <p>For type Number, value comparisons are numeric.</p> <p>String value
     * comparisons for greater than, equals, or less than are based on ASCII character
     * code values. For example, <code>a</code> is greater than <code>A</code>, and
     * <code>a</code> is greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline ExpectedAttributeValue& WithAttributeValueList(const Aws::Vector<AttributeValue>& value) { SetAttributeValueList(value); return *this;}

    /**
     * <p>One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the <i>ComparisonOperator</i> being used.</p>
     * <p>For type Number, value comparisons are numeric.</p> <p>String value
     * comparisons for greater than, equals, or less than are based on ASCII character
     * code values. For example, <code>a</code> is greater than <code>A</code>, and
     * <code>a</code> is greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline ExpectedAttributeValue& WithAttributeValueList(Aws::Vector<AttributeValue>&& value) { SetAttributeValueList(value); return *this;}

    /**
     * <p>One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the <i>ComparisonOperator</i> being used.</p>
     * <p>For type Number, value comparisons are numeric.</p> <p>String value
     * comparisons for greater than, equals, or less than are based on ASCII character
     * code values. For example, <code>a</code> is greater than <code>A</code>, and
     * <code>a</code> is greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline ExpectedAttributeValue& AddAttributeValueList(const AttributeValue& value) { m_attributeValueListHasBeenSet = true; m_attributeValueList.push_back(value); return *this; }

    /**
     * <p>One or more values to evaluate against the supplied attribute. The number of
     * values in the list depends on the <i>ComparisonOperator</i> being used.</p>
     * <p>For type Number, value comparisons are numeric.</p> <p>String value
     * comparisons for greater than, equals, or less than are based on ASCII character
     * code values. For example, <code>a</code> is greater than <code>A</code>, and
     * <code>a</code> is greater than <code>B</code>. For a list of code values, see <a
     * href="http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters">http://en.wikipedia.org/wiki/ASCII#ASCII_printable_characters</a>.</p>
     * <p>For Binary, DynamoDB treats each byte of the binary data as unsigned when it
     * compares binary values.</p> <p>For information on specifying data types in JSON,
     * see <a
     * href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/DataFormat.html">JSON
     * Data Format</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline ExpectedAttributeValue& AddAttributeValueList(AttributeValue&& value) { m_attributeValueListHasBeenSet = true; m_attributeValueList.push_back(value); return *this; }

  private:
    AttributeValue m_value;
    bool m_valueHasBeenSet;
    bool m_exists;
    bool m_existsHasBeenSet;
    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet;
    Aws::Vector<AttributeValue> m_attributeValueList;
    bool m_attributeValueListHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
