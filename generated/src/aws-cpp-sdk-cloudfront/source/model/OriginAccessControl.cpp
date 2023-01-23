/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/OriginAccessControl.h>
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

OriginAccessControl::OriginAccessControl() : 
    m_idHasBeenSet(false),
    m_originAccessControlConfigHasBeenSet(false)
{
}

OriginAccessControl::OriginAccessControl(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_originAccessControlConfigHasBeenSet(false)
{
  *this = xmlNode;
}

OriginAccessControl& OriginAccessControl::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode originAccessControlConfigNode = resultNode.FirstChild("OriginAccessControlConfig");
    if(!originAccessControlConfigNode.IsNull())
    {
      m_originAccessControlConfig = originAccessControlConfigNode;
      m_originAccessControlConfigHasBeenSet = true;
    }
  }

  return *this;
}

void OriginAccessControl::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_originAccessControlConfigHasBeenSet)
  {
   XmlNode originAccessControlConfigNode = parentNode.CreateChildElement("OriginAccessControlConfig");
   m_originAccessControlConfig.AddToNode(originAccessControlConfigNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
