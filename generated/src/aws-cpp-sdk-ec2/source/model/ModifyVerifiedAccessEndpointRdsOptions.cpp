/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVerifiedAccessEndpointRdsOptions.h>
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

ModifyVerifiedAccessEndpointRdsOptions::ModifyVerifiedAccessEndpointRdsOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ModifyVerifiedAccessEndpointRdsOptions& ModifyVerifiedAccessEndpointRdsOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
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
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode rdsEndpointNode = resultNode.FirstChild("RdsEndpoint");
    if(!rdsEndpointNode.IsNull())
    {
      m_rdsEndpoint = Aws::Utils::Xml::DecodeEscapedXmlText(rdsEndpointNode.GetText());
      m_rdsEndpointHasBeenSet = true;
    }
  }

  return *this;
}

void ModifyVerifiedAccessEndpointRdsOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subnetIdsHasBeenSet)
  {
      unsigned subnetIdsIdx = 1;
      for(auto& item : m_subnetIds)
      {
        oStream << location << index << locationValue << ".SubnetId." << subnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_rdsEndpointHasBeenSet)
  {
      oStream << location << index << locationValue << ".RdsEndpoint=" << StringUtils::URLEncode(m_rdsEndpoint.c_str()) << "&";
  }

}

void ModifyVerifiedAccessEndpointRdsOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subnetIdsHasBeenSet)
  {
      unsigned subnetIdsIdx = 1;
      for(auto& item : m_subnetIds)
      {
        oStream << location << ".SubnetId." << subnetIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_rdsEndpointHasBeenSet)
  {
      oStream << location << ".RdsEndpoint=" << StringUtils::URLEncode(m_rdsEndpoint.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
