/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ImportSource.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

ImportSource::ImportSource() : 
    m_sourceType(ImportSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_sourceARNHasBeenSet(false)
{
}

ImportSource::ImportSource(const XmlNode& xmlNode) : 
    m_sourceType(ImportSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_sourceARNHasBeenSet(false)
{
  *this = xmlNode;
}

ImportSource& ImportSource::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceTypeNode = resultNode.FirstChild("SourceType");
    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = ImportSourceTypeMapper::GetImportSourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceTypeNode.GetText()).c_str()).c_str());
      m_sourceTypeHasBeenSet = true;
    }
    XmlNode sourceARNNode = resultNode.FirstChild("SourceARN");
    if(!sourceARNNode.IsNull())
    {
      m_sourceARN = Aws::Utils::Xml::DecodeEscapedXmlText(sourceARNNode.GetText());
      m_sourceARNHasBeenSet = true;
    }
  }

  return *this;
}

void ImportSource::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_sourceTypeHasBeenSet)
  {
   XmlNode sourceTypeNode = parentNode.CreateChildElement("SourceType");
   sourceTypeNode.SetText(ImportSourceTypeMapper::GetNameForImportSourceType(m_sourceType));
  }

  if(m_sourceARNHasBeenSet)
  {
   XmlNode sourceARNNode = parentNode.CreateChildElement("SourceARN");
   sourceARNNode.SetText(m_sourceARN);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
