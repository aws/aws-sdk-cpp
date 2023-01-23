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
   * <p>Information required to publish the Amazon SNS message.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/SNSTopicPublishAction">AWS
   * API Reference</a></p>
   */
  class SNSTopicPublishAction
  {
  public:
    AWS_IOTEVENTS_API SNSTopicPublishAction();
    AWS_IOTEVENTS_API SNSTopicPublishAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API SNSTopicPublishAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Amazon SNS target where the message is sent.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The ARN of the Amazon SNS target where the message is sent.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon SNS target where the message is sent.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The ARN of the Amazon SNS target where the message is sent.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon SNS target where the message is sent.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The ARN of the Amazon SNS target where the message is sent.</p>
     */
    inline SNSTopicPublishAction& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon SNS target where the message is sent.</p>
     */
    inline SNSTopicPublishAction& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon SNS target where the message is sent.</p>
     */
    inline SNSTopicPublishAction& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>You can configure the action payload when you send a message as an Amazon SNS
     * push notification.</p>
     */
    inline const Payload& GetPayload() const{ return m_payload; }

    /**
     * <p>You can configure the action payload when you send a message as an Amazon SNS
     * push notification.</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>You can configure the action payload when you send a message as an Amazon SNS
     * push notification.</p>
     */
    inline void SetPayload(const Payload& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>You can configure the action payload when you send a message as an Amazon SNS
     * push notification.</p>
     */
    inline void SetPayload(Payload&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>You can configure the action payload when you send a message as an Amazon SNS
     * push notification.</p>
     */
    inline SNSTopicPublishAction& WithPayload(const Payload& value) { SetPayload(value); return *this;}

    /**
     * <p>You can configure the action payload when you send a message as an Amazon SNS
     * push notification.</p>
     */
    inline SNSTopicPublishAction& WithPayload(Payload&& value) { SetPayload(std::move(value)); return *this;}

  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Payload m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
