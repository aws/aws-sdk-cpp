/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_certificateArnHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CustomerGateway::CustomerGateway(const XmlNode& xmlNode) : 
    m_bgpAsnHasBeenSet(false),
    m_customerGatewayIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
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
      m_bgpAsn = Aws::Utils::Xml::DecodeEscapedXmlText(bgpAsnNode.GetText());
      m_bgpAsnHasBeenSet = true;
    }
    XmlNode customerGatewayIdNode = resultNode.FirstChild("customerGatewayId");
    if(!customerGatewayIdNode.IsNull())
    {
      m_customerGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(customerGatewayIdNode.GetText());
      m_customerGatewayIdHasBeenSet = true;
    }
    XmlNode ipAddressNode = resultNode.FirstChild("ipAddress");
    if(!ipAddressNode.IsNull())
    {
      m_ipAddress = Aws::Utils::Xml::DecodeEscapedXmlText(ipAddressNode.GetText());
      m_ipAddressHasBeenSet = true;
    }
    XmlNode certificateArnNode = resultNode.FirstChild("certificateArn");
    if(!certificateArnNode.IsNull())
    {
      m_certificateArn = Aws::Utils::Xml::DecodeEscapedXmlText(certificateArnNode.GetText());
      m_certificateArnHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("type");
    if(!typeNode.IsNull())
    {
      m_type = Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText());
      m_typeHasBeenSet = true;
    }
    XmlNode deviceNameNode = resultNode.FirstChild("deviceName");
    if(!deviceNameNode.IsNull())
    {
      m_deviceName = Aws::Utils::Xml::DecodeEscapedXmlText(deviceNameNode.GetText());
      m_deviceNameHasBeenSet = true;
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

  if(m_certificateArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".CertificateArn=" << StringUtils::URLEncode(m_certificateArn.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }

  if(m_deviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
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
  if(m_certificateArnHasBeenSet)
  {
      oStream << location << ".CertificateArn=" << StringUtils::URLEncode(m_certificateArn.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }
  if(m_deviceNameHasBeenSet)
  {
      oStream << location << ".DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
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
