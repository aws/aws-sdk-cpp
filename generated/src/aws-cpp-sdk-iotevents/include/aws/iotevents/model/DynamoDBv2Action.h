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
   * default action payload contains all the information about the detector model
   * instance and the event that triggered the action. You can customize the <a
   * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Payload.html">payload</a>.
   * A separate column of the DynamoDB table receives one attribute-value pair in the
   * payload that you specify.</p> <p>You must use expressions for all parameters in
   * <code>DynamoDBv2Action</code>. The expressions accept literals, operators,
   * functions, references, and substitution templates.</p> <p class="title">
   * <b>Examples</b> </p> <ul> <li> <p>For literal values, the expressions must
   * contain single quotes. For example, the value for the <code>tableName</code>
   * parameter can be <code>'GreenhouseTemperatureTable'</code>.</p> </li> <li>
   * <p>For references, you must specify either variables or input values. For
   * example, the value for the <code>tableName</code> parameter can be
   * <code>$variable.ddbtableName</code>.</p> </li> <li> <p>For a substitution
   * template, you must use <code>${}</code>, and the template must be in single
   * quotes. A substitution template can also contain a combination of literals,
   * operators, functions, references, and substitution templates.</p> <p>In the
   * following example, the value for the <code>contentExpression</code> parameter in
   * <code>Payload</code> uses a substitution template. </p> <p>
   * <code>'{\"sensorID\": \"${$input.GreenhouseInput.sensor_id}\", \"temperature\":
   * \"${$input.GreenhouseInput.temperature * 9 / 5 + 32}\"}'</code> </p> </li> <li>
   * <p>For a string concatenation, you must use <code>+</code>. A string
   * concatenation can also contain a combination of literals, operators, functions,
   * references, and substitution templates.</p> <p>In the following example, the
   * value for the <code>tableName</code> parameter uses a string concatenation. </p>
   * <p> <code>'GreenhouseTemperatureTable ' + $input.GreenhouseInput.date</code>
   * </p> </li> </ul> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-expressions.html">Expressions</a>
   * in the <i>AWS IoT Events Developer Guide</i>.</p> <p>The value for the
   * <code>type</code> parameter in <code>Payload</code> must be
   * <code>JSON</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DynamoDBv2Action">AWS
   * API Reference</a></p>
   */
  class DynamoDBv2Action
  {
  public:
    AWS_IOTEVENTS_API DynamoDBv2Action() = default;
    AWS_IOTEVENTS_API DynamoDBv2Action(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API DynamoDBv2Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    DynamoDBv2Action& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Payload& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Payload>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Payload>
    DynamoDBv2Action& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Payload m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
