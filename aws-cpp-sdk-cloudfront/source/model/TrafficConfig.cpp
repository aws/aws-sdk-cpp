/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/TrafficConfig.h>
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

TrafficConfig::TrafficConfig() : 
    m_singleWeightConfigHasBeenSet(false),
    m_singleHeaderConfigHasBeenSet(false),
    m_type(ContinuousDeploymentPolicyType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

TrafficConfig::TrafficConfig(const XmlNode& xmlNode) : 
    m_singleWeightConfigHasBeenSet(false),
    m_singleHeaderConfigHasBeenSet(false),
    m_type(ContinuousDeploymentPolicyType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = xmlNode;
}

TrafficConfig& TrafficConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode singleWeightConfigNode = resultNode.FirstChild("SingleWeightConfig");
    if(!singleWeightConfigNode.IsNull())
    {
      m_singleWeightConfig = singleWeightConfigNode;
      m_singleWeightConfigHasBeenSet = true;
    }
    XmlNode singleHeaderConfigNode = resultNode.FirstChild("SingleHeaderConfig");
    if(!singleHeaderConfigNode.IsNull())
    {
      m_singleHeaderConfig = singleHeaderConfigNode;
      m_singleHeaderConfigHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = ContinuousDeploymentPolicyTypeMapper::GetContinuousDeploymentPolicyTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
  }

  return *this;
}

void TrafficConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_singleWeightConfigHasBeenSet)
  {
   XmlNode singleWeightConfigNode = parentNode.CreateChildElement("SingleWeightConfig");
   m_singleWeightConfig.AddToNode(singleWeightConfigNode);
  }

  if(m_singleHeaderConfigHasBeenSet)
  {
   XmlNode singleHeaderConfigNode = parentNode.CreateChildElement("SingleHeaderConfig");
   m_singleHeaderConfig.AddToNode(singleHeaderConfigNode);
  }

  if(m_typeHasBeenSet)
  {
   XmlNode typeNode = parentNode.CreateChildElement("Type");
   typeNode.SetText(ContinuousDeploymentPolicyTypeMapper::GetNameForContinuousDeploymentPolicyType(m_type));
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
