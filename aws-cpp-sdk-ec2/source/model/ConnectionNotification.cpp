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

ConnectionNotification::ConnectionNotification() : 
    m_connectionNotificationIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false),
    m_connectionNotificationType(ConnectionNotificationType::NOT_SET),
    m_connectionNotificationTypeHasBeenSet(false),
    m_connectionNotificationArnHasBeenSet(false),
    m_connectionEventsHasBeenSet(false),
    m_connectionNotificationState(ConnectionNotificationState::NOT_SET),
    m_connectionNotificationStateHasBeenSet(false)
{
}

ConnectionNotification::ConnectionNotification(const XmlNode& xmlNode) : 
    m_connectionNotificationIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false),
    m_connectionNotificationType(ConnectionNotificationType::NOT_SET),
    m_connectionNotificationTypeHasBeenSet(false),
    m_connectionNotificationArnHasBeenSet(false),
    m_connectionEventsHasBeenSet(false),
    m_connectionNotificationState(ConnectionNotificationState::NOT_SET),
    m_connectionNotificationStateHasBeenSet(false)
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
      m_connectionNotificationId = connectionNotificationIdNode.GetText();
      m_connectionNotificationIdHasBeenSet = true;
    }
    XmlNode serviceIdNode = resultNode.FirstChild("serviceId");
    if(!serviceIdNode.IsNull())
    {
      m_serviceId = serviceIdNode.GetText();
      m_serviceIdHasBeenSet = true;
    }
    XmlNode vpcEndpointIdNode = resultNode.FirstChild("vpcEndpointId");
    if(!vpcEndpointIdNode.IsNull())
    {
      m_vpcEndpointId = vpcEndpointIdNode.GetText();
      m_vpcEndpointIdHasBeenSet = true;
    }
    XmlNode connectionNotificationTypeNode = resultNode.FirstChild("connectionNotificationType");
    if(!connectionNotificationTypeNode.IsNull())
    {
      m_connectionNotificationType = ConnectionNotificationTypeMapper::GetConnectionNotificationTypeForName(StringUtils::Trim(connectionNotificationTypeNode.GetText().c_str()).c_str());
      m_connectionNotificationTypeHasBeenSet = true;
    }
    XmlNode connectionNotificationArnNode = resultNode.FirstChild("connectionNotificationArn");
    if(!connectionNotificationArnNode.IsNull())
    {
      m_connectionNotificationArn = connectionNotificationArnNode.GetText();
      m_connectionNotificationArnHasBeenSet = true;
    }
    XmlNode connectionEventsNode = resultNode.FirstChild("connectionEvents");
    if(!connectionEventsNode.IsNull())
    {
      XmlNode connectionEventsMember = connectionEventsNode.FirstChild("item");
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
      m_connectionNotificationState = ConnectionNotificationStateMapper::GetConnectionNotificationStateForName(StringUtils::Trim(connectionNotificationStateNode.GetText().c_str()).c_str());
      m_connectionNotificationStateHasBeenSet = true;
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
      oStream << location << index << locationValue << ".ConnectionNotificationType=" << ConnectionNotificationTypeMapper::GetNameForConnectionNotificationType(m_connectionNotificationType) << "&";
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
      oStream << location << index << locationValue << ".ConnectionNotificationState=" << ConnectionNotificationStateMapper::GetNameForConnectionNotificationState(m_connectionNotificationState) << "&";
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
      oStream << location << ".ConnectionNotificationType=" << ConnectionNotificationTypeMapper::GetNameForConnectionNotificationType(m_connectionNotificationType) << "&";
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
      oStream << location << ".ConnectionNotificationState=" << ConnectionNotificationStateMapper::GetNameForConnectionNotificationState(m_connectionNotificationState) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
