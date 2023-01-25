/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPoolCidr.h>
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

IpamPoolCidr::IpamPoolCidr() : 
    m_cidrHasBeenSet(false),
    m_state(IpamPoolCidrState::NOT_SET),
    m_stateHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_ipamPoolCidrIdHasBeenSet(false),
    m_netmaskLength(0),
    m_netmaskLengthHasBeenSet(false)
{
}

IpamPoolCidr::IpamPoolCidr(const XmlNode& xmlNode) : 
    m_cidrHasBeenSet(false),
    m_state(IpamPoolCidrState::NOT_SET),
    m_stateHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_ipamPoolCidrIdHasBeenSet(false),
    m_netmaskLength(0),
    m_netmaskLengthHasBeenSet(false)
{
  *this = xmlNode;
}

IpamPoolCidr& IpamPoolCidr::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cidrNode = resultNode.FirstChild("cidr");
    if(!cidrNode.IsNull())
    {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = IpamPoolCidrStateMapper::GetIpamPoolCidrStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode failureReasonNode = resultNode.FirstChild("failureReason");
    if(!failureReasonNode.IsNull())
    {
      m_failureReason = failureReasonNode;
      m_failureReasonHasBeenSet = true;
    }
    XmlNode ipamPoolCidrIdNode = resultNode.FirstChild("ipamPoolCidrId");
    if(!ipamPoolCidrIdNode.IsNull())
    {
      m_ipamPoolCidrId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPoolCidrIdNode.GetText());
      m_ipamPoolCidrIdHasBeenSet = true;
    }
    XmlNode netmaskLengthNode = resultNode.FirstChild("netmaskLength");
    if(!netmaskLengthNode.IsNull())
    {
      m_netmaskLength = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(netmaskLengthNode.GetText()).c_str()).c_str());
      m_netmaskLengthHasBeenSet = true;
    }
  }

  return *this;
}

void IpamPoolCidr::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << IpamPoolCidrStateMapper::GetNameForIpamPoolCidrState(m_state) << "&";
  }

  if(m_failureReasonHasBeenSet)
  {
      Aws::StringStream failureReasonLocationAndMemberSs;
      failureReasonLocationAndMemberSs << location << index << locationValue << ".FailureReason";
      m_failureReason.OutputToStream(oStream, failureReasonLocationAndMemberSs.str().c_str());
  }

  if(m_ipamPoolCidrIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamPoolCidrId=" << StringUtils::URLEncode(m_ipamPoolCidrId.c_str()) << "&";
  }

  if(m_netmaskLengthHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetmaskLength=" << m_netmaskLength << "&";
  }

}

void IpamPoolCidr::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cidrHasBeenSet)
  {
      oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << IpamPoolCidrStateMapper::GetNameForIpamPoolCidrState(m_state) << "&";
  }
  if(m_failureReasonHasBeenSet)
  {
      Aws::String failureReasonLocationAndMember(location);
      failureReasonLocationAndMember += ".FailureReason";
      m_failureReason.OutputToStream(oStream, failureReasonLocationAndMember.c_str());
  }
  if(m_ipamPoolCidrIdHasBeenSet)
  {
      oStream << location << ".IpamPoolCidrId=" << StringUtils::URLEncode(m_ipamPoolCidrId.c_str()) << "&";
  }
  if(m_netmaskLengthHasBeenSet)
  {
      oStream << location << ".NetmaskLength=" << m_netmaskLength << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
