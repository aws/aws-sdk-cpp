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

#include <aws/ec2/model/PeeringConnectionOptions.h>
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

PeeringConnectionOptions::PeeringConnectionOptions() : 
    m_allowEgressFromLocalClassicLinkToRemoteVpc(false),
    m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet(false),
    m_allowEgressFromLocalVpcToRemoteClassicLink(false),
    m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet(false),
    m_allowDnsResolutionFromRemoteVpc(false),
    m_allowDnsResolutionFromRemoteVpcHasBeenSet(false)
{
}

PeeringConnectionOptions::PeeringConnectionOptions(const XmlNode& xmlNode) : 
    m_allowEgressFromLocalClassicLinkToRemoteVpc(false),
    m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet(false),
    m_allowEgressFromLocalVpcToRemoteClassicLink(false),
    m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet(false),
    m_allowDnsResolutionFromRemoteVpc(false),
    m_allowDnsResolutionFromRemoteVpcHasBeenSet(false)
{
  *this = xmlNode;
}

PeeringConnectionOptions& PeeringConnectionOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allowEgressFromLocalClassicLinkToRemoteVpcNode = resultNode.FirstChild("allowEgressFromLocalClassicLinkToRemoteVpc");
    if(!allowEgressFromLocalClassicLinkToRemoteVpcNode.IsNull())
    {
      m_allowEgressFromLocalClassicLinkToRemoteVpc = StringUtils::ConvertToBool(StringUtils::Trim(allowEgressFromLocalClassicLinkToRemoteVpcNode.GetText().c_str()).c_str());
      m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = true;
    }
    XmlNode allowEgressFromLocalVpcToRemoteClassicLinkNode = resultNode.FirstChild("allowEgressFromLocalVpcToRemoteClassicLink");
    if(!allowEgressFromLocalVpcToRemoteClassicLinkNode.IsNull())
    {
      m_allowEgressFromLocalVpcToRemoteClassicLink = StringUtils::ConvertToBool(StringUtils::Trim(allowEgressFromLocalVpcToRemoteClassicLinkNode.GetText().c_str()).c_str());
      m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = true;
    }
    XmlNode allowDnsResolutionFromRemoteVpcNode = resultNode.FirstChild("allowDnsResolutionFromRemoteVpc");
    if(!allowDnsResolutionFromRemoteVpcNode.IsNull())
    {
      m_allowDnsResolutionFromRemoteVpc = StringUtils::ConvertToBool(StringUtils::Trim(allowDnsResolutionFromRemoteVpcNode.GetText().c_str()).c_str());
      m_allowDnsResolutionFromRemoteVpcHasBeenSet = true;
    }
  }

  return *this;
}

void PeeringConnectionOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowEgressFromLocalClassicLinkToRemoteVpc=" << std::boolalpha << m_allowEgressFromLocalClassicLinkToRemoteVpc << "&";
  }

  if(m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowEgressFromLocalVpcToRemoteClassicLink=" << std::boolalpha << m_allowEgressFromLocalVpcToRemoteClassicLink << "&";
  }

  if(m_allowDnsResolutionFromRemoteVpcHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowDnsResolutionFromRemoteVpc=" << std::boolalpha << m_allowDnsResolutionFromRemoteVpc << "&";
  }

}

void PeeringConnectionOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet)
  {
      oStream << location << ".AllowEgressFromLocalClassicLinkToRemoteVpc=" << std::boolalpha << m_allowEgressFromLocalClassicLinkToRemoteVpc << "&";
  }
  if(m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet)
  {
      oStream << location << ".AllowEgressFromLocalVpcToRemoteClassicLink=" << std::boolalpha << m_allowEgressFromLocalVpcToRemoteClassicLink << "&";
  }
  if(m_allowDnsResolutionFromRemoteVpcHasBeenSet)
  {
      oStream << location << ".AllowDnsResolutionFromRemoteVpc=" << std::boolalpha << m_allowDnsResolutionFromRemoteVpc << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
