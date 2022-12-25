/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/CloudWatchRegion.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that identifies the CloudWatch alarm that you want Amazon
   * Route 53 health checkers to use to determine whether the specified health check
   * is healthy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/AlarmIdentifier">AWS
   * API Reference</a></p>
   */
  class AlarmIdentifier
  {
  public:
    AWS_ROUTE53_API AlarmIdentifier();
    AWS_ROUTE53_API AlarmIdentifier(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API AlarmIdentifier& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>For the CloudWatch alarm that you want Route 53 health checkers to use to
     * determine whether this health check is healthy, the region that the alarm was
     * created in.</p> <p>For the current list of CloudWatch regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/cw_region.html">Amazon
     * CloudWatch endpoints and quotas</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const CloudWatchRegion& GetRegion() const{ return m_region; }

    /**
     * <p>For the CloudWatch alarm that you want Route 53 health checkers to use to
     * determine whether this health check is healthy, the region that the alarm was
     * created in.</p> <p>For the current list of CloudWatch regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/cw_region.html">Amazon
     * CloudWatch endpoints and quotas</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>For the CloudWatch alarm that you want Route 53 health checkers to use to
     * determine whether this health check is healthy, the region that the alarm was
     * created in.</p> <p>For the current list of CloudWatch regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/cw_region.html">Amazon
     * CloudWatch endpoints and quotas</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetRegion(const CloudWatchRegion& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>For the CloudWatch alarm that you want Route 53 health checkers to use to
     * determine whether this health check is healthy, the region that the alarm was
     * created in.</p> <p>For the current list of CloudWatch regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/cw_region.html">Amazon
     * CloudWatch endpoints and quotas</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetRegion(CloudWatchRegion&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>For the CloudWatch alarm that you want Route 53 health checkers to use to
     * determine whether this health check is healthy, the region that the alarm was
     * created in.</p> <p>For the current list of CloudWatch regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/cw_region.html">Amazon
     * CloudWatch endpoints and quotas</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline AlarmIdentifier& WithRegion(const CloudWatchRegion& value) { SetRegion(value); return *this;}

    /**
     * <p>For the CloudWatch alarm that you want Route 53 health checkers to use to
     * determine whether this health check is healthy, the region that the alarm was
     * created in.</p> <p>For the current list of CloudWatch regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/cw_region.html">Amazon
     * CloudWatch endpoints and quotas</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline AlarmIdentifier& WithRegion(CloudWatchRegion&& value) { SetRegion(std::move(value)); return *this;}


    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p> 
     * <p>Route 53 supports CloudWatch alarms with the following features:</p> <ul>
     * <li> <p>Standard-resolution metrics. High-resolution metrics aren't supported.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> </li> <li>
     * <p>Statistics: Average, Minimum, Maximum, Sum, and SampleCount. Extended
     * statistics aren't supported.</p> </li> </ul> 
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p> 
     * <p>Route 53 supports CloudWatch alarms with the following features:</p> <ul>
     * <li> <p>Standard-resolution metrics. High-resolution metrics aren't supported.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> </li> <li>
     * <p>Statistics: Average, Minimum, Maximum, Sum, and SampleCount. Extended
     * statistics aren't supported.</p> </li> </ul> 
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p> 
     * <p>Route 53 supports CloudWatch alarms with the following features:</p> <ul>
     * <li> <p>Standard-resolution metrics. High-resolution metrics aren't supported.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> </li> <li>
     * <p>Statistics: Average, Minimum, Maximum, Sum, and SampleCount. Extended
     * statistics aren't supported.</p> </li> </ul> 
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p> 
     * <p>Route 53 supports CloudWatch alarms with the following features:</p> <ul>
     * <li> <p>Standard-resolution metrics. High-resolution metrics aren't supported.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> </li> <li>
     * <p>Statistics: Average, Minimum, Maximum, Sum, and SampleCount. Extended
     * statistics aren't supported.</p> </li> </ul> 
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p> 
     * <p>Route 53 supports CloudWatch alarms with the following features:</p> <ul>
     * <li> <p>Standard-resolution metrics. High-resolution metrics aren't supported.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> </li> <li>
     * <p>Statistics: Average, Minimum, Maximum, Sum, and SampleCount. Extended
     * statistics aren't supported.</p> </li> </ul> 
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p> 
     * <p>Route 53 supports CloudWatch alarms with the following features:</p> <ul>
     * <li> <p>Standard-resolution metrics. High-resolution metrics aren't supported.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> </li> <li>
     * <p>Statistics: Average, Minimum, Maximum, Sum, and SampleCount. Extended
     * statistics aren't supported.</p> </li> </ul> 
     */
    inline AlarmIdentifier& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p> 
     * <p>Route 53 supports CloudWatch alarms with the following features:</p> <ul>
     * <li> <p>Standard-resolution metrics. High-resolution metrics aren't supported.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> </li> <li>
     * <p>Statistics: Average, Minimum, Maximum, Sum, and SampleCount. Extended
     * statistics aren't supported.</p> </li> </ul> 
     */
    inline AlarmIdentifier& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch alarm that you want Amazon Route 53 health
     * checkers to use to determine whether this health check is healthy.</p> 
     * <p>Route 53 supports CloudWatch alarms with the following features:</p> <ul>
     * <li> <p>Standard-resolution metrics. High-resolution metrics aren't supported.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>.</p> </li> <li>
     * <p>Statistics: Average, Minimum, Maximum, Sum, and SampleCount. Extended
     * statistics aren't supported.</p> </li> </ul> 
     */
    inline AlarmIdentifier& WithName(const char* value) { SetName(value); return *this;}

  private:

    CloudWatchRegion m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
