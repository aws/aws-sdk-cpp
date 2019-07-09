/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/VpnTunnelOptionsSpecification.h>
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

VpnTunnelOptionsSpecification::VpnTunnelOptionsSpecification() : 
    m_tunnelInsideCidrHasBeenSet(false),
    m_preSharedKeyHasBeenSet(false)
{
}

VpnTunnelOptionsSpecification::VpnTunnelOptionsSpecification(const XmlNode& xmlNode) : 
    m_tunnelInsideCidrHasBeenSet(false),
    m_preSharedKeyHasBeenSet(false)
{
  *this = xmlNode;
}

VpnTunnelOptionsSpecification& VpnTunnelOptionsSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode tunnelInsideCidrNode = resultNode.FirstChild("TunnelInsideCidr");
    if(!tunnelInsideCidrNode.IsNull())
    {
      m_tunnelInsideCidr = tunnelInsideCidrNode.GetText();
      m_tunnelInsideCidrHasBeenSet = true;
    }
    XmlNode preSharedKeyNode = resultNode.FirstChild("PreSharedKey");
    if(!preSharedKeyNode.IsNull())
    {
      m_preSharedKey = preSharedKeyNode.GetText();
      m_preSharedKeyHasBeenSet = true;
    }
  }

  return *this;
}

void VpnTunnelOptionsSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_tunnelInsideCidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".TunnelInsideCidr=" << StringUtils::URLEncode(m_tunnelInsideCidr.c_str()) << "&";
  }

  if(m_preSharedKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".PreSharedKey=" << StringUtils::URLEncode(m_preSharedKey.c_str()) << "&";
  }

}

void VpnTunnelOptionsSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_tunnelInsideCidrHasBeenSet)
  {
      oStream << location << ".TunnelInsideCidr=" << StringUtils::URLEncode(m_tunnelInsideCidr.c_str()) << "&";
  }
  if(m_preSharedKeyHasBeenSet)
  {
      oStream << location << ".PreSharedKey=" << StringUtils::URLEncode(m_preSharedKey.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
