/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
      m_format = JobManifestFormatMapper::GetJobManifestFormatForName(StringUtils::Trim(formatNode.GetText().c_str()).c_str());
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
