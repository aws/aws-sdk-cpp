/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/Content.h>
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

Content::Content() : 
    m_dataHasBeenSet(false),
    m_charsetHasBeenSet(false)
{
}

Content::Content(const XmlNode& xmlNode) : 
    m_dataHasBeenSet(false),
    m_charsetHasBeenSet(false)
{
  *this = xmlNode;
}

Content& Content::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dataNode = resultNode.FirstChild("Data");
    if(!dataNode.IsNull())
    {
      m_data = Aws::Utils::Xml::DecodeEscapedXmlText(dataNode.GetText());
      m_dataHasBeenSet = true;
    }
    XmlNode charsetNode = resultNode.FirstChild("Charset");
    if(!charsetNode.IsNull())
    {
      m_charset = Aws::Utils::Xml::DecodeEscapedXmlText(charsetNode.GetText());
      m_charsetHasBeenSet = true;
    }
  }

  return *this;
}

void Content::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dataHasBeenSet)
  {
      oStream << location << index << locationValue << ".Data=" << StringUtils::URLEncode(m_data.c_str()) << "&";
  }

  if(m_charsetHasBeenSet)
  {
      oStream << location << index << locationValue << ".Charset=" << StringUtils::URLEncode(m_charset.c_str()) << "&";
  }

}

void Content::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dataHasBeenSet)
  {
      oStream << location << ".Data=" << StringUtils::URLEncode(m_data.c_str()) << "&";
  }
  if(m_charsetHasBeenSet)
  {
      oStream << location << ".Charset=" << StringUtils::URLEncode(m_charset.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
