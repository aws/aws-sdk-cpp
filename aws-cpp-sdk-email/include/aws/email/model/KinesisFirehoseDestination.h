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
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Contains the delivery stream ARN and the IAM role ARN associated with an
   * Amazon Kinesis Firehose event destination.</p> <p>Event destinations, such as
   * Amazon Kinesis Firehose, are associated with configuration sets, which enable
   * you to publish email sending events. For information about using configuration
   * sets, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/KinesisFirehoseDestination">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API KinesisFirehoseDestination
  {
  public:
    KinesisFirehoseDestination();
    KinesisFirehoseDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    KinesisFirehoseDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ARN of the IAM role under which Amazon SES publishes email sending events
     * to the Amazon Kinesis Firehose stream.</p>
     */
    inline const Aws::String& GetIAMRoleARN() const{ return m_iAMRoleARN; }

    /**
     * <p>The ARN of the IAM role under which Amazon SES publishes email sending events
     * to the Amazon Kinesis Firehose stream.</p>
     */
    inline bool IAMRoleARNHasBeenSet() const { return m_iAMRoleARNHasBeenSet; }

    /**
     * <p>The ARN of the IAM role under which Amazon SES publishes email sending events
     * to the Amazon Kinesis Firehose stream.</p>
     */
    inline void SetIAMRoleARN(const Aws::String& value) { m_iAMRoleARNHasBeenSet = true; m_iAMRoleARN = value; }

    /**
     * <p>The ARN of the IAM role under which Amazon SES publishes email sending events
     * to the Amazon Kinesis Firehose stream.</p>
     */
    inline void SetIAMRoleARN(Aws::String&& value) { m_iAMRoleARNHasBeenSet = true; m_iAMRoleARN = std::move(value); }

    /**
     * <p>The ARN of the IAM role under which Amazon SES publishes email sending events
     * to the Amazon Kinesis Firehose stream.</p>
     */
    inline void SetIAMRoleARN(const char* value) { m_iAMRoleARNHasBeenSet = true; m_iAMRoleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role under which Amazon SES publishes email sending events
     * to the Amazon Kinesis Firehose stream.</p>
     */
    inline KinesisFirehoseDestination& WithIAMRoleARN(const Aws::String& value) { SetIAMRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role under which Amazon SES publishes email sending events
     * to the Amazon Kinesis Firehose stream.</p>
     */
    inline KinesisFirehoseDestination& WithIAMRoleARN(Aws::String&& value) { SetIAMRoleARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role under which Amazon SES publishes email sending events
     * to the Amazon Kinesis Firehose stream.</p>
     */
    inline KinesisFirehoseDestination& WithIAMRoleARN(const char* value) { SetIAMRoleARN(value); return *this;}


    /**
     * <p>The ARN of the Amazon Kinesis Firehose stream that email sending events
     * should be published to.</p>
     */
    inline const Aws::String& GetDeliveryStreamARN() const{ return m_deliveryStreamARN; }

    /**
     * <p>The ARN of the Amazon Kinesis Firehose stream that email sending events
     * should be published to.</p>
     */
    inline bool DeliveryStreamARNHasBeenSet() const { return m_deliveryStreamARNHasBeenSet; }

    /**
     * <p>The ARN of the Amazon Kinesis Firehose stream that email sending events
     * should be published to.</p>
     */
    inline void SetDeliveryStreamARN(const Aws::String& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = value; }

    /**
     * <p>The ARN of the Amazon Kinesis Firehose stream that email sending events
     * should be published to.</p>
     */
    inline void SetDeliveryStreamARN(Aws::String&& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = std::move(value); }

    /**
     * <p>The ARN of the Amazon Kinesis Firehose stream that email sending events
     * should be published to.</p>
     */
    inline void SetDeliveryStreamARN(const char* value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN.assign(value); }

    /**
     * <p>The ARN of the Amazon Kinesis Firehose stream that email sending events
     * should be published to.</p>
     */
    inline KinesisFirehoseDestination& WithDeliveryStreamARN(const Aws::String& value) { SetDeliveryStreamARN(value); return *this;}

    /**
     * <p>The ARN of the Amazon Kinesis Firehose stream that email sending events
     * should be published to.</p>
     */
    inline KinesisFirehoseDestination& WithDeliveryStreamARN(Aws::String&& value) { SetDeliveryStreamARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon Kinesis Firehose stream that email sending events
     * should be published to.</p>
     */
    inline KinesisFirehoseDestination& WithDeliveryStreamARN(const char* value) { SetDeliveryStreamARN(value); return *this;}

  private:

    Aws::String m_iAMRoleARN;
    bool m_iAMRoleARNHasBeenSet;

    Aws::String m_deliveryStreamARN;
    bool m_deliveryStreamARNHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
