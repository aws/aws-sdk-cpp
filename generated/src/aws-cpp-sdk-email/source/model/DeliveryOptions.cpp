/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/DeliveryOptions.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

DeliveryOptions::DeliveryOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DeliveryOptions& DeliveryOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode tlsPolicyNode = resultNode.FirstChild("TlsPolicy");
    if(!tlsPolicyNode.IsNull())
    {
      m_tlsPolicy = TlsPolicyMapper::GetTlsPolicyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tlsPolicyNode.GetText()).c_str()));
      m_tlsPolicyHasBeenSet = true;
    }
  }

  return *this;
}

void DeliveryOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_tlsPolicyHasBeenSet)
  {
      oStream << location << index << locationValue << ".TlsPolicy=" << StringUtils::URLEncode(TlsPolicyMapper::GetNameForTlsPolicy(m_tlsPolicy)) << "&";
  }

}

void DeliveryOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_tlsPolicyHasBeenSet)
  {
      oStream << location << ".TlsPolicy=" << StringUtils::URLEncode(TlsPolicyMapper::GetNameForTlsPolicy(m_tlsPolicy)) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
