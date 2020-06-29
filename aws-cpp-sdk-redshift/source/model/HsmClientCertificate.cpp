/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/HsmClientCertificate.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

HsmClientCertificate::HsmClientCertificate() : 
    m_hsmClientCertificateIdentifierHasBeenSet(false),
    m_hsmClientCertificatePublicKeyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

HsmClientCertificate::HsmClientCertificate(const XmlNode& xmlNode) : 
    m_hsmClientCertificateIdentifierHasBeenSet(false),
    m_hsmClientCertificatePublicKeyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

HsmClientCertificate& HsmClientCertificate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode hsmClientCertificateIdentifierNode = resultNode.FirstChild("HsmClientCertificateIdentifier");
    if(!hsmClientCertificateIdentifierNode.IsNull())
    {
      m_hsmClientCertificateIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(hsmClientCertificateIdentifierNode.GetText());
      m_hsmClientCertificateIdentifierHasBeenSet = true;
    }
    XmlNode hsmClientCertificatePublicKeyNode = resultNode.FirstChild("HsmClientCertificatePublicKey");
    if(!hsmClientCertificatePublicKeyNode.IsNull())
    {
      m_hsmClientCertificatePublicKey = Aws::Utils::Xml::DecodeEscapedXmlText(hsmClientCertificatePublicKeyNode.GetText());
      m_hsmClientCertificatePublicKeyHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void HsmClientCertificate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_hsmClientCertificateIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".HsmClientCertificateIdentifier=" << StringUtils::URLEncode(m_hsmClientCertificateIdentifier.c_str()) << "&";
  }

  if(m_hsmClientCertificatePublicKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".HsmClientCertificatePublicKey=" << StringUtils::URLEncode(m_hsmClientCertificatePublicKey.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void HsmClientCertificate::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_hsmClientCertificateIdentifierHasBeenSet)
  {
      oStream << location << ".HsmClientCertificateIdentifier=" << StringUtils::URLEncode(m_hsmClientCertificateIdentifier.c_str()) << "&";
  }
  if(m_hsmClientCertificatePublicKeyHasBeenSet)
  {
      oStream << location << ".HsmClientCertificatePublicKey=" << StringUtils::URLEncode(m_hsmClientCertificatePublicKey.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
