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
#include <aws/rds/model/OptionConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

OptionConfiguration::OptionConfiguration() : 
    m_optionNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_dBSecurityGroupMembershipsHasBeenSet(false),
    m_vpcSecurityGroupMembershipsHasBeenSet(false),
    m_optionSettingsHasBeenSet(false)
{
}

OptionConfiguration::OptionConfiguration(const XmlNode& xmlNode) : 
    m_optionNameHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
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
      m_optionName = StringUtils::Trim(optionNameNode.GetText().c_str());
      m_optionNameHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(portNode.GetText().c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode dBSecurityGroupNameNodeParent = resultNode.FirstChild("DBSecurityGroupName");
    XmlNode dBSecurityGroupNameNode = dBSecurityGroupNameNodeParent.FirstChild("member");
    if(!dBSecurityGroupNameNode.IsNull())
    {
      while(!dBSecurityGroupNameNode.IsNull())
      {
        m_dBSecurityGroupMemberships.push_back(StringUtils::Trim(dBSecurityGroupNameNode.GetText().c_str()));
        dBSecurityGroupNameNode = dBSecurityGroupNameNode.NextNode("member");
      }

      m_dBSecurityGroupMembershipsHasBeenSet = true;
    }
    XmlNode vpcSecurityGroupIdNodeParent = resultNode.FirstChild("VpcSecurityGroupId");
    XmlNode vpcSecurityGroupIdNode = vpcSecurityGroupIdNodeParent.FirstChild("member");
    if(!vpcSecurityGroupIdNode.IsNull())
    {
      while(!vpcSecurityGroupIdNode.IsNull())
      {
        m_vpcSecurityGroupMemberships.push_back(StringUtils::Trim(vpcSecurityGroupIdNode.GetText().c_str()));
        vpcSecurityGroupIdNode = vpcSecurityGroupIdNode.NextNode("member");
      }

      m_vpcSecurityGroupMembershipsHasBeenSet = true;
    }
    XmlNode optionSettingNodeParent = resultNode.FirstChild("OptionSetting");
    XmlNode optionSettingNode = optionSettingNodeParent.FirstChild("member");
    if(!optionSettingNode.IsNull())
    {
      while(!optionSettingNode.IsNull())
      {
        m_optionSettings.push_back(optionSettingNode);
        optionSettingNode = optionSettingNode.NextNode("member");
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
  if(m_dBSecurityGroupMembershipsHasBeenSet)
  {
      for(auto& item : m_dBSecurityGroupMemberships)
      {
        oStream << location << index << locationValue << ".DBSecurityGroupName=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_vpcSecurityGroupMembershipsHasBeenSet)
  {
      for(auto& item : m_vpcSecurityGroupMemberships)
      {
        oStream << location << index << locationValue << ".VpcSecurityGroupId=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_optionSettingsHasBeenSet)
  {
      for(auto& item : m_optionSettings)
      {
        Aws::StringStream optionSettingsSs;
        optionSettingsSs << location << index << locationValue << ".OptionSetting";
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
  if(m_dBSecurityGroupMembershipsHasBeenSet)
  {
      for(auto& item : m_dBSecurityGroupMemberships)
      {
        oStream << location << ".DBSecurityGroupName=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_vpcSecurityGroupMembershipsHasBeenSet)
  {
      for(auto& item : m_vpcSecurityGroupMemberships)
      {
        oStream << location << ".VpcSecurityGroupId=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_optionSettingsHasBeenSet)
  {
      for(auto& item : m_optionSettings)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".OptionSetting";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
