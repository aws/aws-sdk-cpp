/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/InstanceProfile.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

InstanceProfile::InstanceProfile() : 
    m_createDate(0.0)
{
}

InstanceProfile::InstanceProfile(const XmlNode& xmlNode) : 
    m_createDate(0.0)
{
  *this = xmlNode;
}

InstanceProfile& InstanceProfile::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode pathNode = resultNode.FirstChild("Path");
    m_path = StringUtils::Trim(pathNode.GetText().c_str());
    XmlNode instanceProfileNameNode = resultNode.FirstChild("InstanceProfileName");
    m_instanceProfileName = StringUtils::Trim(instanceProfileNameNode.GetText().c_str());
    XmlNode instanceProfileIdNode = resultNode.FirstChild("InstanceProfileId");
    m_instanceProfileId = StringUtils::Trim(instanceProfileIdNode.GetText().c_str());
    XmlNode arnNode = resultNode.FirstChild("Arn");
    m_arn = StringUtils::Trim(arnNode.GetText().c_str());
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    m_createDate = StringUtils::ConvertToDouble(StringUtils::Trim(createDateNode.GetText().c_str()).c_str());
    XmlNode rolesNode = resultNode.FirstChild("Roles");
    while(!rolesNode.IsNull())
    {
      m_roles.push_back(rolesNode);
      rolesNode = rolesNode.NextNode("Roles");
    }

  }

  return *this;
}

void InstanceProfile::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  oStream << location << index << locationValue << ".InstanceProfileName=" << StringUtils::URLEncode(m_instanceProfileName.c_str()) << "&";
  oStream << location << index << locationValue << ".InstanceProfileId=" << StringUtils::URLEncode(m_instanceProfileId.c_str()) << "&";
  oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  oStream << location << index << locationValue << ".CreateDate=" << m_createDate << "&";
  for(auto& item : m_roles)
  {
    Aws::StringStream rolesSs;
    rolesSs << location << index << locationValue << ".Roles";
    item.OutputToStream(oStream, rolesSs.str().c_str());
  }
}

void InstanceProfile::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  oStream << location << ".InstanceProfileName=" << StringUtils::URLEncode(m_instanceProfileName.c_str()) << "&";
  oStream << location << ".InstanceProfileId=" << StringUtils::URLEncode(m_instanceProfileId.c_str()) << "&";
  oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  oStream << location << ".CreateDate=" << m_createDate << "&";
  for(auto& item : m_roles)
  {
    Aws::String locationAndListMember(location);
    locationAndListMember += ".Roles";
    item.OutputToStream(oStream, locationAndListMember.c_str());
  }
}
