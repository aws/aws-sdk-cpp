/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessTrustProvider.h>
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

VerifiedAccessTrustProvider::VerifiedAccessTrustProvider() : 
    m_verifiedAccessTrustProviderIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_trustProviderType(TrustProviderType::NOT_SET),
    m_trustProviderTypeHasBeenSet(false),
    m_userTrustProviderType(UserTrustProviderType::NOT_SET),
    m_userTrustProviderTypeHasBeenSet(false),
    m_deviceTrustProviderType(DeviceTrustProviderType::NOT_SET),
    m_deviceTrustProviderTypeHasBeenSet(false),
    m_oidcOptionsHasBeenSet(false),
    m_deviceOptionsHasBeenSet(false),
    m_policyReferenceNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

VerifiedAccessTrustProvider::VerifiedAccessTrustProvider(const XmlNode& xmlNode) : 
    m_verifiedAccessTrustProviderIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_trustProviderType(TrustProviderType::NOT_SET),
    m_trustProviderTypeHasBeenSet(false),
    m_userTrustProviderType(UserTrustProviderType::NOT_SET),
    m_userTrustProviderTypeHasBeenSet(false),
    m_deviceTrustProviderType(DeviceTrustProviderType::NOT_SET),
    m_deviceTrustProviderTypeHasBeenSet(false),
    m_oidcOptionsHasBeenSet(false),
    m_deviceOptionsHasBeenSet(false),
    m_policyReferenceNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

VerifiedAccessTrustProvider& VerifiedAccessTrustProvider::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode verifiedAccessTrustProviderIdNode = resultNode.FirstChild("verifiedAccessTrustProviderId");
    if(!verifiedAccessTrustProviderIdNode.IsNull())
    {
      m_verifiedAccessTrustProviderId = Aws::Utils::Xml::DecodeEscapedXmlText(verifiedAccessTrustProviderIdNode.GetText());
      m_verifiedAccessTrustProviderIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode trustProviderTypeNode = resultNode.FirstChild("trustProviderType");
    if(!trustProviderTypeNode.IsNull())
    {
      m_trustProviderType = TrustProviderTypeMapper::GetTrustProviderTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trustProviderTypeNode.GetText()).c_str()).c_str());
      m_trustProviderTypeHasBeenSet = true;
    }
    XmlNode userTrustProviderTypeNode = resultNode.FirstChild("userTrustProviderType");
    if(!userTrustProviderTypeNode.IsNull())
    {
      m_userTrustProviderType = UserTrustProviderTypeMapper::GetUserTrustProviderTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(userTrustProviderTypeNode.GetText()).c_str()).c_str());
      m_userTrustProviderTypeHasBeenSet = true;
    }
    XmlNode deviceTrustProviderTypeNode = resultNode.FirstChild("deviceTrustProviderType");
    if(!deviceTrustProviderTypeNode.IsNull())
    {
      m_deviceTrustProviderType = DeviceTrustProviderTypeMapper::GetDeviceTrustProviderTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deviceTrustProviderTypeNode.GetText()).c_str()).c_str());
      m_deviceTrustProviderTypeHasBeenSet = true;
    }
    XmlNode oidcOptionsNode = resultNode.FirstChild("oidcOptions");
    if(!oidcOptionsNode.IsNull())
    {
      m_oidcOptions = oidcOptionsNode;
      m_oidcOptionsHasBeenSet = true;
    }
    XmlNode deviceOptionsNode = resultNode.FirstChild("deviceOptions");
    if(!deviceOptionsNode.IsNull())
    {
      m_deviceOptions = deviceOptionsNode;
      m_deviceOptionsHasBeenSet = true;
    }
    XmlNode policyReferenceNameNode = resultNode.FirstChild("policyReferenceName");
    if(!policyReferenceNameNode.IsNull())
    {
      m_policyReferenceName = Aws::Utils::Xml::DecodeEscapedXmlText(policyReferenceNameNode.GetText());
      m_policyReferenceNameHasBeenSet = true;
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

void VerifiedAccessTrustProvider::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_verifiedAccessTrustProviderIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VerifiedAccessTrustProviderId=" << StringUtils::URLEncode(m_verifiedAccessTrustProviderId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_trustProviderTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrustProviderType=" << TrustProviderTypeMapper::GetNameForTrustProviderType(m_trustProviderType) << "&";
  }

  if(m_userTrustProviderTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserTrustProviderType=" << UserTrustProviderTypeMapper::GetNameForUserTrustProviderType(m_userTrustProviderType) << "&";
  }

  if(m_deviceTrustProviderTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeviceTrustProviderType=" << DeviceTrustProviderTypeMapper::GetNameForDeviceTrustProviderType(m_deviceTrustProviderType) << "&";
  }

  if(m_oidcOptionsHasBeenSet)
  {
      Aws::StringStream oidcOptionsLocationAndMemberSs;
      oidcOptionsLocationAndMemberSs << location << index << locationValue << ".OidcOptions";
      m_oidcOptions.OutputToStream(oStream, oidcOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_deviceOptionsHasBeenSet)
  {
      Aws::StringStream deviceOptionsLocationAndMemberSs;
      deviceOptionsLocationAndMemberSs << location << index << locationValue << ".DeviceOptions";
      m_deviceOptions.OutputToStream(oStream, deviceOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_policyReferenceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyReferenceName=" << StringUtils::URLEncode(m_policyReferenceName.c_str()) << "&";
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.c_str()) << "&";
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.c_str()) << "&";
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

void VerifiedAccessTrustProvider::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_verifiedAccessTrustProviderIdHasBeenSet)
  {
      oStream << location << ".VerifiedAccessTrustProviderId=" << StringUtils::URLEncode(m_verifiedAccessTrustProviderId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_trustProviderTypeHasBeenSet)
  {
      oStream << location << ".TrustProviderType=" << TrustProviderTypeMapper::GetNameForTrustProviderType(m_trustProviderType) << "&";
  }
  if(m_userTrustProviderTypeHasBeenSet)
  {
      oStream << location << ".UserTrustProviderType=" << UserTrustProviderTypeMapper::GetNameForUserTrustProviderType(m_userTrustProviderType) << "&";
  }
  if(m_deviceTrustProviderTypeHasBeenSet)
  {
      oStream << location << ".DeviceTrustProviderType=" << DeviceTrustProviderTypeMapper::GetNameForDeviceTrustProviderType(m_deviceTrustProviderType) << "&";
  }
  if(m_oidcOptionsHasBeenSet)
  {
      Aws::String oidcOptionsLocationAndMember(location);
      oidcOptionsLocationAndMember += ".OidcOptions";
      m_oidcOptions.OutputToStream(oStream, oidcOptionsLocationAndMember.c_str());
  }
  if(m_deviceOptionsHasBeenSet)
  {
      Aws::String deviceOptionsLocationAndMember(location);
      deviceOptionsLocationAndMember += ".DeviceOptions";
      m_deviceOptions.OutputToStream(oStream, deviceOptionsLocationAndMember.c_str());
  }
  if(m_policyReferenceNameHasBeenSet)
  {
      oStream << location << ".PolicyReferenceName=" << StringUtils::URLEncode(m_policyReferenceName.c_str()) << "&";
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.c_str()) << "&";
  }
  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.c_str()) << "&";
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
