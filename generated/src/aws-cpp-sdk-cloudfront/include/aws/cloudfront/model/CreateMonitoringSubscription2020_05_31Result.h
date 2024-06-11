﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/MonitoringSubscription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateMonitoringSubscription2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API CreateMonitoringSubscription2020_05_31Result();
    AWS_CLOUDFRONT_API CreateMonitoringSubscription2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API CreateMonitoringSubscription2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A monitoring subscription. This structure contains information about whether
     * additional CloudWatch metrics are enabled for a given CloudFront
     * distribution.</p>
     */
    inline const MonitoringSubscription& GetMonitoringSubscription() const{ return m_monitoringSubscription; }
    inline void SetMonitoringSubscription(const MonitoringSubscription& value) { m_monitoringSubscription = value; }
    inline void SetMonitoringSubscription(MonitoringSubscription&& value) { m_monitoringSubscription = std::move(value); }
    inline CreateMonitoringSubscription2020_05_31Result& WithMonitoringSubscription(const MonitoringSubscription& value) { SetMonitoringSubscription(value); return *this;}
    inline CreateMonitoringSubscription2020_05_31Result& WithMonitoringSubscription(MonitoringSubscription&& value) { SetMonitoringSubscription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMonitoringSubscription2020_05_31Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMonitoringSubscription2020_05_31Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMonitoringSubscription2020_05_31Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MonitoringSubscription m_monitoringSubscription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
