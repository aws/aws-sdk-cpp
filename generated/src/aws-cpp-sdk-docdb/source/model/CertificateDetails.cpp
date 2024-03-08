/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/CertificateDetails.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace DocDB
{
namespace Model
{

CertificateDetails::CertificateDetails() : 
    m_cAIdentifierHasBeenSet(false),
    m_validTillHasBeenSet(false)
{
}

CertificateDetails::CertificateDetails(const XmlNode& xmlNode) : 
    m_cAIdentifierHasBeenSet(false),
    m_validTillHasBeenSet(false)
{
  *this = xmlNode;
}

CertificateDetails& CertificateDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cAIdentifierNode = resultNode.FirstChild("CAIdentifier");
    if(!cAIdentifierNode.IsNull())
    {
      m_cAIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(cAIdentifierNode.GetText());
      m_cAIdentifierHasBeenSet = true;
    }
    XmlNode validTillNode = resultNode.FirstChild("ValidTill");
    if(!validTillNode.IsNull())
    {
      m_validTill = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(validTillNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_validTillHasBeenSet = true;
    }
  }

  return *this;
}

void CertificateDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cAIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".CAIdentifier=" << StringUtils::URLEncode(m_cAIdentifier.c_str()) << "&";
  }

  if(m_validTillHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidTill=" << StringUtils::URLEncode(m_validTill.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void CertificateDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cAIdentifierHasBeenSet)
  {
      oStream << location << ".CAIdentifier=" << StringUtils::URLEncode(m_cAIdentifier.c_str()) << "&";
  }
  if(m_validTillHasBeenSet)
  {
      oStream << location << ".ValidTill=" << StringUtils::URLEncode(m_validTill.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
