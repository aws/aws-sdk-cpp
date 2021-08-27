/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/User.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

User::User() : 
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_accessStringHasBeenSet(false),
    m_userGroupIdsHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

User::User(const XmlNode& xmlNode) : 
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_accessStringHasBeenSet(false),
    m_userGroupIdsHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

User& User::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode userIdNode = resultNode.FirstChild("UserId");
    if(!userIdNode.IsNull())
    {
      m_userId = Aws::Utils::Xml::DecodeEscapedXmlText(userIdNode.GetText());
      m_userIdHasBeenSet = true;
    }
    XmlNode userNameNode = resultNode.FirstChild("UserName");
    if(!userNameNode.IsNull())
    {
      m_userName = Aws::Utils::Xml::DecodeEscapedXmlText(userNameNode.GetText());
      m_userNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode accessStringNode = resultNode.FirstChild("AccessString");
    if(!accessStringNode.IsNull())
    {
      m_accessString = Aws::Utils::Xml::DecodeEscapedXmlText(accessStringNode.GetText());
      m_accessStringHasBeenSet = true;
    }
    XmlNode userGroupIdsNode = resultNode.FirstChild("UserGroupIds");
    if(!userGroupIdsNode.IsNull())
    {
      XmlNode userGroupIdsMember = userGroupIdsNode.FirstChild("member");
      while(!userGroupIdsMember.IsNull())
      {
        m_userGroupIds.push_back(userGroupIdsMember.GetText());
        userGroupIdsMember = userGroupIdsMember.NextNode("member");
      }

      m_userGroupIdsHasBeenSet = true;
    }
    XmlNode authenticationNode = resultNode.FirstChild("Authentication");
    if(!authenticationNode.IsNull())
    {
      m_authentication = authenticationNode;
      m_authenticationHasBeenSet = true;
    }
    XmlNode aRNNode = resultNode.FirstChild("ARN");
    if(!aRNNode.IsNull())
    {
      m_aRN = Aws::Utils::Xml::DecodeEscapedXmlText(aRNNode.GetText());
      m_aRNHasBeenSet = true;
    }
  }

  return *this;
}

void User::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_userIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  }

  if(m_userNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_accessStringHasBeenSet)
  {
      oStream << location << index << locationValue << ".AccessString=" << StringUtils::URLEncode(m_accessString.c_str()) << "&";
  }

  if(m_userGroupIdsHasBeenSet)
  {
      unsigned userGroupIdsIdx = 1;
      for(auto& item : m_userGroupIds)
      {
        oStream << location << index << locationValue << ".UserGroupIds.member." << userGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_authenticationHasBeenSet)
  {
      Aws::StringStream authenticationLocationAndMemberSs;
      authenticationLocationAndMemberSs << location << index << locationValue << ".Authentication";
      m_authentication.OutputToStream(oStream, authenticationLocationAndMemberSs.str().c_str());
  }

  if(m_aRNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }

  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
  }

}

void User::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_userIdHasBeenSet)
  {
      oStream << location << ".UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  }
  if(m_userNameHasBeenSet)
  {
      oStream << location << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_accessStringHasBeenSet)
  {
      oStream << location << ".AccessString=" << StringUtils::URLEncode(m_accessString.c_str()) << "&";
  }
  if(m_userGroupIdsHasBeenSet)
  {
      unsigned userGroupIdsIdx = 1;
      for(auto& item : m_userGroupIds)
      {
        oStream << location << ".UserGroupIds.member." << userGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_authenticationHasBeenSet)
  {
      Aws::String authenticationLocationAndMember(location);
      authenticationLocationAndMember += ".Authentication";
      m_authentication.OutputToStream(oStream, authenticationLocationAndMember.c_str());
  }
  if(m_aRNHasBeenSet)
  {
      oStream << location << ".ARN=" << StringUtils::URLEncode(m_aRN.c_str()) << "&";
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
