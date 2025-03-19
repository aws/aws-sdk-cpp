/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcEndpointAssociation.h>
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

VpcEndpointAssociation::VpcEndpointAssociation(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

VpcEndpointAssociation& VpcEndpointAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode vpcEndpointIdNode = resultNode.FirstChild("vpcEndpointId");
    if(!vpcEndpointIdNode.IsNull())
    {
      m_vpcEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcEndpointIdNode.GetText());
      m_vpcEndpointIdHasBeenSet = true;
    }
    XmlNode serviceNetworkArnNode = resultNode.FirstChild("serviceNetworkArn");
    if(!serviceNetworkArnNode.IsNull())
    {
      m_serviceNetworkArn = Aws::Utils::Xml::DecodeEscapedXmlText(serviceNetworkArnNode.GetText());
      m_serviceNetworkArnHasBeenSet = true;
    }
    XmlNode serviceNetworkNameNode = resultNode.FirstChild("serviceNetworkName");
    if(!serviceNetworkNameNode.IsNull())
    {
      m_serviceNetworkName = Aws::Utils::Xml::DecodeEscapedXmlText(serviceNetworkNameNode.GetText());
      m_serviceNetworkNameHasBeenSet = true;
    }
    XmlNode associatedResourceAccessibilityNode = resultNode.FirstChild("associatedResourceAccessibility");
    if(!associatedResourceAccessibilityNode.IsNull())
    {
      m_associatedResourceAccessibility = Aws::Utils::Xml::DecodeEscapedXmlText(associatedResourceAccessibilityNode.GetText());
      m_associatedResourceAccessibilityHasBeenSet = true;
    }
    XmlNode failureReasonNode = resultNode.FirstChild("failureReason");
    if(!failureReasonNode.IsNull())
    {
      m_failureReason = Aws::Utils::Xml::DecodeEscapedXmlText(failureReasonNode.GetText());
      m_failureReasonHasBeenSet = true;
    }
    XmlNode failureCodeNode = resultNode.FirstChild("failureCode");
    if(!failureCodeNode.IsNull())
    {
      m_failureCode = Aws::Utils::Xml::DecodeEscapedXmlText(failureCodeNode.GetText());
      m_failureCodeHasBeenSet = true;
    }
    XmlNode dnsEntryNode = resultNode.FirstChild("dnsEntry");
    if(!dnsEntryNode.IsNull())
    {
      m_dnsEntry = dnsEntryNode;
      m_dnsEntryHasBeenSet = true;
    }
    XmlNode privateDnsEntryNode = resultNode.FirstChild("privateDnsEntry");
    if(!privateDnsEntryNode.IsNull())
    {
      m_privateDnsEntry = privateDnsEntryNode;
      m_privateDnsEntryHasBeenSet = true;
    }
    XmlNode associatedResourceArnNode = resultNode.FirstChild("associatedResourceArn");
    if(!associatedResourceArnNode.IsNull())
    {
      m_associatedResourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(associatedResourceArnNode.GetText());
      m_associatedResourceArnHasBeenSet = true;
    }
    XmlNode resourceConfigurationGroupArnNode = resultNode.FirstChild("resourceConfigurationGroupArn");
    if(!resourceConfigurationGroupArnNode.IsNull())
    {
      m_resourceConfigurationGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(resourceConfigurationGroupArnNode.GetText());
      m_resourceConfigurationGroupArnHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
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

void VpcEndpointAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }

  if(m_vpcEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }

  if(m_serviceNetworkArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceNetworkArn=" << StringUtils::URLEncode(m_serviceNetworkArn.c_str()) << "&";
  }

  if(m_serviceNetworkNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceNetworkName=" << StringUtils::URLEncode(m_serviceNetworkName.c_str()) << "&";
  }

  if(m_associatedResourceAccessibilityHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociatedResourceAccessibility=" << StringUtils::URLEncode(m_associatedResourceAccessibility.c_str()) << "&";
  }

  if(m_failureReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureReason=" << StringUtils::URLEncode(m_failureReason.c_str()) << "&";
  }

  if(m_failureCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureCode=" << StringUtils::URLEncode(m_failureCode.c_str()) << "&";
  }

  if(m_dnsEntryHasBeenSet)
  {
      Aws::StringStream dnsEntryLocationAndMemberSs;
      dnsEntryLocationAndMemberSs << location << index << locationValue << ".DnsEntry";
      m_dnsEntry.OutputToStream(oStream, dnsEntryLocationAndMemberSs.str().c_str());
  }

  if(m_privateDnsEntryHasBeenSet)
  {
      Aws::StringStream privateDnsEntryLocationAndMemberSs;
      privateDnsEntryLocationAndMemberSs << location << index << locationValue << ".PrivateDnsEntry";
      m_privateDnsEntry.OutputToStream(oStream, privateDnsEntryLocationAndMemberSs.str().c_str());
  }

  if(m_associatedResourceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociatedResourceArn=" << StringUtils::URLEncode(m_associatedResourceArn.c_str()) << "&";
  }

  if(m_resourceConfigurationGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceConfigurationGroupArn=" << StringUtils::URLEncode(m_resourceConfigurationGroupArn.c_str()) << "&";
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

void VpcEndpointAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }
  if(m_vpcEndpointIdHasBeenSet)
  {
      oStream << location << ".VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }
  if(m_serviceNetworkArnHasBeenSet)
  {
      oStream << location << ".ServiceNetworkArn=" << StringUtils::URLEncode(m_serviceNetworkArn.c_str()) << "&";
  }
  if(m_serviceNetworkNameHasBeenSet)
  {
      oStream << location << ".ServiceNetworkName=" << StringUtils::URLEncode(m_serviceNetworkName.c_str()) << "&";
  }
  if(m_associatedResourceAccessibilityHasBeenSet)
  {
      oStream << location << ".AssociatedResourceAccessibility=" << StringUtils::URLEncode(m_associatedResourceAccessibility.c_str()) << "&";
  }
  if(m_failureReasonHasBeenSet)
  {
      oStream << location << ".FailureReason=" << StringUtils::URLEncode(m_failureReason.c_str()) << "&";
  }
  if(m_failureCodeHasBeenSet)
  {
      oStream << location << ".FailureCode=" << StringUtils::URLEncode(m_failureCode.c_str()) << "&";
  }
  if(m_dnsEntryHasBeenSet)
  {
      Aws::String dnsEntryLocationAndMember(location);
      dnsEntryLocationAndMember += ".DnsEntry";
      m_dnsEntry.OutputToStream(oStream, dnsEntryLocationAndMember.c_str());
  }
  if(m_privateDnsEntryHasBeenSet)
  {
      Aws::String privateDnsEntryLocationAndMember(location);
      privateDnsEntryLocationAndMember += ".PrivateDnsEntry";
      m_privateDnsEntry.OutputToStream(oStream, privateDnsEntryLocationAndMember.c_str());
  }
  if(m_associatedResourceArnHasBeenSet)
  {
      oStream << location << ".AssociatedResourceArn=" << StringUtils::URLEncode(m_associatedResourceArn.c_str()) << "&";
  }
  if(m_resourceConfigurationGroupArnHasBeenSet)
  {
      oStream << location << ".ResourceConfigurationGroupArn=" << StringUtils::URLEncode(m_resourceConfigurationGroupArn.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
