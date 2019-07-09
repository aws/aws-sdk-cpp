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

#include <aws/ec2/model/PublicIpv4PoolRange.h>
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

PublicIpv4PoolRange::PublicIpv4PoolRange() : 
    m_firstAddressHasBeenSet(false),
    m_lastAddressHasBeenSet(false),
    m_addressCount(0),
    m_addressCountHasBeenSet(false),
    m_availableAddressCount(0),
    m_availableAddressCountHasBeenSet(false)
{
}

PublicIpv4PoolRange::PublicIpv4PoolRange(const XmlNode& xmlNode) : 
    m_firstAddressHasBeenSet(false),
    m_lastAddressHasBeenSet(false),
    m_addressCount(0),
    m_addressCountHasBeenSet(false),
    m_availableAddressCount(0),
    m_availableAddressCountHasBeenSet(false)
{
  *this = xmlNode;
}

PublicIpv4PoolRange& PublicIpv4PoolRange::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode firstAddressNode = resultNode.FirstChild("firstAddress");
    if(!firstAddressNode.IsNull())
    {
      m_firstAddress = firstAddressNode.GetText();
      m_firstAddressHasBeenSet = true;
    }
    XmlNode lastAddressNode = resultNode.FirstChild("lastAddress");
    if(!lastAddressNode.IsNull())
    {
      m_lastAddress = lastAddressNode.GetText();
      m_lastAddressHasBeenSet = true;
    }
    XmlNode addressCountNode = resultNode.FirstChild("addressCount");
    if(!addressCountNode.IsNull())
    {
      m_addressCount = StringUtils::ConvertToInt32(StringUtils::Trim(addressCountNode.GetText().c_str()).c_str());
      m_addressCountHasBeenSet = true;
    }
    XmlNode availableAddressCountNode = resultNode.FirstChild("availableAddressCount");
    if(!availableAddressCountNode.IsNull())
    {
      m_availableAddressCount = StringUtils::ConvertToInt32(StringUtils::Trim(availableAddressCountNode.GetText().c_str()).c_str());
      m_availableAddressCountHasBeenSet = true;
    }
  }

  return *this;
}

void PublicIpv4PoolRange::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_firstAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".FirstAddress=" << StringUtils::URLEncode(m_firstAddress.c_str()) << "&";
  }

  if(m_lastAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastAddress=" << StringUtils::URLEncode(m_lastAddress.c_str()) << "&";
  }

  if(m_addressCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".AddressCount=" << m_addressCount << "&";
  }

  if(m_availableAddressCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailableAddressCount=" << m_availableAddressCount << "&";
  }

}

void PublicIpv4PoolRange::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_firstAddressHasBeenSet)
  {
      oStream << location << ".FirstAddress=" << StringUtils::URLEncode(m_firstAddress.c_str()) << "&";
  }
  if(m_lastAddressHasBeenSet)
  {
      oStream << location << ".LastAddress=" << StringUtils::URLEncode(m_lastAddress.c_str()) << "&";
  }
  if(m_addressCountHasBeenSet)
  {
      oStream << location << ".AddressCount=" << m_addressCount << "&";
  }
  if(m_availableAddressCountHasBeenSet)
  {
      oStream << location << ".AvailableAddressCount=" << m_availableAddressCount << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
