/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBProxyEndpoint.h>
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

DBProxyEndpoint::DBProxyEndpoint() : 
    m_dBProxyEndpointNameHasBeenSet(false),
    m_dBProxyEndpointArnHasBeenSet(false),
    m_dBProxyNameHasBeenSet(false),
    m_status(DBProxyEndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_vpcSubnetIdsHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_targetRole(DBProxyEndpointTargetRole::NOT_SET),
    m_targetRoleHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false)
{
}

DBProxyEndpoint::DBProxyEndpoint(const XmlNode& xmlNode) : 
    m_dBProxyEndpointNameHasBeenSet(false),
    m_dBProxyEndpointArnHasBeenSet(false),
    m_dBProxyNameHasBeenSet(false),
    m_status(DBProxyEndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_vpcSubnetIdsHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_targetRole(DBProxyEndpointTargetRole::NOT_SET),
    m_targetRoleHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false)
{
  *this = xmlNode;
}

DBProxyEndpoint& DBProxyEndpoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBProxyEndpointNameNode = resultNode.FirstChild("DBProxyEndpointName");
    if(!dBProxyEndpointNameNode.IsNull())
    {
      m_dBProxyEndpointName = Aws::Utils::Xml::DecodeEscapedXmlText(dBProxyEndpointNameNode.GetText());
      m_dBProxyEndpointNameHasBeenSet = true;
    }
    XmlNode dBProxyEndpointArnNode = resultNode.FirstChild("DBProxyEndpointArn");
    if(!dBProxyEndpointArnNode.IsNull())
    {
      m_dBProxyEndpointArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBProxyEndpointArnNode.GetText());
      m_dBProxyEndpointArnHasBeenSet = true;
    }
    XmlNode dBProxyNameNode = resultNode.FirstChild("DBProxyName");
    if(!dBProxyNameNode.IsNull())
    {
      m_dBProxyName = Aws::Utils::Xml::DecodeEscapedXmlText(dBProxyNameNode.GetText());
      m_dBProxyNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = DBProxyEndpointStatusMapper::GetDBProxyEndpointStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode vpcSecurityGroupIdsNode = resultNode.FirstChild("VpcSecurityGroupIds");
    if(!vpcSecurityGroupIdsNode.IsNull())
    {
      XmlNode vpcSecurityGroupIdsMember = vpcSecurityGroupIdsNode.FirstChild("member");
      while(!vpcSecurityGroupIdsMember.IsNull())
      {
        m_vpcSecurityGroupIds.push_back(vpcSecurityGroupIdsMember.GetText());
        vpcSecurityGroupIdsMember = vpcSecurityGroupIdsMember.NextNode("member");
      }

      m_vpcSecurityGroupIdsHasBeenSet = true;
    }
    XmlNode vpcSubnetIdsNode = resultNode.FirstChild("VpcSubnetIds");
    if(!vpcSubnetIdsNode.IsNull())
    {
      XmlNode vpcSubnetIdsMember = vpcSubnetIdsNode.FirstChild("member");
      while(!vpcSubnetIdsMember.IsNull())
      {
        m_vpcSubnetIds.push_back(vpcSubnetIdsMember.GetText());
        vpcSubnetIdsMember = vpcSubnetIdsMember.NextNode("member");
      }

      m_vpcSubnetIdsHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
      m_endpointHasBeenSet = true;
    }
    XmlNode createdDateNode = resultNode.FirstChild("CreatedDate");
    if(!createdDateNode.IsNull())
    {
      m_createdDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdDateNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
      m_createdDateHasBeenSet = true;
    }
    XmlNode targetRoleNode = resultNode.FirstChild("TargetRole");
    if(!targetRoleNode.IsNull())
    {
      m_targetRole = DBProxyEndpointTargetRoleMapper::GetDBProxyEndpointTargetRoleForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetRoleNode.GetText()).c_str()).c_str());
      m_targetRoleHasBeenSet = true;
    }
    XmlNode isDefaultNode = resultNode.FirstChild("IsDefault");
    if(!isDefaultNode.IsNull())
    {
      m_isDefault = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isDefaultNode.GetText()).c_str()).c_str());
      m_isDefaultHasBeenSet = true;
    }
  }

  return *this;
}

void DBProxyEndpoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBProxyEndpointNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBProxyEndpointName=" << StringUtils::URLEncode(m_dBProxyEndpointName.c_str()) << "&";
  }

  if(m_dBProxyEndpointArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBProxyEndpointArn=" << StringUtils::URLEncode(m_dBProxyEndpointArn.c_str()) << "&";
  }

  if(m_dBProxyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << DBProxyEndpointStatusMapper::GetNameForDBProxyEndpointStatus(m_status) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
      unsigned vpcSecurityGroupIdsIdx = 1;
      for(auto& item : m_vpcSecurityGroupIds)
      {
        oStream << location << index << locationValue << ".VpcSecurityGroupIds.member." << vpcSecurityGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_vpcSubnetIdsHasBeenSet)
  {
      unsigned vpcSubnetIdsIdx = 1;
      for(auto& item : m_vpcSubnetIds)
      {
        oStream << location << index << locationValue << ".VpcSubnetIds.member." << vpcSubnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_createdDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_targetRoleHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetRole=" << DBProxyEndpointTargetRoleMapper::GetNameForDBProxyEndpointTargetRole(m_targetRole) << "&";
  }

  if(m_isDefaultHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }

}

void DBProxyEndpoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBProxyEndpointNameHasBeenSet)
  {
      oStream << location << ".DBProxyEndpointName=" << StringUtils::URLEncode(m_dBProxyEndpointName.c_str()) << "&";
  }
  if(m_dBProxyEndpointArnHasBeenSet)
  {
      oStream << location << ".DBProxyEndpointArn=" << StringUtils::URLEncode(m_dBProxyEndpointArn.c_str()) << "&";
  }
  if(m_dBProxyNameHasBeenSet)
  {
      oStream << location << ".DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << DBProxyEndpointStatusMapper::GetNameForDBProxyEndpointStatus(m_status) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
      unsigned vpcSecurityGroupIdsIdx = 1;
      for(auto& item : m_vpcSecurityGroupIds)
      {
        oStream << location << ".VpcSecurityGroupIds.member." << vpcSecurityGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_vpcSubnetIdsHasBeenSet)
  {
      unsigned vpcSubnetIdsIdx = 1;
      for(auto& item : m_vpcSubnetIds)
      {
        oStream << location << ".VpcSubnetIds.member." << vpcSubnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_createdDateHasBeenSet)
  {
      oStream << location << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_targetRoleHasBeenSet)
  {
      oStream << location << ".TargetRole=" << DBProxyEndpointTargetRoleMapper::GetNameForDBProxyEndpointTargetRole(m_targetRole) << "&";
  }
  if(m_isDefaultHasBeenSet)
  {
      oStream << location << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
