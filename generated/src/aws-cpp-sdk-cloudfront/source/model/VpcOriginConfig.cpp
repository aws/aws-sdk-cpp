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

VpcOriginConfig::VpcOriginConfig() : 
    m_vpcOriginIdHasBeenSet(false)
{
}

VpcOriginConfig::VpcOriginConfig(const XmlNode& xmlNode)
  : VpcOriginConfig()
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

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
