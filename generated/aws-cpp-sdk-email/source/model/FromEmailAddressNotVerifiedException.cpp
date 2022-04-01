/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/FromEmailAddressNotVerifiedException.h>
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

FromEmailAddressNotVerifiedException::FromEmailAddressNotVerifiedException() : 
    m_fromEmailAddressHasBeenSet(false)
{
}

FromEmailAddressNotVerifiedException::FromEmailAddressNotVerifiedException(const XmlNode& xmlNode) : 
    m_fromEmailAddressHasBeenSet(false)
{
  *this = xmlNode;
}

FromEmailAddressNotVerifiedException& FromEmailAddressNotVerifiedException::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode fromEmailAddressNode = resultNode.FirstChild("FromEmailAddress");
    if(!fromEmailAddressNode.IsNull())
    {
      m_fromEmailAddress = Aws::Utils::Xml::DecodeEscapedXmlText(fromEmailAddressNode.GetText());
      m_fromEmailAddressHasBeenSet = true;
    }
  }

  return *this;
}

void FromEmailAddressNotVerifiedException::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_fromEmailAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".FromEmailAddress=" << StringUtils::URLEncode(m_fromEmailAddress.c_str()) << "&";
  }

}

void FromEmailAddressNotVerifiedException::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_fromEmailAddressHasBeenSet)
  {
      oStream << location << ".FromEmailAddress=" << StringUtils::URLEncode(m_fromEmailAddress.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
