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

#include <aws/ec2/model/LaunchTemplate.h>
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

LaunchTemplate::LaunchTemplate() : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_defaultVersionNumber(0),
    m_defaultVersionNumberHasBeenSet(false),
    m_latestVersionNumber(0),
    m_latestVersionNumberHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

LaunchTemplate::LaunchTemplate(const XmlNode& xmlNode) : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_defaultVersionNumber(0),
    m_defaultVersionNumberHasBeenSet(false),
    m_latestVersionNumber(0),
    m_latestVersionNumberHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplate& LaunchTemplate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode launchTemplateIdNode = resultNode.FirstChild("launchTemplateId");
    if(!launchTemplateIdNode.IsNull())
    {
      m_launchTemplateId = launchTemplateIdNode.GetText();
      m_launchTemplateIdHasBeenSet = true;
    }
    XmlNode launchTemplateNameNode = resultNode.FirstChild("launchTemplateName");
    if(!launchTemplateNameNode.IsNull())
    {
      m_launchTemplateName = launchTemplateNameNode.GetText();
      m_launchTemplateNameHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(createTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode createdByNode = resultNode.FirstChild("createdBy");
    if(!createdByNode.IsNull())
    {
      m_createdBy = createdByNode.GetText();
      m_createdByHasBeenSet = true;
    }
    XmlNode defaultVersionNumberNode = resultNode.FirstChild("defaultVersionNumber");
    if(!defaultVersionNumberNode.IsNull())
    {
      m_defaultVersionNumber = StringUtils::ConvertToInt64(StringUtils::Trim(defaultVersionNumberNode.GetText().c_str()).c_str());
      m_defaultVersionNumberHasBeenSet = true;
    }
    XmlNode latestVersionNumberNode = resultNode.FirstChild("latestVersionNumber");
    if(!latestVersionNumberNode.IsNull())
    {
      m_latestVersionNumber = StringUtils::ConvertToInt64(StringUtils::Trim(latestVersionNumberNode.GetText().c_str()).c_str());
      m_latestVersionNumberHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_launchTemplateIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchTemplateId=" << StringUtils::URLEncode(m_launchTemplateId.c_str()) << "&";
  }

  if(m_launchTemplateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchTemplateName=" << StringUtils::URLEncode(m_launchTemplateName.c_str()) << "&";
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_createdByHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedBy=" << StringUtils::URLEncode(m_createdBy.c_str()) << "&";
  }

  if(m_defaultVersionNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultVersionNumber=" << m_defaultVersionNumber << "&";
  }

  if(m_latestVersionNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".LatestVersionNumber=" << m_latestVersionNumber << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void LaunchTemplate::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_launchTemplateIdHasBeenSet)
  {
      oStream << location << ".LaunchTemplateId=" << StringUtils::URLEncode(m_launchTemplateId.c_str()) << "&";
  }
  if(m_launchTemplateNameHasBeenSet)
  {
      oStream << location << ".LaunchTemplateName=" << StringUtils::URLEncode(m_launchTemplateName.c_str()) << "&";
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_createdByHasBeenSet)
  {
      oStream << location << ".CreatedBy=" << StringUtils::URLEncode(m_createdBy.c_str()) << "&";
  }
  if(m_defaultVersionNumberHasBeenSet)
  {
      oStream << location << ".DefaultVersionNumber=" << m_defaultVersionNumber << "&";
  }
  if(m_latestVersionNumberHasBeenSet)
  {
      oStream << location << ".LatestVersionNumber=" << m_latestVersionNumber << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
