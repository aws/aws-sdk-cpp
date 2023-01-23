/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ContinuousDeploymentPolicyConfig.h>
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

ContinuousDeploymentPolicyConfig::ContinuousDeploymentPolicyConfig() : 
    m_stagingDistributionDnsNamesHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_trafficConfigHasBeenSet(false)
{
}

ContinuousDeploymentPolicyConfig::ContinuousDeploymentPolicyConfig(const XmlNode& xmlNode) : 
    m_stagingDistributionDnsNamesHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_trafficConfigHasBeenSet(false)
{
  *this = xmlNode;
}

ContinuousDeploymentPolicyConfig& ContinuousDeploymentPolicyConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stagingDistributionDnsNamesNode = resultNode.FirstChild("StagingDistributionDnsNames");
    if(!stagingDistributionDnsNamesNode.IsNull())
    {
      m_stagingDistributionDnsNames = stagingDistributionDnsNamesNode;
      m_stagingDistributionDnsNamesHasBeenSet = true;
    }
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode trafficConfigNode = resultNode.FirstChild("TrafficConfig");
    if(!trafficConfigNode.IsNull())
    {
      m_trafficConfig = trafficConfigNode;
      m_trafficConfigHasBeenSet = true;
    }
  }

  return *this;
}

void ContinuousDeploymentPolicyConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_stagingDistributionDnsNamesHasBeenSet)
  {
   XmlNode stagingDistributionDnsNamesNode = parentNode.CreateChildElement("StagingDistributionDnsNames");
   m_stagingDistributionDnsNames.AddToNode(stagingDistributionDnsNamesNode);
  }

  if(m_enabledHasBeenSet)
  {
   XmlNode enabledNode = parentNode.CreateChildElement("Enabled");
   ss << std::boolalpha << m_enabled;
   enabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_trafficConfigHasBeenSet)
  {
   XmlNode trafficConfigNode = parentNode.CreateChildElement("TrafficConfig");
   m_trafficConfig.AddToNode(trafficConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
