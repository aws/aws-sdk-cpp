/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBProxy.h>
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

DBProxy::DBProxy() : 
    m_dBProxyNameHasBeenSet(false),
    m_dBProxyArnHasBeenSet(false),
    m_status(DBProxyStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_engineFamilyHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_vpcSubnetIdsHasBeenSet(false),
    m_authHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_requireTLS(false),
    m_requireTLSHasBeenSet(false),
    m_idleClientTimeout(0),
    m_idleClientTimeoutHasBeenSet(false),
    m_debugLogging(false),
    m_debugLoggingHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_updatedDateHasBeenSet(false)
{
}

DBProxy::DBProxy(const XmlNode& xmlNode) : 
    m_dBProxyNameHasBeenSet(false),
    m_dBProxyArnHasBeenSet(false),
    m_status(DBProxyStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_engineFamilyHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_vpcSubnetIdsHasBeenSet(false),
    m_authHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_requireTLS(false),
    m_requireTLSHasBeenSet(false),
    m_idleClientTimeout(0),
    m_idleClientTimeoutHasBeenSet(false),
    m_debugLogging(false),
    m_debugLoggingHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_updatedDateHasBeenSet(false)
{
  *this = xmlNode;
}

DBProxy& DBProxy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBProxyNameNode = resultNode.FirstChild("DBProxyName");
    if(!dBProxyNameNode.IsNull())
    {
      m_dBProxyName = Aws::Utils::Xml::DecodeEscapedXmlText(dBProxyNameNode.GetText());
      m_dBProxyNameHasBeenSet = true;
    }
    XmlNode dBProxyArnNode = resultNode.FirstChild("DBProxyArn");
    if(!dBProxyArnNode.IsNull())
    {
      m_dBProxyArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBProxyArnNode.GetText());
      m_dBProxyArnHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = DBProxyStatusMapper::GetDBProxyStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode engineFamilyNode = resultNode.FirstChild("EngineFamily");
    if(!engineFamilyNode.IsNull())
    {
      m_engineFamily = Aws::Utils::Xml::DecodeEscapedXmlText(engineFamilyNode.GetText());
      m_engineFamilyHasBeenSet = true;
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
    XmlNode authNode = resultNode.FirstChild("Auth");
    if(!authNode.IsNull())
    {
      XmlNode authMember = authNode.FirstChild("member");
      while(!authMember.IsNull())
      {
        m_auth.push_back(authMember);
        authMember = authMember.NextNode("member");
      }

      m_authHasBeenSet = true;
    }
    XmlNode roleArnNode = resultNode.FirstChild("RoleArn");
    if(!roleArnNode.IsNull())
    {
      m_roleArn = Aws::Utils::Xml::DecodeEscapedXmlText(roleArnNode.GetText());
      m_roleArnHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if(!endpointNode.IsNull())
    {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
      m_endpointHasBeenSet = true;
    }
    XmlNode requireTLSNode = resultNode.FirstChild("RequireTLS");
    if(!requireTLSNode.IsNull())
    {
      m_requireTLS = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requireTLSNode.GetText()).c_str()).c_str());
      m_requireTLSHasBeenSet = true;
    }
    XmlNode idleClientTimeoutNode = resultNode.FirstChild("IdleClientTimeout");
    if(!idleClientTimeoutNode.IsNull())
    {
      m_idleClientTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(idleClientTimeoutNode.GetText()).c_str()).c_str());
      m_idleClientTimeoutHasBeenSet = true;
    }
    XmlNode debugLoggingNode = resultNode.FirstChild("DebugLogging");
    if(!debugLoggingNode.IsNull())
    {
      m_debugLogging = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(debugLoggingNode.GetText()).c_str()).c_str());
      m_debugLoggingHasBeenSet = true;
    }
    XmlNode createdDateNode = resultNode.FirstChild("CreatedDate");
    if(!createdDateNode.IsNull())
    {
      m_createdDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdDateHasBeenSet = true;
    }
    XmlNode updatedDateNode = resultNode.FirstChild("UpdatedDate");
    if(!updatedDateNode.IsNull())
    {
      m_updatedDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updatedDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_updatedDateHasBeenSet = true;
    }
  }

  return *this;
}

void DBProxy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBProxyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }

  if(m_dBProxyArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBProxyArn=" << StringUtils::URLEncode(m_dBProxyArn.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << DBProxyStatusMapper::GetNameForDBProxyStatus(m_status) << "&";
  }

  if(m_engineFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineFamily=" << StringUtils::URLEncode(m_engineFamily.c_str()) << "&";
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

  if(m_authHasBeenSet)
  {
      unsigned authIdx = 1;
      for(auto& item : m_auth)
      {
        Aws::StringStream authSs;
        authSs << location << index << locationValue << ".Auth.member." << authIdx++;
        item.OutputToStream(oStream, authSs.str().c_str());
      }
  }

  if(m_roleArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if(m_requireTLSHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequireTLS=" << std::boolalpha << m_requireTLS << "&";
  }

  if(m_idleClientTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".IdleClientTimeout=" << m_idleClientTimeout << "&";
  }

  if(m_debugLoggingHasBeenSet)
  {
      oStream << location << index << locationValue << ".DebugLogging=" << std::boolalpha << m_debugLogging << "&";
  }

  if(m_createdDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_updatedDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdatedDate=" << StringUtils::URLEncode(m_updatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void DBProxy::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBProxyNameHasBeenSet)
  {
      oStream << location << ".DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }
  if(m_dBProxyArnHasBeenSet)
  {
      oStream << location << ".DBProxyArn=" << StringUtils::URLEncode(m_dBProxyArn.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << DBProxyStatusMapper::GetNameForDBProxyStatus(m_status) << "&";
  }
  if(m_engineFamilyHasBeenSet)
  {
      oStream << location << ".EngineFamily=" << StringUtils::URLEncode(m_engineFamily.c_str()) << "&";
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
  if(m_authHasBeenSet)
  {
      unsigned authIdx = 1;
      for(auto& item : m_auth)
      {
        Aws::StringStream authSs;
        authSs << location <<  ".Auth.member." << authIdx++;
        item.OutputToStream(oStream, authSs.str().c_str());
      }
  }
  if(m_roleArnHasBeenSet)
  {
      oStream << location << ".RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }
  if(m_endpointHasBeenSet)
  {
      oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if(m_requireTLSHasBeenSet)
  {
      oStream << location << ".RequireTLS=" << std::boolalpha << m_requireTLS << "&";
  }
  if(m_idleClientTimeoutHasBeenSet)
  {
      oStream << location << ".IdleClientTimeout=" << m_idleClientTimeout << "&";
  }
  if(m_debugLoggingHasBeenSet)
  {
      oStream << location << ".DebugLogging=" << std::boolalpha << m_debugLogging << "&";
  }
  if(m_createdDateHasBeenSet)
  {
      oStream << location << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_updatedDateHasBeenSet)
  {
      oStream << location << ".UpdatedDate=" << StringUtils::URLEncode(m_updatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
