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
   * <p>Calls a Lambda function, passing in information about the detector model
   * instance and the event that triggered the action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/LambdaAction">AWS
   * API Reference</a></p>
   */
  class LambdaAction
  {
  public:
    AWS_IOTEVENTS_API LambdaAction();
    AWS_IOTEVENTS_API LambdaAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API LambdaAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Lambda function that is executed.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The ARN of the Lambda function that is executed.</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>The ARN of the Lambda function that is executed.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>The ARN of the Lambda function that is executed.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>The ARN of the Lambda function that is executed.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>The ARN of the Lambda function that is executed.</p>
     */
    inline LambdaAction& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The ARN of the Lambda function that is executed.</p>
     */
    inline LambdaAction& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function that is executed.</p>
     */
    inline LambdaAction& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>You can configure the action payload when you send a message to a Lambda
     * function.</p>
     */
    inline const Payload& GetPayload() const{ return m_payload; }

    /**
     * <p>You can configure the action payload when you send a message to a Lambda
     * function.</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>You can configure the action payload when you send a message to a Lambda
     * function.</p>
     */
    inline void SetPayload(const Payload& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>You can configure the action payload when you send a message to a Lambda
     * function.</p>
     */
    inline void SetPayload(Payload&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>You can configure the action payload when you send a message to a Lambda
     * function.</p>
     */
    inline LambdaAction& WithPayload(const Payload& value) { SetPayload(value); return *this;}

    /**
     * <p>You can configure the action payload when you send a message to a Lambda
     * function.</p>
     */
    inline LambdaAction& WithPayload(Payload&& value) { SetPayload(std::move(value)); return *this;}

  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    Payload m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
