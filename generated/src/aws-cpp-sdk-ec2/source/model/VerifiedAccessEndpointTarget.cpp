/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessEndpointTarget.h>
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

VerifiedAccessEndpointTarget::VerifiedAccessEndpointTarget(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

VerifiedAccessEndpointTarget& VerifiedAccessEndpointTarget::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode verifiedAccessEndpointIdNode = resultNode.FirstChild("verifiedAccessEndpointId");
    if(!verifiedAccessEndpointIdNode.IsNull())
    {
      m_verifiedAccessEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(verifiedAccessEndpointIdNode.GetText());
      m_verifiedAccessEndpointIdHasBeenSet = true;
    }
    XmlNode verifiedAccessEndpointTargetIpAddressNode = resultNode.FirstChild("verifiedAccessEndpointTargetIpAddress");
    if(!verifiedAccessEndpointTargetIpAddressNode.IsNull())
    {
      m_verifiedAccessEndpointTargetIpAddress = Aws::Utils::Xml::DecodeEscapedXmlText(verifiedAccessEndpointTargetIpAddressNode.GetText());
      m_verifiedAccessEndpointTargetIpAddressHasBeenSet = true;
    }
    XmlNode verifiedAccessEndpointTargetDnsNode = resultNode.FirstChild("verifiedAccessEndpointTargetDns");
    if(!verifiedAccessEndpointTargetDnsNode.IsNull())
    {
      m_verifiedAccessEndpointTargetDns = Aws::Utils::Xml::DecodeEscapedXmlText(verifiedAccessEndpointTargetDnsNode.GetText());
      m_verifiedAccessEndpointTargetDnsHasBeenSet = true;
    }
  }

  return *this;
}

void VerifiedAccessEndpointTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_verifiedAccessEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerifiedAccessEndpointId=" << StringUtils::URLEncode(m_verifiedAccessEndpointId.c_str()) << "&";
  }

  if(m_verifiedAccessEndpointTargetIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerifiedAccessEndpointTargetIpAddress=" << StringUtils::URLEncode(m_verifiedAccessEndpointTargetIpAddress.c_str()) << "&";
  }

  if(m_verifiedAccessEndpointTargetDnsHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerifiedAccessEndpointTargetDns=" << StringUtils::URLEncode(m_verifiedAccessEndpointTargetDns.c_str()) << "&";
  }

}

void VerifiedAccessEndpointTarget::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_verifiedAccessEndpointIdHasBeenSet)
  {
      oStream << location << ".VerifiedAccessEndpointId=" << StringUtils::URLEncode(m_verifiedAccessEndpointId.c_str()) << "&";
  }
  if(m_verifiedAccessEndpointTargetIpAddressHasBeenSet)
  {
      oStream << location << ".VerifiedAccessEndpointTargetIpAddress=" << StringUtils::URLEncode(m_verifiedAccessEndpointTargetIpAddress.c_str()) << "&";
  }
  if(m_verifiedAccessEndpointTargetDnsHasBeenSet)
  {
      oStream << location << ".VerifiedAccessEndpointTargetDns=" << StringUtils::URLEncode(m_verifiedAccessEndpointTargetDns.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
