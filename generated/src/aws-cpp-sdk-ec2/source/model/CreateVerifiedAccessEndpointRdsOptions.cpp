/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateVerifiedAccessEndpointRdsOptions.h>
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

CreateVerifiedAccessEndpointRdsOptions::CreateVerifiedAccessEndpointRdsOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CreateVerifiedAccessEndpointRdsOptions& CreateVerifiedAccessEndpointRdsOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode protocolNode = resultNode.FirstChild("Protocol");
    if(!protocolNode.IsNull())
    {
      m_protocol = VerifiedAccessEndpointProtocolMapper::GetVerifiedAccessEndpointProtocolForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(protocolNode.GetText()).c_str()));
      m_protocolHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode rdsDbInstanceArnNode = resultNode.FirstChild("RdsDbInstanceArn");
    if(!rdsDbInstanceArnNode.IsNull())
    {
      m_rdsDbInstanceArn = Aws::Utils::Xml::DecodeEscapedXmlText(rdsDbInstanceArnNode.GetText());
      m_rdsDbInstanceArnHasBeenSet = true;
    }
    XmlNode rdsDbClusterArnNode = resultNode.FirstChild("RdsDbClusterArn");
    if(!rdsDbClusterArnNode.IsNull())
    {
      m_rdsDbClusterArn = Aws::Utils::Xml::DecodeEscapedXmlText(rdsDbClusterArnNode.GetText());
      m_rdsDbClusterArnHasBeenSet = true;
    }
    XmlNode rdsDbProxyArnNode = resultNode.FirstChild("RdsDbProxyArn");
    if(!rdsDbProxyArnNode.IsNull())
    {
      m_rdsDbProxyArn = Aws::Utils::Xml::DecodeEscapedXmlText(rdsDbProxyArnNode.GetText());
      m_rdsDbProxyArnHasBeenSet = true;
    }
    XmlNode rdsEndpointNode = resultNode.FirstChild("RdsEndpoint");
    if(!rdsEndpointNode.IsNull())
    {
      m_rdsEndpoint = Aws::Utils::Xml::DecodeEscapedXmlText(rdsEndpointNode.GetText());
      m_rdsEndpointHasBeenSet = true;
    }
    XmlNode subnetIdsNode = resultNode.FirstChild("SubnetId");
    if(!subnetIdsNode.IsNull())
    {
      XmlNode subnetIdsMember = subnetIdsNode.FirstChild("item");
      m_subnetIdsHasBeenSet = !subnetIdsMember.IsNull();
      while(!subnetIdsMember.IsNull())
      {
        m_subnetIds.push_back(subnetIdsMember.GetText());
        subnetIdsMember = subnetIdsMember.NextNode("item");
      }

      m_subnetIdsHasBeenSet = true;
    }
  }

  return *this;
}

void CreateVerifiedAccessEndpointRdsOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_protocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".Protocol=" << StringUtils::URLEncode(VerifiedAccessEndpointProtocolMapper::GetNameForVerifiedAccessEndpointProtocol(m_protocol)) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_rdsDbInstanceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".RdsDbInstanceArn=" << StringUtils::URLEncode(m_rdsDbInstanceArn.c_str()) << "&";
  }

  if(m_rdsDbClusterArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".RdsDbClusterArn=" << StringUtils::URLEncode(m_rdsDbClusterArn.c_str()) << "&";
  }

  if(m_rdsDbProxyArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".RdsDbProxyArn=" << StringUtils::URLEncode(m_rdsDbProxyArn.c_str()) << "&";
  }

  if(m_rdsEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".RdsEndpoint=" << StringUtils::URLEncode(m_rdsEndpoint.c_str()) << "&";
  }

  if(m_subnetIdsHasBeenSet)
  {
      unsigned subnetIdsIdx = 1;
      for(auto& item : m_subnetIds)
      {
        oStream << location << index << locationValue << ".SubnetId." << subnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void CreateVerifiedAccessEndpointRdsOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_protocolHasBeenSet)
  {
      oStream << location << ".Protocol=" << StringUtils::URLEncode(VerifiedAccessEndpointProtocolMapper::GetNameForVerifiedAccessEndpointProtocol(m_protocol)) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_rdsDbInstanceArnHasBeenSet)
  {
      oStream << location << ".RdsDbInstanceArn=" << StringUtils::URLEncode(m_rdsDbInstanceArn.c_str()) << "&";
  }
  if(m_rdsDbClusterArnHasBeenSet)
  {
      oStream << location << ".RdsDbClusterArn=" << StringUtils::URLEncode(m_rdsDbClusterArn.c_str()) << "&";
  }
  if(m_rdsDbProxyArnHasBeenSet)
  {
      oStream << location << ".RdsDbProxyArn=" << StringUtils::URLEncode(m_rdsDbProxyArn.c_str()) << "&";
  }
  if(m_rdsEndpointHasBeenSet)
  {
      oStream << location << ".RdsEndpoint=" << StringUtils::URLEncode(m_rdsEndpoint.c_str()) << "&";
  }
  if(m_subnetIdsHasBeenSet)
  {
      unsigned subnetIdsIdx = 1;
      for(auto& item : m_subnetIds)
      {
        oStream << location << ".SubnetId." << subnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
