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

#include <aws/ec2/model/TargetNetwork.h>
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

TargetNetwork::TargetNetwork() : 
    m_associationIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_targetNetworkIdHasBeenSet(false),
    m_clientVpnEndpointIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_securityGroupsHasBeenSet(false)
{
}

TargetNetwork::TargetNetwork(const XmlNode& xmlNode) : 
    m_associationIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_targetNetworkIdHasBeenSet(false),
    m_clientVpnEndpointIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_securityGroupsHasBeenSet(false)
{
  *this = xmlNode;
}

TargetNetwork& TargetNetwork::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode associationIdNode = resultNode.FirstChild("associationId");
    if(!associationIdNode.IsNull())
    {
      m_associationId = associationIdNode.GetText();
      m_associationIdHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
    XmlNode targetNetworkIdNode = resultNode.FirstChild("targetNetworkId");
    if(!targetNetworkIdNode.IsNull())
    {
      m_targetNetworkId = targetNetworkIdNode.GetText();
      m_targetNetworkIdHasBeenSet = true;
    }
    XmlNode clientVpnEndpointIdNode = resultNode.FirstChild("clientVpnEndpointId");
    if(!clientVpnEndpointIdNode.IsNull())
    {
      m_clientVpnEndpointId = clientVpnEndpointIdNode.GetText();
      m_clientVpnEndpointIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode;
      m_statusHasBeenSet = true;
    }
    XmlNode securityGroupsNode = resultNode.FirstChild("securityGroups");
    if(!securityGroupsNode.IsNull())
    {
      XmlNode securityGroupsMember = securityGroupsNode.FirstChild("item");
      while(!securityGroupsMember.IsNull())
      {
        m_securityGroups.push_back(securityGroupsMember.GetText());
        securityGroupsMember = securityGroupsMember.NextNode("item");
      }

      m_securityGroupsHasBeenSet = true;
    }
  }

  return *this;
}

void TargetNetwork::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_associationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_targetNetworkIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetNetworkId=" << StringUtils::URLEncode(m_targetNetworkId.c_str()) << "&";
  }

  if(m_clientVpnEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      Aws::StringStream statusLocationAndMemberSs;
      statusLocationAndMemberSs << location << index << locationValue << ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMemberSs.str().c_str());
  }

  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        oStream << location << index << locationValue << ".SecurityGroups." << securityGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void TargetNetwork::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_associationIdHasBeenSet)
  {
      oStream << location << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_targetNetworkIdHasBeenSet)
  {
      oStream << location << ".TargetNetworkId=" << StringUtils::URLEncode(m_targetNetworkId.c_str()) << "&";
  }
  if(m_clientVpnEndpointIdHasBeenSet)
  {
      oStream << location << ".ClientVpnEndpointId=" << StringUtils::URLEncode(m_clientVpnEndpointId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      Aws::String statusLocationAndMember(location);
      statusLocationAndMember += ".Status";
      m_status.OutputToStream(oStream, statusLocationAndMember.c_str());
  }
  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        oStream << location << ".SecurityGroups." << securityGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
