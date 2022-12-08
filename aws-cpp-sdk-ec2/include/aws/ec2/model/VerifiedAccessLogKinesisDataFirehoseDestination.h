/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VerifiedAccessLogDeliveryStatus.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Options for Kinesis as a logging destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessLogKinesisDataFirehoseDestination">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessLogKinesisDataFirehoseDestination
  {
  public:
    AWS_EC2_API VerifiedAccessLogKinesisDataFirehoseDestination();
    AWS_EC2_API VerifiedAccessLogKinesisDataFirehoseDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessLogKinesisDataFirehoseDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether logging is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether logging is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether logging is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether logging is enabled.</p>
     */
    inline VerifiedAccessLogKinesisDataFirehoseDestination& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The delivery status.</p>
     */
    inline const VerifiedAccessLogDeliveryStatus& GetDeliveryStatus() const{ return m_deliveryStatus; }

    /**
     * <p>The delivery status.</p>
     */
    inline bool DeliveryStatusHasBeenSet() const { return m_deliveryStatusHasBeenSet; }

    /**
     * <p>The delivery status.</p>
     */
    inline void SetDeliveryStatus(const VerifiedAccessLogDeliveryStatus& value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = value; }

    /**
     * <p>The delivery status.</p>
     */
    inline void SetDeliveryStatus(VerifiedAccessLogDeliveryStatus&& value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = std::move(value); }

    /**
     * <p>The delivery status.</p>
     */
    inline VerifiedAccessLogKinesisDataFirehoseDestination& WithDeliveryStatus(const VerifiedAccessLogDeliveryStatus& value) { SetDeliveryStatus(value); return *this;}

    /**
     * <p>The delivery status.</p>
     */
    inline VerifiedAccessLogKinesisDataFirehoseDestination& WithDeliveryStatus(VerifiedAccessLogDeliveryStatus&& value) { SetDeliveryStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the delivery stream.</p>
     */
    inline const Aws::String& GetDeliveryStream() const{ return m_deliveryStream; }

    /**
     * <p>The ID of the delivery stream.</p>
     */
    inline bool DeliveryStreamHasBeenSet() const { return m_deliveryStreamHasBeenSet; }

    /**
     * <p>The ID of the delivery stream.</p>
     */
    inline void SetDeliveryStream(const Aws::String& value) { m_deliveryStreamHasBeenSet = true; m_deliveryStream = value; }

    /**
     * <p>The ID of the delivery stream.</p>
     */
    inline void SetDeliveryStream(Aws::String&& value) { m_deliveryStreamHasBeenSet = true; m_deliveryStream = std::move(value); }

    /**
     * <p>The ID of the delivery stream.</p>
     */
    inline void SetDeliveryStream(const char* value) { m_deliveryStreamHasBeenSet = true; m_deliveryStream.assign(value); }

    /**
     * <p>The ID of the delivery stream.</p>
     */
    inline VerifiedAccessLogKinesisDataFirehoseDestination& WithDeliveryStream(const Aws::String& value) { SetDeliveryStream(value); return *this;}

    /**
     * <p>The ID of the delivery stream.</p>
     */
    inline VerifiedAccessLogKinesisDataFirehoseDestination& WithDeliveryStream(Aws::String&& value) { SetDeliveryStream(std::move(value)); return *this;}

    /**
     * <p>The ID of the delivery stream.</p>
     */
    inline VerifiedAccessLogKinesisDataFirehoseDestination& WithDeliveryStream(const char* value) { SetDeliveryStream(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    VerifiedAccessLogDeliveryStatus m_deliveryStatus;
    bool m_deliveryStatusHasBeenSet = false;

    Aws::String m_deliveryStream;
    bool m_deliveryStreamHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
