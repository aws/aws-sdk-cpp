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

#include <aws/ec2/model/ClassicLinkDnsSupport.h>
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

ClassicLinkDnsSupport::ClassicLinkDnsSupport() : 
    m_classicLinkDnsSupported(false),
    m_classicLinkDnsSupportedHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

ClassicLinkDnsSupport::ClassicLinkDnsSupport(const XmlNode& xmlNode) : 
    m_classicLinkDnsSupported(false),
    m_classicLinkDnsSupportedHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = xmlNode;
}

ClassicLinkDnsSupport& ClassicLinkDnsSupport::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode classicLinkDnsSupportedNode = resultNode.FirstChild("classicLinkDnsSupported");
    if(!classicLinkDnsSupportedNode.IsNull())
    {
      m_classicLinkDnsSupported = StringUtils::ConvertToBool(StringUtils::Trim(classicLinkDnsSupportedNode.GetText().c_str()).c_str());
      m_classicLinkDnsSupportedHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
  }

  return *this;
}

void ClassicLinkDnsSupport::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_classicLinkDnsSupportedHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClassicLinkDnsSupported=" << std::boolalpha << m_classicLinkDnsSupported << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

}

void ClassicLinkDnsSupport::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_classicLinkDnsSupportedHasBeenSet)
  {
      oStream << location << ".ClassicLinkDnsSupported=" << std::boolalpha << m_classicLinkDnsSupported << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
