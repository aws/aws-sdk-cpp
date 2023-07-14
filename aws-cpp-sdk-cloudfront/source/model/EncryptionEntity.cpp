/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/EncryptionEntity.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

EncryptionEntity::EncryptionEntity() : 
    m_publicKeyIdHasBeenSet(false),
    m_providerIdHasBeenSet(false),
    m_fieldPatternsHasBeenSet(false)
{
}

EncryptionEntity::EncryptionEntity(const XmlNode& xmlNode) : 
    m_publicKeyIdHasBeenSet(false),
    m_providerIdHasBeenSet(false),
    m_fieldPatternsHasBeenSet(false)
{
  *this = xmlNode;
}

EncryptionEntity& EncryptionEntity::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode publicKeyIdNode = resultNode.FirstChild("PublicKeyId");
    if(!publicKeyIdNode.IsNull())
    {
      m_publicKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(publicKeyIdNode.GetText());
      m_publicKeyIdHasBeenSet = true;
    }
    XmlNode providerIdNode = resultNode.FirstChild("ProviderId");
    if(!providerIdNode.IsNull())
    {
      m_providerId = Aws::Utils::Xml::DecodeEscapedXmlText(providerIdNode.GetText());
      m_providerIdHasBeenSet = true;
    }
    XmlNode fieldPatternsNode = resultNode.FirstChild("FieldPatterns");
    if(!fieldPatternsNode.IsNull())
    {
      m_fieldPatterns = fieldPatternsNode;
      m_fieldPatternsHasBeenSet = true;
    }
  }

  return *this;
}

void EncryptionEntity::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_publicKeyIdHasBeenSet)
  {
   XmlNode publicKeyIdNode = parentNode.CreateChildElement("PublicKeyId");
   publicKeyIdNode.SetText(m_publicKeyId);
  }

  if(m_providerIdHasBeenSet)
  {
   XmlNode providerIdNode = parentNode.CreateChildElement("ProviderId");
   providerIdNode.SetText(m_providerId);
  }

  if(m_fieldPatternsHasBeenSet)
  {
   XmlNode fieldPatternsNode = parentNode.CreateChildElement("FieldPatterns");
   m_fieldPatterns.AddToNode(fieldPatternsNode);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
