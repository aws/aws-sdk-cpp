﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/LoadBalancerDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

LoadBalancerDescription::LoadBalancerDescription(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

LoadBalancerDescription& LoadBalancerDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode loadBalancerNameNode = resultNode.FirstChild("LoadBalancerName");
    if(!loadBalancerNameNode.IsNull())
    {
      m_loadBalancerName = Aws::Utils::Xml::DecodeEscapedXmlText(loadBalancerNameNode.GetText());
      m_loadBalancerNameHasBeenSet = true;
    }
    XmlNode domainNode = resultNode.FirstChild("Domain");
    if(!domainNode.IsNull())
    {
      m_domain = Aws::Utils::Xml::DecodeEscapedXmlText(domainNode.GetText());
      m_domainHasBeenSet = true;
    }
    XmlNode listenersNode = resultNode.FirstChild("Listeners");
    if(!listenersNode.IsNull())
    {
      XmlNode listenersMember = listenersNode.FirstChild("member");
      m_listenersHasBeenSet = !listenersMember.IsNull();
      while(!listenersMember.IsNull())
      {
        m_listeners.push_back(listenersMember);
        listenersMember = listenersMember.NextNode("member");
      }

      m_listenersHasBeenSet = true;
    }
  }

  return *this;
}

void LoadBalancerDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_loadBalancerNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_domainHasBeenSet)
  {
      oStream << location << index << locationValue << ".Domain=" << StringUtils::URLEncode(m_domain.c_str()) << "&";
  }

  if(m_listenersHasBeenSet)
  {
      unsigned listenersIdx = 1;
      for(auto& item : m_listeners)
      {
        Aws::StringStream listenersSs;
        listenersSs << location << index << locationValue << ".Listeners.member." << listenersIdx++;
        item.OutputToStream(oStream, listenersSs.str().c_str());
      }
  }

}

void LoadBalancerDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_loadBalancerNameHasBeenSet)
  {
      oStream << location << ".LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }
  if(m_domainHasBeenSet)
  {
      oStream << location << ".Domain=" << StringUtils::URLEncode(m_domain.c_str()) << "&";
  }
  if(m_listenersHasBeenSet)
  {
      unsigned listenersIdx = 1;
      for(auto& item : m_listeners)
      {
        Aws::StringStream listenersSs;
        listenersSs << location << ".Listeners.member." << listenersIdx++;
        item.OutputToStream(oStream, listenersSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
