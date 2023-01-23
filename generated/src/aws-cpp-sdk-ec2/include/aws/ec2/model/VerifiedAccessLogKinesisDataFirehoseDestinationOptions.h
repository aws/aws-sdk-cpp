/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes Amazon Kinesis Data Firehose logging options.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessLogKinesisDataFirehoseDestinationOptions">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessLogKinesisDataFirehoseDestinationOptions
  {
  public:
    AWS_EC2_API VerifiedAccessLogKinesisDataFirehoseDestinationOptions();
    AWS_EC2_API VerifiedAccessLogKinesisDataFirehoseDestinationOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessLogKinesisDataFirehoseDestinationOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline VerifiedAccessLogKinesisDataFirehoseDestinationOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}


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
    inline VerifiedAccessLogKinesisDataFirehoseDestinationOptions& WithDeliveryStream(const Aws::String& value) { SetDeliveryStream(value); return *this;}

    /**
     * <p>The ID of the delivery stream.</p>
     */
    inline VerifiedAccessLogKinesisDataFirehoseDestinationOptions& WithDeliveryStream(Aws::String&& value) { SetDeliveryStream(std::move(value)); return *this;}

    /**
     * <p>The ID of the delivery stream.</p>
     */
    inline VerifiedAccessLogKinesisDataFirehoseDestinationOptions& WithDeliveryStream(const char* value) { SetDeliveryStream(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_deliveryStream;
    bool m_deliveryStreamHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
