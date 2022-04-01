/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/RealtimeMetricsSubscriptionConfig.h>
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

RealtimeMetricsSubscriptionConfig::RealtimeMetricsSubscriptionConfig() : 
    m_realtimeMetricsSubscriptionStatus(RealtimeMetricsSubscriptionStatus::NOT_SET),
    m_realtimeMetricsSubscriptionStatusHasBeenSet(false)
{
}

RealtimeMetricsSubscriptionConfig::RealtimeMetricsSubscriptionConfig(const XmlNode& xmlNode) : 
    m_realtimeMetricsSubscriptionStatus(RealtimeMetricsSubscriptionStatus::NOT_SET),
    m_realtimeMetricsSubscriptionStatusHasBeenSet(false)
{
  *this = xmlNode;
}

RealtimeMetricsSubscriptionConfig& RealtimeMetricsSubscriptionConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode realtimeMetricsSubscriptionStatusNode = resultNode.FirstChild("RealtimeMetricsSubscriptionStatus");
    if(!realtimeMetricsSubscriptionStatusNode.IsNull())
    {
      m_realtimeMetricsSubscriptionStatus = RealtimeMetricsSubscriptionStatusMapper::GetRealtimeMetricsSubscriptionStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(realtimeMetricsSubscriptionStatusNode.GetText()).c_str()).c_str());
      m_realtimeMetricsSubscriptionStatusHasBeenSet = true;
    }
  }

  return *this;
}

void RealtimeMetricsSubscriptionConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_realtimeMetricsSubscriptionStatusHasBeenSet)
  {
   XmlNode realtimeMetricsSubscriptionStatusNode = parentNode.CreateChildElement("RealtimeMetricsSubscriptionStatus");
   realtimeMetricsSubscriptionStatusNode.SetText(RealtimeMetricsSubscriptionStatusMapper::GetNameForRealtimeMetricsSubscriptionStatus(m_realtimeMetricsSubscriptionStatus));
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
