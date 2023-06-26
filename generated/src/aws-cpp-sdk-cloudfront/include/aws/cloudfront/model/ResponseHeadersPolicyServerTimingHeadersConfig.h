/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>

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
   * <p>A configuration for enabling the <code>Server-Timing</code> header in HTTP
   * responses sent from CloudFront. CloudFront adds this header to HTTP responses
   * that it sends in response to requests that match a cache behavior that's
   * associated with this response headers policy.</p> <p>You can use the
   * <code>Server-Timing</code> header to view metrics that can help you gain
   * insights about the behavior and performance of CloudFront. For example, you can
   * see which cache layer served a cache hit, or the first byte latency from the
   * origin when there was a cache miss. You can use the metrics in the
   * <code>Server-Timing</code> header to troubleshoot issues or test the efficiency
   * of your CloudFront configuration. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/understanding-response-headers-policies.html#server-timing-header">Server-Timing
   * header</a> in the <i>Amazon CloudFront Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyServerTimingHeadersConfig">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyServerTimingHeadersConfig
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyServerTimingHeadersConfig();
    AWS_CLOUDFRONT_API ResponseHeadersPolicyServerTimingHeadersConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyServerTimingHeadersConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A Boolean that determines whether CloudFront adds the
     * <code>Server-Timing</code> header to HTTP responses that it sends in response to
     * requests that match a cache behavior that's associated with this response
     * headers policy.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>A Boolean that determines whether CloudFront adds the
     * <code>Server-Timing</code> header to HTTP responses that it sends in response to
     * requests that match a cache behavior that's associated with this response
     * headers policy.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>A Boolean that determines whether CloudFront adds the
     * <code>Server-Timing</code> header to HTTP responses that it sends in response to
     * requests that match a cache behavior that's associated with this response
     * headers policy.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>A Boolean that determines whether CloudFront adds the
     * <code>Server-Timing</code> header to HTTP responses that it sends in response to
     * requests that match a cache behavior that's associated with this response
     * headers policy.</p>
     */
    inline ResponseHeadersPolicyServerTimingHeadersConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>A number 0–100 (inclusive) that specifies the percentage of responses that
     * you want CloudFront to add the <code>Server-Timing</code> header to. When you
     * set the sampling rate to 100, CloudFront adds the <code>Server-Timing</code>
     * header to the HTTP response for every request that matches the cache behavior
     * that this response headers policy is attached to. When you set it to 50,
     * CloudFront adds the header to 50% of the responses for requests that match the
     * cache behavior. You can set the sampling rate to any number 0–100 with up to
     * four decimal places.</p>
     */
    inline double GetSamplingRate() const{ return m_samplingRate; }

    /**
     * <p>A number 0–100 (inclusive) that specifies the percentage of responses that
     * you want CloudFront to add the <code>Server-Timing</code> header to. When you
     * set the sampling rate to 100, CloudFront adds the <code>Server-Timing</code>
     * header to the HTTP response for every request that matches the cache behavior
     * that this response headers policy is attached to. When you set it to 50,
     * CloudFront adds the header to 50% of the responses for requests that match the
     * cache behavior. You can set the sampling rate to any number 0–100 with up to
     * four decimal places.</p>
     */
    inline bool SamplingRateHasBeenSet() const { return m_samplingRateHasBeenSet; }

    /**
     * <p>A number 0–100 (inclusive) that specifies the percentage of responses that
     * you want CloudFront to add the <code>Server-Timing</code> header to. When you
     * set the sampling rate to 100, CloudFront adds the <code>Server-Timing</code>
     * header to the HTTP response for every request that matches the cache behavior
     * that this response headers policy is attached to. When you set it to 50,
     * CloudFront adds the header to 50% of the responses for requests that match the
     * cache behavior. You can set the sampling rate to any number 0–100 with up to
     * four decimal places.</p>
     */
    inline void SetSamplingRate(double value) { m_samplingRateHasBeenSet = true; m_samplingRate = value; }

    /**
     * <p>A number 0–100 (inclusive) that specifies the percentage of responses that
     * you want CloudFront to add the <code>Server-Timing</code> header to. When you
     * set the sampling rate to 100, CloudFront adds the <code>Server-Timing</code>
     * header to the HTTP response for every request that matches the cache behavior
     * that this response headers policy is attached to. When you set it to 50,
     * CloudFront adds the header to 50% of the responses for requests that match the
     * cache behavior. You can set the sampling rate to any number 0–100 with up to
     * four decimal places.</p>
     */
    inline ResponseHeadersPolicyServerTimingHeadersConfig& WithSamplingRate(double value) { SetSamplingRate(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    double m_samplingRate;
    bool m_samplingRateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
