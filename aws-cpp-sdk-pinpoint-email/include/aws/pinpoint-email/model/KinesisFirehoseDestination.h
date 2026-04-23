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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
   * events. You can use Amazon Kinesis Data Firehose to stream data to other
   * services, such as Amazon S3 and Amazon Redshift.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/KinesisFirehoseDestination">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API KinesisFirehoseDestination
  {
  public:
    KinesisFirehoseDestination();
    KinesisFirehoseDestination(Aws::Utils::Json::JsonView jsonValue);
    KinesisFirehoseDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon Pinpoint uses when
     * sending email events to the Amazon Kinesis Data Firehose stream.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon Pinpoint uses when
     * sending email events to the Amazon Kinesis Data Firehose stream.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon Pinpoint uses when
     * sending email events to the Amazon Kinesis Data Firehose stream.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon Pinpoint uses when
     * sending email events to the Amazon Kinesis Data Firehose stream.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon Pinpoint uses when
     * sending email events to the Amazon Kinesis Data Firehose stream.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon Pinpoint uses when
     * sending email events to the Amazon Kinesis Data Firehose stream.</p>
     */
    inline KinesisFirehoseDestination& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon Pinpoint uses when
     * sending email events to the Amazon Kinesis Data Firehose stream.</p>
     */
    inline KinesisFirehoseDestination& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon Pinpoint uses when
     * sending email events to the Amazon Kinesis Data Firehose stream.</p>
     */
    inline KinesisFirehoseDestination& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose stream
     * that Amazon Pinpoint sends email events to.</p>
     */
    inline const Aws::String& GetDeliveryStreamArn() const{ return m_deliveryStreamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose stream
     * that Amazon Pinpoint sends email events to.</p>
     */
    inline bool DeliveryStreamArnHasBeenSet() const { return m_deliveryStreamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose stream
     * that Amazon Pinpoint sends email events to.</p>
     */
    inline void SetDeliveryStreamArn(const Aws::String& value) { m_deliveryStreamArnHasBeenSet = true; m_deliveryStreamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose stream
     * that Amazon Pinpoint sends email events to.</p>
     */
    inline void SetDeliveryStreamArn(Aws::String&& value) { m_deliveryStreamArnHasBeenSet = true; m_deliveryStreamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose stream
     * that Amazon Pinpoint sends email events to.</p>
     */
    inline void SetDeliveryStreamArn(const char* value) { m_deliveryStreamArnHasBeenSet = true; m_deliveryStreamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose stream
     * that Amazon Pinpoint sends email events to.</p>
     */
    inline KinesisFirehoseDestination& WithDeliveryStreamArn(const Aws::String& value) { SetDeliveryStreamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose stream
     * that Amazon Pinpoint sends email events to.</p>
     */
    inline KinesisFirehoseDestination& WithDeliveryStreamArn(Aws::String&& value) { SetDeliveryStreamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Kinesis Data Firehose stream
     * that Amazon Pinpoint sends email events to.</p>
     */
    inline KinesisFirehoseDestination& WithDeliveryStreamArn(const char* value) { SetDeliveryStreamArn(value); return *this;}

  private:

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;

    Aws::String m_deliveryStreamArn;
    bool m_deliveryStreamArnHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
