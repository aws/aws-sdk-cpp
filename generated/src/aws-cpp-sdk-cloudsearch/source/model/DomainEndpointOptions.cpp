/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/DomainEndpointOptions.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

DomainEndpointOptions::DomainEndpointOptions() : 
    m_enforceHTTPS(false),
    m_enforceHTTPSHasBeenSet(false),
    m_tLSSecurityPolicy(TLSSecurityPolicy::NOT_SET),
    m_tLSSecurityPolicyHasBeenSet(false)
{
}

DomainEndpointOptions::DomainEndpointOptions(const XmlNode& xmlNode) : 
    m_enforceHTTPS(false),
    m_enforceHTTPSHasBeenSet(false),
    m_tLSSecurityPolicy(TLSSecurityPolicy::NOT_SET),
    m_tLSSecurityPolicyHasBeenSet(false)
{
  *this = xmlNode;
}

DomainEndpointOptions& DomainEndpointOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enforceHTTPSNode = resultNode.FirstChild("EnforceHTTPS");
    if(!enforceHTTPSNode.IsNull())
    {
      m_enforceHTTPS = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enforceHTTPSNode.GetText()).c_str()).c_str());
      m_enforceHTTPSHasBeenSet = true;
    }
    XmlNode tLSSecurityPolicyNode = resultNode.FirstChild("TLSSecurityPolicy");
    if(!tLSSecurityPolicyNode.IsNull())
    {
      m_tLSSecurityPolicy = TLSSecurityPolicyMapper::GetTLSSecurityPolicyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tLSSecurityPolicyNode.GetText()).c_str()).c_str());
      m_tLSSecurityPolicyHasBeenSet = true;
    }
  }

  return *this;
}

void DomainEndpointOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enforceHTTPSHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnforceHTTPS=" << std::boolalpha << m_enforceHTTPS << "&";
  }

  if(m_tLSSecurityPolicyHasBeenSet)
  {
      oStream << location << index << locationValue << ".TLSSecurityPolicy=" << TLSSecurityPolicyMapper::GetNameForTLSSecurityPolicy(m_tLSSecurityPolicy) << "&";
  }

}

void DomainEndpointOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enforceHTTPSHasBeenSet)
  {
      oStream << location << ".EnforceHTTPS=" << std::boolalpha << m_enforceHTTPS << "&";
  }
  if(m_tLSSecurityPolicyHasBeenSet)
  {
      oStream << location << ".TLSSecurityPolicy=" << TLSSecurityPolicyMapper::GetNameForTLSSecurityPolicy(m_tLSSecurityPolicy) << "&";
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
