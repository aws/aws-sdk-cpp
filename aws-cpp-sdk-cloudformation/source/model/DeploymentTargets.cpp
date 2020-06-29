/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DeploymentTargets.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

DeploymentTargets::DeploymentTargets() : 
    m_accountsHasBeenSet(false),
    m_organizationalUnitIdsHasBeenSet(false)
{
}

DeploymentTargets::DeploymentTargets(const XmlNode& xmlNode) : 
    m_accountsHasBeenSet(false),
    m_organizationalUnitIdsHasBeenSet(false)
{
  *this = xmlNode;
}

DeploymentTargets& DeploymentTargets::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accountsNode = resultNode.FirstChild("Accounts");
    if(!accountsNode.IsNull())
    {
      XmlNode accountsMember = accountsNode.FirstChild("member");
      while(!accountsMember.IsNull())
      {
        m_accounts.push_back(accountsMember.GetText());
        accountsMember = accountsMember.NextNode("member");
      }

      m_accountsHasBeenSet = true;
    }
    XmlNode organizationalUnitIdsNode = resultNode.FirstChild("OrganizationalUnitIds");
    if(!organizationalUnitIdsNode.IsNull())
    {
      XmlNode organizationalUnitIdsMember = organizationalUnitIdsNode.FirstChild("member");
      while(!organizationalUnitIdsMember.IsNull())
      {
        m_organizationalUnitIds.push_back(organizationalUnitIdsMember.GetText());
        organizationalUnitIdsMember = organizationalUnitIdsMember.NextNode("member");
      }

      m_organizationalUnitIdsHasBeenSet = true;
    }
  }

  return *this;
}

void DeploymentTargets::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_accountsHasBeenSet)
  {
      unsigned accountsIdx = 1;
      for(auto& item : m_accounts)
      {
        oStream << location << index << locationValue << ".Accounts.member." << accountsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_organizationalUnitIdsHasBeenSet)
  {
      unsigned organizationalUnitIdsIdx = 1;
      for(auto& item : m_organizationalUnitIds)
      {
        oStream << location << index << locationValue << ".OrganizationalUnitIds.member." << organizationalUnitIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void DeploymentTargets::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_accountsHasBeenSet)
  {
      unsigned accountsIdx = 1;
      for(auto& item : m_accounts)
      {
        oStream << location << ".Accounts.member." << accountsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_organizationalUnitIdsHasBeenSet)
  {
      unsigned organizationalUnitIdsIdx = 1;
      for(auto& item : m_organizationalUnitIds)
      {
        oStream << location << ".OrganizationalUnitIds.member." << organizationalUnitIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
