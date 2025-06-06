﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/Certificate.h>
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

Certificate::Certificate(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Certificate& Certificate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode certificateIdentifierNode = resultNode.FirstChild("CertificateIdentifier");
    if(!certificateIdentifierNode.IsNull())
    {
      m_certificateIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(certificateIdentifierNode.GetText());
      m_certificateIdentifierHasBeenSet = true;
    }
    XmlNode certificateTypeNode = resultNode.FirstChild("CertificateType");
    if(!certificateTypeNode.IsNull())
    {
      m_certificateType = Aws::Utils::Xml::DecodeEscapedXmlText(certificateTypeNode.GetText());
      m_certificateTypeHasBeenSet = true;
    }
    XmlNode thumbprintNode = resultNode.FirstChild("Thumbprint");
    if(!thumbprintNode.IsNull())
    {
      m_thumbprint = Aws::Utils::Xml::DecodeEscapedXmlText(thumbprintNode.GetText());
      m_thumbprintHasBeenSet = true;
    }
    XmlNode validFromNode = resultNode.FirstChild("ValidFrom");
    if(!validFromNode.IsNull())
    {
      m_validFrom = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(validFromNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_validFromHasBeenSet = true;
    }
    XmlNode validTillNode = resultNode.FirstChild("ValidTill");
    if(!validTillNode.IsNull())
    {
      m_validTill = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(validTillNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_validTillHasBeenSet = true;
    }
    XmlNode certificateArnNode = resultNode.FirstChild("CertificateArn");
    if(!certificateArnNode.IsNull())
    {
      m_certificateArn = Aws::Utils::Xml::DecodeEscapedXmlText(certificateArnNode.GetText());
      m_certificateArnHasBeenSet = true;
    }
  }

  return *this;
}

void Certificate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_certificateIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".CertificateIdentifier=" << StringUtils::URLEncode(m_certificateIdentifier.c_str()) << "&";
  }

  if(m_certificateTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CertificateType=" << StringUtils::URLEncode(m_certificateType.c_str()) << "&";
  }

  if(m_thumbprintHasBeenSet)
  {
      oStream << location << index << locationValue << ".Thumbprint=" << StringUtils::URLEncode(m_thumbprint.c_str()) << "&";
  }

  if(m_validFromHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_validTillHasBeenSet)
  {
      oStream << location << index << locationValue << ".ValidTill=" << StringUtils::URLEncode(m_validTill.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_certificateArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".CertificateArn=" << StringUtils::URLEncode(m_certificateArn.c_str()) << "&";
  }

}

void Certificate::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_certificateIdentifierHasBeenSet)
  {
      oStream << location << ".CertificateIdentifier=" << StringUtils::URLEncode(m_certificateIdentifier.c_str()) << "&";
  }
  if(m_certificateTypeHasBeenSet)
  {
      oStream << location << ".CertificateType=" << StringUtils::URLEncode(m_certificateType.c_str()) << "&";
  }
  if(m_thumbprintHasBeenSet)
  {
      oStream << location << ".Thumbprint=" << StringUtils::URLEncode(m_thumbprint.c_str()) << "&";
  }
  if(m_validFromHasBeenSet)
  {
      oStream << location << ".ValidFrom=" << StringUtils::URLEncode(m_validFrom.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_validTillHasBeenSet)
  {
      oStream << location << ".ValidTill=" << StringUtils::URLEncode(m_validTill.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_certificateArnHasBeenSet)
  {
      oStream << location << ".CertificateArn=" << StringUtils::URLEncode(m_certificateArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
