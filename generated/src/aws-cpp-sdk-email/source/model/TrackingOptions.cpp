/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/TrackingOptions.h>
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

TrackingOptions::TrackingOptions() : 
    m_customRedirectDomainHasBeenSet(false)
{
}

TrackingOptions::TrackingOptions(const XmlNode& xmlNode) : 
    m_customRedirectDomainHasBeenSet(false)
{
  *this = xmlNode;
}

TrackingOptions& TrackingOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode customRedirectDomainNode = resultNode.FirstChild("CustomRedirectDomain");
    if(!customRedirectDomainNode.IsNull())
    {
      m_customRedirectDomain = Aws::Utils::Xml::DecodeEscapedXmlText(customRedirectDomainNode.GetText());
      m_customRedirectDomainHasBeenSet = true;
    }
  }

  return *this;
}

void TrackingOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_customRedirectDomainHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomRedirectDomain=" << StringUtils::URLEncode(m_customRedirectDomain.c_str()) << "&";
  }

}

void TrackingOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_customRedirectDomainHasBeenSet)
  {
      oStream << location << ".CustomRedirectDomain=" << StringUtils::URLEncode(m_customRedirectDomain.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
