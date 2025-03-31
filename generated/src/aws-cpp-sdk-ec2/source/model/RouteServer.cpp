/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServer.h>
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

RouteServer::RouteServer(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RouteServer& RouteServer::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode routeServerIdNode = resultNode.FirstChild("routeServerId");
    if(!routeServerIdNode.IsNull())
    {
      m_routeServerId = Aws::Utils::Xml::DecodeEscapedXmlText(routeServerIdNode.GetText());
      m_routeServerIdHasBeenSet = true;
    }
    XmlNode amazonSideAsnNode = resultNode.FirstChild("amazonSideAsn");
    if(!amazonSideAsnNode.IsNull())
    {
      m_amazonSideAsn = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(amazonSideAsnNode.GetText()).c_str()).c_str());
      m_amazonSideAsnHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = RouteServerStateMapper::GetRouteServerStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode persistRoutesStateNode = resultNode.FirstChild("persistRoutesState");
    if(!persistRoutesStateNode.IsNull())
    {
      m_persistRoutesState = RouteServerPersistRoutesStateMapper::GetRouteServerPersistRoutesStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(persistRoutesStateNode.GetText()).c_str()));
      m_persistRoutesStateHasBeenSet = true;
    }
    XmlNode persistRoutesDurationNode = resultNode.FirstChild("persistRoutesDuration");
    if(!persistRoutesDurationNode.IsNull())
    {
      m_persistRoutesDuration = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(persistRoutesDurationNode.GetText()).c_str()).c_str());
      m_persistRoutesDurationHasBeenSet = true;
    }
    XmlNode snsNotificationsEnabledNode = resultNode.FirstChild("snsNotificationsEnabled");
    if(!snsNotificationsEnabledNode.IsNull())
    {
      m_snsNotificationsEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(snsNotificationsEnabledNode.GetText()).c_str()).c_str());
      m_snsNotificationsEnabledHasBeenSet = true;
    }
    XmlNode snsTopicArnNode = resultNode.FirstChild("snsTopicArn");
    if(!snsTopicArnNode.IsNull())
    {
      m_snsTopicArn = Aws::Utils::Xml::DecodeEscapedXmlText(snsTopicArnNode.GetText());
      m_snsTopicArnHasBeenSet = true;
    }
  }

  return *this;
}

void RouteServer::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_routeServerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteServerId=" << StringUtils::URLEncode(m_routeServerId.c_str()) << "&";
  }

  if(m_amazonSideAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".AmazonSideAsn=" << m_amazonSideAsn << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(RouteServerStateMapper::GetNameForRouteServerState(m_state)) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_persistRoutesStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".PersistRoutesState=" << StringUtils::URLEncode(RouteServerPersistRoutesStateMapper::GetNameForRouteServerPersistRoutesState(m_persistRoutesState)) << "&";
  }

  if(m_persistRoutesDurationHasBeenSet)
  {
      oStream << location << index << locationValue << ".PersistRoutesDuration=" << m_persistRoutesDuration << "&";
  }

  if(m_snsNotificationsEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnsNotificationsEnabled=" << std::boolalpha << m_snsNotificationsEnabled << "&";
  }

  if(m_snsTopicArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnsTopicArn=" << StringUtils::URLEncode(m_snsTopicArn.c_str()) << "&";
  }

}

void RouteServer::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_routeServerIdHasBeenSet)
  {
      oStream << location << ".RouteServerId=" << StringUtils::URLEncode(m_routeServerId.c_str()) << "&";
  }
  if(m_amazonSideAsnHasBeenSet)
  {
      oStream << location << ".AmazonSideAsn=" << m_amazonSideAsn << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(RouteServerStateMapper::GetNameForRouteServerState(m_state)) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_persistRoutesStateHasBeenSet)
  {
      oStream << location << ".PersistRoutesState=" << StringUtils::URLEncode(RouteServerPersistRoutesStateMapper::GetNameForRouteServerPersistRoutesState(m_persistRoutesState)) << "&";
  }
  if(m_persistRoutesDurationHasBeenSet)
  {
      oStream << location << ".PersistRoutesDuration=" << m_persistRoutesDuration << "&";
  }
  if(m_snsNotificationsEnabledHasBeenSet)
  {
      oStream << location << ".SnsNotificationsEnabled=" << std::boolalpha << m_snsNotificationsEnabled << "&";
  }
  if(m_snsTopicArnHasBeenSet)
  {
      oStream << location << ".SnsTopicArn=" << StringUtils::URLEncode(m_snsTopicArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
