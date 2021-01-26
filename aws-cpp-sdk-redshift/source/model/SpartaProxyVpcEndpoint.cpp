/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/SpartaProxyVpcEndpoint.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

SpartaProxyVpcEndpoint::SpartaProxyVpcEndpoint() : 
    m_vpcEndpointIdHasBeenSet(false)
{
}

SpartaProxyVpcEndpoint::SpartaProxyVpcEndpoint(const XmlNode& xmlNode) : 
    m_vpcEndpointIdHasBeenSet(false)
{
  *this = xmlNode;
}

SpartaProxyVpcEndpoint& SpartaProxyVpcEndpoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode vpcEndpointIdNode = resultNode.FirstChild("VpcEndpointId");
    if(!vpcEndpointIdNode.IsNull())
    {
      m_vpcEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcEndpointIdNode.GetText());
      m_vpcEndpointIdHasBeenSet = true;
    }
  }

  return *this;
}

void SpartaProxyVpcEndpoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_vpcEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }

}

void SpartaProxyVpcEndpoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_vpcEndpointIdHasBeenSet)
  {
      oStream << location << ".VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
