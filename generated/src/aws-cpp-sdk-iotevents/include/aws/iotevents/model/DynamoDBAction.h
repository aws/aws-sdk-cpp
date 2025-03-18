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
    AWS_IOTEVENTS_API DynamoDBAction() = default;
    AWS_IOTEVENTS_API DynamoDBAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API DynamoDBAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data type for the hash key (also called the partition key). You can
     * specify the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The hash
     * key is a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The hash key is a
     * number.</p> </li> </ul> <p>If you don't specify <code>hashKeyType</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline const Aws::String& GetHashKeyType() const { return m_hashKeyType; }
    inline bool HashKeyTypeHasBeenSet() const { return m_hashKeyTypeHasBeenSet; }
    template<typename HashKeyTypeT = Aws::String>
    void SetHashKeyType(HashKeyTypeT&& value) { m_hashKeyTypeHasBeenSet = true; m_hashKeyType = std::forward<HashKeyTypeT>(value); }
    template<typename HashKeyTypeT = Aws::String>
    DynamoDBAction& WithHashKeyType(HashKeyTypeT&& value) { SetHashKeyType(std::forward<HashKeyTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the hash key (also called the partition key). The
     * <code>hashKeyField</code> value must match the partition key of the target
     * DynamoDB table.</p>
     */
    inline const Aws::String& GetHashKeyField() const { return m_hashKeyField; }
    inline bool HashKeyFieldHasBeenSet() const { return m_hashKeyFieldHasBeenSet; }
    template<typename HashKeyFieldT = Aws::String>
    void SetHashKeyField(HashKeyFieldT&& value) { m_hashKeyFieldHasBeenSet = true; m_hashKeyField = std::forward<HashKeyFieldT>(value); }
    template<typename HashKeyFieldT = Aws::String>
    DynamoDBAction& WithHashKeyField(HashKeyFieldT&& value) { SetHashKeyField(std::forward<HashKeyFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the hash key (also called the partition key).</p>
     */
    inline const Aws::String& GetHashKeyValue() const { return m_hashKeyValue; }
    inline bool HashKeyValueHasBeenSet() const { return m_hashKeyValueHasBeenSet; }
    template<typename HashKeyValueT = Aws::String>
    void SetHashKeyValue(HashKeyValueT&& value) { m_hashKeyValueHasBeenSet = true; m_hashKeyValue = std::forward<HashKeyValueT>(value); }
    template<typename HashKeyValueT = Aws::String>
    DynamoDBAction& WithHashKeyValue(HashKeyValueT&& value) { SetHashKeyValue(std::forward<HashKeyValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type for the range key (also called the sort key), You can specify
     * the following values:</p> <ul> <li> <p> <code>'STRING'</code> - The range key is
     * a string.</p> </li> <li> <p> <code>'NUMBER'</code> - The range key is
     * number.</p> </li> </ul> <p>If you don't specify <code>rangeKeyField</code>, the
     * default value is <code>'STRING'</code>.</p>
     */
    inline const Aws::String& GetRangeKeyType() const { return m_rangeKeyType; }
    inline bool RangeKeyTypeHasBeenSet() const { return m_rangeKeyTypeHasBeenSet; }
    template<typename RangeKeyTypeT = Aws::String>
    void SetRangeKeyType(RangeKeyTypeT&& value) { m_rangeKeyTypeHasBeenSet = true; m_rangeKeyType = std::forward<RangeKeyTypeT>(value); }
    template<typename RangeKeyTypeT = Aws::String>
    DynamoDBAction& WithRangeKeyType(RangeKeyTypeT&& value) { SetRangeKeyType(std::forward<RangeKeyTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the range key (also called the sort key). The
     * <code>rangeKeyField</code> value must match the sort key of the target DynamoDB
     * table. </p>
     */
    inline const Aws::String& GetRangeKeyField() const { return m_rangeKeyField; }
    inline bool RangeKeyFieldHasBeenSet() const { return m_rangeKeyFieldHasBeenSet; }
    template<typename RangeKeyFieldT = Aws::String>
    void SetRangeKeyField(RangeKeyFieldT&& value) { m_rangeKeyFieldHasBeenSet = true; m_rangeKeyField = std::forward<RangeKeyFieldT>(value); }
    template<typename RangeKeyFieldT = Aws::String>
    DynamoDBAction& WithRangeKeyField(RangeKeyFieldT&& value) { SetRangeKeyField(std::forward<RangeKeyFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the range key (also called the sort key).</p>
     */
    inline const Aws::String& GetRangeKeyValue() const { return m_rangeKeyValue; }
    inline bool RangeKeyValueHasBeenSet() const { return m_rangeKeyValueHasBeenSet; }
    template<typename RangeKeyValueT = Aws::String>
    void SetRangeKeyValue(RangeKeyValueT&& value) { m_rangeKeyValueHasBeenSet = true; m_rangeKeyValue = std::forward<RangeKeyValueT>(value); }
    template<typename RangeKeyValueT = Aws::String>
    DynamoDBAction& WithRangeKeyValue(RangeKeyValueT&& value) { SetRangeKeyValue(std::forward<RangeKeyValueT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    DynamoDBAction& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DynamoDB column that receives the action payload.</p> <p>If
     * you don't specify this parameter, the name of the DynamoDB column is
     * <code>payload</code>.</p>
     */
    inline const Aws::String& GetPayloadField() const { return m_payloadField; }
    inline bool PayloadFieldHasBeenSet() const { return m_payloadFieldHasBeenSet; }
    template<typename PayloadFieldT = Aws::String>
    void SetPayloadField(PayloadFieldT&& value) { m_payloadFieldHasBeenSet = true; m_payloadField = std::forward<PayloadFieldT>(value); }
    template<typename PayloadFieldT = Aws::String>
    DynamoDBAction& WithPayloadField(PayloadFieldT&& value) { SetPayloadField(std::forward<PayloadFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DynamoDB table. The <code>tableName</code> value must match
     * the table name of the target DynamoDB table. </p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    DynamoDBAction& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Payload& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Payload>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Payload>
    DynamoDBAction& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}
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
