/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HealthCheckRegion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/StatusReport.h>
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
   * <p>A complex type that contains the last failure reason as reported by one
   * Amazon Route 53 health checker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HealthCheckObservation">AWS
   * API Reference</a></p>
   */
  class HealthCheckObservation
  {
  public:
    AWS_ROUTE53_API HealthCheckObservation();
    AWS_ROUTE53_API HealthCheckObservation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API HealthCheckObservation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The region of the Amazon Route 53 health checker that provided the status in
     * <code>StatusReport</code>.</p>
     */
    inline const HealthCheckRegion& GetRegion() const{ return m_region; }

    /**
     * <p>The region of the Amazon Route 53 health checker that provided the status in
     * <code>StatusReport</code>.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The region of the Amazon Route 53 health checker that provided the status in
     * <code>StatusReport</code>.</p>
     */
    inline void SetRegion(const HealthCheckRegion& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The region of the Amazon Route 53 health checker that provided the status in
     * <code>StatusReport</code>.</p>
     */
    inline void SetRegion(HealthCheckRegion&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The region of the Amazon Route 53 health checker that provided the status in
     * <code>StatusReport</code>.</p>
     */
    inline HealthCheckObservation& WithRegion(const HealthCheckRegion& value) { SetRegion(value); return *this;}

    /**
     * <p>The region of the Amazon Route 53 health checker that provided the status in
     * <code>StatusReport</code>.</p>
     */
    inline HealthCheckObservation& WithRegion(HealthCheckRegion&& value) { SetRegion(std::move(value)); return *this;}


    /**
     * <p>The IP address of the Amazon Route 53 health checker that provided the
     * failure reason in <code>StatusReport</code>.</p>
     */
    inline const Aws::String& GetIPAddress() const{ return m_iPAddress; }

    /**
     * <p>The IP address of the Amazon Route 53 health checker that provided the
     * failure reason in <code>StatusReport</code>.</p>
     */
    inline bool IPAddressHasBeenSet() const { return m_iPAddressHasBeenSet; }

    /**
     * <p>The IP address of the Amazon Route 53 health checker that provided the
     * failure reason in <code>StatusReport</code>.</p>
     */
    inline void SetIPAddress(const Aws::String& value) { m_iPAddressHasBeenSet = true; m_iPAddress = value; }

    /**
     * <p>The IP address of the Amazon Route 53 health checker that provided the
     * failure reason in <code>StatusReport</code>.</p>
     */
    inline void SetIPAddress(Aws::String&& value) { m_iPAddressHasBeenSet = true; m_iPAddress = std::move(value); }

    /**
     * <p>The IP address of the Amazon Route 53 health checker that provided the
     * failure reason in <code>StatusReport</code>.</p>
     */
    inline void SetIPAddress(const char* value) { m_iPAddressHasBeenSet = true; m_iPAddress.assign(value); }

    /**
     * <p>The IP address of the Amazon Route 53 health checker that provided the
     * failure reason in <code>StatusReport</code>.</p>
     */
    inline HealthCheckObservation& WithIPAddress(const Aws::String& value) { SetIPAddress(value); return *this;}

    /**
     * <p>The IP address of the Amazon Route 53 health checker that provided the
     * failure reason in <code>StatusReport</code>.</p>
     */
    inline HealthCheckObservation& WithIPAddress(Aws::String&& value) { SetIPAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of the Amazon Route 53 health checker that provided the
     * failure reason in <code>StatusReport</code>.</p>
     */
    inline HealthCheckObservation& WithIPAddress(const char* value) { SetIPAddress(value); return *this;}


    /**
     * <p>A complex type that contains the last failure reason as reported by one
     * Amazon Route 53 health checker and the time of the failed health check.</p>
     */
    inline const StatusReport& GetStatusReport() const{ return m_statusReport; }

    /**
     * <p>A complex type that contains the last failure reason as reported by one
     * Amazon Route 53 health checker and the time of the failed health check.</p>
     */
    inline bool StatusReportHasBeenSet() const { return m_statusReportHasBeenSet; }

    /**
     * <p>A complex type that contains the last failure reason as reported by one
     * Amazon Route 53 health checker and the time of the failed health check.</p>
     */
    inline void SetStatusReport(const StatusReport& value) { m_statusReportHasBeenSet = true; m_statusReport = value; }

    /**
     * <p>A complex type that contains the last failure reason as reported by one
     * Amazon Route 53 health checker and the time of the failed health check.</p>
     */
    inline void SetStatusReport(StatusReport&& value) { m_statusReportHasBeenSet = true; m_statusReport = std::move(value); }

    /**
     * <p>A complex type that contains the last failure reason as reported by one
     * Amazon Route 53 health checker and the time of the failed health check.</p>
     */
    inline HealthCheckObservation& WithStatusReport(const StatusReport& value) { SetStatusReport(value); return *this;}

    /**
     * <p>A complex type that contains the last failure reason as reported by one
     * Amazon Route 53 health checker and the time of the failed health check.</p>
     */
    inline HealthCheckObservation& WithStatusReport(StatusReport&& value) { SetStatusReport(std::move(value)); return *this;}

  private:

    HealthCheckRegion m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_iPAddress;
    bool m_iPAddressHasBeenSet = false;

    StatusReport m_statusReport;
    bool m_statusReportHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
