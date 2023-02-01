/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/Payload.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Defines an action to write to the Amazon DynamoDB table that you created. The
   * standard action payload contains all the information about the detector model
   * instance and the event that triggered the action. You can customize the <a
   * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Payload.html">payload</a>.
   * One column of the DynamoDB table receives all attribute-value pairs in the
   * payload that you specify.</p> <p>You must use expressions for all parameters in
   * <code>DynamoDBAction</code>. The expressions accept literals, operators,
   * functions, references, and substitution templates.</p> <p class="title">
   * <b>Examples</b> </p> <ul> <li> <p>For literal values, the expressions must
   * contain single quotes. For example, the value for the <code>hashKeyType</code>
   * parameter can be <code>'STRING'</code>.</p> </li> <li> <p>For references, you
   * must specify either variables or input values. For example, the value for the
   * <code>hashKeyField</code> parameter can be
   * <code>$input.GreenhouseInput.name</code>.</p> </li> <li> <p>For a substitution
   * template, you must use <code>${}</code>, and the template must be in single
   * quotes. A substitution template can also contain a combination of literals,
   * operators, functions, references, and substitution templates.</p> <p>In the
   * following example, the value for the <code>hashKeyValue</code> parameter uses a
   * substitution template. </p> <p> <code>'${$input.GreenhouseInput.temperature * 6
   * / 5 + 32} in Fahrenheit'</code> </p> </li> <li> <p>For a string concatenation,
   * you must use <code>+</code>. A string concatenation can also contain a
   * combination of literals, operators, functions, references, and substitution
   * templates.</p> <p>In the following example, the value for the
   * <code>tableName</code> parameter uses a string concatenation. </p> <p>
   * <code>'GreenhouseTemperatureTable ' + $input.GreenhouseInput.date</code> </p>
   * </li> </ul> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-expressions.html">Expressions</a>
   * in the <i>AWS IoT Events Developer Guide</i>.</p> <p>If the defined payload type
   * is a string, <code>DynamoDBAction</code> writes non-JSON data to the DynamoDB
   * table as binary data. The DynamoDB console displays the data as Base64-encoded
   * text. The value for the <code>payloadField</code> parameter is
   * <code>&lt;payload-field&gt;_raw</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DynamoDBAction">AWS
   * API Reference</a></p>
   */
  class DynamoDBAction
  {
  public:
    AWS_IOTEVENTS_API DynamoDBAction();
    AWS_IOTEVENTS_API DynamoDBAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API DynamoDBAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data type for the hash key (also called the partition key). You can
     * specify the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The hash
     * key is a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The hash key is a
     * number.</p> </li> </ul> <p>If you don't specify <code>hashKeyType</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline const Aws::String& GetHashKeyType() const{ return m_hashKeyType; }

    /**
     * <p>The data type for the hash key (also called the partition key). You can
     * specify the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The hash
     * key is a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The hash key is a
     * number.</p> </li> </ul> <p>If you don't specify <code>hashKeyType</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline bool HashKeyTypeHasBeenSet() const { return m_hashKeyTypeHasBeenSet; }

    /**
     * <p>The data type for the hash key (also called the partition key). You can
     * specify the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The hash
     * key is a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The hash key is a
     * number.</p> </li> </ul> <p>If you don't specify <code>hashKeyType</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline void SetHashKeyType(const Aws::String& value) { m_hashKeyTypeHasBeenSet = true; m_hashKeyType = value; }

    /**
     * <p>The data type for the hash key (also called the partition key). You can
     * specify the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The hash
     * key is a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The hash key is a
     * number.</p> </li> </ul> <p>If you don't specify <code>hashKeyType</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline void SetHashKeyType(Aws::String&& value) { m_hashKeyTypeHasBeenSet = true; m_hashKeyType = std::move(value); }

    /**
     * <p>The data type for the hash key (also called the partition key). You can
     * specify the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The hash
     * key is a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The hash key is a
     * number.</p> </li> </ul> <p>If you don't specify <code>hashKeyType</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline void SetHashKeyType(const char* value) { m_hashKeyTypeHasBeenSet = true; m_hashKeyType.assign(value); }

    /**
     * <p>The data type for the hash key (also called the partition key). You can
     * specify the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The hash
     * key is a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The hash key is a
     * number.</p> </li> </ul> <p>If you don't specify <code>hashKeyType</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline DynamoDBAction& WithHashKeyType(const Aws::String& value) { SetHashKeyType(value); return *this;}

    /**
     * <p>The data type for the hash key (also called the partition key). You can
     * specify the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The hash
     * key is a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The hash key is a
     * number.</p> </li> </ul> <p>If you don't specify <code>hashKeyType</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline DynamoDBAction& WithHashKeyType(Aws::String&& value) { SetHashKeyType(std::move(value)); return *this;}

    /**
     * <p>The data type for the hash key (also called the partition key). You can
     * specify the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The hash
     * key is a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The hash key is a
     * number.</p> </li> </ul> <p>If you don't specify <code>hashKeyType</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline DynamoDBAction& WithHashKeyType(const char* value) { SetHashKeyType(value); return *this;}


    /**
     * <p>The name of the hash key (also called the partition key). The
     * <code>hashKeyField</code> value must match the partition key of the target
     * DynamoDB table.</p>
     */
    inline const Aws::String& GetHashKeyField() const{ return m_hashKeyField; }

    /**
     * <p>The name of the hash key (also called the partition key). The
     * <code>hashKeyField</code> value must match the partition key of the target
     * DynamoDB table.</p>
     */
    inline bool HashKeyFieldHasBeenSet() const { return m_hashKeyFieldHasBeenSet; }

    /**
     * <p>The name of the hash key (also called the partition key). The
     * <code>hashKeyField</code> value must match the partition key of the target
     * DynamoDB table.</p>
     */
    inline void SetHashKeyField(const Aws::String& value) { m_hashKeyFieldHasBeenSet = true; m_hashKeyField = value; }

    /**
     * <p>The name of the hash key (also called the partition key). The
     * <code>hashKeyField</code> value must match the partition key of the target
     * DynamoDB table.</p>
     */
    inline void SetHashKeyField(Aws::String&& value) { m_hashKeyFieldHasBeenSet = true; m_hashKeyField = std::move(value); }

    /**
     * <p>The name of the hash key (also called the partition key). The
     * <code>hashKeyField</code> value must match the partition key of the target
     * DynamoDB table.</p>
     */
    inline void SetHashKeyField(const char* value) { m_hashKeyFieldHasBeenSet = true; m_hashKeyField.assign(value); }

    /**
     * <p>The name of the hash key (also called the partition key). The
     * <code>hashKeyField</code> value must match the partition key of the target
     * DynamoDB table.</p>
     */
    inline DynamoDBAction& WithHashKeyField(const Aws::String& value) { SetHashKeyField(value); return *this;}

    /**
     * <p>The name of the hash key (also called the partition key). The
     * <code>hashKeyField</code> value must match the partition key of the target
     * DynamoDB table.</p>
     */
    inline DynamoDBAction& WithHashKeyField(Aws::String&& value) { SetHashKeyField(std::move(value)); return *this;}

    /**
     * <p>The name of the hash key (also called the partition key). The
     * <code>hashKeyField</code> value must match the partition key of the target
     * DynamoDB table.</p>
     */
    inline DynamoDBAction& WithHashKeyField(const char* value) { SetHashKeyField(value); return *this;}


    /**
     * <p>The value of the hash key (also called the partition key).</p>
     */
    inline const Aws::String& GetHashKeyValue() const{ return m_hashKeyValue; }

    /**
     * <p>The value of the hash key (also called the partition key).</p>
     */
    inline bool HashKeyValueHasBeenSet() const { return m_hashKeyValueHasBeenSet; }

    /**
     * <p>The value of the hash key (also called the partition key).</p>
     */
    inline void SetHashKeyValue(const Aws::String& value) { m_hashKeyValueHasBeenSet = true; m_hashKeyValue = value; }

    /**
     * <p>The value of the hash key (also called the partition key).</p>
     */
    inline void SetHashKeyValue(Aws::String&& value) { m_hashKeyValueHasBeenSet = true; m_hashKeyValue = std::move(value); }

    /**
     * <p>The value of the hash key (also called the partition key).</p>
     */
    inline void SetHashKeyValue(const char* value) { m_hashKeyValueHasBeenSet = true; m_hashKeyValue.assign(value); }

    /**
     * <p>The value of the hash key (also called the partition key).</p>
     */
    inline DynamoDBAction& WithHashKeyValue(const Aws::String& value) { SetHashKeyValue(value); return *this;}

    /**
     * <p>The value of the hash key (also called the partition key).</p>
     */
    inline DynamoDBAction& WithHashKeyValue(Aws::String&& value) { SetHashKeyValue(std::move(value)); return *this;}

    /**
     * <p>The value of the hash key (also called the partition key).</p>
     */
    inline DynamoDBAction& WithHashKeyValue(const char* value) { SetHashKeyValue(value); return *this;}


    /**
     * <p>The data type for the range key (also called the sort key), You can specify
     * the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The range key is
     * a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The range key is
     * number.</p> </li> </ul> <p>If you don't specify <code>rangeKeyField</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline const Aws::String& GetRangeKeyType() const{ return m_rangeKeyType; }

    /**
     * <p>The data type for the range key (also called the sort key), You can specify
     * the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The range key is
     * a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The range key is
     * number.</p> </li> </ul> <p>If you don't specify <code>rangeKeyField</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline bool RangeKeyTypeHasBeenSet() const { return m_rangeKeyTypeHasBeenSet; }

    /**
     * <p>The data type for the range key (also called the sort key), You can specify
     * the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The range key is
     * a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The range key is
     * number.</p> </li> </ul> <p>If you don't specify <code>rangeKeyField</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline void SetRangeKeyType(const Aws::String& value) { m_rangeKeyTypeHasBeenSet = true; m_rangeKeyType = value; }

    /**
     * <p>The data type for the range key (also called the sort key), You can specify
     * the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The range key is
     * a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The range key is
     * number.</p> </li> </ul> <p>If you don't specify <code>rangeKeyField</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline void SetRangeKeyType(Aws::String&& value) { m_rangeKeyTypeHasBeenSet = true; m_rangeKeyType = std::move(value); }

    /**
     * <p>The data type for the range key (also called the sort key), You can specify
     * the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The range key is
     * a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The range key is
     * number.</p> </li> </ul> <p>If you don't specify <code>rangeKeyField</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline void SetRangeKeyType(const char* value) { m_rangeKeyTypeHasBeenSet = true; m_rangeKeyType.assign(value); }

    /**
     * <p>The data type for the range key (also called the sort key), You can specify
     * the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The range key is
     * a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The range key is
     * number.</p> </li> </ul> <p>If you don't specify <code>rangeKeyField</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline DynamoDBAction& WithRangeKeyType(const Aws::String& value) { SetRangeKeyType(value); return *this;}

    /**
     * <p>The data type for the range key (also called the sort key), You can specify
     * the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The range key is
     * a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The range key is
     * number.</p> </li> </ul> <p>If you don't specify <code>rangeKeyField</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline DynamoDBAction& WithRangeKeyType(Aws::String&& value) { SetRangeKeyType(std::move(value)); return *this;}

    /**
     * <p>The data type for the range key (also called the sort key), You can specify
     * the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The range key is
     * a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The range key is
     * number.</p> </li> </ul> <p>If you don't specify <code>rangeKeyField</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline DynamoDBAction& WithRangeKeyType(const char* value) { SetRangeKeyType(value); return *this;}


    /**
     * <p>The name of the range key (also called the sort key). The
     * <code>rangeKeyField</code> value must match the sort key of the target DynamoDB
     * table. </p>
     */
    inline const Aws::String& GetRangeKeyField() const{ return m_rangeKeyField; }

    /**
     * <p>The name of the range key (also called the sort key). The
     * <code>rangeKeyField</code> value must match the sort key of the target DynamoDB
     * table. </p>
     */
    inline bool RangeKeyFieldHasBeenSet() const { return m_rangeKeyFieldHasBeenSet; }

    /**
     * <p>The name of the range key (also called the sort key). The
     * <code>rangeKeyField</code> value must match the sort key of the target DynamoDB
     * table. </p>
     */
    inline void SetRangeKeyField(const Aws::String& value) { m_rangeKeyFieldHasBeenSet = true; m_rangeKeyField = value; }

    /**
     * <p>The name of the range key (also called the sort key). The
     * <code>rangeKeyField</code> value must match the sort key of the target DynamoDB
     * table. </p>
     */
    inline void SetRangeKeyField(Aws::String&& value) { m_rangeKeyFieldHasBeenSet = true; m_rangeKeyField = std::move(value); }

    /**
     * <p>The name of the range key (also called the sort key). The
     * <code>rangeKeyField</code> value must match the sort key of the target DynamoDB
     * table. </p>
     */
    inline void SetRangeKeyField(const char* value) { m_rangeKeyFieldHasBeenSet = true; m_rangeKeyField.assign(value); }

    /**
     * <p>The name of the range key (also called the sort key). The
     * <code>rangeKeyField</code> value must match the sort key of the target DynamoDB
     * table. </p>
     */
    inline DynamoDBAction& WithRangeKeyField(const Aws::String& value) { SetRangeKeyField(value); return *this;}

    /**
     * <p>The name of the range key (also called the sort key). The
     * <code>rangeKeyField</code> value must match the sort key of the target DynamoDB
     * table. </p>
     */
    inline DynamoDBAction& WithRangeKeyField(Aws::String&& value) { SetRangeKeyField(std::move(value)); return *this;}

    /**
     * <p>The name of the range key (also called the sort key). The
     * <code>rangeKeyField</code> value must match the sort key of the target DynamoDB
     * table. </p>
     */
    inline DynamoDBAction& WithRangeKeyField(const char* value) { SetRangeKeyField(value); return *this;}


    /**
     * <p>The value of the range key (also called the sort key).</p>
     */
    inline const Aws::String& GetRangeKeyValue() const{ return m_rangeKeyValue; }

    /**
     * <p>The value of the range key (also called the sort key).</p>
     */
    inline bool RangeKeyValueHasBeenSet() const { return m_rangeKeyValueHasBeenSet; }

    /**
     * <p>The value of the range key (also called the sort key).</p>
     */
    inline void SetRangeKeyValue(const Aws::String& value) { m_rangeKeyValueHasBeenSet = true; m_rangeKeyValue = value; }

    /**
     * <p>The value of the range key (also called the sort key).</p>
     */
    inline void SetRangeKeyValue(Aws::String&& value) { m_rangeKeyValueHasBeenSet = true; m_rangeKeyValue = std::move(value); }

    /**
     * <p>The value of the range key (also called the sort key).</p>
     */
    inline void SetRangeKeyValue(const char* value) { m_rangeKeyValueHasBeenSet = true; m_rangeKeyValue.assign(value); }

    /**
     * <p>The value of the range key (also called the sort key).</p>
     */
    inline DynamoDBAction& WithRangeKeyValue(const Aws::String& value) { SetRangeKeyValue(value); return *this;}

    /**
     * <p>The value of the range key (also called the sort key).</p>
     */
    inline DynamoDBAction& WithRangeKeyValue(Aws::String&& value) { SetRangeKeyValue(std::move(value)); return *this;}

    /**
     * <p>The value of the range key (also called the sort key).</p>
     */
    inline DynamoDBAction& WithRangeKeyValue(const char* value) { SetRangeKeyValue(value); return *this;}


    /**
     * <p>The type of operation to perform. You can specify the following values: </p>
     * <ul> <li> <p> <code>'INSERT'</code> - Insert data as a new item into the
     * DynamoDB table. This item uses the specified hash key as a partition key. If you
     * specified a range key, the item uses the range key as a sort key.</p> </li> <li>
     * <p> <code>'UPDATE'</code> - Update an existing item of the DynamoDB table with
     * new data. This item's partition key must match the specified hash key. If you
     * specified a range key, the range key must match the item's sort key.</p> </li>
     * <li> <p> <code>'DELETE'</code> - Delete an existing item of the DynamoDB table.
     * This item's partition key must match the specified hash key. If you specified a
     * range key, the range key must match the item's sort key.</p> </li> </ul> <p>If
     * you don't specify this parameter, AWS IoT Events triggers the
     * <code>'INSERT'</code> operation.</p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }

    /**
     * <p>The type of operation to perform. You can specify the following values: </p>
     * <ul> <li> <p> <code>'INSERT'</code> - Insert data as a new item into the
     * DynamoDB table. This item uses the specified hash key as a partition key. If you
     * specified a range key, the item uses the range key as a sort key.</p> </li> <li>
     * <p> <code>'UPDATE'</code> - Update an existing item of the DynamoDB table with
     * new data. This item's partition key must match the specified hash key. If you
     * specified a range key, the range key must match the item's sort key.</p> </li>
     * <li> <p> <code>'DELETE'</code> - Delete an existing item of the DynamoDB table.
     * This item's partition key must match the specified hash key. If you specified a
     * range key, the range key must match the item's sort key.</p> </li> </ul> <p>If
     * you don't specify this parameter, AWS IoT Events triggers the
     * <code>'INSERT'</code> operation.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The type of operation to perform. You can specify the following values: </p>
     * <ul> <li> <p> <code>'INSERT'</code> - Insert data as a new item into the
     * DynamoDB table. This item uses the specified hash key as a partition key. If you
     * specified a range key, the item uses the range key as a sort key.</p> </li> <li>
     * <p> <code>'UPDATE'</code> - Update an existing item of the DynamoDB table with
     * new data. This item's partition key must match the specified hash key. If you
     * specified a range key, the range key must match the item's sort key.</p> </li>
     * <li> <p> <code>'DELETE'</code> - Delete an existing item of the DynamoDB table.
     * This item's partition key must match the specified hash key. If you specified a
     * range key, the range key must match the item's sort key.</p> </li> </ul> <p>If
     * you don't specify this parameter, AWS IoT Events triggers the
     * <code>'INSERT'</code> operation.</p>
     */
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The type of operation to perform. You can specify the following values: </p>
     * <ul> <li> <p> <code>'INSERT'</code> - Insert data as a new item into the
     * DynamoDB table. This item uses the specified hash key as a partition key. If you
     * specified a range key, the item uses the range key as a sort key.</p> </li> <li>
     * <p> <code>'UPDATE'</code> - Update an existing item of the DynamoDB table with
     * new data. This item's partition key must match the specified hash key. If you
     * specified a range key, the range key must match the item's sort key.</p> </li>
     * <li> <p> <code>'DELETE'</code> - Delete an existing item of the DynamoDB table.
     * This item's partition key must match the specified hash key. If you specified a
     * range key, the range key must match the item's sort key.</p> </li> </ul> <p>If
     * you don't specify this parameter, AWS IoT Events triggers the
     * <code>'INSERT'</code> operation.</p>
     */
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The type of operation to perform. You can specify the following values: </p>
     * <ul> <li> <p> <code>'INSERT'</code> - Insert data as a new item into the
     * DynamoDB table. This item uses the specified hash key as a partition key. If you
     * specified a range key, the item uses the range key as a sort key.</p> </li> <li>
     * <p> <code>'UPDATE'</code> - Update an existing item of the DynamoDB table with
     * new data. This item's partition key must match the specified hash key. If you
     * specified a range key, the range key must match the item's sort key.</p> </li>
     * <li> <p> <code>'DELETE'</code> - Delete an existing item of the DynamoDB table.
     * This item's partition key must match the specified hash key. If you specified a
     * range key, the range key must match the item's sort key.</p> </li> </ul> <p>If
     * you don't specify this parameter, AWS IoT Events triggers the
     * <code>'INSERT'</code> operation.</p>
     */
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }

    /**
     * <p>The type of operation to perform. You can specify the following values: </p>
     * <ul> <li> <p> <code>'INSERT'</code> - Insert data as a new item into the
     * DynamoDB table. This item uses the specified hash key as a partition key. If you
     * specified a range key, the item uses the range key as a sort key.</p> </li> <li>
     * <p> <code>'UPDATE'</code> - Update an existing item of the DynamoDB table with
     * new data. This item's partition key must match the specified hash key. If you
     * specified a range key, the range key must match the item's sort key.</p> </li>
     * <li> <p> <code>'DELETE'</code> - Delete an existing item of the DynamoDB table.
     * This item's partition key must match the specified hash key. If you specified a
     * range key, the range key must match the item's sort key.</p> </li> </ul> <p>If
     * you don't specify this parameter, AWS IoT Events triggers the
     * <code>'INSERT'</code> operation.</p>
     */
    inline DynamoDBAction& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}

    /**
     * <p>The type of operation to perform. You can specify the following values: </p>
     * <ul> <li> <p> <code>'INSERT'</code> - Insert data as a new item into the
     * DynamoDB table. This item uses the specified hash key as a partition key. If you
     * specified a range key, the item uses the range key as a sort key.</p> </li> <li>
     * <p> <code>'UPDATE'</code> - Update an existing item of the DynamoDB table with
     * new data. This item's partition key must match the specified hash key. If you
     * specified a range key, the range key must match the item's sort key.</p> </li>
     * <li> <p> <code>'DELETE'</code> - Delete an existing item of the DynamoDB table.
     * This item's partition key must match the specified hash key. If you specified a
     * range key, the range key must match the item's sort key.</p> </li> </ul> <p>If
     * you don't specify this parameter, AWS IoT Events triggers the
     * <code>'INSERT'</code> operation.</p>
     */
    inline DynamoDBAction& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}

    /**
     * <p>The type of operation to perform. You can specify the following values: </p>
     * <ul> <li> <p> <code>'INSERT'</code> - Insert data as a new item into the
     * DynamoDB table. This item uses the specified hash key as a partition key. If you
     * specified a range key, the item uses the range key as a sort key.</p> </li> <li>
     * <p> <code>'UPDATE'</code> - Update an existing item of the DynamoDB table with
     * new data. This item's partition key must match the specified hash key. If you
     * specified a range key, the range key must match the item's sort key.</p> </li>
     * <li> <p> <code>'DELETE'</code> - Delete an existing item of the DynamoDB table.
     * This item's partition key must match the specified hash key. If you specified a
     * range key, the range key must match the item's sort key.</p> </li> </ul> <p>If
     * you don't specify this parameter, AWS IoT Events triggers the
     * <code>'INSERT'</code> operation.</p>
     */
    inline DynamoDBAction& WithOperation(const char* value) { SetOperation(value); return *this;}


    /**
     * <p>The name of the DynamoDB column that receives the action payload.</p> <p>If
     * you don't specify this parameter, the name of the DynamoDB column is
     * <code>payload</code>.</p>
     */
    inline const Aws::String& GetPayloadField() const{ return m_payloadField; }

    /**
     * <p>The name of the DynamoDB column that receives the action payload.</p> <p>If
     * you don't specify this parameter, the name of the DynamoDB column is
     * <code>payload</code>.</p>
     */
    inline bool PayloadFieldHasBeenSet() const { return m_payloadFieldHasBeenSet; }

    /**
     * <p>The name of the DynamoDB column that receives the action payload.</p> <p>If
     * you don't specify this parameter, the name of the DynamoDB column is
     * <code>payload</code>.</p>
     */
    inline void SetPayloadField(const Aws::String& value) { m_payloadFieldHasBeenSet = true; m_payloadField = value; }

    /**
     * <p>The name of the DynamoDB column that receives the action payload.</p> <p>If
     * you don't specify this parameter, the name of the DynamoDB column is
     * <code>payload</code>.</p>
     */
    inline void SetPayloadField(Aws::String&& value) { m_payloadFieldHasBeenSet = true; m_payloadField = std::move(value); }

    /**
     * <p>The name of the DynamoDB column that receives the action payload.</p> <p>If
     * you don't specify this parameter, the name of the DynamoDB column is
     * <code>payload</code>.</p>
     */
    inline void SetPayloadField(const char* value) { m_payloadFieldHasBeenSet = true; m_payloadField.assign(value); }

    /**
     * <p>The name of the DynamoDB column that receives the action payload.</p> <p>If
     * you don't specify this parameter, the name of the DynamoDB column is
     * <code>payload</code>.</p>
     */
    inline DynamoDBAction& WithPayloadField(const Aws::String& value) { SetPayloadField(value); return *this;}

    /**
     * <p>The name of the DynamoDB column that receives the action payload.</p> <p>If
     * you don't specify this parameter, the name of the DynamoDB column is
     * <code>payload</code>.</p>
     */
    inline DynamoDBAction& WithPayloadField(Aws::String&& value) { SetPayloadField(std::move(value)); return *this;}

    /**
     * <p>The name of the DynamoDB column that receives the action payload.</p> <p>If
     * you don't specify this parameter, the name of the DynamoDB column is
     * <code>payload</code>.</p>
     */
    inline DynamoDBAction& WithPayloadField(const char* value) { SetPayloadField(value); return *this;}


    /**
     * <p>The name of the DynamoDB table. The <code>tableName</code> value must match
     * the table name of the target DynamoDB table. </p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the DynamoDB table. The <code>tableName</code> value must match
     * the table name of the target DynamoDB table. </p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the DynamoDB table. The <code>tableName</code> value must match
     * the table name of the target DynamoDB table. </p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the DynamoDB table. The <code>tableName</code> value must match
     * the table name of the target DynamoDB table. </p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the DynamoDB table. The <code>tableName</code> value must match
     * the table name of the target DynamoDB table. </p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the DynamoDB table. The <code>tableName</code> value must match
     * the table name of the target DynamoDB table. </p>
     */
    inline DynamoDBAction& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the DynamoDB table. The <code>tableName</code> value must match
     * the table name of the target DynamoDB table. </p>
     */
    inline DynamoDBAction& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the DynamoDB table. The <code>tableName</code> value must match
     * the table name of the target DynamoDB table. </p>
     */
    inline DynamoDBAction& WithTableName(const char* value) { SetTableName(value); return *this;}


    
    inline const Payload& GetPayload() const{ return m_payload; }

    
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    
    inline void SetPayload(const Payload& value) { m_payloadHasBeenSet = true; m_payload = value; }

    
    inline void SetPayload(Payload&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    
    inline DynamoDBAction& WithPayload(const Payload& value) { SetPayload(value); return *this;}

    
    inline DynamoDBAction& WithPayload(Payload&& value) { SetPayload(std::move(value)); return *this;}

  private:

    Aws::String m_hashKeyType;
    bool m_hashKeyTypeHasBeenSet = false;

    Aws::String m_hashKeyField;
    bool m_hashKeyFieldHasBeenSet = false;

    Aws::String m_hashKeyValue;
    bool m_hashKeyValueHasBeenSet = false;

    Aws::String m_rangeKeyType;
    bool m_rangeKeyTypeHasBeenSet = false;

    Aws::String m_rangeKeyField;
    bool m_rangeKeyFieldHasBeenSet = false;

    Aws::String m_rangeKeyValue;
    bool m_rangeKeyValueHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_payloadField;
    bool m_payloadFieldHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Payload m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
