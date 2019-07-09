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

#include <aws/ec2/model/LaunchTemplateVersion.h>
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

LaunchTemplateVersion::LaunchTemplateVersion() : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_versionDescriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_defaultVersion(false),
    m_defaultVersionHasBeenSet(false),
    m_launchTemplateDataHasBeenSet(false)
{
}

LaunchTemplateVersion::LaunchTemplateVersion(const XmlNode& xmlNode) : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_versionDescriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_defaultVersion(false),
    m_defaultVersionHasBeenSet(false),
    m_launchTemplateDataHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplateVersion& LaunchTemplateVersion::operator =(const XmlNode& xmlNode)
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
    XmlNode versionNumberNode = resultNode.FirstChild("versionNumber");
    if(!versionNumberNode.IsNull())
    {
      m_versionNumber = StringUtils::ConvertToInt64(StringUtils::Trim(versionNumberNode.GetText().c_str()).c_str());
      m_versionNumberHasBeenSet = true;
    }
    XmlNode versionDescriptionNode = resultNode.FirstChild("versionDescription");
    if(!versionDescriptionNode.IsNull())
    {
      m_versionDescription = versionDescriptionNode.GetText();
      m_versionDescriptionHasBeenSet = true;
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
    XmlNode defaultVersionNode = resultNode.FirstChild("defaultVersion");
    if(!defaultVersionNode.IsNull())
    {
      m_defaultVersion = StringUtils::ConvertToBool(StringUtils::Trim(defaultVersionNode.GetText().c_str()).c_str());
      m_defaultVersionHasBeenSet = true;
    }
    XmlNode launchTemplateDataNode = resultNode.FirstChild("launchTemplateData");
    if(!launchTemplateDataNode.IsNull())
    {
      m_launchTemplateData = launchTemplateDataNode;
      m_launchTemplateDataHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateVersion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_launchTemplateIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchTemplateId=" << StringUtils::URLEncode(m_launchTemplateId.c_str()) << "&";
  }

  if(m_launchTemplateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchTemplateName=" << StringUtils::URLEncode(m_launchTemplateName.c_str()) << "&";
  }

  if(m_versionNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".VersionNumber=" << m_versionNumber << "&";
  }

  if(m_versionDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".VersionDescription=" << StringUtils::URLEncode(m_versionDescription.c_str()) << "&";
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_createdByHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedBy=" << StringUtils::URLEncode(m_createdBy.c_str()) << "&";
  }

  if(m_defaultVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultVersion=" << std::boolalpha << m_defaultVersion << "&";
  }

  if(m_launchTemplateDataHasBeenSet)
  {
      Aws::StringStream launchTemplateDataLocationAndMemberSs;
      launchTemplateDataLocationAndMemberSs << location << index << locationValue << ".LaunchTemplateData";
      m_launchTemplateData.OutputToStream(oStream, launchTemplateDataLocationAndMemberSs.str().c_str());
  }

}

void LaunchTemplateVersion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_launchTemplateIdHasBeenSet)
  {
      oStream << location << ".LaunchTemplateId=" << StringUtils::URLEncode(m_launchTemplateId.c_str()) << "&";
  }
  if(m_launchTemplateNameHasBeenSet)
  {
      oStream << location << ".LaunchTemplateName=" << StringUtils::URLEncode(m_launchTemplateName.c_str()) << "&";
  }
  if(m_versionNumberHasBeenSet)
  {
      oStream << location << ".VersionNumber=" << m_versionNumber << "&";
  }
  if(m_versionDescriptionHasBeenSet)
  {
      oStream << location << ".VersionDescription=" << StringUtils::URLEncode(m_versionDescription.c_str()) << "&";
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_createdByHasBeenSet)
  {
      oStream << location << ".CreatedBy=" << StringUtils::URLEncode(m_createdBy.c_str()) << "&";
  }
  if(m_defaultVersionHasBeenSet)
  {
      oStream << location << ".DefaultVersion=" << std::boolalpha << m_defaultVersion << "&";
  }
  if(m_launchTemplateDataHasBeenSet)
  {
      Aws::String launchTemplateDataLocationAndMember(location);
      launchTemplateDataLocationAndMember += ".LaunchTemplateData";
      m_launchTemplateData.OutputToStream(oStream, launchTemplateDataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
