/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * A complex type that controls whether access logs are written for this streaming
   * distribution.
   */
  class AWS_CLOUDFRONT_API StreamingLoggingConfig
  {
  public:
    StreamingLoggingConfig();
    StreamingLoggingConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    StreamingLoggingConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you do not want to enable logging when you create a streaming
     * distribution or if you want to disable logging for an existing streaming
     * distribution, specify false for Enabled, and specify empty Bucket and Prefix
     * elements. If you specify false for Enabled but you specify values for Bucket and
     * Prefix, the values are automatically deleted.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you do not want to enable logging when you create a streaming
     * distribution or if you want to disable logging for an existing streaming
     * distribution, specify false for Enabled, and specify empty Bucket and Prefix
     * elements. If you specify false for Enabled but you specify values for Bucket and
     * Prefix, the values are automatically deleted.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you do not want to enable logging when you create a streaming
     * distribution or if you want to disable logging for an existing streaming
     * distribution, specify false for Enabled, and specify empty Bucket and Prefix
     * elements. If you specify false for Enabled but you specify values for Bucket and
     * Prefix, the values are automatically deleted.
     */
    inline StreamingLoggingConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}

    /**
     * The Amazon S3 bucket to store the access logs in, for example,
     * myawslogbucket.s3.amazonaws.com.
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * The Amazon S3 bucket to store the access logs in, for example,
     * myawslogbucket.s3.amazonaws.com.
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * The Amazon S3 bucket to store the access logs in, for example,
     * myawslogbucket.s3.amazonaws.com.
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * The Amazon S3 bucket to store the access logs in, for example,
     * myawslogbucket.s3.amazonaws.com.
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * The Amazon S3 bucket to store the access logs in, for example,
     * myawslogbucket.s3.amazonaws.com.
     */
    inline StreamingLoggingConfig& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * The Amazon S3 bucket to store the access logs in, for example,
     * myawslogbucket.s3.amazonaws.com.
     */
    inline StreamingLoggingConfig& WithBucket(Aws::String&& value) { SetBucket(value); return *this;}

    /**
     * The Amazon S3 bucket to store the access logs in, for example,
     * myawslogbucket.s3.amazonaws.com.
     */
    inline StreamingLoggingConfig& WithBucket(const char* value) { SetBucket(value); return *this;}

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, myprefix/. If you want
     * to enable logging, but you do not want to specify a prefix, you still must
     * include an empty Prefix element in the Logging element.
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, myprefix/. If you want
     * to enable logging, but you do not want to specify a prefix, you still must
     * include an empty Prefix element in the Logging element.
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, myprefix/. If you want
     * to enable logging, but you do not want to specify a prefix, you still must
     * include an empty Prefix element in the Logging element.
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, myprefix/. If you want
     * to enable logging, but you do not want to specify a prefix, you still must
     * include an empty Prefix element in the Logging element.
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, myprefix/. If you want
     * to enable logging, but you do not want to specify a prefix, you still must
     * include an empty Prefix element in the Logging element.
     */
    inline StreamingLoggingConfig& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, myprefix/. If you want
     * to enable logging, but you do not want to specify a prefix, you still must
     * include an empty Prefix element in the Logging element.
     */
    inline StreamingLoggingConfig& WithPrefix(Aws::String&& value) { SetPrefix(value); return *this;}

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, myprefix/. If you want
     * to enable logging, but you do not want to specify a prefix, you still must
     * include an empty Prefix element in the Logging element.
     */
    inline StreamingLoggingConfig& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:
    bool m_enabled;
    bool m_enabledHasBeenSet;
    Aws::String m_bucket;
    bool m_bucketHasBeenSet;
    Aws::String m_prefix;
    bool m_prefixHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
