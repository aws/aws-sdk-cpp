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
   * A complex type that controls whether access logs are written for the
   * distribution.
   */
  class AWS_CLOUDFRONT_API LoggingConfig
  {
  public:
    LoggingConfig();
    LoggingConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    LoggingConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you do not want to enable logging when you create a distribution or
     * if you want to disable logging for an existing distribution, specify false for
     * Enabled, and specify empty Bucket and Prefix elements. If you specify false for
     * Enabled but you specify values for Bucket, prefix and IncludeCookies, the values
     * are automatically deleted.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you do not want to enable logging when you create a distribution or
     * if you want to disable logging for an existing distribution, specify false for
     * Enabled, and specify empty Bucket and Prefix elements. If you specify false for
     * Enabled but you specify values for Bucket, prefix and IncludeCookies, the values
     * are automatically deleted.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you do not want to enable logging when you create a distribution or
     * if you want to disable logging for an existing distribution, specify false for
     * Enabled, and specify empty Bucket and Prefix elements. If you specify false for
     * Enabled but you specify values for Bucket, prefix and IncludeCookies, the values
     * are automatically deleted.
     */
    inline LoggingConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}

    /**
     * Specifies whether you want CloudFront to include cookies in access logs, specify
     * true for IncludeCookies. If you choose to include cookies in logs, CloudFront
     * logs all cookies regardless of how you configure the cache behaviors for this
     * distribution. If you do not want to include cookies when you create a
     * distribution or if you want to disable include cookies for an existing
     * distribution, specify false for IncludeCookies.
     */
    inline bool GetIncludeCookies() const{ return m_includeCookies; }

    /**
     * Specifies whether you want CloudFront to include cookies in access logs, specify
     * true for IncludeCookies. If you choose to include cookies in logs, CloudFront
     * logs all cookies regardless of how you configure the cache behaviors for this
     * distribution. If you do not want to include cookies when you create a
     * distribution or if you want to disable include cookies for an existing
     * distribution, specify false for IncludeCookies.
     */
    inline void SetIncludeCookies(bool value) { m_includeCookiesHasBeenSet = true; m_includeCookies = value; }

    /**
     * Specifies whether you want CloudFront to include cookies in access logs, specify
     * true for IncludeCookies. If you choose to include cookies in logs, CloudFront
     * logs all cookies regardless of how you configure the cache behaviors for this
     * distribution. If you do not want to include cookies when you create a
     * distribution or if you want to disable include cookies for an existing
     * distribution, specify false for IncludeCookies.
     */
    inline LoggingConfig& WithIncludeCookies(bool value) { SetIncludeCookies(value); return *this;}

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
    inline LoggingConfig& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * The Amazon S3 bucket to store the access logs in, for example,
     * myawslogbucket.s3.amazonaws.com.
     */
    inline LoggingConfig& WithBucket(Aws::String&& value) { SetBucket(value); return *this;}

    /**
     * The Amazon S3 bucket to store the access logs in, for example,
     * myawslogbucket.s3.amazonaws.com.
     */
    inline LoggingConfig& WithBucket(const char* value) { SetBucket(value); return *this;}

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this distribution, for example, myprefix/. If you want to enable
     * logging, but you do not want to specify a prefix, you still must include an
     * empty Prefix element in the Logging element.
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this distribution, for example, myprefix/. If you want to enable
     * logging, but you do not want to specify a prefix, you still must include an
     * empty Prefix element in the Logging element.
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this distribution, for example, myprefix/. If you want to enable
     * logging, but you do not want to specify a prefix, you still must include an
     * empty Prefix element in the Logging element.
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this distribution, for example, myprefix/. If you want to enable
     * logging, but you do not want to specify a prefix, you still must include an
     * empty Prefix element in the Logging element.
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this distribution, for example, myprefix/. If you want to enable
     * logging, but you do not want to specify a prefix, you still must include an
     * empty Prefix element in the Logging element.
     */
    inline LoggingConfig& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this distribution, for example, myprefix/. If you want to enable
     * logging, but you do not want to specify a prefix, you still must include an
     * empty Prefix element in the Logging element.
     */
    inline LoggingConfig& WithPrefix(Aws::String&& value) { SetPrefix(value); return *this;}

    /**
     * An optional string that you want CloudFront to prefix to the access log
     * filenames for this distribution, for example, myprefix/. If you want to enable
     * logging, but you do not want to specify a prefix, you still must include an
     * empty Prefix element in the Logging element.
     */
    inline LoggingConfig& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:
    bool m_enabled;
    bool m_enabledHasBeenSet;
    bool m_includeCookies;
    bool m_includeCookiesHasBeenSet;
    Aws::String m_bucket;
    bool m_bucketHasBeenSet;
    Aws::String m_prefix;
    bool m_prefixHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
