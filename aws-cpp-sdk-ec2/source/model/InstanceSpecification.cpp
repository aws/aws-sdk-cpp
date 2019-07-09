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

#include <aws/ec2/model/InstanceSpecification.h>
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

InstanceSpecification::InstanceSpecification() : 
    m_instanceIdHasBeenSet(false),
    m_excludeBootVolume(false),
    m_excludeBootVolumeHasBeenSet(false)
{
}

InstanceSpecification::InstanceSpecification(const XmlNode& xmlNode) : 
    m_instanceIdHasBeenSet(false),
    m_excludeBootVolume(false),
    m_excludeBootVolumeHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceSpecification& InstanceSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("InstanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = instanceIdNode.GetText();
      m_instanceIdHasBeenSet = true;
    }
    XmlNode excludeBootVolumeNode = resultNode.FirstChild("ExcludeBootVolume");
    if(!excludeBootVolumeNode.IsNull())
    {
      m_excludeBootVolume = StringUtils::ConvertToBool(StringUtils::Trim(excludeBootVolumeNode.GetText().c_str()).c_str());
      m_excludeBootVolumeHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_excludeBootVolumeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExcludeBootVolume=" << std::boolalpha << m_excludeBootVolume << "&";
  }

}

void InstanceSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_excludeBootVolumeHasBeenSet)
  {
      oStream << location << ".ExcludeBootVolume=" << std::boolalpha << m_excludeBootVolume << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
