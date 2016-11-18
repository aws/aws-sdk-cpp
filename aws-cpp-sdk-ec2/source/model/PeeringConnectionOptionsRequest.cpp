/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_allowEgressFromLocalClassicLinkToRemoteVpc(false),
    m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet(false),
    m_allowEgressFromLocalVpcToRemoteClassicLink(false),
    m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet(false)
{
}

PeeringConnectionOptionsRequest::PeeringConnectionOptionsRequest(const XmlNode& xmlNode) : 
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
    XmlNode allowEgressFromLocalClassicLinkToRemoteVpcNode = resultNode.FirstChild("AllowEgressFromLocalClassicLinkToRemoteVpc");
    if(!allowEgressFromLocalClassicLinkToRemoteVpcNode.IsNull())
    {
      m_allowEgressFromLocalClassicLinkToRemoteVpc = StringUtils::ConvertToBool(StringUtils::Trim(allowEgressFromLocalClassicLinkToRemoteVpcNode.GetText().c_str()).c_str());
      m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = true;
    }
    XmlNode allowEgressFromLocalVpcToRemoteClassicLinkNode = resultNode.FirstChild("AllowEgressFromLocalVpcToRemoteClassicLink");
    if(!allowEgressFromLocalVpcToRemoteClassicLinkNode.IsNull())
    {
      m_allowEgressFromLocalVpcToRemoteClassicLink = StringUtils::ConvertToBool(StringUtils::Trim(allowEgressFromLocalVpcToRemoteClassicLinkNode.GetText().c_str()).c_str());
      m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = true;
    }
  }

  return *this;
}

void PeeringConnectionOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowEgressFromLocalClassicLinkToRemoteVpc=" << m_allowEgressFromLocalClassicLinkToRemoteVpc << "&";
  }

  if(m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowEgressFromLocalVpcToRemoteClassicLink=" << m_allowEgressFromLocalVpcToRemoteClassicLink << "&";
  }

}

void PeeringConnectionOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet)
  {
      oStream << location << ".AllowEgressFromLocalClassicLinkToRemoteVpc=" << m_allowEgressFromLocalClassicLinkToRemoteVpc << "&";
  }
  if(m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet)
  {
      oStream << location << ".AllowEgressFromLocalVpcToRemoteClassicLink=" << m_allowEgressFromLocalVpcToRemoteClassicLink << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
