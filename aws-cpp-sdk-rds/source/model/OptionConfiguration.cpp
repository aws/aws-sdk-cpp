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

#include <aws/rds/model/OptionConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

OptionConfiguration::OptionConfiguration() : 
    m_optionNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_optionVersionHasBeenSet(false),
    m_dBSecurityGroupMembershipsHasBeenSet(false),
    m_vpcSecurityGroupMembershipsHasBeenSet(false),
    m_optionSettingsHasBeenSet(false)
{
}

OptionConfiguration::OptionConfiguration(const XmlNode& xmlNode) : 
    m_optionNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_optionVersionHasBeenSet(false),
    m_dBSecurityGroupMembershipsHasBeenSet(false),
    m_vpcSecurityGroupMembershipsHasBeenSet(false),
    m_optionSettingsHasBeenSet(false)
{
  *this = xmlNode;
}

OptionConfiguration& OptionConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode optionNameNode = resultNode.FirstChild("OptionName");
    if(!optionNameNode.IsNull())
    {
      m_optionName = optionNameNode.GetText();
      m_optionNameHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(portNode.GetText().c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode optionVersionNode = resultNode.FirstChild("OptionVersion");
    if(!optionVersionNode.IsNull())
    {
      m_optionVersion = optionVersionNode.GetText();
      m_optionVersionHasBeenSet = true;
    }
    XmlNode dBSecurityGroupMembershipsNode = resultNode.FirstChild("DBSecurityGroupMemberships");
    if(!dBSecurityGroupMembershipsNode.IsNull())
    {
      XmlNode dBSecurityGroupMembershipsMember = dBSecurityGroupMembershipsNode.FirstChild("DBSecurityGroupName");
      while(!dBSecurityGroupMembershipsMember.IsNull())
      {
        m_dBSecurityGroupMemberships.push_back(dBSecurityGroupMembershipsMember.GetText());
        dBSecurityGroupMembershipsMember = dBSecurityGroupMembershipsMember.NextNode("DBSecurityGroupName");
      }

      m_dBSecurityGroupMembershipsHasBeenSet = true;
    }
    XmlNode vpcSecurityGroupMembershipsNode = resultNode.FirstChild("VpcSecurityGroupMemberships");
    if(!vpcSecurityGroupMembershipsNode.IsNull())
    {
      XmlNode vpcSecurityGroupMembershipsMember = vpcSecurityGroupMembershipsNode.FirstChild("VpcSecurityGroupId");
      while(!vpcSecurityGroupMembershipsMember.IsNull())
      {
        m_vpcSecurityGroupMemberships.push_back(vpcSecurityGroupMembershipsMember.GetText());
        vpcSecurityGroupMembershipsMember = vpcSecurityGroupMembershipsMember.NextNode("VpcSecurityGroupId");
      }

      m_vpcSecurityGroupMembershipsHasBeenSet = true;
    }
    XmlNode optionSettingsNode = resultNode.FirstChild("OptionSettings");
    if(!optionSettingsNode.IsNull())
    {
      XmlNode optionSettingsMember = optionSettingsNode.FirstChild("OptionSetting");
      while(!optionSettingsMember.IsNull())
      {
        m_optionSettings.push_back(optionSettingsMember);
        optionSettingsMember = optionSettingsMember.NextNode("OptionSetting");
      }

      m_optionSettingsHasBeenSet = true;
    }
  }

  return *this;
}

void OptionConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_optionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionName=" << StringUtils::URLEncode(m_optionName.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_optionVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionVersion=" << StringUtils::URLEncode(m_optionVersion.c_str()) << "&";
  }

  if(m_dBSecurityGroupMembershipsHasBeenSet)
  {
      unsigned dBSecurityGroupMembershipsIdx = 1;
      for(auto& item : m_dBSecurityGroupMemberships)
      {
        oStream << location << index << locationValue << ".DBSecurityGroupName." << dBSecurityGroupMembershipsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_vpcSecurityGroupMembershipsHasBeenSet)
  {
      unsigned vpcSecurityGroupMembershipsIdx = 1;
      for(auto& item : m_vpcSecurityGroupMemberships)
      {
        oStream << location << index << locationValue << ".VpcSecurityGroupId." << vpcSecurityGroupMembershipsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_optionSettingsHasBeenSet)
  {
      unsigned optionSettingsIdx = 1;
      for(auto& item : m_optionSettings)
      {
        Aws::StringStream optionSettingsSs;
        optionSettingsSs << location << index << locationValue << ".OptionSetting." << optionSettingsIdx++;
        item.OutputToStream(oStream, optionSettingsSs.str().c_str());
      }
  }

}

void OptionConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_optionNameHasBeenSet)
  {
      oStream << location << ".OptionName=" << StringUtils::URLEncode(m_optionName.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_optionVersionHasBeenSet)
  {
      oStream << location << ".OptionVersion=" << StringUtils::URLEncode(m_optionVersion.c_str()) << "&";
  }
  if(m_dBSecurityGroupMembershipsHasBeenSet)
  {
      unsigned dBSecurityGroupMembershipsIdx = 1;
      for(auto& item : m_dBSecurityGroupMemberships)
      {
        oStream << location << ".DBSecurityGroupName." << dBSecurityGroupMembershipsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_vpcSecurityGroupMembershipsHasBeenSet)
  {
      unsigned vpcSecurityGroupMembershipsIdx = 1;
      for(auto& item : m_vpcSecurityGroupMemberships)
      {
        oStream << location << ".VpcSecurityGroupId." << vpcSecurityGroupMembershipsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_optionSettingsHasBeenSet)
  {
      unsigned optionSettingsIdx = 1;
      for(auto& item : m_optionSettings)
      {
        Aws::StringStream optionSettingsSs;
        optionSettingsSs << location <<  ".OptionSetting." << optionSettingsIdx++;
        item.OutputToStream(oStream, optionSettingsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
