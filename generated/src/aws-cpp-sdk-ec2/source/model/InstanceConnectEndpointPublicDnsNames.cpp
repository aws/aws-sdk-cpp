/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceConnectEndpointPublicDnsNames.h>
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

InstanceConnectEndpointPublicDnsNames::InstanceConnectEndpointPublicDnsNames(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InstanceConnectEndpointPublicDnsNames& InstanceConnectEndpointPublicDnsNames::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipv4Node = resultNode.FirstChild("ipv4");
    if(!ipv4Node.IsNull())
    {
      m_ipv4 = ipv4Node;
      m_ipv4HasBeenSet = true;
    }
    XmlNode dualstackNode = resultNode.FirstChild("dualstack");
    if(!dualstackNode.IsNull())
    {
      m_dualstack = dualstackNode;
      m_dualstackHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceConnectEndpointPublicDnsNames::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipv4HasBeenSet)
  {
      Aws::StringStream ipv4LocationAndMemberSs;
      ipv4LocationAndMemberSs << location << index << locationValue << ".Ipv4";
      m_ipv4.OutputToStream(oStream, ipv4LocationAndMemberSs.str().c_str());
  }

  if(m_dualstackHasBeenSet)
  {
      Aws::StringStream dualstackLocationAndMemberSs;
      dualstackLocationAndMemberSs << location << index << locationValue << ".Dualstack";
      m_dualstack.OutputToStream(oStream, dualstackLocationAndMemberSs.str().c_str());
  }

}

void InstanceConnectEndpointPublicDnsNames::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipv4HasBeenSet)
  {
      Aws::String ipv4LocationAndMember(location);
      ipv4LocationAndMember += ".Ipv4";
      m_ipv4.OutputToStream(oStream, ipv4LocationAndMember.c_str());
  }
  if(m_dualstackHasBeenSet)
  {
      Aws::String dualstackLocationAndMember(location);
      dualstackLocationAndMember += ".Dualstack";
      m_dualstack.OutputToStream(oStream, dualstackLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
