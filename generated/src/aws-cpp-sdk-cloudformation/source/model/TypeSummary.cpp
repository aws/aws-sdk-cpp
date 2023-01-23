/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/TypeSummary.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

TypeSummary::TypeSummary() : 
    m_type(RegistryType::NOT_SET),
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_defaultVersionIdHasBeenSet(false),
    m_typeArnHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_publisherIdHasBeenSet(false),
    m_originalTypeNameHasBeenSet(false),
    m_publicVersionNumberHasBeenSet(false),
    m_latestPublicVersionHasBeenSet(false),
    m_publisherIdentity(IdentityProvider::NOT_SET),
    m_publisherIdentityHasBeenSet(false),
    m_publisherNameHasBeenSet(false),
    m_isActivated(false),
    m_isActivatedHasBeenSet(false)
{
}

TypeSummary::TypeSummary(const XmlNode& xmlNode) : 
    m_type(RegistryType::NOT_SET),
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_defaultVersionIdHasBeenSet(false),
    m_typeArnHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_publisherIdHasBeenSet(false),
    m_originalTypeNameHasBeenSet(false),
    m_publicVersionNumberHasBeenSet(false),
    m_latestPublicVersionHasBeenSet(false),
    m_publisherIdentity(IdentityProvider::NOT_SET),
    m_publisherIdentityHasBeenSet(false),
    m_publisherNameHasBeenSet(false),
    m_isActivated(false),
    m_isActivatedHasBeenSet(false)
{
  *this = xmlNode;
}

TypeSummary& TypeSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = RegistryTypeMapper::GetRegistryTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode typeNameNode = resultNode.FirstChild("TypeName");
    if(!typeNameNode.IsNull())
    {
      m_typeName = Aws::Utils::Xml::DecodeEscapedXmlText(typeNameNode.GetText());
      m_typeNameHasBeenSet = true;
    }
    XmlNode defaultVersionIdNode = resultNode.FirstChild("DefaultVersionId");
    if(!defaultVersionIdNode.IsNull())
    {
      m_defaultVersionId = Aws::Utils::Xml::DecodeEscapedXmlText(defaultVersionIdNode.GetText());
      m_defaultVersionIdHasBeenSet = true;
    }
    XmlNode typeArnNode = resultNode.FirstChild("TypeArn");
    if(!typeArnNode.IsNull())
    {
      m_typeArn = Aws::Utils::Xml::DecodeEscapedXmlText(typeArnNode.GetText());
      m_typeArnHasBeenSet = true;
    }
    XmlNode lastUpdatedNode = resultNode.FirstChild("LastUpdated");
    if(!lastUpdatedNode.IsNull())
    {
      m_lastUpdated = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdatedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastUpdatedHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode publisherIdNode = resultNode.FirstChild("PublisherId");
    if(!publisherIdNode.IsNull())
    {
      m_publisherId = Aws::Utils::Xml::DecodeEscapedXmlText(publisherIdNode.GetText());
      m_publisherIdHasBeenSet = true;
    }
    XmlNode originalTypeNameNode = resultNode.FirstChild("OriginalTypeName");
    if(!originalTypeNameNode.IsNull())
    {
      m_originalTypeName = Aws::Utils::Xml::DecodeEscapedXmlText(originalTypeNameNode.GetText());
      m_originalTypeNameHasBeenSet = true;
    }
    XmlNode publicVersionNumberNode = resultNode.FirstChild("PublicVersionNumber");
    if(!publicVersionNumberNode.IsNull())
    {
      m_publicVersionNumber = Aws::Utils::Xml::DecodeEscapedXmlText(publicVersionNumberNode.GetText());
      m_publicVersionNumberHasBeenSet = true;
    }
    XmlNode latestPublicVersionNode = resultNode.FirstChild("LatestPublicVersion");
    if(!latestPublicVersionNode.IsNull())
    {
      m_latestPublicVersion = Aws::Utils::Xml::DecodeEscapedXmlText(latestPublicVersionNode.GetText());
      m_latestPublicVersionHasBeenSet = true;
    }
    XmlNode publisherIdentityNode = resultNode.FirstChild("PublisherIdentity");
    if(!publisherIdentityNode.IsNull())
    {
      m_publisherIdentity = IdentityProviderMapper::GetIdentityProviderForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(publisherIdentityNode.GetText()).c_str()).c_str());
      m_publisherIdentityHasBeenSet = true;
    }
    XmlNode publisherNameNode = resultNode.FirstChild("PublisherName");
    if(!publisherNameNode.IsNull())
    {
      m_publisherName = Aws::Utils::Xml::DecodeEscapedXmlText(publisherNameNode.GetText());
      m_publisherNameHasBeenSet = true;
    }
    XmlNode isActivatedNode = resultNode.FirstChild("IsActivated");
    if(!isActivatedNode.IsNull())
    {
      m_isActivated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isActivatedNode.GetText()).c_str()).c_str());
      m_isActivatedHasBeenSet = true;
    }
  }

  return *this;
}

void TypeSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << RegistryTypeMapper::GetNameForRegistryType(m_type) << "&";
  }

  if(m_typeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

  if(m_defaultVersionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultVersionId=" << StringUtils::URLEncode(m_defaultVersionId.c_str()) << "&";
  }

  if(m_typeArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeArn=" << StringUtils::URLEncode(m_typeArn.c_str()) << "&";
  }

  if(m_lastUpdatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdated=" << StringUtils::URLEncode(m_lastUpdated.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_publisherIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublisherId=" << StringUtils::URLEncode(m_publisherId.c_str()) << "&";
  }

  if(m_originalTypeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OriginalTypeName=" << StringUtils::URLEncode(m_originalTypeName.c_str()) << "&";
  }

  if(m_publicVersionNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicVersionNumber=" << StringUtils::URLEncode(m_publicVersionNumber.c_str()) << "&";
  }

  if(m_latestPublicVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".LatestPublicVersion=" << StringUtils::URLEncode(m_latestPublicVersion.c_str()) << "&";
  }

  if(m_publisherIdentityHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublisherIdentity=" << IdentityProviderMapper::GetNameForIdentityProvider(m_publisherIdentity) << "&";
  }

  if(m_publisherNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublisherName=" << StringUtils::URLEncode(m_publisherName.c_str()) << "&";
  }

  if(m_isActivatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsActivated=" << std::boolalpha << m_isActivated << "&";
  }

}

void TypeSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << RegistryTypeMapper::GetNameForRegistryType(m_type) << "&";
  }
  if(m_typeNameHasBeenSet)
  {
      oStream << location << ".TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }
  if(m_defaultVersionIdHasBeenSet)
  {
      oStream << location << ".DefaultVersionId=" << StringUtils::URLEncode(m_defaultVersionId.c_str()) << "&";
  }
  if(m_typeArnHasBeenSet)
  {
      oStream << location << ".TypeArn=" << StringUtils::URLEncode(m_typeArn.c_str()) << "&";
  }
  if(m_lastUpdatedHasBeenSet)
  {
      oStream << location << ".LastUpdated=" << StringUtils::URLEncode(m_lastUpdated.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_publisherIdHasBeenSet)
  {
      oStream << location << ".PublisherId=" << StringUtils::URLEncode(m_publisherId.c_str()) << "&";
  }
  if(m_originalTypeNameHasBeenSet)
  {
      oStream << location << ".OriginalTypeName=" << StringUtils::URLEncode(m_originalTypeName.c_str()) << "&";
  }
  if(m_publicVersionNumberHasBeenSet)
  {
      oStream << location << ".PublicVersionNumber=" << StringUtils::URLEncode(m_publicVersionNumber.c_str()) << "&";
  }
  if(m_latestPublicVersionHasBeenSet)
  {
      oStream << location << ".LatestPublicVersion=" << StringUtils::URLEncode(m_latestPublicVersion.c_str()) << "&";
  }
  if(m_publisherIdentityHasBeenSet)
  {
      oStream << location << ".PublisherIdentity=" << IdentityProviderMapper::GetNameForIdentityProvider(m_publisherIdentity) << "&";
  }
  if(m_publisherNameHasBeenSet)
  {
      oStream << location << ".PublisherName=" << StringUtils::URLEncode(m_publisherName.c_str()) << "&";
  }
  if(m_isActivatedHasBeenSet)
  {
      oStream << location << ".IsActivated=" << std::boolalpha << m_isActivated << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
