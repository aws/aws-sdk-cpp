﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/Suggester.h>
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

Suggester::Suggester(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Suggester& Suggester::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode suggesterNameNode = resultNode.FirstChild("SuggesterName");
    if(!suggesterNameNode.IsNull())
    {
      m_suggesterName = Aws::Utils::Xml::DecodeEscapedXmlText(suggesterNameNode.GetText());
      m_suggesterNameHasBeenSet = true;
    }
    XmlNode documentSuggesterOptionsNode = resultNode.FirstChild("DocumentSuggesterOptions");
    if(!documentSuggesterOptionsNode.IsNull())
    {
      m_documentSuggesterOptions = documentSuggesterOptionsNode;
      m_documentSuggesterOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void Suggester::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_suggesterNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SuggesterName=" << StringUtils::URLEncode(m_suggesterName.c_str()) << "&";
  }

  if(m_documentSuggesterOptionsHasBeenSet)
  {
      Aws::StringStream documentSuggesterOptionsLocationAndMemberSs;
      documentSuggesterOptionsLocationAndMemberSs << location << index << locationValue << ".DocumentSuggesterOptions";
      m_documentSuggesterOptions.OutputToStream(oStream, documentSuggesterOptionsLocationAndMemberSs.str().c_str());
  }

}

void Suggester::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_suggesterNameHasBeenSet)
  {
      oStream << location << ".SuggesterName=" << StringUtils::URLEncode(m_suggesterName.c_str()) << "&";
  }
  if(m_documentSuggesterOptionsHasBeenSet)
  {
      Aws::String documentSuggesterOptionsLocationAndMember(location);
      documentSuggesterOptionsLocationAndMember += ".DocumentSuggesterOptions";
      m_documentSuggesterOptions.OutputToStream(oStream, documentSuggesterOptionsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
