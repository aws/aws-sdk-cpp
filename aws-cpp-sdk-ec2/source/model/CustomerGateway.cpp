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

#include <aws/ec2/model/CustomerGateway.h>
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

CustomerGateway::CustomerGateway() : 
    m_bgpAsnHasBeenSet(false),
    m_customerGatewayIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CustomerGateway::CustomerGateway(const XmlNode& xmlNode) : 
    m_bgpAsnHasBeenSet(false),
    m_customerGatewayIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

CustomerGateway& CustomerGateway::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bgpAsnNode = resultNode.FirstChild("bgpAsn");
    if(!bgpAsnNode.IsNull())
    {
      m_bgpAsn = bgpAsnNode.GetText();
      m_bgpAsnHasBeenSet = true;
    }
    XmlNode customerGatewayIdNode = resultNode.FirstChild("customerGatewayId");
    if(!customerGatewayIdNode.IsNull())
    {
      m_customerGatewayId = customerGatewayIdNode.GetText();
      m_customerGatewayIdHasBeenSet = true;
    }
    XmlNode ipAddressNode = resultNode.FirstChild("ipAddress");
    if(!ipAddressNode.IsNull())
    {
      m_ipAddress = ipAddressNode.GetText();
      m_ipAddressHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = stateNode.GetText();
      m_stateHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = typeNode.GetText();
      m_typeHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void CustomerGateway::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_bgpAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".BgpAsn=" << StringUtils::URLEncode(m_bgpAsn.c_str()) << "&";
  }

  if(m_customerGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomerGatewayId=" << StringUtils::URLEncode(m_customerGatewayId.c_str()) << "&";
  }

  if(m_ipAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpAddress=" << StringUtils::URLEncode(m_ipAddress.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
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

}

void CustomerGateway::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_bgpAsnHasBeenSet)
  {
      oStream << location << ".BgpAsn=" << StringUtils::URLEncode(m_bgpAsn.c_str()) << "&";
  }
  if(m_customerGatewayIdHasBeenSet)
  {
      oStream << location << ".CustomerGatewayId=" << StringUtils::URLEncode(m_customerGatewayId.c_str()) << "&";
  }
  if(m_ipAddressHasBeenSet)
  {
      oStream << location << ".IpAddress=" << StringUtils::URLEncode(m_ipAddress.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
