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

#include <aws/s3control/model/JobReport.h>
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

JobReport::JobReport() : 
    m_bucketHasBeenSet(false),
    m_format(JobReportFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_reportScope(JobReportScope::NOT_SET),
    m_reportScopeHasBeenSet(false)
{
}

JobReport::JobReport(const XmlNode& xmlNode) : 
    m_bucketHasBeenSet(false),
    m_format(JobReportFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_reportScope(JobReportScope::NOT_SET),
    m_reportScopeHasBeenSet(false)
{
  *this = xmlNode;
}

JobReport& JobReport::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = bucketNode.GetText();
      m_bucketHasBeenSet = true;
    }
    XmlNode formatNode = resultNode.FirstChild("Format");
    if(!formatNode.IsNull())
    {
      m_format = JobReportFormatMapper::GetJobReportFormatForName(StringUtils::Trim(formatNode.GetText().c_str()).c_str());
      m_formatHasBeenSet = true;
    }
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(enabledNode.GetText().c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode prefixNode = resultNode.FirstChild("Prefix");
    if(!prefixNode.IsNull())
    {
      m_prefix = prefixNode.GetText();
      m_prefixHasBeenSet = true;
    }
    XmlNode reportScopeNode = resultNode.FirstChild("ReportScope");
    if(!reportScopeNode.IsNull())
    {
      m_reportScope = JobReportScopeMapper::GetJobReportScopeForName(StringUtils::Trim(reportScopeNode.GetText().c_str()).c_str());
      m_reportScopeHasBeenSet = true;
    }
  }

  return *this;
}

void JobReport::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_bucketHasBeenSet)
  {
   XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
   bucketNode.SetText(m_bucket);
  }

  if(m_formatHasBeenSet)
  {
   XmlNode formatNode = parentNode.CreateChildElement("Format");
   formatNode.SetText(JobReportFormatMapper::GetNameForJobReportFormat(m_format));
  }

  if(m_enabledHasBeenSet)
  {
   XmlNode enabledNode = parentNode.CreateChildElement("Enabled");
   ss << std::boolalpha << m_enabled;
   enabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_prefixHasBeenSet)
  {
   XmlNode prefixNode = parentNode.CreateChildElement("Prefix");
   prefixNode.SetText(m_prefix);
  }

  if(m_reportScopeHasBeenSet)
  {
   XmlNode reportScopeNode = parentNode.CreateChildElement("ReportScope");
   reportScopeNode.SetText(JobReportScopeMapper::GetNameForJobReportScope(m_reportScope));
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
