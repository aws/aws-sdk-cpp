/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/MonitoringSubscription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  class GetMonitoringSubscription2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetMonitoringSubscription2020_05_31Result();
    AWS_CLOUDFRONT_API GetMonitoringSubscription2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetMonitoringSubscription2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A monitoring subscription. This structure contains information about whether
     * additional CloudWatch metrics are enabled for a given CloudFront
     * distribution.</p>
     */
    inline const MonitoringSubscription& GetMonitoringSubscription() const{ return m_monitoringSubscription; }

    /**
     * <p>A monitoring subscription. This structure contains information about whether
     * additional CloudWatch metrics are enabled for a given CloudFront
     * distribution.</p>
     */
    inline void SetMonitoringSubscription(const MonitoringSubscription& value) { m_monitoringSubscription = value; }

    /**
     * <p>A monitoring subscription. This structure contains information about whether
     * additional CloudWatch metrics are enabled for a given CloudFront
     * distribution.</p>
     */
    inline void SetMonitoringSubscription(MonitoringSubscription&& value) { m_monitoringSubscription = std::move(value); }

    /**
     * <p>A monitoring subscription. This structure contains information about whether
     * additional CloudWatch metrics are enabled for a given CloudFront
     * distribution.</p>
     */
    inline GetMonitoringSubscription2020_05_31Result& WithMonitoringSubscription(const MonitoringSubscription& value) { SetMonitoringSubscription(value); return *this;}

    /**
     * <p>A monitoring subscription. This structure contains information about whether
     * additional CloudWatch metrics are enabled for a given CloudFront
     * distribution.</p>
     */
    inline GetMonitoringSubscription2020_05_31Result& WithMonitoringSubscription(MonitoringSubscription&& value) { SetMonitoringSubscription(std::move(value)); return *this;}

  private:

    MonitoringSubscription m_monitoringSubscription;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
