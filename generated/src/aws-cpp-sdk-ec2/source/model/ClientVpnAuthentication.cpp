/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientVpnAuthentication.h>
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

ClientVpnAuthentication::ClientVpnAuthentication() : 
    m_type(ClientVpnAuthenticationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_activeDirectoryHasBeenSet(false),
    m_mutualAuthenticationHasBeenSet(false),
    m_federatedAuthenticationHasBeenSet(false)
{
}

ClientVpnAuthentication::ClientVpnAuthentication(const XmlNode& xmlNode) : 
    m_type(ClientVpnAuthenticationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_activeDirectoryHasBeenSet(false),
    m_mutualAuthenticationHasBeenSet(false),
    m_federatedAuthenticationHasBeenSet(false)
{
  *this = xmlNode;
}

ClientVpnAuthentication& ClientVpnAuthentication::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = ClientVpnAuthenticationTypeMapper::GetClientVpnAuthenticationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode activeDirectoryNode = resultNode.FirstChild("activeDirectory");
    if(!activeDirectoryNode.IsNull())
    {
      m_activeDirectory = activeDirectoryNode;
      m_activeDirectoryHasBeenSet = true;
    }
    XmlNode mutualAuthenticationNode = resultNode.FirstChild("mutualAuthentication");
    if(!mutualAuthenticationNode.IsNull())
    {
      m_mutualAuthentication = mutualAuthenticationNode;
      m_mutualAuthenticationHasBeenSet = true;
    }
    XmlNode federatedAuthenticationNode = resultNode.FirstChild("federatedAuthentication");
    if(!federatedAuthenticationNode.IsNull())
    {
      m_federatedAuthentication = federatedAuthenticationNode;
      m_federatedAuthenticationHasBeenSet = true;
    }
  }

  return *this;
}

void ClientVpnAuthentication::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << ClientVpnAuthenticationTypeMapper::GetNameForClientVpnAuthenticationType(m_type) << "&";
  }

  if(m_activeDirectoryHasBeenSet)
  {
      Aws::StringStream activeDirectoryLocationAndMemberSs;
      activeDirectoryLocationAndMemberSs << location << index << locationValue << ".ActiveDirectory";
      m_activeDirectory.OutputToStream(oStream, activeDirectoryLocationAndMemberSs.str().c_str());
  }

  if(m_mutualAuthenticationHasBeenSet)
  {
      Aws::StringStream mutualAuthenticationLocationAndMemberSs;
      mutualAuthenticationLocationAndMemberSs << location << index << locationValue << ".MutualAuthentication";
      m_mutualAuthentication.OutputToStream(oStream, mutualAuthenticationLocationAndMemberSs.str().c_str());
  }

  if(m_federatedAuthenticationHasBeenSet)
  {
      Aws::StringStream federatedAuthenticationLocationAndMemberSs;
      federatedAuthenticationLocationAndMemberSs << location << index << locationValue << ".FederatedAuthentication";
      m_federatedAuthentication.OutputToStream(oStream, federatedAuthenticationLocationAndMemberSs.str().c_str());
  }

}

void ClientVpnAuthentication::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << ClientVpnAuthenticationTypeMapper::GetNameForClientVpnAuthenticationType(m_type) << "&";
  }
  if(m_activeDirectoryHasBeenSet)
  {
      Aws::String activeDirectoryLocationAndMember(location);
      activeDirectoryLocationAndMember += ".ActiveDirectory";
      m_activeDirectory.OutputToStream(oStream, activeDirectoryLocationAndMember.c_str());
  }
  if(m_mutualAuthenticationHasBeenSet)
  {
      Aws::String mutualAuthenticationLocationAndMember(location);
      mutualAuthenticationLocationAndMember += ".MutualAuthentication";
      m_mutualAuthentication.OutputToStream(oStream, mutualAuthenticationLocationAndMember.c_str());
  }
  if(m_federatedAuthenticationHasBeenSet)
  {
      Aws::String federatedAuthenticationLocationAndMember(location);
      federatedAuthenticationLocationAndMember += ".FederatedAuthentication";
      m_federatedAuthentication.OutputToStream(oStream, federatedAuthenticationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
