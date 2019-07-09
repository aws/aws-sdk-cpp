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

#include <aws/ec2/model/ClientVpnConnection.h>
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

ClientVpnConnection::ClientVpnConnection() : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_connectionEstablishedTimeHasBeenSet(false),
    m_ingressBytesHasBeenSet(false),
    m_egressBytesHasBeenSet(false),
    m_ingressPacketsHasBeenSet(false),
    m_egressPacketsHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_commonNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_connectionEndTimeHasBeenSet(false)
{
}

ClientVpnConnection::ClientVpnConnection(const XmlNode& xmlNode) : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_connectionIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_connectionEstablishedTimeHasBeenSet(false),
    m_ingressBytesHasBeenSet(false),
    m_egressBytesHasBeenSet(false),
    m_ingressPacketsHasBeenSet(false),
    m_egressPacketsHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_commonNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_connectionEndTimeHasBeenSet(false)
{
  *this = xmlNode;
}

ClientVpnConnection& ClientVpnConnection::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clientVpnEndpointIdNode = resultNode.FirstChild("clientVpnEndpointId");
    if(!clientVpnEndpointIdNode.IsNull())
    {
      m_clientVpnEndpointId = clientVpnEndpointIdNode.GetText();
      m_clientVpnEndpointIdHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = timestampNode.GetText();
      m_timestampHasBeenSet = true;
    }
    XmlNode connectionIdNode = resultNode.FirstChild("connectionId");
    if(!connectionIdNode.IsNull())
    {
      m_connectionId = connectionIdNode.GetText();
      m_connectionIdHasBeenSet = true;
    }
    XmlNode usernameNode = resultNode.FirstChild("username");
    if(!usernameNode.IsNull())
    {
      m_username = usernameNode.GetText();
      m_usernameHasBeenSet = true;
    }
    XmlNode connectionEstablishedTimeNode = resultNode.FirstChild("connectionEstablishedTime");
    if(!connectionEstablishedTimeNode.IsNull())
    {
      m_connectionEstablishedTime = connectionEstablishedTimeNode.GetText();
      m_connectionEstablishedTimeHasBeenSet = true;
    }
    XmlNode ingressBytesNode = resultNode.FirstChild("ingressBytes");
    if(!ingressBytesNode.IsNull())
    {
      m_ingressBytes = ingressBytesNode.GetText();
      m_ingressBytesHasBeenSet = true;
    }
    XmlNode egressBytesNode = resultNode.FirstChild("egressBytes");
    if(!egressBytesNode.IsNull())
    {
      m_egressBytes = egressBytesNode.GetText();
      m_egressBytesHasBeenSet = true;
    }
    XmlNode ingressPacketsNode = resultNode.FirstChild("ingressPackets");
    if(!ingressPacketsNode.IsNull())
    {
      m_ingressPackets = ingressPacketsNode.GetText();
      m_ingressPacketsHasBeenSet = true;
    }
    XmlNode egressPacketsNode = resultNode.FirstChild("egressPackets");
    if(!egressPacketsNode.IsNull())
    {
      m_egressPackets = egressPacketsNode.GetText();
      m_egressPacketsHasBeenSet = true;
    }
    XmlNode clientIpNode = resultNode.FirstChild("clientIp");
    if(!clientIpNode.IsNull())
    {
      m_clientIp = clientIpNode.GetText();
      m_clientIpHasBeenSet = true;
    }
    XmlNode commonNameNode = resultNode.FirstChild("commonName");
    if(!commonNameNode.IsNull())
    {
      m_commonName = commonNameNode.GetText();
      m_commonNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode;
      m_statusHasBeenSet = true;
    }
    XmlNode connectionEndTimeNode = resultNode.FirstChild("connectionEndTime");
    if(!connectionEndTimeNode.IsNull())
    {
      m_connectionEndTime = connectionEndTimeNode.GetText();
      m_connectionEndTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ClientVpnConnection::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clientVpnEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }

  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.c_str()) << "&";
  }

  if(m_connectionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConnectionId=" << StringUtils::URLEncode(m_connectionId.c_str()) << "&";
  }

  if(m_usernameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Username=" << StringUtils::URLEncode(m_username.c_str()) << "&";
  }

  if(m_connectionEstablishedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConnectionEstablishedTime=" << StringUtils::URLEncode(m_connectionEstablishedTime.c_str()) << "&";
  }

  if(m_ingressBytesHasBeenSet)
  {
      oStream << location << index << locationValue << ".IngressBytes=" << StringUtils::URLEncode(m_ingressBytes.c_str()) << "&";
  }

  if(m_egressBytesHasBeenSet)
  {
      oStream << location << index << locationValue << ".EgressBytes=" << StringUtils::URLEncode(m_egressBytes.c_str()) << "&";
  }

  if(m_ingressPacketsHasBeenSet)
  {
      oStream << location << index << locationValue << ".IngressPackets=" << StringUtils::URLEncode(m_ingressPackets.c_str()) << "&";
  }

  if(m_egressPacketsHasBeenSet)
  {
      oStream << location << index << locationValue << ".EgressPackets=" << StringUtils::URLEncode(m_egressPackets.c_str()) << "&";
  }

  if(m_clientIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientIp=" << StringUtils::URLEncode(m_clientIp.c_str()) << "&";
  }

  if(m_commonNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CommonName=" << StringUtils::URLEncode(m_commonName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      Aws::StringStream statusLocationAndMemberSs;
      statusLocationAndMemberSs << location << index << locationValue << ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMemberSs.str().c_str());
  }

  if(m_connectionEndTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConnectionEndTime=" << StringUtils::URLEncode(m_connectionEndTime.c_str()) << "&";
  }

}

void ClientVpnConnection::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clientVpnEndpointIdHasBeenSet)
  {
      oStream << location << ".ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.c_str()) << "&";
  }
  if(m_connectionIdHasBeenSet)
  {
      oStream << location << ".ConnectionId=" << StringUtils::URLEncode(m_connectionId.c_str()) << "&";
  }
  if(m_usernameHasBeenSet)
  {
      oStream << location << ".Username=" << StringUtils::URLEncode(m_username.c_str()) << "&";
  }
  if(m_connectionEstablishedTimeHasBeenSet)
  {
      oStream << location << ".ConnectionEstablishedTime=" << StringUtils::URLEncode(m_connectionEstablishedTime.c_str()) << "&";
  }
  if(m_ingressBytesHasBeenSet)
  {
      oStream << location << ".IngressBytes=" << StringUtils::URLEncode(m_ingressBytes.c_str()) << "&";
  }
  if(m_egressBytesHasBeenSet)
  {
      oStream << location << ".EgressBytes=" << StringUtils::URLEncode(m_egressBytes.c_str()) << "&";
  }
  if(m_ingressPacketsHasBeenSet)
  {
      oStream << location << ".IngressPackets=" << StringUtils::URLEncode(m_ingressPackets.c_str()) << "&";
  }
  if(m_egressPacketsHasBeenSet)
  {
      oStream << location << ".EgressPackets=" << StringUtils::URLEncode(m_egressPackets.c_str()) << "&";
  }
  if(m_clientIpHasBeenSet)
  {
      oStream << location << ".ClientIp=" << StringUtils::URLEncode(m_clientIp.c_str()) << "&";
  }
  if(m_commonNameHasBeenSet)
  {
      oStream << location << ".CommonName=" << StringUtils::URLEncode(m_commonName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      Aws::String statusLocationAndMember(location);
      statusLocationAndMember += ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMember.c_str());
  }
  if(m_connectionEndTimeHasBeenSet)
  {
      oStream << location << ".ConnectionEndTime=" << StringUtils::URLEncode(m_connectionEndTime.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
