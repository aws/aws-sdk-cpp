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

#include <aws/ec2/model/ClientVpnRoute.h>
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

ClientVpnRoute::ClientVpnRoute() : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_destinationCidrHasBeenSet(false),
    m_targetSubnetHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_originHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

ClientVpnRoute::ClientVpnRoute(const XmlNode& xmlNode) : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_destinationCidrHasBeenSet(false),
    m_targetSubnetHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_originHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

ClientVpnRoute& ClientVpnRoute::operator =(const XmlNode& xmlNode)
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
    XmlNode destinationCidrNode = resultNode.FirstChild("destinationCidr");
    if(!destinationCidrNode.IsNull())
    {
      m_destinationCidr = destinationCidrNode.GetText();
      m_destinationCidrHasBeenSet = true;
    }
    XmlNode targetSubnetNode = resultNode.FirstChild("targetSubnet");
    if(!targetSubnetNode.IsNull())
    {
      m_targetSubnet = targetSubnetNode.GetText();
      m_targetSubnetHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = typeNode.GetText();
      m_typeHasBeenSet = true;
    }
    XmlNode originNode = resultNode.FirstChild("origin");
    if(!originNode.IsNull())
    {
      m_origin = originNode.GetText();
      m_originHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode;
      m_statusHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void ClientVpnRoute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clientVpnEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }

  if(m_destinationCidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationCidr=" << StringUtils::URLEncode(m_destinationCidr.c_str()) << "&";
  }

  if(m_targetSubnetHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetSubnet=" << StringUtils::URLEncode(m_targetSubnet.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }

  if(m_originHasBeenSet)
  {
      oStream << location << index << locationValue << ".Origin=" << StringUtils::URLEncode(m_origin.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      Aws::StringStream statusLocationAndMemberSs;
      statusLocationAndMemberSs << location << index << locationValue << ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMemberSs.str().c_str());
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void ClientVpnRoute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clientVpnEndpointIdHasBeenSet)
  {
      oStream << location << ".ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }
  if(m_destinationCidrHasBeenSet)
  {
      oStream << location << ".DestinationCidr=" << StringUtils::URLEncode(m_destinationCidr.c_str()) << "&";
  }
  if(m_targetSubnetHasBeenSet)
  {
      oStream << location << ".TargetSubnet=" << StringUtils::URLEncode(m_targetSubnet.c_str()) << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }
  if(m_originHasBeenSet)
  {
      oStream << location << ".Origin=" << StringUtils::URLEncode(m_origin.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      Aws::String statusLocationAndMember(location);
      statusLocationAndMember += ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMember.c_str());
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
