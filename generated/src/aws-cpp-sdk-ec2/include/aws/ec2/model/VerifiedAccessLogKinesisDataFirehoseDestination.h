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
    AWS_EC2_API VerifiedAccessLogKinesisDataFirehoseDestination() = default;
    AWS_EC2_API VerifiedAccessLogKinesisDataFirehoseDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessLogKinesisDataFirehoseDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether logging is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline VerifiedAccessLogKinesisDataFirehoseDestination& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delivery status.</p>
     */
    inline const VerifiedAccessLogDeliveryStatus& GetDeliveryStatus() const { return m_deliveryStatus; }
    inline bool DeliveryStatusHasBeenSet() const { return m_deliveryStatusHasBeenSet; }
    template<typename DeliveryStatusT = VerifiedAccessLogDeliveryStatus>
    void SetDeliveryStatus(DeliveryStatusT&& value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = std::forward<DeliveryStatusT>(value); }
    template<typename DeliveryStatusT = VerifiedAccessLogDeliveryStatus>
    VerifiedAccessLogKinesisDataFirehoseDestination& WithDeliveryStatus(DeliveryStatusT&& value) { SetDeliveryStatus(std::forward<DeliveryStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the delivery stream.</p>
     */
    inline const Aws::String& GetDeliveryStream() const { return m_deliveryStream; }
    inline bool DeliveryStreamHasBeenSet() const { return m_deliveryStreamHasBeenSet; }
    template<typename DeliveryStreamT = Aws::String>
    void SetDeliveryStream(DeliveryStreamT&& value) { m_deliveryStreamHasBeenSet = true; m_deliveryStream = std::forward<DeliveryStreamT>(value); }
    template<typename DeliveryStreamT = Aws::String>
    VerifiedAccessLogKinesisDataFirehoseDestination& WithDeliveryStream(DeliveryStreamT&& value) { SetDeliveryStream(std::forward<DeliveryStreamT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    VerifiedAccessLogDeliveryStatus m_deliveryStatus;
    bool m_deliveryStatusHasBeenSet = false;

    Aws::String m_deliveryStream;
    bool m_deliveryStreamHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
