/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/HsmStatus.h>
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

HsmStatus::HsmStatus() : 
    m_hsmClientCertificateIdentifierHasBeenSet(false),
    m_hsmConfigurationIdentifierHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

HsmStatus::HsmStatus(const XmlNode& xmlNode) : 
    m_hsmClientCertificateIdentifierHasBeenSet(false),
    m_hsmConfigurationIdentifierHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

HsmStatus& HsmStatus::operator =(const XmlNode& xmlNode)
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
    XmlNode hsmConfigurationIdentifierNode = resultNode.FirstChild("HsmConfigurationIdentifier");
    if(!hsmConfigurationIdentifierNode.IsNull())
    {
      m_hsmConfigurationIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(hsmConfigurationIdentifierNode.GetText());
      m_hsmConfigurationIdentifierHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void HsmStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_hsmClientCertificateIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".HsmClientCertificateIdentifier=" << StringUtils::URLEncode(m_hsmClientCertificateIdentifier.c_str()) << "&";
  }

  if(m_hsmConfigurationIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".HsmConfigurationIdentifier=" << StringUtils::URLEncode(m_hsmConfigurationIdentifier.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void HsmStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_hsmClientCertificateIdentifierHasBeenSet)
  {
      oStream << location << ".HsmClientCertificateIdentifier=" << StringUtils::URLEncode(m_hsmClientCertificateIdentifier.c_str()) << "&";
  }
  if(m_hsmConfigurationIdentifierHasBeenSet)
  {
      oStream << location << ".HsmConfigurationIdentifier=" << StringUtils::URLEncode(m_hsmConfigurationIdentifier.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
