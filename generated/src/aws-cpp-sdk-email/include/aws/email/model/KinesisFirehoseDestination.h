/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/KinesisFirehoseDestination">AWS
   * API Reference</a></p>
   */
  class KinesisFirehoseDestination
  {
  public:
    AWS_SES_API KinesisFirehoseDestination();
    AWS_SES_API KinesisFirehoseDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API KinesisFirehoseDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the IAM role under which Amazon SES publishes email sending events
     * to the Amazon Kinesis Firehose stream.</p>
     */
    inline const Aws::String& GetIAMRoleARN() const{ return m_iAMRoleARN; }
    inline bool IAMRoleARNHasBeenSet() const { return m_iAMRoleARNHasBeenSet; }
    inline void SetIAMRoleARN(const Aws::String& value) { m_iAMRoleARNHasBeenSet = true; m_iAMRoleARN = value; }
    inline void SetIAMRoleARN(Aws::String&& value) { m_iAMRoleARNHasBeenSet = true; m_iAMRoleARN = std::move(value); }
    inline void SetIAMRoleARN(const char* value) { m_iAMRoleARNHasBeenSet = true; m_iAMRoleARN.assign(value); }
    inline KinesisFirehoseDestination& WithIAMRoleARN(const Aws::String& value) { SetIAMRoleARN(value); return *this;}
    inline KinesisFirehoseDestination& WithIAMRoleARN(Aws::String&& value) { SetIAMRoleARN(std::move(value)); return *this;}
    inline KinesisFirehoseDestination& WithIAMRoleARN(const char* value) { SetIAMRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Kinesis Firehose stream that email sending events
     * should be published to.</p>
     */
    inline const Aws::String& GetDeliveryStreamARN() const{ return m_deliveryStreamARN; }
    inline bool DeliveryStreamARNHasBeenSet() const { return m_deliveryStreamARNHasBeenSet; }
    inline void SetDeliveryStreamARN(const Aws::String& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = value; }
    inline void SetDeliveryStreamARN(Aws::String&& value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN = std::move(value); }
    inline void SetDeliveryStreamARN(const char* value) { m_deliveryStreamARNHasBeenSet = true; m_deliveryStreamARN.assign(value); }
    inline KinesisFirehoseDestination& WithDeliveryStreamARN(const Aws::String& value) { SetDeliveryStreamARN(value); return *this;}
    inline KinesisFirehoseDestination& WithDeliveryStreamARN(Aws::String&& value) { SetDeliveryStreamARN(std::move(value)); return *this;}
    inline KinesisFirehoseDestination& WithDeliveryStreamARN(const char* value) { SetDeliveryStreamARN(value); return *this;}
    ///@}
  private:

    Aws::String m_iAMRoleARN;
    bool m_iAMRoleARNHasBeenSet = false;

    Aws::String m_deliveryStreamARN;
    bool m_deliveryStreamARNHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
