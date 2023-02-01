/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PropagatingVgw.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

PropagatingVgw::PropagatingVgw() : 
    m_gatewayIdHasBeenSet(false)
{
}

PropagatingVgw::PropagatingVgw(const XmlNode& xmlNode) : 
    m_gatewayIdHasBeenSet(false)
{
  *this = xmlNode;
}

PropagatingVgw& PropagatingVgw::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode gatewayIdNode = resultNode.FirstChild("gatewayId");
    if(!gatewayIdNode.IsNull())
    {
      m_gatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(gatewayIdNode.GetText());
      m_gatewayIdHasBeenSet = true;
    }
  }

  return *this;
}

void PropagatingVgw::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_gatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GatewayId=" << StringUtils::URLEncode(m_gatewayId.c_str()) << "&";
  }

}

void PropagatingVgw::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_gatewayIdHasBeenSet)
  {
      oStream << location << ".GatewayId=" << StringUtils::URLEncode(m_gatewayId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
