/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ContinuousDeploymentSingleWeightConfig.h>
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

ContinuousDeploymentSingleWeightConfig::ContinuousDeploymentSingleWeightConfig() : 
    m_weight(0.0),
    m_weightHasBeenSet(false),
    m_sessionStickinessConfigHasBeenSet(false)
{
}

ContinuousDeploymentSingleWeightConfig::ContinuousDeploymentSingleWeightConfig(const XmlNode& xmlNode) : 
    m_weight(0.0),
    m_weightHasBeenSet(false),
    m_sessionStickinessConfigHasBeenSet(false)
{
  *this = xmlNode;
}

ContinuousDeploymentSingleWeightConfig& ContinuousDeploymentSingleWeightConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode weightNode = resultNode.FirstChild("Weight");
    if(!weightNode.IsNull())
    {
      m_weight = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(weightNode.GetText()).c_str()).c_str());
      m_weightHasBeenSet = true;
    }
    XmlNode sessionStickinessConfigNode = resultNode.FirstChild("SessionStickinessConfig");
    if(!sessionStickinessConfigNode.IsNull())
    {
      m_sessionStickinessConfig = sessionStickinessConfigNode;
      m_sessionStickinessConfigHasBeenSet = true;
    }
  }

  return *this;
}

void ContinuousDeploymentSingleWeightConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_weightHasBeenSet)
  {
   XmlNode weightNode = parentNode.CreateChildElement("Weight");
   ss << m_weight;
   weightNode.SetText(ss.str());
   ss.str("");
  }

  if(m_sessionStickinessConfigHasBeenSet)
  {
   XmlNode sessionStickinessConfigNode = parentNode.CreateChildElement("SessionStickinessConfig");
   m_sessionStickinessConfig.AddToNode(sessionStickinessConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
