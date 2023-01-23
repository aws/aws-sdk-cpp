/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/importexport/model/Artifact.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ImportExport
{
namespace Model
{

Artifact::Artifact() : 
    m_descriptionHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
}

Artifact::Artifact(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
  *this = xmlNode;
}

Artifact& Artifact::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode uRLNode = resultNode.FirstChild("URL");
    if(!uRLNode.IsNull())
    {
      m_uRL = Aws::Utils::Xml::DecodeEscapedXmlText(uRLNode.GetText());
      m_uRLHasBeenSet = true;
    }
  }

  return *this;
}

void Artifact::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_uRLHasBeenSet)
  {
      oStream << location << index << locationValue << ".URL=" << StringUtils::URLEncode(m_uRL.c_str()) << "&";
  }

}

void Artifact::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_uRLHasBeenSet)
  {
      oStream << location << ".URL=" << StringUtils::URLEncode(m_uRL.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ImportExport
} // namespace Aws
