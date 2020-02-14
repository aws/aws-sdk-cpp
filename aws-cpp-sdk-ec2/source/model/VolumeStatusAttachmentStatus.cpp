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

#include <aws/ec2/model/VolumeStatusAttachmentStatus.h>
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

VolumeStatusAttachmentStatus::VolumeStatusAttachmentStatus() : 
    m_ioPerformanceHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

VolumeStatusAttachmentStatus::VolumeStatusAttachmentStatus(const XmlNode& xmlNode) : 
    m_ioPerformanceHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
  *this = xmlNode;
}

VolumeStatusAttachmentStatus& VolumeStatusAttachmentStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ioPerformanceNode = resultNode.FirstChild("ioPerformance");
    if(!ioPerformanceNode.IsNull())
    {
      m_ioPerformance = Aws::Utils::Xml::DecodeEscapedXmlText(ioPerformanceNode.GetText());
      m_ioPerformanceHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
  }

  return *this;
}

void VolumeStatusAttachmentStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ioPerformanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".IoPerformance=" << StringUtils::URLEncode(m_ioPerformance.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

}

void VolumeStatusAttachmentStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ioPerformanceHasBeenSet)
  {
      oStream << location << ".IoPerformance=" << StringUtils::URLEncode(m_ioPerformance.c_str()) << "&";
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
