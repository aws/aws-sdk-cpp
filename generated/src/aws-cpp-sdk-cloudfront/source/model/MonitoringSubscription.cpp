/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/MonitoringSubscription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

MonitoringSubscription::MonitoringSubscription() : 
    m_realtimeMetricsSubscriptionConfigHasBeenSet(false)
{
}

MonitoringSubscription::MonitoringSubscription(const XmlNode& xmlNode) : 
    m_realtimeMetricsSubscriptionConfigHasBeenSet(false)
{
  *this = xmlNode;
}

MonitoringSubscription& MonitoringSubscription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode realtimeMetricsSubscriptionConfigNode = resultNode.FirstChild("RealtimeMetricsSubscriptionConfig");
    if(!realtimeMetricsSubscriptionConfigNode.IsNull())
    {
      m_realtimeMetricsSubscriptionConfig = realtimeMetricsSubscriptionConfigNode;
      m_realtimeMetricsSubscriptionConfigHasBeenSet = true;
    }
  }

  return *this;
}

void MonitoringSubscription::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_realtimeMetricsSubscriptionConfigHasBeenSet)
  {
   XmlNode realtimeMetricsSubscriptionConfigNode = parentNode.CreateChildElement("RealtimeMetricsSubscriptionConfig");
   m_realtimeMetricsSubscriptionConfig.AddToNode(realtimeMetricsSubscriptionConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
