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

#include <aws/iam/model/ListPoliciesGrantingServiceAccessEntry.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace IAM
{
namespace Model
{

ListPoliciesGrantingServiceAccessEntry::ListPoliciesGrantingServiceAccessEntry() : 
    m_serviceNamespaceHasBeenSet(false),
    m_policiesHasBeenSet(false)
{
}

ListPoliciesGrantingServiceAccessEntry::ListPoliciesGrantingServiceAccessEntry(const XmlNode& xmlNode) : 
    m_serviceNamespaceHasBeenSet(false),
    m_policiesHasBeenSet(false)
{
  *this = xmlNode;
}

ListPoliciesGrantingServiceAccessEntry& ListPoliciesGrantingServiceAccessEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serviceNamespaceNode = resultNode.FirstChild("ServiceNamespace");
    if(!serviceNamespaceNode.IsNull())
    {
      m_serviceNamespace = serviceNamespaceNode.GetText();
      m_serviceNamespaceHasBeenSet = true;
    }
    XmlNode policiesNode = resultNode.FirstChild("Policies");
    if(!policiesNode.IsNull())
    {
      XmlNode policiesMember = policiesNode.FirstChild("member");
      while(!policiesMember.IsNull())
      {
        m_policies.push_back(policiesMember);
        policiesMember = policiesMember.NextNode("member");
      }

      m_policiesHasBeenSet = true;
    }
  }

  return *this;
}

void ListPoliciesGrantingServiceAccessEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serviceNamespaceHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceNamespace=" << StringUtils::URLEncode(m_serviceNamespace.c_str()) << "&";
  }

  if(m_policiesHasBeenSet)
  {
      unsigned policiesIdx = 1;
      for(auto& item : m_policies)
      {
        Aws::StringStream policiesSs;
        policiesSs << location << index << locationValue << ".Policies.member." << policiesIdx++;
        item.OutputToStream(oStream, policiesSs.str().c_str());
      }
  }

}

void ListPoliciesGrantingServiceAccessEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serviceNamespaceHasBeenSet)
  {
      oStream << location << ".ServiceNamespace=" << StringUtils::URLEncode(m_serviceNamespace.c_str()) << "&";
  }
  if(m_policiesHasBeenSet)
  {
      unsigned policiesIdx = 1;
      for(auto& item : m_policies)
      {
        Aws::StringStream policiesSs;
        policiesSs << location <<  ".Policies.member." << policiesIdx++;
        item.OutputToStream(oStream, policiesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
