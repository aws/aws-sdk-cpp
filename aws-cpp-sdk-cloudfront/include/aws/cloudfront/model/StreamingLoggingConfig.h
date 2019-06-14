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
   * <p>A complex type that controls whether access logs are written for this
   * streaming distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/StreamingLoggingConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API StreamingLoggingConfig
  {
  public:
    StreamingLoggingConfig();
    StreamingLoggingConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    StreamingLoggingConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you don't want to enable logging when you create a streaming
     * distribution or if you want to disable logging for an existing streaming
     * distribution, specify <code>false</code> for <code>Enabled</code>, and specify
     * <code>empty Bucket</code> and <code>Prefix</code> elements. If you specify
     * <code>false</code> for <code>Enabled</code> but you specify values for
     * <code>Bucket</code> and <code>Prefix</code>, the values are automatically
     * deleted. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you don't want to enable logging when you create a streaming
     * distribution or if you want to disable logging for an existing streaming
     * distribution, specify <code>false</code> for <code>Enabled</code>, and specify
     * <code>empty Bucket</code> and <code>Prefix</code> elements. If you specify
     * <code>false</code> for <code>Enabled</code> but you specify values for
     * <code>Bucket</code> and <code>Prefix</code>, the values are automatically
     * deleted. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you don't want to enable logging when you create a streaming
     * distribution or if you want to disable logging for an existing streaming
     * distribution, specify <code>false</code> for <code>Enabled</code>, and specify
     * <code>empty Bucket</code> and <code>Prefix</code> elements. If you specify
     * <code>false</code> for <code>Enabled</code> but you specify values for
     * <code>Bucket</code> and <code>Prefix</code>, the values are automatically
     * deleted. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you don't want to enable logging when you create a streaming
     * distribution or if you want to disable logging for an existing streaming
     * distribution, specify <code>false</code> for <code>Enabled</code>, and specify
     * <code>empty Bucket</code> and <code>Prefix</code> elements. If you specify
     * <code>false</code> for <code>Enabled</code> but you specify values for
     * <code>Bucket</code> and <code>Prefix</code>, the values are automatically
     * deleted. </p>
     */
    inline StreamingLoggingConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}


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
    inline StreamingLoggingConfig& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket to store the access logs in, for example,
     * <code>myawslogbucket.s3.amazonaws.com</code>.</p>
     */
    inline StreamingLoggingConfig& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket to store the access logs in, for example,
     * <code>myawslogbucket.s3.amazonaws.com</code>.</p>
     */
    inline StreamingLoggingConfig& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, <code>myprefix/</code>.
     * If you want to enable logging, but you don't want to specify a prefix, you still
     * must include an empty <code>Prefix</code> element in the <code>Logging</code>
     * element.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, <code>myprefix/</code>.
     * If you want to enable logging, but you don't want to specify a prefix, you still
     * must include an empty <code>Prefix</code> element in the <code>Logging</code>
     * element.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, <code>myprefix/</code>.
     * If you want to enable logging, but you don't want to specify a prefix, you still
     * must include an empty <code>Prefix</code> element in the <code>Logging</code>
     * element.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, <code>myprefix/</code>.
     * If you want to enable logging, but you don't want to specify a prefix, you still
     * must include an empty <code>Prefix</code> element in the <code>Logging</code>
     * element.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, <code>myprefix/</code>.
     * If you want to enable logging, but you don't want to specify a prefix, you still
     * must include an empty <code>Prefix</code> element in the <code>Logging</code>
     * element.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, <code>myprefix/</code>.
     * If you want to enable logging, but you don't want to specify a prefix, you still
     * must include an empty <code>Prefix</code> element in the <code>Logging</code>
     * element.</p>
     */
    inline StreamingLoggingConfig& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, <code>myprefix/</code>.
     * If you want to enable logging, but you don't want to specify a prefix, you still
     * must include an empty <code>Prefix</code> element in the <code>Logging</code>
     * element.</p>
     */
    inline StreamingLoggingConfig& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * filenames for this streaming distribution, for example, <code>myprefix/</code>.
     * If you want to enable logging, but you don't want to specify a prefix, you still
     * must include an empty <code>Prefix</code> element in the <code>Logging</code>
     * element.</p>
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
