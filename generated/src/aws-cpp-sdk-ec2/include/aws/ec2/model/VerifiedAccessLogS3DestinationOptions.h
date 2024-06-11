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
   * <p>Options for Amazon S3 as a logging destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessLogS3DestinationOptions">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessLogS3DestinationOptions
  {
  public:
    AWS_EC2_API VerifiedAccessLogS3DestinationOptions();
    AWS_EC2_API VerifiedAccessLogS3DestinationOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessLogS3DestinationOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether logging is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline VerifiedAccessLogS3DestinationOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bucket name.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }
    inline VerifiedAccessLogS3DestinationOptions& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline VerifiedAccessLogS3DestinationOptions& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline VerifiedAccessLogS3DestinationOptions& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bucket prefix.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline VerifiedAccessLogS3DestinationOptions& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline VerifiedAccessLogS3DestinationOptions& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline VerifiedAccessLogS3DestinationOptions& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketOwner() const{ return m_bucketOwner; }
    inline bool BucketOwnerHasBeenSet() const { return m_bucketOwnerHasBeenSet; }
    inline void SetBucketOwner(const Aws::String& value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner = value; }
    inline void SetBucketOwner(Aws::String&& value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner = std::move(value); }
    inline void SetBucketOwner(const char* value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner.assign(value); }
    inline VerifiedAccessLogS3DestinationOptions& WithBucketOwner(const Aws::String& value) { SetBucketOwner(value); return *this;}
    inline VerifiedAccessLogS3DestinationOptions& WithBucketOwner(Aws::String&& value) { SetBucketOwner(std::move(value)); return *this;}
    inline VerifiedAccessLogS3DestinationOptions& WithBucketOwner(const char* value) { SetBucketOwner(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

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
