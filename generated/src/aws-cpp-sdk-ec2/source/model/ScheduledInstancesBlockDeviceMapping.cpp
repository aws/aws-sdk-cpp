﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ScheduledInstancesBlockDeviceMapping.h>
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

ScheduledInstancesBlockDeviceMapping::ScheduledInstancesBlockDeviceMapping(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ScheduledInstancesBlockDeviceMapping& ScheduledInstancesBlockDeviceMapping::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode deviceNameNode = resultNode.FirstChild("DeviceName");
    if(!deviceNameNode.IsNull())
    {
      m_deviceName = Aws::Utils::Xml::DecodeEscapedXmlText(deviceNameNode.GetText());
      m_deviceNameHasBeenSet = true;
    }
    XmlNode ebsNode = resultNode.FirstChild("Ebs");
    if(!ebsNode.IsNull())
    {
      m_ebs = ebsNode;
      m_ebsHasBeenSet = true;
    }
    XmlNode noDeviceNode = resultNode.FirstChild("NoDevice");
    if(!noDeviceNode.IsNull())
    {
      m_noDevice = Aws::Utils::Xml::DecodeEscapedXmlText(noDeviceNode.GetText());
      m_noDeviceHasBeenSet = true;
    }
    XmlNode virtualNameNode = resultNode.FirstChild("VirtualName");
    if(!virtualNameNode.IsNull())
    {
      m_virtualName = Aws::Utils::Xml::DecodeEscapedXmlText(virtualNameNode.GetText());
      m_virtualNameHasBeenSet = true;
    }
  }

  return *this;
}

void ScheduledInstancesBlockDeviceMapping::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_deviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
  }

  if(m_ebsHasBeenSet)
  {
      Aws::StringStream ebsLocationAndMemberSs;
      ebsLocationAndMemberSs << location << index << locationValue << ".Ebs";
      m_ebs.OutputToStream(oStream, ebsLocationAndMemberSs.str().c_str());
  }

  if(m_noDeviceHasBeenSet)
  {
      oStream << location << index << locationValue << ".NoDevice=" << StringUtils::URLEncode(m_noDevice.c_str()) << "&";
  }

  if(m_virtualNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".VirtualName=" << StringUtils::URLEncode(m_virtualName.c_str()) << "&";
  }

}

void ScheduledInstancesBlockDeviceMapping::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_deviceNameHasBeenSet)
  {
      oStream << location << ".DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
  }
  if(m_ebsHasBeenSet)
  {
      Aws::String ebsLocationAndMember(location);
      ebsLocationAndMember += ".Ebs";
      m_ebs.OutputToStream(oStream, ebsLocationAndMember.c_str());
  }
  if(m_noDeviceHasBeenSet)
  {
      oStream << location << ".NoDevice=" << StringUtils::URLEncode(m_noDevice.c_str()) << "&";
  }
  if(m_virtualNameHasBeenSet)
  {
      oStream << location << ".VirtualName=" << StringUtils::URLEncode(m_virtualName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
