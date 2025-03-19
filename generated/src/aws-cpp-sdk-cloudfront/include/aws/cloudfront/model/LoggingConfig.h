/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A complex type that specifies whether access logs are written for the
   * distribution.</p>  <p>If you already enabled standard logging (legacy) and
   * you want to enable standard logging (v2) to send your access logs to Amazon S3,
   * we recommend that you specify a <i>different</i> Amazon S3 bucket or use a
   * <i>separate path</i> in the same bucket (for example, use a log prefix or
   * partitioning). This helps you keep track of which log files are associated with
   * which logging subscription and prevents log files from overwriting each other.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/AccessLogs.html">Standard
   * logging (access logs)</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/LoggingConfig">AWS
   * API Reference</a></p>
   */
  class LoggingConfig
  {
  public:
    AWS_CLOUDFRONT_API LoggingConfig() = default;
    AWS_CLOUDFRONT_API LoggingConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API LoggingConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies whether you want CloudFront to save access logs to an Amazon S3
     * bucket. If you don't want to enable logging when you create a distribution or if
     * you want to disable logging for an existing distribution, specify
     * <code>false</code> for <code>Enabled</code>, and specify empty
     * <code>Bucket</code> and <code>Prefix</code> elements. If you specify
     * <code>false</code> for <code>Enabled</code> but you specify values for
     * <code>Bucket</code> and <code>prefix</code>, the values are automatically
     * deleted.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline LoggingConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether you want CloudFront to include cookies in access logs,
     * specify <code>true</code> for <code>IncludeCookies</code>. If you choose to
     * include cookies in logs, CloudFront logs all cookies regardless of how you
     * configure the cache behaviors for this distribution. If you don't want to
     * include cookies when you create a distribution or if you want to disable include
     * cookies for an existing distribution, specify <code>false</code> for
     * <code>IncludeCookies</code>.</p>
     */
    inline bool GetIncludeCookies() const { return m_includeCookies; }
    inline bool IncludeCookiesHasBeenSet() const { return m_includeCookiesHasBeenSet; }
    inline void SetIncludeCookies(bool value) { m_includeCookiesHasBeenSet = true; m_includeCookies = value; }
    inline LoggingConfig& WithIncludeCookies(bool value) { SetIncludeCookies(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket to store the access logs in, for example,
     * <code>amzn-s3-demo-bucket.s3.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    LoggingConfig& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional string that you want CloudFront to prefix to the access log
     * <code>filenames</code> for this distribution, for example,
     * <code>myprefix/</code>. If you want to enable logging, but you don't want to
     * specify a prefix, you still must include an empty <code>Prefix</code> element in
     * the <code>Logging</code> element.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    LoggingConfig& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_includeCookies{false};
    bool m_includeCookiesHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
