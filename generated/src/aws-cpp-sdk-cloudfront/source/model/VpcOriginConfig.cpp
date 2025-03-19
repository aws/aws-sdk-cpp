/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/VpcOriginConfig.h>
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

VpcOriginConfig::VpcOriginConfig(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

VpcOriginConfig& VpcOriginConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode vpcOriginIdNode = resultNode.FirstChild("VpcOriginId");
    if(!vpcOriginIdNode.IsNull())
    {
      m_vpcOriginId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcOriginIdNode.GetText());
      m_vpcOriginIdHasBeenSet = true;
    }
    XmlNode originReadTimeoutNode = resultNode.FirstChild("OriginReadTimeout");
    if(!originReadTimeoutNode.IsNull())
    {
      m_originReadTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originReadTimeoutNode.GetText()).c_str()).c_str());
      m_originReadTimeoutHasBeenSet = true;
    }
    XmlNode originKeepaliveTimeoutNode = resultNode.FirstChild("OriginKeepaliveTimeout");
    if(!originKeepaliveTimeoutNode.IsNull())
    {
      m_originKeepaliveTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originKeepaliveTimeoutNode.GetText()).c_str()).c_str());
      m_originKeepaliveTimeoutHasBeenSet = true;
    }
  }

  return *this;
}

void VpcOriginConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_vpcOriginIdHasBeenSet)
  {
   XmlNode vpcOriginIdNode = parentNode.CreateChildElement("VpcOriginId");
   vpcOriginIdNode.SetText(m_vpcOriginId);
  }

  if(m_originReadTimeoutHasBeenSet)
  {
   XmlNode originReadTimeoutNode = parentNode.CreateChildElement("OriginReadTimeout");
   ss << m_originReadTimeout;
   originReadTimeoutNode.SetText(ss.str());
   ss.str("");
  }

  if(m_originKeepaliveTimeoutHasBeenSet)
  {
   XmlNode originKeepaliveTimeoutNode = parentNode.CreateChildElement("OriginKeepaliveTimeout");
   ss << m_originKeepaliveTimeout;
   originKeepaliveTimeoutNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
