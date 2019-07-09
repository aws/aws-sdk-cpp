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

#include <aws/ec2/model/LaunchTemplateBlockDeviceMappingRequest.h>
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

LaunchTemplateBlockDeviceMappingRequest::LaunchTemplateBlockDeviceMappingRequest() : 
    m_deviceNameHasBeenSet(false),
    m_virtualNameHasBeenSet(false),
    m_ebsHasBeenSet(false),
    m_noDeviceHasBeenSet(false)
{
}

LaunchTemplateBlockDeviceMappingRequest::LaunchTemplateBlockDeviceMappingRequest(const XmlNode& xmlNode) : 
    m_deviceNameHasBeenSet(false),
    m_virtualNameHasBeenSet(false),
    m_ebsHasBeenSet(false),
    m_noDeviceHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplateBlockDeviceMappingRequest& LaunchTemplateBlockDeviceMappingRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode deviceNameNode = resultNode.FirstChild("DeviceName");
    if(!deviceNameNode.IsNull())
    {
      m_deviceName = deviceNameNode.GetText();
      m_deviceNameHasBeenSet = true;
    }
    XmlNode virtualNameNode = resultNode.FirstChild("VirtualName");
    if(!virtualNameNode.IsNull())
    {
      m_virtualName = virtualNameNode.GetText();
      m_virtualNameHasBeenSet = true;
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
      m_noDevice = noDeviceNode.GetText();
      m_noDeviceHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateBlockDeviceMappingRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_deviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
  }

  if(m_virtualNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".VirtualName=" << StringUtils::URLEncode(m_virtualName.c_str()) << "&";
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

}

void LaunchTemplateBlockDeviceMappingRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_deviceNameHasBeenSet)
  {
      oStream << location << ".DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
  }
  if(m_virtualNameHasBeenSet)
  {
      oStream << location << ".VirtualName=" << StringUtils::URLEncode(m_virtualName.c_str()) << "&";
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
