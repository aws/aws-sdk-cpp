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
   * <p>Indicates that the provided Amazon S3 bucket or AWS KMS encryption key is
   * invalid, or that Amazon SES could not publish to the bucket, possibly due to
   * permissions issues. For information about giving permissions, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-permissions.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/InvalidS3ConfigurationException">AWS
   * API Reference</a></p>
   */
  class InvalidS3ConfigurationException
  {
  public:
    AWS_SES_API InvalidS3ConfigurationException();
    AWS_SES_API InvalidS3ConfigurationException(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API InvalidS3ConfigurationException& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicated that the S3 Bucket was not found.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>Indicated that the S3 Bucket was not found.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>Indicated that the S3 Bucket was not found.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Indicated that the S3 Bucket was not found.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>Indicated that the S3 Bucket was not found.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>Indicated that the S3 Bucket was not found.</p>
     */
    inline InvalidS3ConfigurationException& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>Indicated that the S3 Bucket was not found.</p>
     */
    inline InvalidS3ConfigurationException& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>Indicated that the S3 Bucket was not found.</p>
     */
    inline InvalidS3ConfigurationException& WithBucket(const char* value) { SetBucket(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
