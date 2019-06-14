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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A complex type that controls whether access logs are written for the
   * distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/LoggingConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API LoggingConfig
  {
  public:
    LoggingConfig();
    LoggingConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    LoggingConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you don't want to enable logging when you create a distribution or if
     * you want to disable logging for an existing distribution, specify
     * <code>false</code> for <code>Enabled</code>, and specify empty
     * <code>Bucket</code> and <code>Prefix</code> elements. If you specify
     * <code>false</code> for <code>Enabled</code> but you specify values for
     * <code>Bucket</code>, <code>prefix</code>, and <code>IncludeCookies</code>, the
     * values are automatically deleted.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you don't want to enable logging when you create a distribution or if
     * you want to disable logging for an existing distribution, specify
     * <code>false</code> for <code>Enabled</code>, and specify empty
     * <code>Bucket</code> and <code>Prefix</code> elements. If you specify
     * <code>false</code> for <code>Enabled</code> but you specify values for
     * <code>Bucket</code>, <code>prefix</code>, and <code>IncludeCookies</code>, the
     * values are automatically deleted.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you don't want to enable logging when you create a distribution or if
     * you want to disable logging for an existing distribution, specify
     * <code>false</code> for <code>Enabled</code>, and specify empty
     * <code>Bucket</code> and <code>Prefix</code> elements. If you specify
     * <code>false</code> for <code>Enabled</code> but you specify values for
     * <code>Bucket</code>, <code>prefix</code>, and <code>IncludeCookies</code>, the
     * values are automatically deleted.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you don't want to enable logging when you create a distribution or if
     * you want to disable logging for an existing distribution, specify
     * <code>false</code> for <code>Enabled</code>, and specify empty
     * <code>Bucket</code> and <code>Prefix</code> elements. If you specify
     * <code>false</code> for <code>Enabled</code> but you specify values for
     * <code>Bucket</code>, <code>prefix</code>, and <code>IncludeCookies</code>, the
     * values are automatically deleted.</p>
     */
    inline LoggingConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Specifies whether you want CloudFront to include cookies in access logs,
     * specify <code>true</code> for <code>IncludeCookies</code>. If you choose to
     * include cookies in logs, CloudFront logs all cookies regardless of how you
     * configure the cache behaviors for this distribution. If you don't want to
     * include cookies when you create a distribution or if you want to disable include
     * cookies for an existing distribution, specify <code>false</code> for
     * <code>IncludeCookies</code>.</p>
     */
    inline bool GetIncludeCookies() const{ return m_includeCookies; }

    /**
     * <p>Specifies whether you want CloudFront to include cookies in access logs,
     * specify <code>true</code> for <code>IncludeCookies</code>. If you choose to
     * include cookies in logs, CloudFront logs all cookies regardless of how you
     * configure the cache behaviors for this distribution. If you don't want to
     * include cookies when you create a distribution or if you want to disable include
     * cookies for an existing distribution, specify <code>false</code> for
     * <code>IncludeCookies</code>.</p>
     */
    inline bool IncludeCookiesHasBeenSet() const { return m_includeCookiesHasBeenSet; }

    /**
     * <p>Specifies whether you want CloudFront to include cookies in access logs,
     * specify <code>true</code> for <code>IncludeCookies</code>. If you choose to
     * include cookies in logs, CloudFront logs all cookies regardless of how you
     * configure the cache behaviors for this distribution. If you don't want to
     * include cookies when you create a distribution or if you want to disable include
     * cookies for an existing distribution, specify <code>false</code> for
     * <code>IncludeCookies</code>.</p>
     */
    inline void SetIncludeCookies(bool value) { m_includeCookiesHasBeenSet = true; m_includeCookies = value; }

    /**
     * <p>Specifies whether you want CloudFront to include cookies in access logs,
     * specify <code>true</code> for <code>IncludeCookies</code>. If you choose to
     * include cookies in logs, CloudFront logs all cookies regardless of how you
     * configure the cache behaviors for this distribution. If you don't want to
     * include cookies when you create a distribution or if you want to disable include
     * cookies for an existing distribution, specify <code>false</code> for
     * <code>IncludeCookies</code>.</p>
     */
    inline LoggingConfig& WithIncludeCookies(bool value) { SetIncludeCookies(value); return *this;}


    /**
     * <p>The Amazon S3 bucket to store the access logs in, for example,
     * <code>myawslogbucket.s3.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 bucket to store the access logs in, for example,
     * <code>myawslogbucket.s3.amazonaws.com</code>.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket to store the access logs in, for example,
     * <code>myawslogbucket.s3.amazonaws.com</code>.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket to store the access logs in, for example,
     * <code>myawslogbucket.s3.amazonaws.com</code>.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket to store the access logs in, for example,
     * <code>myawslogbucket.s3.amazonaws.com</code>.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket to store the access logs in, for example,
     * <code>myawslogbucket.s3.amazonaws.com</code>.</p>
     */
    inline LoggingConfig& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket to store the access logs in, for example,
     * <code>myawslogbucket.s3.amazonaws.com</code>.</p>
     */
    inline LoggingConfig& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket to store the access logs in, for example,
     * <code>myawslogbucket.s3.amazonaws.com</code>.</p>
     */
    inline LoggingConfig& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * <code>filenames</code> for this distribution, for example,
     * <code>myprefix/</code>. If you want to enable logging, but you don't want to
     * specify a prefix, you still must include an empty <code>Prefix</code> element in
     * the <code>Logging</code> element.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * <code>filenames</code> for this distribution, for example,
     * <code>myprefix/</code>. If you want to enable logging, but you don't want to
     * specify a prefix, you still must include an empty <code>Prefix</code> element in
     * the <code>Logging</code> element.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * <code>filenames</code> for this distribution, for example,
     * <code>myprefix/</code>. If you want to enable logging, but you don't want to
     * specify a prefix, you still must include an empty <code>Prefix</code> element in
     * the <code>Logging</code> element.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * <code>filenames</code> for this distribution, for example,
     * <code>myprefix/</code>. If you want to enable logging, but you don't want to
     * specify a prefix, you still must include an empty <code>Prefix</code> element in
     * the <code>Logging</code> element.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * <code>filenames</code> for this distribution, for example,
     * <code>myprefix/</code>. If you want to enable logging, but you don't want to
     * specify a prefix, you still must include an empty <code>Prefix</code> element in
     * the <code>Logging</code> element.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * <code>filenames</code> for this distribution, for example,
     * <code>myprefix/</code>. If you want to enable logging, but you don't want to
     * specify a prefix, you still must include an empty <code>Prefix</code> element in
     * the <code>Logging</code> element.</p>
     */
    inline LoggingConfig& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * <code>filenames</code> for this distribution, for example,
     * <code>myprefix/</code>. If you want to enable logging, but you don't want to
     * specify a prefix, you still must include an empty <code>Prefix</code> element in
     * the <code>Logging</code> element.</p>
     */
    inline LoggingConfig& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * <code>filenames</code> for this distribution, for example,
     * <code>myprefix/</code>. If you want to enable logging, but you don't want to
     * specify a prefix, you still must include an empty <code>Prefix</code> element in
     * the <code>Logging</code> element.</p>
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
