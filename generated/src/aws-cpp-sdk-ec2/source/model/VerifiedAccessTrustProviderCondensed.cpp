/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VerifiedAccessTrustProviderCondensed.h>
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

VerifiedAccessTrustProviderCondensed::VerifiedAccessTrustProviderCondensed() : 
    m_verifiedAccessTrustProviderIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_trustProviderType(TrustProviderType::NOT_SET),
    m_trustProviderTypeHasBeenSet(false),
    m_userTrustProviderType(UserTrustProviderType::NOT_SET),
    m_userTrustProviderTypeHasBeenSet(false),
    m_deviceTrustProviderType(DeviceTrustProviderType::NOT_SET),
    m_deviceTrustProviderTypeHasBeenSet(false)
{
}

VerifiedAccessTrustProviderCondensed::VerifiedAccessTrustProviderCondensed(const XmlNode& xmlNode) : 
    m_verifiedAccessTrustProviderIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_trustProviderType(TrustProviderType::NOT_SET),
    m_trustProviderTypeHasBeenSet(false),
    m_userTrustProviderType(UserTrustProviderType::NOT_SET),
    m_userTrustProviderTypeHasBeenSet(false),
    m_deviceTrustProviderType(DeviceTrustProviderType::NOT_SET),
    m_deviceTrustProviderTypeHasBeenSet(false)
{
  *this = xmlNode;
}

VerifiedAccessTrustProviderCondensed& VerifiedAccessTrustProviderCondensed::operator =(const XmlNode& xmlNode)
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
  }

  return *this;
}

void VerifiedAccessTrustProviderCondensed::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

}

void VerifiedAccessTrustProviderCondensed::OutputToStream(Aws::OStream& oStream, const char* location) const
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
