/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/MutualAuthenticationAttributes.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

MutualAuthenticationAttributes::MutualAuthenticationAttributes() : 
    m_modeHasBeenSet(false),
    m_trustStoreArnHasBeenSet(false),
    m_ignoreClientCertificateExpiry(false),
    m_ignoreClientCertificateExpiryHasBeenSet(false)
{
}

MutualAuthenticationAttributes::MutualAuthenticationAttributes(const XmlNode& xmlNode) : 
    m_modeHasBeenSet(false),
    m_trustStoreArnHasBeenSet(false),
    m_ignoreClientCertificateExpiry(false),
    m_ignoreClientCertificateExpiryHasBeenSet(false)
{
  *this = xmlNode;
}

MutualAuthenticationAttributes& MutualAuthenticationAttributes::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode modeNode = resultNode.FirstChild("Mode");
    if(!modeNode.IsNull())
    {
      m_mode = Aws::Utils::Xml::DecodeEscapedXmlText(modeNode.GetText());
      m_modeHasBeenSet = true;
    }
    XmlNode trustStoreArnNode = resultNode.FirstChild("TrustStoreArn");
    if(!trustStoreArnNode.IsNull())
    {
      m_trustStoreArn = Aws::Utils::Xml::DecodeEscapedXmlText(trustStoreArnNode.GetText());
      m_trustStoreArnHasBeenSet = true;
    }
    XmlNode ignoreClientCertificateExpiryNode = resultNode.FirstChild("IgnoreClientCertificateExpiry");
    if(!ignoreClientCertificateExpiryNode.IsNull())
    {
      m_ignoreClientCertificateExpiry = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ignoreClientCertificateExpiryNode.GetText()).c_str()).c_str());
      m_ignoreClientCertificateExpiryHasBeenSet = true;
    }
  }

  return *this;
}

void MutualAuthenticationAttributes::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_modeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Mode=" << StringUtils::URLEncode(m_mode.c_str()) << "&";
  }

  if(m_trustStoreArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrustStoreArn=" << StringUtils::URLEncode(m_trustStoreArn.c_str()) << "&";
  }

  if(m_ignoreClientCertificateExpiryHasBeenSet)
  {
      oStream << location << index << locationValue << ".IgnoreClientCertificateExpiry=" << std::boolalpha << m_ignoreClientCertificateExpiry << "&";
  }

}

void MutualAuthenticationAttributes::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_modeHasBeenSet)
  {
      oStream << location << ".Mode=" << StringUtils::URLEncode(m_mode.c_str()) << "&";
  }
  if(m_trustStoreArnHasBeenSet)
  {
      oStream << location << ".TrustStoreArn=" << StringUtils::URLEncode(m_trustStoreArn.c_str()) << "&";
  }
  if(m_ignoreClientCertificateExpiryHasBeenSet)
  {
      oStream << location << ".IgnoreClientCertificateExpiry=" << std::boolalpha << m_ignoreClientCertificateExpiry << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
