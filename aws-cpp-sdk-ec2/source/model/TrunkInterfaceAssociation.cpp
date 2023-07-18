/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TrunkInterfaceAssociation.h>
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

TrunkInterfaceAssociation::TrunkInterfaceAssociation() : 
    m_associationIdHasBeenSet(false),
    m_branchInterfaceIdHasBeenSet(false),
    m_trunkInterfaceIdHasBeenSet(false),
    m_interfaceProtocol(InterfaceProtocolType::NOT_SET),
    m_interfaceProtocolHasBeenSet(false),
    m_vlanId(0),
    m_vlanIdHasBeenSet(false),
    m_greKey(0),
    m_greKeyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TrunkInterfaceAssociation::TrunkInterfaceAssociation(const XmlNode& xmlNode) : 
    m_associationIdHasBeenSet(false),
    m_branchInterfaceIdHasBeenSet(false),
    m_trunkInterfaceIdHasBeenSet(false),
    m_interfaceProtocol(InterfaceProtocolType::NOT_SET),
    m_interfaceProtocolHasBeenSet(false),
    m_vlanId(0),
    m_vlanIdHasBeenSet(false),
    m_greKey(0),
    m_greKeyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

TrunkInterfaceAssociation& TrunkInterfaceAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode associationIdNode = resultNode.FirstChild("associationId");
    if(!associationIdNode.IsNull())
    {
      m_associationId = Aws::Utils::Xml::DecodeEscapedXmlText(associationIdNode.GetText());
      m_associationIdHasBeenSet = true;
    }
    XmlNode branchInterfaceIdNode = resultNode.FirstChild("branchInterfaceId");
    if(!branchInterfaceIdNode.IsNull())
    {
      m_branchInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(branchInterfaceIdNode.GetText());
      m_branchInterfaceIdHasBeenSet = true;
    }
    XmlNode trunkInterfaceIdNode = resultNode.FirstChild("trunkInterfaceId");
    if(!trunkInterfaceIdNode.IsNull())
    {
      m_trunkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(trunkInterfaceIdNode.GetText());
      m_trunkInterfaceIdHasBeenSet = true;
    }
    XmlNode interfaceProtocolNode = resultNode.FirstChild("interfaceProtocol");
    if(!interfaceProtocolNode.IsNull())
    {
      m_interfaceProtocol = InterfaceProtocolTypeMapper::GetInterfaceProtocolTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(interfaceProtocolNode.GetText()).c_str()).c_str());
      m_interfaceProtocolHasBeenSet = true;
    }
    XmlNode vlanIdNode = resultNode.FirstChild("vlanId");
    if(!vlanIdNode.IsNull())
    {
      m_vlanId = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vlanIdNode.GetText()).c_str()).c_str());
      m_vlanIdHasBeenSet = true;
    }
    XmlNode greKeyNode = resultNode.FirstChild("greKey");
    if(!greKeyNode.IsNull())
    {
      m_greKey = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(greKeyNode.GetText()).c_str()).c_str());
      m_greKeyHasBeenSet = true;
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

void TrunkInterfaceAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_associationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }

  if(m_branchInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".BranchInterfaceId=" << StringUtils::URLEncode(m_branchInterfaceId.c_str()) << "&";
  }

  if(m_trunkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrunkInterfaceId=" << StringUtils::URLEncode(m_trunkInterfaceId.c_str()) << "&";
  }

  if(m_interfaceProtocolHasBeenSet)
  {
      oStream << location << index << locationValue << ".InterfaceProtocol=" << InterfaceProtocolTypeMapper::GetNameForInterfaceProtocolType(m_interfaceProtocol) << "&";
  }

  if(m_vlanIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VlanId=" << m_vlanId << "&";
  }

  if(m_greKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".GreKey=" << m_greKey << "&";
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

void TrunkInterfaceAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_associationIdHasBeenSet)
  {
      oStream << location << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }
  if(m_branchInterfaceIdHasBeenSet)
  {
      oStream << location << ".BranchInterfaceId=" << StringUtils::URLEncode(m_branchInterfaceId.c_str()) << "&";
  }
  if(m_trunkInterfaceIdHasBeenSet)
  {
      oStream << location << ".TrunkInterfaceId=" << StringUtils::URLEncode(m_trunkInterfaceId.c_str()) << "&";
  }
  if(m_interfaceProtocolHasBeenSet)
  {
      oStream << location << ".InterfaceProtocol=" << InterfaceProtocolTypeMapper::GetNameForInterfaceProtocolType(m_interfaceProtocol) << "&";
  }
  if(m_vlanIdHasBeenSet)
  {
      oStream << location << ".VlanId=" << m_vlanId << "&";
  }
  if(m_greKeyHasBeenSet)
  {
      oStream << location << ".GreKey=" << m_greKey << "&";
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
