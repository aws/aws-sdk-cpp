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
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * An object that contains information about an event destination that sends data
   * to Amazon Kinesis Data Firehose.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/KinesisFirehoseDestination">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTSMSVOICE_API KinesisFirehoseDestination
  {
  public:
    KinesisFirehoseDestination();
    KinesisFirehoseDestination(Aws::Utils::Json::JsonView jsonValue);
    KinesisFirehoseDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Amazon Resource Name (ARN) of an IAM role that can write data to an Amazon
     * Kinesis Data Firehose stream.
     */
    inline const Aws::String& GetDeliveryStreamArn() const{ return m_deliveryStreamArn; }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that can write data to an Amazon
     * Kinesis Data Firehose stream.
     */
    inline bool DeliveryStreamArnHasBeenSet() const { return m_deliveryStreamArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that can write data to an Amazon
     * Kinesis Data Firehose stream.
     */
    inline void SetDeliveryStreamArn(const Aws::String& value) { m_deliveryStreamArnHasBeenSet = true; m_deliveryStreamArn = value; }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that can write data to an Amazon
     * Kinesis Data Firehose stream.
     */
    inline void SetDeliveryStreamArn(Aws::String&& value) { m_deliveryStreamArnHasBeenSet = true; m_deliveryStreamArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that can write data to an Amazon
     * Kinesis Data Firehose stream.
     */
    inline void SetDeliveryStreamArn(const char* value) { m_deliveryStreamArnHasBeenSet = true; m_deliveryStreamArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of an IAM role that can write data to an Amazon
     * Kinesis Data Firehose stream.
     */
    inline KinesisFirehoseDestination& WithDeliveryStreamArn(const Aws::String& value) { SetDeliveryStreamArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of an IAM role that can write data to an Amazon
     * Kinesis Data Firehose stream.
     */
    inline KinesisFirehoseDestination& WithDeliveryStreamArn(Aws::String&& value) { SetDeliveryStreamArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of an IAM role that can write data to an Amazon
     * Kinesis Data Firehose stream.
     */
    inline KinesisFirehoseDestination& WithDeliveryStreamArn(const char* value) { SetDeliveryStreamArn(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose destination
     * that you want to use in the event destination.
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose destination
     * that you want to use in the event destination.
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose destination
     * that you want to use in the event destination.
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose destination
     * that you want to use in the event destination.
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose destination
     * that you want to use in the event destination.
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose destination
     * that you want to use in the event destination.
     */
    inline KinesisFirehoseDestination& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose destination
     * that you want to use in the event destination.
     */
    inline KinesisFirehoseDestination& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose destination
     * that you want to use in the event destination.
     */
    inline KinesisFirehoseDestination& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}

  private:

    Aws::String m_deliveryStreamArn;
    bool m_deliveryStreamArnHasBeenSet;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
