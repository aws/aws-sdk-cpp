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

#include <aws/ec2/model/Ipv6Range.h>
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

Ipv6Range::Ipv6Range() : 
    m_cidrIpv6HasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

Ipv6Range::Ipv6Range(const XmlNode& xmlNode) : 
    m_cidrIpv6HasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

Ipv6Range& Ipv6Range::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cidrIpv6Node = resultNode.FirstChild("cidrIpv6");
    if(!cidrIpv6Node.IsNull())
    {
      m_cidrIpv6 = cidrIpv6Node.GetText();
      m_cidrIpv6HasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void Ipv6Range::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cidrIpv6HasBeenSet)
  {
      oStream << location << index << locationValue << ".CidrIpv6=" << StringUtils::URLEncode(m_cidrIpv6.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void Ipv6Range::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cidrIpv6HasBeenSet)
  {
      oStream << location << ".CidrIpv6=" << StringUtils::URLEncode(m_cidrIpv6.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
