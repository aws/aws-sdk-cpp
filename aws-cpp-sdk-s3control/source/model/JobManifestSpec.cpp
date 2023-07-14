/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/JobManifestSpec.h>
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

JobManifestSpec::JobManifestSpec() : 
    m_format(JobManifestFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
}

JobManifestSpec::JobManifestSpec(const XmlNode& xmlNode) : 
    m_format(JobManifestFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
  *this = xmlNode;
}

JobManifestSpec& JobManifestSpec::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode formatNode = resultNode.FirstChild("Format");
    if(!formatNode.IsNull())
    {
      m_format = JobManifestFormatMapper::GetJobManifestFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(formatNode.GetText()).c_str()).c_str());
      m_formatHasBeenSet = true;
    }
    XmlNode fieldsNode = resultNode.FirstChild("Fields");
    if(!fieldsNode.IsNull())
    {
      XmlNode fieldsMember = fieldsNode.FirstChild("member");
      while(!fieldsMember.IsNull())
      {
        m_fields.push_back(JobManifestFieldNameMapper::GetJobManifestFieldNameForName(StringUtils::Trim(fieldsMember.GetText().c_str())));
        fieldsMember = fieldsMember.NextNode("member");
      }

      m_fieldsHasBeenSet = true;
    }
  }

  return *this;
}

void JobManifestSpec::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_formatHasBeenSet)
  {
   XmlNode formatNode = parentNode.CreateChildElement("Format");
   formatNode.SetText(JobManifestFormatMapper::GetNameForJobManifestFormat(m_format));
  }

  if(m_fieldsHasBeenSet)
  {
   XmlNode fieldsParentNode = parentNode.CreateChildElement("Fields");
   for(const auto& item : m_fields)
   {
     XmlNode fieldsNode = fieldsParentNode.CreateChildElement("JobManifestFieldName");
     fieldsNode.SetText(JobManifestFieldNameMapper::GetNameForJobManifestFieldName(item));
   }
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
