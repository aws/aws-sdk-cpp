/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/AddHeaderAction.h>
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

AddHeaderAction::AddHeaderAction() : 
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
}

AddHeaderAction::AddHeaderAction(const XmlNode& xmlNode) : 
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false)
{
  *this = xmlNode;
}

AddHeaderAction& AddHeaderAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode headerNameNode = resultNode.FirstChild("HeaderName");
    if(!headerNameNode.IsNull())
    {
      m_headerName = Aws::Utils::Xml::DecodeEscapedXmlText(headerNameNode.GetText());
      m_headerNameHasBeenSet = true;
    }
    XmlNode headerValueNode = resultNode.FirstChild("HeaderValue");
    if(!headerValueNode.IsNull())
    {
      m_headerValue = Aws::Utils::Xml::DecodeEscapedXmlText(headerValueNode.GetText());
      m_headerValueHasBeenSet = true;
    }
  }

  return *this;
}

void AddHeaderAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_headerNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".HeaderName=" << StringUtils::URLEncode(m_headerName.c_str()) << "&";
  }

  if(m_headerValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".HeaderValue=" << StringUtils::URLEncode(m_headerValue.c_str()) << "&";
  }

}

void AddHeaderAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_headerNameHasBeenSet)
  {
      oStream << location << ".HeaderName=" << StringUtils::URLEncode(m_headerName.c_str()) << "&";
  }
  if(m_headerValueHasBeenSet)
  {
      oStream << location << ".HeaderValue=" << StringUtils::URLEncode(m_headerValue.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
