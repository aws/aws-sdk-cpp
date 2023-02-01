/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/Body.h>
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

Body::Body() : 
    m_textHasBeenSet(false),
    m_htmlHasBeenSet(false)
{
}

Body::Body(const XmlNode& xmlNode) : 
    m_textHasBeenSet(false),
    m_htmlHasBeenSet(false)
{
  *this = xmlNode;
}

Body& Body::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode textNode = resultNode.FirstChild("Text");
    if(!textNode.IsNull())
    {
      m_text = textNode;
      m_textHasBeenSet = true;
    }
    XmlNode htmlNode = resultNode.FirstChild("Html");
    if(!htmlNode.IsNull())
    {
      m_html = htmlNode;
      m_htmlHasBeenSet = true;
    }
  }

  return *this;
}

void Body::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_textHasBeenSet)
  {
      Aws::StringStream textLocationAndMemberSs;
      textLocationAndMemberSs << location << index << locationValue << ".Text";
      m_text.OutputToStream(oStream, textLocationAndMemberSs.str().c_str());
  }

  if(m_htmlHasBeenSet)
  {
      Aws::StringStream htmlLocationAndMemberSs;
      htmlLocationAndMemberSs << location << index << locationValue << ".Html";
      m_html.OutputToStream(oStream, htmlLocationAndMemberSs.str().c_str());
  }

}

void Body::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_textHasBeenSet)
  {
      Aws::String textLocationAndMember(location);
      textLocationAndMember += ".Text";
      m_text.OutputToStream(oStream, textLocationAndMember.c_str());
  }
  if(m_htmlHasBeenSet)
  {
      Aws::String htmlLocationAndMember(location);
      htmlLocationAndMember += ".Html";
      m_html.OutputToStream(oStream, htmlLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
