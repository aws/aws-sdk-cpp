/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancing/model/ListenerDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

ListenerDescription::ListenerDescription() : 
    m_listenerHasBeenSet(false),
    m_policyNamesHasBeenSet(false)
{
}

ListenerDescription::ListenerDescription(const XmlNode& xmlNode) : 
    m_listenerHasBeenSet(false),
    m_policyNamesHasBeenSet(false)
{
  *this = xmlNode;
}

ListenerDescription& ListenerDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode listenerNode = resultNode.FirstChild("Listener");
    if(!listenerNode.IsNull())
    {
      m_listener = listenerNode;
      m_listenerHasBeenSet = true;
    }
    XmlNode policyNamesNode = resultNode.FirstChild("PolicyNames");
    if(!policyNamesNode.IsNull())
    {
      XmlNode policyNamesMember = policyNamesNode.FirstChild("member");
      while(!policyNamesMember.IsNull())
      {
        m_policyNames.push_back(policyNamesMember.GetText());
        policyNamesMember = policyNamesMember.NextNode("member");
      }

      m_policyNamesHasBeenSet = true;
    }
  }

  return *this;
}

void ListenerDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_listenerHasBeenSet)
  {
      Aws::StringStream listenerLocationAndMemberSs;
      listenerLocationAndMemberSs << location << index << locationValue << ".Listener";
      m_listener.OutputToStream(oStream, listenerLocationAndMemberSs.str().c_str());
  }

  if(m_policyNamesHasBeenSet)
  {
      unsigned policyNamesIdx = 1;
      for(auto& item : m_policyNames)
      {
        oStream << location << index << locationValue << ".PolicyNames.member." << policyNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void ListenerDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_listenerHasBeenSet)
  {
      Aws::String listenerLocationAndMember(location);
      listenerLocationAndMember += ".Listener";
      m_listener.OutputToStream(oStream, listenerLocationAndMember.c_str());
  }
  if(m_policyNamesHasBeenSet)
  {
      unsigned policyNamesIdx = 1;
      for(auto& item : m_policyNames)
      {
        oStream << location << ".PolicyNames.member." << policyNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
