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

#include <aws/elasticbeanstalk/model/ApplicationResourceLifecycleConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

ApplicationResourceLifecycleConfig::ApplicationResourceLifecycleConfig() : 
    m_serviceRoleHasBeenSet(false),
    m_versionLifecycleConfigHasBeenSet(false)
{
}

ApplicationResourceLifecycleConfig::ApplicationResourceLifecycleConfig(const XmlNode& xmlNode) : 
    m_serviceRoleHasBeenSet(false),
    m_versionLifecycleConfigHasBeenSet(false)
{
  *this = xmlNode;
}

ApplicationResourceLifecycleConfig& ApplicationResourceLifecycleConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serviceRoleNode = resultNode.FirstChild("ServiceRole");
    if(!serviceRoleNode.IsNull())
    {
      m_serviceRole = serviceRoleNode.GetText();
      m_serviceRoleHasBeenSet = true;
    }
    XmlNode versionLifecycleConfigNode = resultNode.FirstChild("VersionLifecycleConfig");
    if(!versionLifecycleConfigNode.IsNull())
    {
      m_versionLifecycleConfig = versionLifecycleConfigNode;
      m_versionLifecycleConfigHasBeenSet = true;
    }
  }

  return *this;
}

void ApplicationResourceLifecycleConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serviceRoleHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceRole=" << StringUtils::URLEncode(m_serviceRole.c_str()) << "&";
  }

  if(m_versionLifecycleConfigHasBeenSet)
  {
      Aws::StringStream versionLifecycleConfigLocationAndMemberSs;
      versionLifecycleConfigLocationAndMemberSs << location << index << locationValue << ".VersionLifecycleConfig";
      m_versionLifecycleConfig.OutputToStream(oStream, versionLifecycleConfigLocationAndMemberSs.str().c_str());
  }

}

void ApplicationResourceLifecycleConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serviceRoleHasBeenSet)
  {
      oStream << location << ".ServiceRole=" << StringUtils::URLEncode(m_serviceRole.c_str()) << "&";
  }
  if(m_versionLifecycleConfigHasBeenSet)
  {
      Aws::String versionLifecycleConfigLocationAndMember(location);
      versionLifecycleConfigLocationAndMember += ".VersionLifecycleConfig";
      m_versionLifecycleConfig.OutputToStream(oStream, versionLifecycleConfigLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
