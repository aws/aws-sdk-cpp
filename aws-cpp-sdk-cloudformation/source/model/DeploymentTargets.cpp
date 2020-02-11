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
