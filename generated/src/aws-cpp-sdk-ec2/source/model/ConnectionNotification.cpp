/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ConnectionNotification.h>
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

ConnectionNotification::ConnectionNotification(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ConnectionNotification& ConnectionNotification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode connectionNotificationIdNode = resultNode.FirstChild("connectionNotificationId");
    if(!connectionNotificationIdNode.IsNull())
    {
      m_connectionNotificationId = Aws::Utils::Xml::DecodeEscapedXmlText(connectionNotificationIdNode.GetText());
      m_connectionNotificationIdHasBeenSet = true;
    }
    XmlNode serviceIdNode = resultNode.FirstChild("serviceId");
    if(!serviceIdNode.IsNull())
    {
      m_serviceId = Aws::Utils::Xml::DecodeEscapedXmlText(serviceIdNode.GetText());
      m_serviceIdHasBeenSet = true;
    }
    XmlNode vpcEndpointIdNode = resultNode.FirstChild("vpcEndpointId");
    if(!vpcEndpointIdNode.IsNull())
    {
      m_vpcEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcEndpointIdNode.GetText());
      m_vpcEndpointIdHasBeenSet = true;
    }
    XmlNode connectionNotificationTypeNode = resultNode.FirstChild("connectionNotificationType");
    if(!connectionNotificationTypeNode.IsNull())
    {
      m_connectionNotificationType = ConnectionNotificationTypeMapper::GetConnectionNotificationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(connectionNotificationTypeNode.GetText()).c_str()));
      m_connectionNotificationTypeHasBeenSet = true;
    }
    XmlNode connectionNotificationArnNode = resultNode.FirstChild("connectionNotificationArn");
    if(!connectionNotificationArnNode.IsNull())
    {
      m_connectionNotificationArn = Aws::Utils::Xml::DecodeEscapedXmlText(connectionNotificationArnNode.GetText());
      m_connectionNotificationArnHasBeenSet = true;
    }
    XmlNode connectionEventsNode = resultNode.FirstChild("connectionEvents");
    if(!connectionEventsNode.IsNull())
    {
      XmlNode connectionEventsMember = connectionEventsNode.FirstChild("item");
      m_connectionEventsHasBeenSet = !connectionEventsMember.IsNull();
      while(!connectionEventsMember.IsNull())
      {
        m_connectionEvents.push_back(connectionEventsMember.GetText());
        connectionEventsMember = connectionEventsMember.NextNode("item");
      }

      m_connectionEventsHasBeenSet = true;
    }
    XmlNode connectionNotificationStateNode = resultNode.FirstChild("connectionNotificationState");
    if(!connectionNotificationStateNode.IsNull())
    {
      m_connectionNotificationState = ConnectionNotificationStateMapper::GetConnectionNotificationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(connectionNotificationStateNode.GetText()).c_str()));
      m_connectionNotificationStateHasBeenSet = true;
    }
    XmlNode serviceRegionNode = resultNode.FirstChild("serviceRegion");
    if(!serviceRegionNode.IsNull())
    {
      m_serviceRegion = Aws::Utils::Xml::DecodeEscapedXmlText(serviceRegionNode.GetText());
      m_serviceRegionHasBeenSet = true;
    }
  }

  return *this;
}

void ConnectionNotification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_connectionNotificationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConnectionNotificationId=" << StringUtils::URLEncode(m_connectionNotificationId.c_str()) << "&";
  }

  if(m_serviceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }

  if(m_vpcEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }

  if(m_connectionNotificationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConnectionNotificationType=" << StringUtils::URLEncode(ConnectionNotificationTypeMapper::GetNameForConnectionNotificationType(m_connectionNotificationType)) << "&";
  }

  if(m_connectionNotificationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConnectionNotificationArn=" << StringUtils::URLEncode(m_connectionNotificationArn.c_str()) << "&";
  }

  if(m_connectionEventsHasBeenSet)
  {
      unsigned connectionEventsIdx = 1;
      for(auto& item : m_connectionEvents)
      {
        oStream << location << index << locationValue << ".ConnectionEvents." << connectionEventsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_connectionNotificationStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConnectionNotificationState=" << StringUtils::URLEncode(ConnectionNotificationStateMapper::GetNameForConnectionNotificationState(m_connectionNotificationState)) << "&";
  }

  if(m_serviceRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceRegion=" << StringUtils::URLEncode(m_serviceRegion.c_str()) << "&";
  }

}

void ConnectionNotification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_connectionNotificationIdHasBeenSet)
  {
      oStream << location << ".ConnectionNotificationId=" << StringUtils::URLEncode(m_connectionNotificationId.c_str()) << "&";
  }
  if(m_serviceIdHasBeenSet)
  {
      oStream << location << ".ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }
  if(m_vpcEndpointIdHasBeenSet)
  {
      oStream << location << ".VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }
  if(m_connectionNotificationTypeHasBeenSet)
  {
      oStream << location << ".ConnectionNotificationType=" << StringUtils::URLEncode(ConnectionNotificationTypeMapper::GetNameForConnectionNotificationType(m_connectionNotificationType)) << "&";
  }
  if(m_connectionNotificationArnHasBeenSet)
  {
      oStream << location << ".ConnectionNotificationArn=" << StringUtils::URLEncode(m_connectionNotificationArn.c_str()) << "&";
  }
  if(m_connectionEventsHasBeenSet)
  {
      unsigned connectionEventsIdx = 1;
      for(auto& item : m_connectionEvents)
      {
        oStream << location << ".ConnectionEvents." << connectionEventsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_connectionNotificationStateHasBeenSet)
  {
      oStream << location << ".ConnectionNotificationState=" << StringUtils::URLEncode(ConnectionNotificationStateMapper::GetNameForConnectionNotificationState(m_connectionNotificationState)) << "&";
  }
  if(m_serviceRegionHasBeenSet)
  {
      oStream << location << ".ServiceRegion=" << StringUtils::URLEncode(m_serviceRegion.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
