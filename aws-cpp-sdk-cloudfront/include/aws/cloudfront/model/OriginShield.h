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
   * <p>CloudFront Origin Shield.</p> <p>Using Origin Shield can help reduce the load
   * on your origin. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html">Using
   * Origin Shield</a> in the <i>Amazon CloudFront Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginShield">AWS
   * API Reference</a></p>
   */
  class OriginShield
  {
  public:
    AWS_CLOUDFRONT_API OriginShield();
    AWS_CLOUDFRONT_API OriginShield(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginShield& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A flag that specifies whether Origin Shield is enabled.</p> <p>When it's
     * enabled, CloudFront routes all requests through Origin Shield, which can help
     * protect your origin. When it's disabled, CloudFront might send requests directly
     * to your origin from multiple edge locations or regional edge caches.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>A flag that specifies whether Origin Shield is enabled.</p> <p>When it's
     * enabled, CloudFront routes all requests through Origin Shield, which can help
     * protect your origin. When it's disabled, CloudFront might send requests directly
     * to your origin from multiple edge locations or regional edge caches.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>A flag that specifies whether Origin Shield is enabled.</p> <p>When it's
     * enabled, CloudFront routes all requests through Origin Shield, which can help
     * protect your origin. When it's disabled, CloudFront might send requests directly
     * to your origin from multiple edge locations or regional edge caches.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>A flag that specifies whether Origin Shield is enabled.</p> <p>When it's
     * enabled, CloudFront routes all requests through Origin Shield, which can help
     * protect your origin. When it's disabled, CloudFront might send requests directly
     * to your origin from multiple edge locations or regional edge caches.</p>
     */
    inline OriginShield& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The Amazon Web Services Region for Origin Shield.</p> <p>Specify the Amazon
     * Web Services Region that has the lowest latency to your origin. To specify a
     * region, use the region code, not the region name. For example, specify the US
     * East (Ohio) region as <code>us-east-2</code>.</p> <p>When you enable CloudFront
     * Origin Shield, you must specify the Amazon Web Services Region for Origin
     * Shield. For the list of Amazon Web Services Regions that you can specify, and
     * for help choosing the best Region for your origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html#choose-origin-shield-region">Choosing
     * the Amazon Web Services Region for Origin Shield</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetOriginShieldRegion() const{ return m_originShieldRegion; }

    /**
     * <p>The Amazon Web Services Region for Origin Shield.</p> <p>Specify the Amazon
     * Web Services Region that has the lowest latency to your origin. To specify a
     * region, use the region code, not the region name. For example, specify the US
     * East (Ohio) region as <code>us-east-2</code>.</p> <p>When you enable CloudFront
     * Origin Shield, you must specify the Amazon Web Services Region for Origin
     * Shield. For the list of Amazon Web Services Regions that you can specify, and
     * for help choosing the best Region for your origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html#choose-origin-shield-region">Choosing
     * the Amazon Web Services Region for Origin Shield</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline bool OriginShieldRegionHasBeenSet() const { return m_originShieldRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region for Origin Shield.</p> <p>Specify the Amazon
     * Web Services Region that has the lowest latency to your origin. To specify a
     * region, use the region code, not the region name. For example, specify the US
     * East (Ohio) region as <code>us-east-2</code>.</p> <p>When you enable CloudFront
     * Origin Shield, you must specify the Amazon Web Services Region for Origin
     * Shield. For the list of Amazon Web Services Regions that you can specify, and
     * for help choosing the best Region for your origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html#choose-origin-shield-region">Choosing
     * the Amazon Web Services Region for Origin Shield</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline void SetOriginShieldRegion(const Aws::String& value) { m_originShieldRegionHasBeenSet = true; m_originShieldRegion = value; }

    /**
     * <p>The Amazon Web Services Region for Origin Shield.</p> <p>Specify the Amazon
     * Web Services Region that has the lowest latency to your origin. To specify a
     * region, use the region code, not the region name. For example, specify the US
     * East (Ohio) region as <code>us-east-2</code>.</p> <p>When you enable CloudFront
     * Origin Shield, you must specify the Amazon Web Services Region for Origin
     * Shield. For the list of Amazon Web Services Regions that you can specify, and
     * for help choosing the best Region for your origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html#choose-origin-shield-region">Choosing
     * the Amazon Web Services Region for Origin Shield</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline void SetOriginShieldRegion(Aws::String&& value) { m_originShieldRegionHasBeenSet = true; m_originShieldRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region for Origin Shield.</p> <p>Specify the Amazon
     * Web Services Region that has the lowest latency to your origin. To specify a
     * region, use the region code, not the region name. For example, specify the US
     * East (Ohio) region as <code>us-east-2</code>.</p> <p>When you enable CloudFront
     * Origin Shield, you must specify the Amazon Web Services Region for Origin
     * Shield. For the list of Amazon Web Services Regions that you can specify, and
     * for help choosing the best Region for your origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html#choose-origin-shield-region">Choosing
     * the Amazon Web Services Region for Origin Shield</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline void SetOriginShieldRegion(const char* value) { m_originShieldRegionHasBeenSet = true; m_originShieldRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region for Origin Shield.</p> <p>Specify the Amazon
     * Web Services Region that has the lowest latency to your origin. To specify a
     * region, use the region code, not the region name. For example, specify the US
     * East (Ohio) region as <code>us-east-2</code>.</p> <p>When you enable CloudFront
     * Origin Shield, you must specify the Amazon Web Services Region for Origin
     * Shield. For the list of Amazon Web Services Regions that you can specify, and
     * for help choosing the best Region for your origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html#choose-origin-shield-region">Choosing
     * the Amazon Web Services Region for Origin Shield</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline OriginShield& WithOriginShieldRegion(const Aws::String& value) { SetOriginShieldRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region for Origin Shield.</p> <p>Specify the Amazon
     * Web Services Region that has the lowest latency to your origin. To specify a
     * region, use the region code, not the region name. For example, specify the US
     * East (Ohio) region as <code>us-east-2</code>.</p> <p>When you enable CloudFront
     * Origin Shield, you must specify the Amazon Web Services Region for Origin
     * Shield. For the list of Amazon Web Services Regions that you can specify, and
     * for help choosing the best Region for your origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html#choose-origin-shield-region">Choosing
     * the Amazon Web Services Region for Origin Shield</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline OriginShield& WithOriginShieldRegion(Aws::String&& value) { SetOriginShieldRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region for Origin Shield.</p> <p>Specify the Amazon
     * Web Services Region that has the lowest latency to your origin. To specify a
     * region, use the region code, not the region name. For example, specify the US
     * East (Ohio) region as <code>us-east-2</code>.</p> <p>When you enable CloudFront
     * Origin Shield, you must specify the Amazon Web Services Region for Origin
     * Shield. For the list of Amazon Web Services Regions that you can specify, and
     * for help choosing the best Region for your origin, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/origin-shield.html#choose-origin-shield-region">Choosing
     * the Amazon Web Services Region for Origin Shield</a> in the <i>Amazon CloudFront
     * Developer Guide</i>.</p>
     */
    inline OriginShield& WithOriginShieldRegion(const char* value) { SetOriginShieldRegion(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_originShieldRegion;
    bool m_originShieldRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
