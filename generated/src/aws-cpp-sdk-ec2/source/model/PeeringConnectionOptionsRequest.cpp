/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PeeringConnectionOptionsRequest.h>
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

PeeringConnectionOptionsRequest::PeeringConnectionOptionsRequest() : 
    m_allowDnsResolutionFromRemoteVpc(false),
    m_allowDnsResolutionFromRemoteVpcHasBeenSet(false),
    m_allowEgressFromLocalClassicLinkToRemoteVpc(false),
    m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet(false),
    m_allowEgressFromLocalVpcToRemoteClassicLink(false),
    m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet(false)
{
}

PeeringConnectionOptionsRequest::PeeringConnectionOptionsRequest(const XmlNode& xmlNode) : 
    m_allowDnsResolutionFromRemoteVpc(false),
    m_allowDnsResolutionFromRemoteVpcHasBeenSet(false),
    m_allowEgressFromLocalClassicLinkToRemoteVpc(false),
    m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet(false),
    m_allowEgressFromLocalVpcToRemoteClassicLink(false),
    m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet(false)
{
  *this = xmlNode;
}

PeeringConnectionOptionsRequest& PeeringConnectionOptionsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allowDnsResolutionFromRemoteVpcNode = resultNode.FirstChild("AllowDnsResolutionFromRemoteVpc");
    if(!allowDnsResolutionFromRemoteVpcNode.IsNull())
    {
      m_allowDnsResolutionFromRemoteVpc = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allowDnsResolutionFromRemoteVpcNode.GetText()).c_str()).c_str());
      m_allowDnsResolutionFromRemoteVpcHasBeenSet = true;
    }
    XmlNode allowEgressFromLocalClassicLinkToRemoteVpcNode = resultNode.FirstChild("AllowEgressFromLocalClassicLinkToRemoteVpc");
    if(!allowEgressFromLocalClassicLinkToRemoteVpcNode.IsNull())
    {
      m_allowEgressFromLocalClassicLinkToRemoteVpc = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allowEgressFromLocalClassicLinkToRemoteVpcNode.GetText()).c_str()).c_str());
      m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = true;
    }
    XmlNode allowEgressFromLocalVpcToRemoteClassicLinkNode = resultNode.FirstChild("AllowEgressFromLocalVpcToRemoteClassicLink");
    if(!allowEgressFromLocalVpcToRemoteClassicLinkNode.IsNull())
    {
      m_allowEgressFromLocalVpcToRemoteClassicLink = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allowEgressFromLocalVpcToRemoteClassicLinkNode.GetText()).c_str()).c_str());
      m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = true;
    }
  }

  return *this;
}

void PeeringConnectionOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allowDnsResolutionFromRemoteVpcHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowDnsResolutionFromRemoteVpc=" << std::boolalpha << m_allowDnsResolutionFromRemoteVpc << "&";
  }

  if(m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowEgressFromLocalClassicLinkToRemoteVpc=" << std::boolalpha << m_allowEgressFromLocalClassicLinkToRemoteVpc << "&";
  }

  if(m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowEgressFromLocalVpcToRemoteClassicLink=" << std::boolalpha << m_allowEgressFromLocalVpcToRemoteClassicLink << "&";
  }

}

void PeeringConnectionOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allowDnsResolutionFromRemoteVpcHasBeenSet)
  {
      oStream << location << ".AllowDnsResolutionFromRemoteVpc=" << std::boolalpha << m_allowDnsResolutionFromRemoteVpc << "&";
  }
  if(m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet)
  {
      oStream << location << ".AllowEgressFromLocalClassicLinkToRemoteVpc=" << std::boolalpha << m_allowEgressFromLocalClassicLinkToRemoteVpc << "&";
  }
  if(m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet)
  {
      oStream << location << ".AllowEgressFromLocalVpcToRemoteClassicLink=" << std::boolalpha << m_allowEgressFromLocalVpcToRemoteClassicLink << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
