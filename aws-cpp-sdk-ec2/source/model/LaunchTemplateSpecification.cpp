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

#include <aws/ec2/model/LaunchTemplateSpecification.h>
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

LaunchTemplateSpecification::LaunchTemplateSpecification() : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

LaunchTemplateSpecification::LaunchTemplateSpecification(const XmlNode& xmlNode) : 
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplateSpecification& LaunchTemplateSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode launchTemplateIdNode = resultNode.FirstChild("LaunchTemplateId");
    if(!launchTemplateIdNode.IsNull())
    {
      m_launchTemplateId = launchTemplateIdNode.GetText();
      m_launchTemplateIdHasBeenSet = true;
    }
    XmlNode launchTemplateNameNode = resultNode.FirstChild("LaunchTemplateName");
    if(!launchTemplateNameNode.IsNull())
    {
      m_launchTemplateName = launchTemplateNameNode.GetText();
      m_launchTemplateNameHasBeenSet = true;
    }
    XmlNode versionNode = resultNode.FirstChild("Version");
    if(!versionNode.IsNull())
    {
      m_version = versionNode.GetText();
      m_versionHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_launchTemplateIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchTemplateId=" << StringUtils::URLEncode(m_launchTemplateId.c_str()) << "&";
  }

  if(m_launchTemplateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchTemplateName=" << StringUtils::URLEncode(m_launchTemplateName.c_str()) << "&";
  }

  if(m_versionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Version=" << StringUtils::URLEncode(m_version.c_str()) << "&";
  }

}

void LaunchTemplateSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_launchTemplateIdHasBeenSet)
  {
      oStream << location << ".LaunchTemplateId=" << StringUtils::URLEncode(m_launchTemplateId.c_str()) << "&";
  }
  if(m_launchTemplateNameHasBeenSet)
  {
      oStream << location << ".LaunchTemplateName=" << StringUtils::URLEncode(m_launchTemplateName.c_str()) << "&";
  }
  if(m_versionHasBeenSet)
  {
      oStream << location << ".Version=" << StringUtils::URLEncode(m_version.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
