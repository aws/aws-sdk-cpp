/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessEndpoint.h>
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

VerifiedAccessEndpoint::VerifiedAccessEndpoint() : 
    m_verifiedAccessInstanceIdHasBeenSet(false),
    m_verifiedAccessGroupIdHasBeenSet(false),
    m_verifiedAccessEndpointIdHasBeenSet(false),
    m_applicationDomainHasBeenSet(false),
    m_endpointType(VerifiedAccessEndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_attachmentType(VerifiedAccessEndpointAttachmentType::NOT_SET),
    m_attachmentTypeHasBeenSet(false),
    m_domainCertificateArnHasBeenSet(false),
    m_endpointDomainHasBeenSet(false),
    m_deviceValidationDomainHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_loadBalancerOptionsHasBeenSet(false),
    m_networkInterfaceOptionsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_deletionTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

VerifiedAccessEndpoint::VerifiedAccessEndpoint(const XmlNode& xmlNode) : 
    m_verifiedAccessInstanceIdHasBeenSet(false),
    m_verifiedAccessGroupIdHasBeenSet(false),
    m_verifiedAccessEndpointIdHasBeenSet(false),
    m_applicationDomainHasBeenSet(false),
    m_endpointType(VerifiedAccessEndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_attachmentType(VerifiedAccessEndpointAttachmentType::NOT_SET),
    m_attachmentTypeHasBeenSet(false),
    m_domainCertificateArnHasBeenSet(false),
    m_endpointDomainHasBeenSet(false),
    m_deviceValidationDomainHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_loadBalancerOptionsHasBeenSet(false),
    m_networkInterfaceOptionsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_deletionTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

VerifiedAccessEndpoint& VerifiedAccessEndpoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode verifiedAccessInstanceIdNode = resultNode.FirstChild("verifiedAccessInstanceId");
    if(!verifiedAccessInstanceIdNode.IsNull())
    {
      m_verifiedAccessInstanceId = Aws::Utils::Xml::DecodeEscapedXmlText(verifiedAccessInstanceIdNode.GetText());
      m_verifiedAccessInstanceIdHasBeenSet = true;
    }
    XmlNode verifiedAccessGroupIdNode = resultNode.FirstChild("verifiedAccessGroupId");
    if(!verifiedAccessGroupIdNode.IsNull())
    {
      m_verifiedAccessGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(verifiedAccessGroupIdNode.GetText());
      m_verifiedAccessGroupIdHasBeenSet = true;
    }
    XmlNode verifiedAccessEndpointIdNode = resultNode.FirstChild("verifiedAccessEndpointId");
    if(!verifiedAccessEndpointIdNode.IsNull())
    {
      m_verifiedAccessEndpointId = Aws::Utils::Xml::DecodeEscapedXmlText(verifiedAccessEndpointIdNode.GetText());
      m_verifiedAccessEndpointIdHasBeenSet = true;
    }
    XmlNode applicationDomainNode = resultNode.FirstChild("applicationDomain");
    if(!applicationDomainNode.IsNull())
    {
      m_applicationDomain = Aws::Utils::Xml::DecodeEscapedXmlText(applicationDomainNode.GetText());
      m_applicationDomainHasBeenSet = true;
    }
    XmlNode endpointTypeNode = resultNode.FirstChild("endpointType");
    if(!endpointTypeNode.IsNull())
    {
      m_endpointType = VerifiedAccessEndpointTypeMapper::GetVerifiedAccessEndpointTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endpointTypeNode.GetText()).c_str()).c_str());
      m_endpointTypeHasBeenSet = true;
    }
    XmlNode attachmentTypeNode = resultNode.FirstChild("attachmentType");
    if(!attachmentTypeNode.IsNull())
    {
      m_attachmentType = VerifiedAccessEndpointAttachmentTypeMapper::GetVerifiedAccessEndpointAttachmentTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(attachmentTypeNode.GetText()).c_str()).c_str());
      m_attachmentTypeHasBeenSet = true;
    }
    XmlNode domainCertificateArnNode = resultNode.FirstChild("domainCertificateArn");
    if(!domainCertificateArnNode.IsNull())
    {
      m_domainCertificateArn = Aws::Utils::Xml::DecodeEscapedXmlText(domainCertificateArnNode.GetText());
      m_domainCertificateArnHasBeenSet = true;
    }
    XmlNode endpointDomainNode = resultNode.FirstChild("endpointDomain");
    if(!endpointDomainNode.IsNull())
    {
      m_endpointDomain = Aws::Utils::Xml::DecodeEscapedXmlText(endpointDomainNode.GetText());
      m_endpointDomainHasBeenSet = true;
    }
    XmlNode deviceValidationDomainNode = resultNode.FirstChild("deviceValidationDomain");
    if(!deviceValidationDomainNode.IsNull())
    {
      m_deviceValidationDomain = Aws::Utils::Xml::DecodeEscapedXmlText(deviceValidationDomainNode.GetText());
      m_deviceValidationDomainHasBeenSet = true;
    }
    XmlNode securityGroupIdsNode = resultNode.FirstChild("securityGroupIdSet");
    if(!securityGroupIdsNode.IsNull())
    {
      XmlNode securityGroupIdsMember = securityGroupIdsNode.FirstChild("item");
      while(!securityGroupIdsMember.IsNull())
      {
        m_securityGroupIds.push_back(securityGroupIdsMember.GetText());
        securityGroupIdsMember = securityGroupIdsMember.NextNode("item");
      }

      m_securityGroupIdsHasBeenSet = true;
    }
    XmlNode loadBalancerOptionsNode = resultNode.FirstChild("loadBalancerOptions");
    if(!loadBalancerOptionsNode.IsNull())
    {
      m_loadBalancerOptions = loadBalancerOptionsNode;
      m_loadBalancerOptionsHasBeenSet = true;
    }
    XmlNode networkInterfaceOptionsNode = resultNode.FirstChild("networkInterfaceOptions");
    if(!networkInterfaceOptionsNode.IsNull())
    {
      m_networkInterfaceOptions = networkInterfaceOptionsNode;
      m_networkInterfaceOptionsHasBeenSet = true;
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
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("creationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText());
      m_creationTimeHasBeenSet = true;
    }
    XmlNode lastUpdatedTimeNode = resultNode.FirstChild("lastUpdatedTime");
    if(!lastUpdatedTimeNode.IsNull())
    {
      m_lastUpdatedTime = Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdatedTimeNode.GetText());
      m_lastUpdatedTimeHasBeenSet = true;
    }
    XmlNode deletionTimeNode = resultNode.FirstChild("deletionTime");
    if(!deletionTimeNode.IsNull())
    {
      m_deletionTime = Aws::Utils::Xml::DecodeEscapedXmlText(deletionTimeNode.GetText());
      m_deletionTimeHasBeenSet = true;
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

void VerifiedAccessEndpoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_verifiedAccessInstanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerifiedAccessInstanceId=" << StringUtils::URLEncode(m_verifiedAccessInstanceId.c_str()) << "&";
  }

  if(m_verifiedAccessGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerifiedAccessGroupId=" << StringUtils::URLEncode(m_verifiedAccessGroupId.c_str()) << "&";
  }

  if(m_verifiedAccessEndpointIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerifiedAccessEndpointId=" << StringUtils::URLEncode(m_verifiedAccessEndpointId.c_str()) << "&";
  }

  if(m_applicationDomainHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplicationDomain=" << StringUtils::URLEncode(m_applicationDomain.c_str()) << "&";
  }

  if(m_endpointTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndpointType=" << VerifiedAccessEndpointTypeMapper::GetNameForVerifiedAccessEndpointType(m_endpointType) << "&";
  }

  if(m_attachmentTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttachmentType=" << VerifiedAccessEndpointAttachmentTypeMapper::GetNameForVerifiedAccessEndpointAttachmentType(m_attachmentType) << "&";
  }

  if(m_domainCertificateArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DomainCertificateArn=" << StringUtils::URLEncode(m_domainCertificateArn.c_str()) << "&";
  }

  if(m_endpointDomainHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndpointDomain=" << StringUtils::URLEncode(m_endpointDomain.c_str()) << "&";
  }

  if(m_deviceValidationDomainHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeviceValidationDomain=" << StringUtils::URLEncode(m_deviceValidationDomain.c_str()) << "&";
  }

  if(m_securityGroupIdsHasBeenSet)
  {
      unsigned securityGroupIdsIdx = 1;
      for(auto& item : m_securityGroupIds)
      {
        oStream << location << index << locationValue << ".SecurityGroupIdSet." << securityGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_loadBalancerOptionsHasBeenSet)
  {
      Aws::StringStream loadBalancerOptionsLocationAndMemberSs;
      loadBalancerOptionsLocationAndMemberSs << location << index << locationValue << ".LoadBalancerOptions";
      m_loadBalancerOptions.OutputToStream(oStream, loadBalancerOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_networkInterfaceOptionsHasBeenSet)
  {
      Aws::StringStream networkInterfaceOptionsLocationAndMemberSs;
      networkInterfaceOptionsLocationAndMemberSs << location << index << locationValue << ".NetworkInterfaceOptions";
      m_networkInterfaceOptions.OutputToStream(oStream, networkInterfaceOptionsLocationAndMemberSs.str().c_str());
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

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.c_str()) << "&";
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.c_str()) << "&";
  }

  if(m_deletionTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeletionTime=" << StringUtils::URLEncode(m_deletionTime.c_str()) << "&";
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

void VerifiedAccessEndpoint::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_verifiedAccessInstanceIdHasBeenSet)
  {
      oStream << location << ".VerifiedAccessInstanceId=" << StringUtils::URLEncode(m_verifiedAccessInstanceId.c_str()) << "&";
  }
  if(m_verifiedAccessGroupIdHasBeenSet)
  {
      oStream << location << ".VerifiedAccessGroupId=" << StringUtils::URLEncode(m_verifiedAccessGroupId.c_str()) << "&";
  }
  if(m_verifiedAccessEndpointIdHasBeenSet)
  {
      oStream << location << ".VerifiedAccessEndpointId=" << StringUtils::URLEncode(m_verifiedAccessEndpointId.c_str()) << "&";
  }
  if(m_applicationDomainHasBeenSet)
  {
      oStream << location << ".ApplicationDomain=" << StringUtils::URLEncode(m_applicationDomain.c_str()) << "&";
  }
  if(m_endpointTypeHasBeenSet)
  {
      oStream << location << ".EndpointType=" << VerifiedAccessEndpointTypeMapper::GetNameForVerifiedAccessEndpointType(m_endpointType) << "&";
  }
  if(m_attachmentTypeHasBeenSet)
  {
      oStream << location << ".AttachmentType=" << VerifiedAccessEndpointAttachmentTypeMapper::GetNameForVerifiedAccessEndpointAttachmentType(m_attachmentType) << "&";
  }
  if(m_domainCertificateArnHasBeenSet)
  {
      oStream << location << ".DomainCertificateArn=" << StringUtils::URLEncode(m_domainCertificateArn.c_str()) << "&";
  }
  if(m_endpointDomainHasBeenSet)
  {
      oStream << location << ".EndpointDomain=" << StringUtils::URLEncode(m_endpointDomain.c_str()) << "&";
  }
  if(m_deviceValidationDomainHasBeenSet)
  {
      oStream << location << ".DeviceValidationDomain=" << StringUtils::URLEncode(m_deviceValidationDomain.c_str()) << "&";
  }
  if(m_securityGroupIdsHasBeenSet)
  {
      unsigned securityGroupIdsIdx = 1;
      for(auto& item : m_securityGroupIds)
      {
        oStream << location << ".SecurityGroupIdSet." << securityGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_loadBalancerOptionsHasBeenSet)
  {
      Aws::String loadBalancerOptionsLocationAndMember(location);
      loadBalancerOptionsLocationAndMember += ".LoadBalancerOptions";
      m_loadBalancerOptions.OutputToStream(oStream, loadBalancerOptionsLocationAndMember.c_str());
  }
  if(m_networkInterfaceOptionsHasBeenSet)
  {
      Aws::String networkInterfaceOptionsLocationAndMember(location);
      networkInterfaceOptionsLocationAndMember += ".NetworkInterfaceOptions";
      m_networkInterfaceOptions.OutputToStream(oStream, networkInterfaceOptionsLocationAndMember.c_str());
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
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.c_str()) << "&";
  }
  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.c_str()) << "&";
  }
  if(m_deletionTimeHasBeenSet)
  {
      oStream << location << ".DeletionTime=" << StringUtils::URLEncode(m_deletionTime.c_str()) << "&";
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
