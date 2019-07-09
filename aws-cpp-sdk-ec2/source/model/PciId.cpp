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

#include <aws/ec2/model/PciId.h>
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

PciId::PciId() : 
    m_deviceIdHasBeenSet(false),
    m_vendorIdHasBeenSet(false),
    m_subsystemIdHasBeenSet(false),
    m_subsystemVendorIdHasBeenSet(false)
{
}

PciId::PciId(const XmlNode& xmlNode) : 
    m_deviceIdHasBeenSet(false),
    m_vendorIdHasBeenSet(false),
    m_subsystemIdHasBeenSet(false),
    m_subsystemVendorIdHasBeenSet(false)
{
  *this = xmlNode;
}

PciId& PciId::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode deviceIdNode = resultNode.FirstChild("DeviceId");
    if(!deviceIdNode.IsNull())
    {
      m_deviceId = deviceIdNode.GetText();
      m_deviceIdHasBeenSet = true;
    }
    XmlNode vendorIdNode = resultNode.FirstChild("VendorId");
    if(!vendorIdNode.IsNull())
    {
      m_vendorId = vendorIdNode.GetText();
      m_vendorIdHasBeenSet = true;
    }
    XmlNode subsystemIdNode = resultNode.FirstChild("SubsystemId");
    if(!subsystemIdNode.IsNull())
    {
      m_subsystemId = subsystemIdNode.GetText();
      m_subsystemIdHasBeenSet = true;
    }
    XmlNode subsystemVendorIdNode = resultNode.FirstChild("SubsystemVendorId");
    if(!subsystemVendorIdNode.IsNull())
    {
      m_subsystemVendorId = subsystemVendorIdNode.GetText();
      m_subsystemVendorIdHasBeenSet = true;
    }
  }

  return *this;
}

void PciId::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_deviceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeviceId=" << StringUtils::URLEncode(m_deviceId.c_str()) << "&";
  }

  if(m_vendorIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VendorId=" << StringUtils::URLEncode(m_vendorId.c_str()) << "&";
  }

  if(m_subsystemIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubsystemId=" << StringUtils::URLEncode(m_subsystemId.c_str()) << "&";
  }

  if(m_subsystemVendorIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubsystemVendorId=" << StringUtils::URLEncode(m_subsystemVendorId.c_str()) << "&";
  }

}

void PciId::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_deviceIdHasBeenSet)
  {
      oStream << location << ".DeviceId=" << StringUtils::URLEncode(m_deviceId.c_str()) << "&";
  }
  if(m_vendorIdHasBeenSet)
  {
      oStream << location << ".VendorId=" << StringUtils::URLEncode(m_vendorId.c_str()) << "&";
  }
  if(m_subsystemIdHasBeenSet)
  {
      oStream << location << ".SubsystemId=" << StringUtils::URLEncode(m_subsystemId.c_str()) << "&";
  }
  if(m_subsystemVendorIdHasBeenSet)
  {
      oStream << location << ".SubsystemVendorId=" << StringUtils::URLEncode(m_subsystemVendorId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
