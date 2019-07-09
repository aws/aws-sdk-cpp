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

#include <aws/ec2/model/DeleteLaunchTemplateVersionsResponseErrorItem.h>
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

DeleteLaunchTemplateVersionsResponseErrorItem::DeleteLaunchTemplateVersionsResponseErrorItem() : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_responseErrorHasBeenSet(false)
{
}

DeleteLaunchTemplateVersionsResponseErrorItem::DeleteLaunchTemplateVersionsResponseErrorItem(const XmlNode& xmlNode) : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_responseErrorHasBeenSet(false)
{
  *this = xmlNode;
}

DeleteLaunchTemplateVersionsResponseErrorItem& DeleteLaunchTemplateVersionsResponseErrorItem::operator =(const XmlNode& xmlNode)
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
    XmlNode responseErrorNode = resultNode.FirstChild("responseError");
    if(!responseErrorNode.IsNull())
    {
      m_responseError = responseErrorNode;
      m_responseErrorHasBeenSet = true;
    }
  }

  return *this;
}

void DeleteLaunchTemplateVersionsResponseErrorItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

  if(m_responseErrorHasBeenSet)
  {
      Aws::StringStream responseErrorLocationAndMemberSs;
      responseErrorLocationAndMemberSs << location << index << locationValue << ".ResponseError";
      m_responseError.OutputToStream(oStream, responseErrorLocationAndMemberSs.str().c_str());
  }

}

void DeleteLaunchTemplateVersionsResponseErrorItem::OutputToStream(Aws::OStream& oStream, const char* location) const
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
  if(m_responseErrorHasBeenSet)
  {
      Aws::String responseErrorLocationAndMember(location);
      responseErrorLocationAndMember += ".ResponseError";
      m_responseError.OutputToStream(oStream, responseErrorLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
