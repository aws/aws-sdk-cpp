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

#include <aws/ec2/model/ImportInstanceTaskDetails.h>
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

ImportInstanceTaskDetails::ImportInstanceTaskDetails() : 
    m_descriptionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_platform(PlatformValues::NOT_SET),
    m_platformHasBeenSet(false),
    m_volumesHasBeenSet(false)
{
}

ImportInstanceTaskDetails::ImportInstanceTaskDetails(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_platform(PlatformValues::NOT_SET),
    m_platformHasBeenSet(false),
    m_volumesHasBeenSet(false)
{
  *this = xmlNode;
}

ImportInstanceTaskDetails& ImportInstanceTaskDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = instanceIdNode.GetText();
      m_instanceIdHasBeenSet = true;
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = PlatformValuesMapper::GetPlatformValuesForName(StringUtils::Trim(platformNode.GetText().c_str()).c_str());
      m_platformHasBeenSet = true;
    }
    XmlNode volumesNode = resultNode.FirstChild("volumes");
    if(!volumesNode.IsNull())
    {
      XmlNode volumesMember = volumesNode.FirstChild("item");
      while(!volumesMember.IsNull())
      {
        m_volumes.push_back(volumesMember);
        volumesMember = volumesMember.NextNode("item");
      }

      m_volumesHasBeenSet = true;
    }
  }

  return *this;
}

void ImportInstanceTaskDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_platformHasBeenSet)
  {
      oStream << location << index << locationValue << ".Platform=" << PlatformValuesMapper::GetNameForPlatformValues(m_platform) << "&";
  }

  if(m_volumesHasBeenSet)
  {
      unsigned volumesIdx = 1;
      for(auto& item : m_volumes)
      {
        Aws::StringStream volumesSs;
        volumesSs << location << index << locationValue << ".Volumes." << volumesIdx++;
        item.OutputToStream(oStream, volumesSs.str().c_str());
      }
  }

}

void ImportInstanceTaskDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_platformHasBeenSet)
  {
      oStream << location << ".Platform=" << PlatformValuesMapper::GetNameForPlatformValues(m_platform) << "&";
  }
  if(m_volumesHasBeenSet)
  {
      unsigned volumesIdx = 1;
      for(auto& item : m_volumes)
      {
        Aws::StringStream volumesSs;
        volumesSs << location <<  ".Volumes." << volumesIdx++;
        item.OutputToStream(oStream, volumesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
