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
#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/AttributeAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>For the <code>UpdateItem</code> operation, represents the attributes to be
   * modified, the action to perform on each, and the new value for each.</p> <note>
   * <p>You cannot use <code>UpdateItem</code> to update any primary key attributes.
   * Instead, you will need to delete the item, and then use <code>PutItem</code> to
   * create a new item with new attributes.</p> </note> <p>Attribute values cannot be
   * null; string and binary type attributes must have lengths greater than zero; and
   * set type attributes must not be empty. Requests with empty values will be
   * rejected with a <code>ValidationException</code> exception.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/AttributeValueUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API AttributeValueUpdate
  {
  public:
    AttributeValueUpdate();
    AttributeValueUpdate(Aws::Utils::Json::JsonView jsonValue);
    AttributeValueUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents the data for an attribute.</p> <p>Each attribute value is
     * described as a name-value pair. The name is the data type, and the value is the
     * data itself.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.NamingRulesDataTypes.html#HowItWorks.DataTypes">Data
     * Types</a> in the <i>Amazon DynamoDB Developer Guide</i>. </p>
     */
    inline const AttributeValue& GetValue() const{ return m_value; }

    /**
     * <p>Represents the data for an attribute.</p> <p>Each attribute value is
     * described as a name-value pair. The name is the data type, and the value is the
     * data itself.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.NamingRulesDataTypes.html#HowItWorks.DataTypes">Data
     * Types</a> in the <i>Amazon DynamoDB Developer Guide</i>. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Represents the data for an attribute.</p> <p>Each attribute value is
     * described as a name-value pair. The name is the data type, and the value is the
     * data itself.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.NamingRulesDataTypes.html#HowItWorks.DataTypes">Data
     * Types</a> in the <i>Amazon DynamoDB Developer Guide</i>. </p>
     */
    inline void SetValue(const AttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Represents the data for an attribute.</p> <p>Each attribute value is
     * described as a name-value pair. The name is the data type, and the value is the
     * data itself.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.NamingRulesDataTypes.html#HowItWorks.DataTypes">Data
     * Types</a> in the <i>Amazon DynamoDB Developer Guide</i>. </p>
     */
    inline void SetValue(AttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Represents the data for an attribute.</p> <p>Each attribute value is
     * described as a name-value pair. The name is the data type, and the value is the
     * data itself.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.NamingRulesDataTypes.html#HowItWorks.DataTypes">Data
     * Types</a> in the <i>Amazon DynamoDB Developer Guide</i>. </p>
     */
    inline AttributeValueUpdate& WithValue(const AttributeValue& value) { SetValue(value); return *this;}

    /**
     * <p>Represents the data for an attribute.</p> <p>Each attribute value is
     * described as a name-value pair. The name is the data type, and the value is the
     * data itself.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/HowItWorks.NamingRulesDataTypes.html#HowItWorks.DataTypes">Data
     * Types</a> in the <i>Amazon DynamoDB Developer Guide</i>. </p>
     */
    inline AttributeValueUpdate& WithValue(AttributeValue&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>Specifies how to perform the update. Valid values are <code>PUT</code>
     * (default), <code>DELETE</code>, and <code>ADD</code>. The behavior depends on
     * whether the specified primary key already exists in the table.</p> <p> <b>If an
     * item with the specified <i>Key</i> is found in the table:</b> </p> <ul> <li> <p>
     * <code>PUT</code> - Adds the specified attribute to the item. If the attribute
     * already exists, it is replaced by the new value. </p> </li> <li> <p>
     * <code>DELETE</code> - If no value is specified, the attribute and its value are
     * removed from the item. The data type of the specified value must match the
     * existing value's data type.</p> <p>If a <i>set</i> of values is specified, then
     * those values are subtracted from the old set. For example, if the attribute
     * value was the set <code>[a,b,c]</code> and the <code>DELETE</code> action
     * specified <code>[a,c]</code>, then the final attribute value would be
     * <code>[b]</code>. Specifying an empty set is an error.</p> </li> <li> <p>
     * <code>ADD</code> - If the attribute does not already exist, then the attribute
     * and its values are added to the item. If the attribute does exist, then the
     * behavior of <code>ADD</code> depends on the data type of the attribute:</p> <ul>
     * <li> <p>If the existing attribute is a number, and if <code>Value</code> is also
     * a number, then the <code>Value</code> is mathematically added to the existing
     * attribute. If <code>Value</code> is a negative number, then it is subtracted
     * from the existing attribute.</p> <note> <p> If you use <code>ADD</code> to
     * increment or decrement a number value for an item that doesn't exist before the
     * update, DynamoDB uses 0 as the initial value.</p> <p>In addition, if you use
     * <code>ADD</code> to update an existing item, and intend to increment or
     * decrement an attribute value which does not yet exist, DynamoDB uses
     * <code>0</code> as the initial value. For example, suppose that the item you want
     * to update does not yet have an attribute named <i>itemcount</i>, but you decide
     * to <code>ADD</code> the number <code>3</code> to this attribute anyway, even
     * though it currently does not exist. DynamoDB will create the <i>itemcount</i>
     * attribute, set its initial value to <code>0</code>, and finally add
     * <code>3</code> to it. The result will be a new <i>itemcount</i> attribute in the
     * item, with a value of <code>3</code>.</p> </note> </li> <li> <p>If the existing
     * data type is a set, and if the <code>Value</code> is also a set, then the
     * <code>Value</code> is added to the existing set. (This is a <i>set</i>
     * operation, not mathematical addition.) For example, if the attribute value was
     * the set <code>[1,2]</code>, and the <code>ADD</code> action specified
     * <code>[3]</code>, then the final attribute value would be <code>[1,2,3]</code>.
     * An error occurs if an Add action is specified for a set attribute and the
     * attribute type specified does not match the existing set type. </p> <p>Both sets
     * must have the same primitive data type. For example, if the existing data type
     * is a set of strings, the <code>Value</code> must also be a set of strings. The
     * same holds true for number sets and binary sets.</p> </li> </ul> <p>This action
     * is only valid for an existing attribute whose data type is number or is a set.
     * Do not use <code>ADD</code> for any other data types.</p> </li> </ul> <p> <b>If
     * no item with the specified <i>Key</i> is found:</b> </p> <ul> <li> <p>
     * <code>PUT</code> - DynamoDB creates a new item with the specified primary key,
     * and then adds the attribute. </p> </li> <li> <p> <code>DELETE</code> - Nothing
     * happens; there is no attribute to delete.</p> </li> <li> <p> <code>ADD</code> -
     * DynamoDB creates an item with the supplied primary key and number (or set of
     * numbers) for the attribute value. The only data types allowed are number and
     * number set; no other data types can be specified.</p> </li> </ul>
     */
    inline const AttributeAction& GetAction() const{ return m_action; }

    /**
     * <p>Specifies how to perform the update. Valid values are <code>PUT</code>
     * (default), <code>DELETE</code>, and <code>ADD</code>. The behavior depends on
     * whether the specified primary key already exists in the table.</p> <p> <b>If an
     * item with the specified <i>Key</i> is found in the table:</b> </p> <ul> <li> <p>
     * <code>PUT</code> - Adds the specified attribute to the item. If the attribute
     * already exists, it is replaced by the new value. </p> </li> <li> <p>
     * <code>DELETE</code> - If no value is specified, the attribute and its value are
     * removed from the item. The data type of the specified value must match the
     * existing value's data type.</p> <p>If a <i>set</i> of values is specified, then
     * those values are subtracted from the old set. For example, if the attribute
     * value was the set <code>[a,b,c]</code> and the <code>DELETE</code> action
     * specified <code>[a,c]</code>, then the final attribute value would be
     * <code>[b]</code>. Specifying an empty set is an error.</p> </li> <li> <p>
     * <code>ADD</code> - If the attribute does not already exist, then the attribute
     * and its values are added to the item. If the attribute does exist, then the
     * behavior of <code>ADD</code> depends on the data type of the attribute:</p> <ul>
     * <li> <p>If the existing attribute is a number, and if <code>Value</code> is also
     * a number, then the <code>Value</code> is mathematically added to the existing
     * attribute. If <code>Value</code> is a negative number, then it is subtracted
     * from the existing attribute.</p> <note> <p> If you use <code>ADD</code> to
     * increment or decrement a number value for an item that doesn't exist before the
     * update, DynamoDB uses 0 as the initial value.</p> <p>In addition, if you use
     * <code>ADD</code> to update an existing item, and intend to increment or
     * decrement an attribute value which does not yet exist, DynamoDB uses
     * <code>0</code> as the initial value. For example, suppose that the item you want
     * to update does not yet have an attribute named <i>itemcount</i>, but you decide
     * to <code>ADD</code> the number <code>3</code> to this attribute anyway, even
     * though it currently does not exist. DynamoDB will create the <i>itemcount</i>
     * attribute, set its initial value to <code>0</code>, and finally add
     * <code>3</code> to it. The result will be a new <i>itemcount</i> attribute in the
     * item, with a value of <code>3</code>.</p> </note> </li> <li> <p>If the existing
     * data type is a set, and if the <code>Value</code> is also a set, then the
     * <code>Value</code> is added to the existing set. (This is a <i>set</i>
     * operation, not mathematical addition.) For example, if the attribute value was
     * the set <code>[1,2]</code>, and the <code>ADD</code> action specified
     * <code>[3]</code>, then the final attribute value would be <code>[1,2,3]</code>.
     * An error occurs if an Add action is specified for a set attribute and the
     * attribute type specified does not match the existing set type. </p> <p>Both sets
     * must have the same primitive data type. For example, if the existing data type
     * is a set of strings, the <code>Value</code> must also be a set of strings. The
     * same holds true for number sets and binary sets.</p> </li> </ul> <p>This action
     * is only valid for an existing attribute whose data type is number or is a set.
     * Do not use <code>ADD</code> for any other data types.</p> </li> </ul> <p> <b>If
     * no item with the specified <i>Key</i> is found:</b> </p> <ul> <li> <p>
     * <code>PUT</code> - DynamoDB creates a new item with the specified primary key,
     * and then adds the attribute. </p> </li> <li> <p> <code>DELETE</code> - Nothing
     * happens; there is no attribute to delete.</p> </li> <li> <p> <code>ADD</code> -
     * DynamoDB creates an item with the supplied primary key and number (or set of
     * numbers) for the attribute value. The only data types allowed are number and
     * number set; no other data types can be specified.</p> </li> </ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies how to perform the update. Valid values are <code>PUT</code>
     * (default), <code>DELETE</code>, and <code>ADD</code>. The behavior depends on
     * whether the specified primary key already exists in the table.</p> <p> <b>If an
     * item with the specified <i>Key</i> is found in the table:</b> </p> <ul> <li> <p>
     * <code>PUT</code> - Adds the specified attribute to the item. If the attribute
     * already exists, it is replaced by the new value. </p> </li> <li> <p>
     * <code>DELETE</code> - If no value is specified, the attribute and its value are
     * removed from the item. The data type of the specified value must match the
     * existing value's data type.</p> <p>If a <i>set</i> of values is specified, then
     * those values are subtracted from the old set. For example, if the attribute
     * value was the set <code>[a,b,c]</code> and the <code>DELETE</code> action
     * specified <code>[a,c]</code>, then the final attribute value would be
     * <code>[b]</code>. Specifying an empty set is an error.</p> </li> <li> <p>
     * <code>ADD</code> - If the attribute does not already exist, then the attribute
     * and its values are added to the item. If the attribute does exist, then the
     * behavior of <code>ADD</code> depends on the data type of the attribute:</p> <ul>
     * <li> <p>If the existing attribute is a number, and if <code>Value</code> is also
     * a number, then the <code>Value</code> is mathematically added to the existing
     * attribute. If <code>Value</code> is a negative number, then it is subtracted
     * from the existing attribute.</p> <note> <p> If you use <code>ADD</code> to
     * increment or decrement a number value for an item that doesn't exist before the
     * update, DynamoDB uses 0 as the initial value.</p> <p>In addition, if you use
     * <code>ADD</code> to update an existing item, and intend to increment or
     * decrement an attribute value which does not yet exist, DynamoDB uses
     * <code>0</code> as the initial value. For example, suppose that the item you want
     * to update does not yet have an attribute named <i>itemcount</i>, but you decide
     * to <code>ADD</code> the number <code>3</code> to this attribute anyway, even
     * though it currently does not exist. DynamoDB will create the <i>itemcount</i>
     * attribute, set its initial value to <code>0</code>, and finally add
     * <code>3</code> to it. The result will be a new <i>itemcount</i> attribute in the
     * item, with a value of <code>3</code>.</p> </note> </li> <li> <p>If the existing
     * data type is a set, and if the <code>Value</code> is also a set, then the
     * <code>Value</code> is added to the existing set. (This is a <i>set</i>
     * operation, not mathematical addition.) For example, if the attribute value was
     * the set <code>[1,2]</code>, and the <code>ADD</code> action specified
     * <code>[3]</code>, then the final attribute value would be <code>[1,2,3]</code>.
     * An error occurs if an Add action is specified for a set attribute and the
     * attribute type specified does not match the existing set type. </p> <p>Both sets
     * must have the same primitive data type. For example, if the existing data type
     * is a set of strings, the <code>Value</code> must also be a set of strings. The
     * same holds true for number sets and binary sets.</p> </li> </ul> <p>This action
     * is only valid for an existing attribute whose data type is number or is a set.
     * Do not use <code>ADD</code> for any other data types.</p> </li> </ul> <p> <b>If
     * no item with the specified <i>Key</i> is found:</b> </p> <ul> <li> <p>
     * <code>PUT</code> - DynamoDB creates a new item with the specified primary key,
     * and then adds the attribute. </p> </li> <li> <p> <code>DELETE</code> - Nothing
     * happens; there is no attribute to delete.</p> </li> <li> <p> <code>ADD</code> -
     * DynamoDB creates an item with the supplied primary key and number (or set of
     * numbers) for the attribute value. The only data types allowed are number and
     * number set; no other data types can be specified.</p> </li> </ul>
     */
    inline void SetAction(const AttributeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies how to perform the update. Valid values are <code>PUT</code>
     * (default), <code>DELETE</code>, and <code>ADD</code>. The behavior depends on
     * whether the specified primary key already exists in the table.</p> <p> <b>If an
     * item with the specified <i>Key</i> is found in the table:</b> </p> <ul> <li> <p>
     * <code>PUT</code> - Adds the specified attribute to the item. If the attribute
     * already exists, it is replaced by the new value. </p> </li> <li> <p>
     * <code>DELETE</code> - If no value is specified, the attribute and its value are
     * removed from the item. The data type of the specified value must match the
     * existing value's data type.</p> <p>If a <i>set</i> of values is specified, then
     * those values are subtracted from the old set. For example, if the attribute
     * value was the set <code>[a,b,c]</code> and the <code>DELETE</code> action
     * specified <code>[a,c]</code>, then the final attribute value would be
     * <code>[b]</code>. Specifying an empty set is an error.</p> </li> <li> <p>
     * <code>ADD</code> - If the attribute does not already exist, then the attribute
     * and its values are added to the item. If the attribute does exist, then the
     * behavior of <code>ADD</code> depends on the data type of the attribute:</p> <ul>
     * <li> <p>If the existing attribute is a number, and if <code>Value</code> is also
     * a number, then the <code>Value</code> is mathematically added to the existing
     * attribute. If <code>Value</code> is a negative number, then it is subtracted
     * from the existing attribute.</p> <note> <p> If you use <code>ADD</code> to
     * increment or decrement a number value for an item that doesn't exist before the
     * update, DynamoDB uses 0 as the initial value.</p> <p>In addition, if you use
     * <code>ADD</code> to update an existing item, and intend to increment or
     * decrement an attribute value which does not yet exist, DynamoDB uses
     * <code>0</code> as the initial value. For example, suppose that the item you want
     * to update does not yet have an attribute named <i>itemcount</i>, but you decide
     * to <code>ADD</code> the number <code>3</code> to this attribute anyway, even
     * though it currently does not exist. DynamoDB will create the <i>itemcount</i>
     * attribute, set its initial value to <code>0</code>, and finally add
     * <code>3</code> to it. The result will be a new <i>itemcount</i> attribute in the
     * item, with a value of <code>3</code>.</p> </note> </li> <li> <p>If the existing
     * data type is a set, and if the <code>Value</code> is also a set, then the
     * <code>Value</code> is added to the existing set. (This is a <i>set</i>
     * operation, not mathematical addition.) For example, if the attribute value was
     * the set <code>[1,2]</code>, and the <code>ADD</code> action specified
     * <code>[3]</code>, then the final attribute value would be <code>[1,2,3]</code>.
     * An error occurs if an Add action is specified for a set attribute and the
     * attribute type specified does not match the existing set type. </p> <p>Both sets
     * must have the same primitive data type. For example, if the existing data type
     * is a set of strings, the <code>Value</code> must also be a set of strings. The
     * same holds true for number sets and binary sets.</p> </li> </ul> <p>This action
     * is only valid for an existing attribute whose data type is number or is a set.
     * Do not use <code>ADD</code> for any other data types.</p> </li> </ul> <p> <b>If
     * no item with the specified <i>Key</i> is found:</b> </p> <ul> <li> <p>
     * <code>PUT</code> - DynamoDB creates a new item with the specified primary key,
     * and then adds the attribute. </p> </li> <li> <p> <code>DELETE</code> - Nothing
     * happens; there is no attribute to delete.</p> </li> <li> <p> <code>ADD</code> -
     * DynamoDB creates an item with the supplied primary key and number (or set of
     * numbers) for the attribute value. The only data types allowed are number and
     * number set; no other data types can be specified.</p> </li> </ul>
     */
    inline void SetAction(AttributeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies how to perform the update. Valid values are <code>PUT</code>
     * (default), <code>DELETE</code>, and <code>ADD</code>. The behavior depends on
     * whether the specified primary key already exists in the table.</p> <p> <b>If an
     * item with the specified <i>Key</i> is found in the table:</b> </p> <ul> <li> <p>
     * <code>PUT</code> - Adds the specified attribute to the item. If the attribute
     * already exists, it is replaced by the new value. </p> </li> <li> <p>
     * <code>DELETE</code> - If no value is specified, the attribute and its value are
     * removed from the item. The data type of the specified value must match the
     * existing value's data type.</p> <p>If a <i>set</i> of values is specified, then
     * those values are subtracted from the old set. For example, if the attribute
     * value was the set <code>[a,b,c]</code> and the <code>DELETE</code> action
     * specified <code>[a,c]</code>, then the final attribute value would be
     * <code>[b]</code>. Specifying an empty set is an error.</p> </li> <li> <p>
     * <code>ADD</code> - If the attribute does not already exist, then the attribute
     * and its values are added to the item. If the attribute does exist, then the
     * behavior of <code>ADD</code> depends on the data type of the attribute:</p> <ul>
     * <li> <p>If the existing attribute is a number, and if <code>Value</code> is also
     * a number, then the <code>Value</code> is mathematically added to the existing
     * attribute. If <code>Value</code> is a negative number, then it is subtracted
     * from the existing attribute.</p> <note> <p> If you use <code>ADD</code> to
     * increment or decrement a number value for an item that doesn't exist before the
     * update, DynamoDB uses 0 as the initial value.</p> <p>In addition, if you use
     * <code>ADD</code> to update an existing item, and intend to increment or
     * decrement an attribute value which does not yet exist, DynamoDB uses
     * <code>0</code> as the initial value. For example, suppose that the item you want
     * to update does not yet have an attribute named <i>itemcount</i>, but you decide
     * to <code>ADD</code> the number <code>3</code> to this attribute anyway, even
     * though it currently does not exist. DynamoDB will create the <i>itemcount</i>
     * attribute, set its initial value to <code>0</code>, and finally add
     * <code>3</code> to it. The result will be a new <i>itemcount</i> attribute in the
     * item, with a value of <code>3</code>.</p> </note> </li> <li> <p>If the existing
     * data type is a set, and if the <code>Value</code> is also a set, then the
     * <code>Value</code> is added to the existing set. (This is a <i>set</i>
     * operation, not mathematical addition.) For example, if the attribute value was
     * the set <code>[1,2]</code>, and the <code>ADD</code> action specified
     * <code>[3]</code>, then the final attribute value would be <code>[1,2,3]</code>.
     * An error occurs if an Add action is specified for a set attribute and the
     * attribute type specified does not match the existing set type. </p> <p>Both sets
     * must have the same primitive data type. For example, if the existing data type
     * is a set of strings, the <code>Value</code> must also be a set of strings. The
     * same holds true for number sets and binary sets.</p> </li> </ul> <p>This action
     * is only valid for an existing attribute whose data type is number or is a set.
     * Do not use <code>ADD</code> for any other data types.</p> </li> </ul> <p> <b>If
     * no item with the specified <i>Key</i> is found:</b> </p> <ul> <li> <p>
     * <code>PUT</code> - DynamoDB creates a new item with the specified primary key,
     * and then adds the attribute. </p> </li> <li> <p> <code>DELETE</code> - Nothing
     * happens; there is no attribute to delete.</p> </li> <li> <p> <code>ADD</code> -
     * DynamoDB creates an item with the supplied primary key and number (or set of
     * numbers) for the attribute value. The only data types allowed are number and
     * number set; no other data types can be specified.</p> </li> </ul>
     */
    inline AttributeValueUpdate& WithAction(const AttributeAction& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies how to perform the update. Valid values are <code>PUT</code>
     * (default), <code>DELETE</code>, and <code>ADD</code>. The behavior depends on
     * whether the specified primary key already exists in the table.</p> <p> <b>If an
     * item with the specified <i>Key</i> is found in the table:</b> </p> <ul> <li> <p>
     * <code>PUT</code> - Adds the specified attribute to the item. If the attribute
     * already exists, it is replaced by the new value. </p> </li> <li> <p>
     * <code>DELETE</code> - If no value is specified, the attribute and its value are
     * removed from the item. The data type of the specified value must match the
     * existing value's data type.</p> <p>If a <i>set</i> of values is specified, then
     * those values are subtracted from the old set. For example, if the attribute
     * value was the set <code>[a,b,c]</code> and the <code>DELETE</code> action
     * specified <code>[a,c]</code>, then the final attribute value would be
     * <code>[b]</code>. Specifying an empty set is an error.</p> </li> <li> <p>
     * <code>ADD</code> - If the attribute does not already exist, then the attribute
     * and its values are added to the item. If the attribute does exist, then the
     * behavior of <code>ADD</code> depends on the data type of the attribute:</p> <ul>
     * <li> <p>If the existing attribute is a number, and if <code>Value</code> is also
     * a number, then the <code>Value</code> is mathematically added to the existing
     * attribute. If <code>Value</code> is a negative number, then it is subtracted
     * from the existing attribute.</p> <note> <p> If you use <code>ADD</code> to
     * increment or decrement a number value for an item that doesn't exist before the
     * update, DynamoDB uses 0 as the initial value.</p> <p>In addition, if you use
     * <code>ADD</code> to update an existing item, and intend to increment or
     * decrement an attribute value which does not yet exist, DynamoDB uses
     * <code>0</code> as the initial value. For example, suppose that the item you want
     * to update does not yet have an attribute named <i>itemcount</i>, but you decide
     * to <code>ADD</code> the number <code>3</code> to this attribute anyway, even
     * though it currently does not exist. DynamoDB will create the <i>itemcount</i>
     * attribute, set its initial value to <code>0</code>, and finally add
     * <code>3</code> to it. The result will be a new <i>itemcount</i> attribute in the
     * item, with a value of <code>3</code>.</p> </note> </li> <li> <p>If the existing
     * data type is a set, and if the <code>Value</code> is also a set, then the
     * <code>Value</code> is added to the existing set. (This is a <i>set</i>
     * operation, not mathematical addition.) For example, if the attribute value was
     * the set <code>[1,2]</code>, and the <code>ADD</code> action specified
     * <code>[3]</code>, then the final attribute value would be <code>[1,2,3]</code>.
     * An error occurs if an Add action is specified for a set attribute and the
     * attribute type specified does not match the existing set type. </p> <p>Both sets
     * must have the same primitive data type. For example, if the existing data type
     * is a set of strings, the <code>Value</code> must also be a set of strings. The
     * same holds true for number sets and binary sets.</p> </li> </ul> <p>This action
     * is only valid for an existing attribute whose data type is number or is a set.
     * Do not use <code>ADD</code> for any other data types.</p> </li> </ul> <p> <b>If
     * no item with the specified <i>Key</i> is found:</b> </p> <ul> <li> <p>
     * <code>PUT</code> - DynamoDB creates a new item with the specified primary key,
     * and then adds the attribute. </p> </li> <li> <p> <code>DELETE</code> - Nothing
     * happens; there is no attribute to delete.</p> </li> <li> <p> <code>ADD</code> -
     * DynamoDB creates an item with the supplied primary key and number (or set of
     * numbers) for the attribute value. The only data types allowed are number and
     * number set; no other data types can be specified.</p> </li> </ul>
     */
    inline AttributeValueUpdate& WithAction(AttributeAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    AttributeValue m_value;
    bool m_valueHasBeenSet;

    AttributeAction m_action;
    bool m_actionHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
