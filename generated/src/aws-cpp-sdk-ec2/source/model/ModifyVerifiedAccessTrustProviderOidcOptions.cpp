/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVerifiedAccessTrustProviderOidcOptions.h>
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

ModifyVerifiedAccessTrustProviderOidcOptions::ModifyVerifiedAccessTrustProviderOidcOptions() : 
    m_scopeHasBeenSet(false)
{
}

ModifyVerifiedAccessTrustProviderOidcOptions::ModifyVerifiedAccessTrustProviderOidcOptions(const XmlNode& xmlNode) : 
    m_scopeHasBeenSet(false)
{
  *this = xmlNode;
}

ModifyVerifiedAccessTrustProviderOidcOptions& ModifyVerifiedAccessTrustProviderOidcOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode scopeNode = resultNode.FirstChild("Scope");
    if(!scopeNode.IsNull())
    {
      m_scope = Aws::Utils::Xml::DecodeEscapedXmlText(scopeNode.GetText());
      m_scopeHasBeenSet = true;
    }
  }

  return *this;
}

void ModifyVerifiedAccessTrustProviderOidcOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_scopeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Scope=" << StringUtils::URLEncode(m_scope.c_str()) << "&";
  }

}

void ModifyVerifiedAccessTrustProviderOidcOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_scopeHasBeenSet)
  {
      oStream << location << ".Scope=" << StringUtils::URLEncode(m_scope.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
