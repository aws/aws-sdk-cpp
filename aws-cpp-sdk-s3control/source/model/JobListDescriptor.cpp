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

#include <aws/s3control/model/JobListDescriptor.h>
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

JobListDescriptor::JobListDescriptor() : 
    m_jobIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operation(OperationName::NOT_SET),
    m_operationHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_terminationDateHasBeenSet(false),
    m_progressSummaryHasBeenSet(false)
{
}

JobListDescriptor::JobListDescriptor(const XmlNode& xmlNode) : 
    m_jobIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operation(OperationName::NOT_SET),
    m_operationHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_terminationDateHasBeenSet(false),
    m_progressSummaryHasBeenSet(false)
{
  *this = xmlNode;
}

JobListDescriptor& JobListDescriptor::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode jobIdNode = resultNode.FirstChild("JobId");
    if(!jobIdNode.IsNull())
    {
      m_jobId = jobIdNode.GetText();
      m_jobIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode operationNode = resultNode.FirstChild("Operation");
    if(!operationNode.IsNull())
    {
      m_operation = OperationNameMapper::GetOperationNameForName(StringUtils::Trim(operationNode.GetText().c_str()).c_str());
      m_operationHasBeenSet = true;
    }
    XmlNode priorityNode = resultNode.FirstChild("Priority");
    if(!priorityNode.IsNull())
    {
      m_priority = StringUtils::ConvertToInt32(StringUtils::Trim(priorityNode.GetText().c_str()).c_str());
      m_priorityHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = JobStatusMapper::GetJobStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("CreationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(creationTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode terminationDateNode = resultNode.FirstChild("TerminationDate");
    if(!terminationDateNode.IsNull())
    {
      m_terminationDate = DateTime(StringUtils::Trim(terminationDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_terminationDateHasBeenSet = true;
    }
    XmlNode progressSummaryNode = resultNode.FirstChild("ProgressSummary");
    if(!progressSummaryNode.IsNull())
    {
      m_progressSummary = progressSummaryNode;
      m_progressSummaryHasBeenSet = true;
    }
  }

  return *this;
}

void JobListDescriptor::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_jobIdHasBeenSet)
  {
   XmlNode jobIdNode = parentNode.CreateChildElement("JobId");
   jobIdNode.SetText(m_jobId);
  }

  if(m_descriptionHasBeenSet)
  {
   XmlNode descriptionNode = parentNode.CreateChildElement("Description");
   descriptionNode.SetText(m_description);
  }

  if(m_operationHasBeenSet)
  {
   XmlNode operationNode = parentNode.CreateChildElement("Operation");
   operationNode.SetText(OperationNameMapper::GetNameForOperationName(m_operation));
  }

  if(m_priorityHasBeenSet)
  {
   XmlNode priorityNode = parentNode.CreateChildElement("Priority");
   ss << m_priority;
   priorityNode.SetText(ss.str());
   ss.str("");
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   XmlNode creationTimeNode = parentNode.CreateChildElement("CreationTime");
   creationTimeNode.SetText(m_creationTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_terminationDateHasBeenSet)
  {
   XmlNode terminationDateNode = parentNode.CreateChildElement("TerminationDate");
   terminationDateNode.SetText(m_terminationDate.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_progressSummaryHasBeenSet)
  {
   XmlNode progressSummaryNode = parentNode.CreateChildElement("ProgressSummary");
   m_progressSummary.AddToNode(progressSummaryNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
