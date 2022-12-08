/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/model/LambdaAction.h>
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
   * <p>Specifies an AWS Lambda function to manage alarm notifications. You can
   * create one or use the <a
   * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/lambda-support.html">AWS
   * Lambda function provided by AWS IoT Events</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/NotificationTargetActions">AWS
   * API Reference</a></p>
   */
  class NotificationTargetActions
  {
  public:
    AWS_IOTEVENTS_API NotificationTargetActions();
    AWS_IOTEVENTS_API NotificationTargetActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API NotificationTargetActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const LambdaAction& GetLambdaAction() const{ return m_lambdaAction; }

    
    inline bool LambdaActionHasBeenSet() const { return m_lambdaActionHasBeenSet; }

    
    inline void SetLambdaAction(const LambdaAction& value) { m_lambdaActionHasBeenSet = true; m_lambdaAction = value; }

    
    inline void SetLambdaAction(LambdaAction&& value) { m_lambdaActionHasBeenSet = true; m_lambdaAction = std::move(value); }

    
    inline NotificationTargetActions& WithLambdaAction(const LambdaAction& value) { SetLambdaAction(value); return *this;}

    
    inline NotificationTargetActions& WithLambdaAction(LambdaAction&& value) { SetLambdaAction(std::move(value)); return *this;}

  private:

    LambdaAction m_lambdaAction;
    bool m_lambdaActionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
