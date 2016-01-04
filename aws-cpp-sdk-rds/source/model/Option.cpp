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
#include <aws/rds/model/Option.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Option::Option() : 
    m_optionNameHasBeenSet(false),
    m_optionDescriptionHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_dBSecurityGroupMembershipsHasBeenSet(false),
    m_vpcSecurityGroupMembershipsHasBeenSet(false)
{
}

Option::Option(const XmlNode& xmlNode) : 
    m_optionNameHasBeenSet(false),
    m_optionDescriptionHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_dBSecurityGroupMembershipsHasBeenSet(false),
    m_vpcSecurityGroupMembershipsHasBeenSet(false)
{
  *this = xmlNode;
}

Option& Option::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode optionNameNode = resultNode.FirstChild("OptionName");
    if(!optionNameNode.IsNull())
    {
      m_optionName = StringUtils::Trim(optionNameNode.GetText().c_str());
      m_optionNameHasBeenSet = true;
    }
    XmlNode optionDescriptionNode = resultNode.FirstChild("OptionDescription");
    if(!optionDescriptionNode.IsNull())
    {
      m_optionDescription = StringUtils::Trim(optionDescriptionNode.GetText().c_str());
      m_optionDescriptionHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(portNode.GetText().c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode dBSecurityGroupMembershipsNode = resultNode.FirstChild("DBSecurityGroupMemberships");
    if(!dBSecurityGroupMembershipsNode.IsNull())
    {
      XmlNode dBSecurityGroupMembershipsMember = dBSecurityGroupMembershipsNode.FirstChild("DBSecurityGroup");
      while(!dBSecurityGroupMembershipsMember.IsNull())
      {
        m_dBSecurityGroupMemberships.push_back(dBSecurityGroupMembershipsMember);
        dBSecurityGroupMembershipsMember = dBSecurityGroupMembershipsMember.NextNode("DBSecurityGroup");
      }

      m_dBSecurityGroupMembershipsHasBeenSet = true;
    }
    XmlNode vpcSecurityGroupMembershipsNode = resultNode.FirstChild("VpcSecurityGroupMemberships");
    if(!vpcSecurityGroupMembershipsNode.IsNull())
    {
      XmlNode vpcSecurityGroupMembershipsMember = vpcSecurityGroupMembershipsNode.FirstChild("VpcSecurityGroupMembership");
      while(!vpcSecurityGroupMembershipsMember.IsNull())
      {
        m_vpcSecurityGroupMemberships.push_back(vpcSecurityGroupMembershipsMember);
        vpcSecurityGroupMembershipsMember = vpcSecurityGroupMembershipsMember.NextNode("VpcSecurityGroupMembership");
      }

      m_vpcSecurityGroupMembershipsHasBeenSet = true;
    }
  }

  return *this;
}

void Option::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_optionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionName=" << StringUtils::URLEncode(m_optionName.c_str()) << "&";
  }
  if(m_optionDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionDescription=" << StringUtils::URLEncode(m_optionDescription.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }
  if(m_dBSecurityGroupMembershipsHasBeenSet)
  {
      for(auto& item : m_dBSecurityGroupMemberships)
      {
        Aws::StringStream dBSecurityGroupMembershipsSs;
        dBSecurityGroupMembershipsSs << location << index << locationValue << ".DBSecurityGroup";
        item.OutputToStream(oStream, dBSecurityGroupMembershipsSs.str().c_str());
      }
  }
  if(m_vpcSecurityGroupMembershipsHasBeenSet)
  {
      for(auto& item : m_vpcSecurityGroupMemberships)
      {
        Aws::StringStream vpcSecurityGroupMembershipsSs;
        vpcSecurityGroupMembershipsSs << location << index << locationValue << ".VpcSecurityGroupMembership";
        item.OutputToStream(oStream, vpcSecurityGroupMembershipsSs.str().c_str());
      }
  }
}

void Option::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_optionNameHasBeenSet)
  {
      oStream << location << ".OptionName=" << StringUtils::URLEncode(m_optionName.c_str()) << "&";
  }
  if(m_optionDescriptionHasBeenSet)
  {
      oStream << location << ".OptionDescription=" << StringUtils::URLEncode(m_optionDescription.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_dBSecurityGroupMembershipsHasBeenSet)
  {
      for(auto& item : m_dBSecurityGroupMemberships)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".DBSecurityGroup";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_vpcSecurityGroupMembershipsHasBeenSet)
  {
      for(auto& item : m_vpcSecurityGroupMemberships)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".VpcSecurityGroupMembership";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
