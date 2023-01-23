/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceBlockDeviceMapping.h>
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

InstanceBlockDeviceMapping::InstanceBlockDeviceMapping() : 
    m_deviceNameHasBeenSet(false),
    m_ebsHasBeenSet(false)
{
}

InstanceBlockDeviceMapping::InstanceBlockDeviceMapping(const XmlNode& xmlNode) : 
    m_deviceNameHasBeenSet(false),
    m_ebsHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceBlockDeviceMapping& InstanceBlockDeviceMapping::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode deviceNameNode = resultNode.FirstChild("deviceName");
    if(!deviceNameNode.IsNull())
    {
      m_deviceName = Aws::Utils::Xml::DecodeEscapedXmlText(deviceNameNode.GetText());
      m_deviceNameHasBeenSet = true;
    }
    XmlNode ebsNode = resultNode.FirstChild("ebs");
    if(!ebsNode.IsNull())
    {
      m_ebs = ebsNode;
      m_ebsHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceBlockDeviceMapping::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

}

void InstanceBlockDeviceMapping::OutputToStream(Aws::OStream& oStream, const char* location) const
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
