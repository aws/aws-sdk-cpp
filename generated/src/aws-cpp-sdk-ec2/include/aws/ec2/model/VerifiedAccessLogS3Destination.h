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
   * <p>Options for Amazon S3 as a logging destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessLogS3Destination">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessLogS3Destination
  {
  public:
    AWS_EC2_API VerifiedAccessLogS3Destination();
    AWS_EC2_API VerifiedAccessLogS3Destination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessLogS3Destination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline VerifiedAccessLogS3Destination& WithEnabled(bool value) { SetEnabled(value); return *this;}


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
    inline VerifiedAccessLogS3Destination& WithDeliveryStatus(const VerifiedAccessLogDeliveryStatus& value) { SetDeliveryStatus(value); return *this;}

    /**
     * <p>The delivery status.</p>
     */
    inline VerifiedAccessLogS3Destination& WithDeliveryStatus(VerifiedAccessLogDeliveryStatus&& value) { SetDeliveryStatus(std::move(value)); return *this;}


    /**
     * <p>The bucket name.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The bucket name.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The bucket name.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The bucket name.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The bucket name.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The bucket name.</p>
     */
    inline VerifiedAccessLogS3Destination& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The bucket name.</p>
     */
    inline VerifiedAccessLogS3Destination& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The bucket name.</p>
     */
    inline VerifiedAccessLogS3Destination& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The bucket prefix.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The bucket prefix.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The bucket prefix.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The bucket prefix.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The bucket prefix.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The bucket prefix.</p>
     */
    inline VerifiedAccessLogS3Destination& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The bucket prefix.</p>
     */
    inline VerifiedAccessLogS3Destination& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The bucket prefix.</p>
     */
    inline VerifiedAccessLogS3Destination& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>The Amazon Web Services account number that owns the bucket.</p>
     */
    inline const Aws::String& GetBucketOwner() const{ return m_bucketOwner; }

    /**
     * <p>The Amazon Web Services account number that owns the bucket.</p>
     */
    inline bool BucketOwnerHasBeenSet() const { return m_bucketOwnerHasBeenSet; }

    /**
     * <p>The Amazon Web Services account number that owns the bucket.</p>
     */
    inline void SetBucketOwner(const Aws::String& value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner = value; }

    /**
     * <p>The Amazon Web Services account number that owns the bucket.</p>
     */
    inline void SetBucketOwner(Aws::String&& value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner = std::move(value); }

    /**
     * <p>The Amazon Web Services account number that owns the bucket.</p>
     */
    inline void SetBucketOwner(const char* value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner.assign(value); }

    /**
     * <p>The Amazon Web Services account number that owns the bucket.</p>
     */
    inline VerifiedAccessLogS3Destination& WithBucketOwner(const Aws::String& value) { SetBucketOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account number that owns the bucket.</p>
     */
    inline VerifiedAccessLogS3Destination& WithBucketOwner(Aws::String&& value) { SetBucketOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account number that owns the bucket.</p>
     */
    inline VerifiedAccessLogS3Destination& WithBucketOwner(const char* value) { SetBucketOwner(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    VerifiedAccessLogDeliveryStatus m_deliveryStatus;
    bool m_deliveryStatusHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_bucketOwner;
    bool m_bucketOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
