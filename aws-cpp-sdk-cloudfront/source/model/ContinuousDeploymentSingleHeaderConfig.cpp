/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ContinuousDeploymentSingleHeaderConfig.h>
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

ContinuousDeploymentSingleHeaderConfig::ContinuousDeploymentSingleHeaderConfig() : 
    m_headerHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ContinuousDeploymentSingleHeaderConfig::ContinuousDeploymentSingleHeaderConfig(const XmlNode& xmlNode) : 
    m_headerHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = xmlNode;
}

ContinuousDeploymentSingleHeaderConfig& ContinuousDeploymentSingleHeaderConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode headerNode = resultNode.FirstChild("Header");
    if(!headerNode.IsNull())
    {
      m_header = Aws::Utils::Xml::DecodeEscapedXmlText(headerNode.GetText());
      m_headerHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText());
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void ContinuousDeploymentSingleHeaderConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_headerHasBeenSet)
  {
   XmlNode headerNode = parentNode.CreateChildElement("Header");
   headerNode.SetText(m_header);
  }

  if(m_valueHasBeenSet)
  {
   XmlNode valueNode = parentNode.CreateChildElement("Value");
   valueNode.SetText(m_value);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
