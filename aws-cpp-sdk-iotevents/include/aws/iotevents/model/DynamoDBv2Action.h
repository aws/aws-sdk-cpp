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
   * default action payload contains all attribute-value pairs that have the
   * information about the detector model instance and the event that triggered the
   * action. You can also customize the <a
   * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_Payload.html">payload</a>.
   * A separate column of the DynamoDB table receives one attribute-value pair in the
   * payload that you specify.</p>  <p>The <code>type</code> value for
   * <code>Payload</code> must be <code>JSON</code>.</p>  <p>You can use
   * expressions for parameters that are strings. For more information, see <a
   * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-expressions.html">Expressions</a>
   * in the <i>AWS IoT Events Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/DynamoDBv2Action">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API DynamoDBv2Action
  {
  public:
    DynamoDBv2Action();
    DynamoDBv2Action(Aws::Utils::Json::JsonView jsonValue);
    DynamoDBv2Action& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline DynamoDBv2Action& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline DynamoDBv2Action& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the DynamoDB table.</p>
     */
    inline DynamoDBv2Action& WithTableName(const char* value) { SetTableName(value); return *this;}


    
    inline const Payload& GetPayload() const{ return m_payload; }

    
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    
    inline void SetPayload(const Payload& value) { m_payloadHasBeenSet = true; m_payload = value; }

    
    inline void SetPayload(Payload&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    
    inline DynamoDBv2Action& WithPayload(const Payload& value) { SetPayload(value); return *this;}

    
    inline DynamoDBv2Action& WithPayload(Payload&& value) { SetPayload(std::move(value)); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Payload m_payload;
    bool m_payloadHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
