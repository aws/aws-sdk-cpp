/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3GeneratedManifestDescriptor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

S3GeneratedManifestDescriptor::S3GeneratedManifestDescriptor() : 
    m_format(GeneratedManifestFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

S3GeneratedManifestDescriptor::S3GeneratedManifestDescriptor(const XmlNode& xmlNode) : 
    m_format(GeneratedManifestFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_locationHasBeenSet(false)
{
  *this = xmlNode;
}

S3GeneratedManifestDescriptor& S3GeneratedManifestDescriptor::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode formatNode = resultNode.FirstChild("Format");
    if(!formatNode.IsNull())
    {
      m_format = GeneratedManifestFormatMapper::GetGeneratedManifestFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(formatNode.GetText()).c_str()).c_str());
      m_formatHasBeenSet = true;
    }
    XmlNode locationNode = resultNode.FirstChild("Location");
    if(!locationNode.IsNull())
    {
      m_location = locationNode;
      m_locationHasBeenSet = true;
    }
  }

  return *this;
}

void S3GeneratedManifestDescriptor::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_formatHasBeenSet)
  {
   XmlNode formatNode = parentNode.CreateChildElement("Format");
   formatNode.SetText(GeneratedManifestFormatMapper::GetNameForGeneratedManifestFormat(m_format));
  }

  if(m_locationHasBeenSet)
  {
   XmlNode locationNode = parentNode.CreateChildElement("Location");
   m_location.AddToNode(locationNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
