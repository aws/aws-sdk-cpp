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

#include <aws/ec2/model/ScheduledInstancesPrivateIpAddressConfig.h>
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

ScheduledInstancesPrivateIpAddressConfig::ScheduledInstancesPrivateIpAddressConfig() : 
    m_primary(false),
    m_primaryHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
}

ScheduledInstancesPrivateIpAddressConfig::ScheduledInstancesPrivateIpAddressConfig(const XmlNode& xmlNode) : 
    m_primary(false),
    m_primaryHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
  *this = xmlNode;
}

ScheduledInstancesPrivateIpAddressConfig& ScheduledInstancesPrivateIpAddressConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode primaryNode = resultNode.FirstChild("Primary");
    if(!primaryNode.IsNull())
    {
      m_primary = StringUtils::ConvertToBool(StringUtils::Trim(primaryNode.GetText().c_str()).c_str());
      m_primaryHasBeenSet = true;
    }
    XmlNode privateIpAddressNode = resultNode.FirstChild("PrivateIpAddress");
    if(!privateIpAddressNode.IsNull())
    {
      m_privateIpAddress = privateIpAddressNode.GetText();
      m_privateIpAddressHasBeenSet = true;
    }
  }

  return *this;
}

void ScheduledInstancesPrivateIpAddressConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_primaryHasBeenSet)
  {
      oStream << location << index << locationValue << ".Primary=" << std::boolalpha << m_primary << "&";
  }

  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

}

void ScheduledInstancesPrivateIpAddressConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_primaryHasBeenSet)
  {
      oStream << location << ".Primary=" << std::boolalpha << m_primary << "&";
  }
  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
