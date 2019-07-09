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

#include <aws/s3control/model/JobDescriptor.h>
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

JobDescriptor::JobDescriptor() : 
    m_jobIdHasBeenSet(false),
    m_confirmationRequired(false),
    m_confirmationRequiredHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_jobArnHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_progressSummaryHasBeenSet(false),
    m_statusUpdateReasonHasBeenSet(false),
    m_failureReasonsHasBeenSet(false),
    m_reportHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_terminationDateHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_suspendedDateHasBeenSet(false),
    m_suspendedCauseHasBeenSet(false)
{
}

JobDescriptor::JobDescriptor(const XmlNode& xmlNode) : 
    m_jobIdHasBeenSet(false),
    m_confirmationRequired(false),
    m_confirmationRequiredHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_jobArnHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_progressSummaryHasBeenSet(false),
    m_statusUpdateReasonHasBeenSet(false),
    m_failureReasonsHasBeenSet(false),
    m_reportHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_terminationDateHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_suspendedDateHasBeenSet(false),
    m_suspendedCauseHasBeenSet(false)
{
  *this = xmlNode;
}

JobDescriptor& JobDescriptor::operator =(const XmlNode& xmlNode)
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
    XmlNode confirmationRequiredNode = resultNode.FirstChild("ConfirmationRequired");
    if(!confirmationRequiredNode.IsNull())
    {
      m_confirmationRequired = StringUtils::ConvertToBool(StringUtils::Trim(confirmationRequiredNode.GetText().c_str()).c_str());
      m_confirmationRequiredHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode jobArnNode = resultNode.FirstChild("JobArn");
    if(!jobArnNode.IsNull())
    {
      m_jobArn = jobArnNode.GetText();
      m_jobArnHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = JobStatusMapper::GetJobStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode manifestNode = resultNode.FirstChild("Manifest");
    if(!manifestNode.IsNull())
    {
      m_manifest = manifestNode;
      m_manifestHasBeenSet = true;
    }
    XmlNode operationNode = resultNode.FirstChild("Operation");
    if(!operationNode.IsNull())
    {
      m_operation = operationNode;
      m_operationHasBeenSet = true;
    }
    XmlNode priorityNode = resultNode.FirstChild("Priority");
    if(!priorityNode.IsNull())
    {
      m_priority = StringUtils::ConvertToInt32(StringUtils::Trim(priorityNode.GetText().c_str()).c_str());
      m_priorityHasBeenSet = true;
    }
    XmlNode progressSummaryNode = resultNode.FirstChild("ProgressSummary");
    if(!progressSummaryNode.IsNull())
    {
      m_progressSummary = progressSummaryNode;
      m_progressSummaryHasBeenSet = true;
    }
    XmlNode statusUpdateReasonNode = resultNode.FirstChild("StatusUpdateReason");
    if(!statusUpdateReasonNode.IsNull())
    {
      m_statusUpdateReason = statusUpdateReasonNode.GetText();
      m_statusUpdateReasonHasBeenSet = true;
    }
    XmlNode failureReasonsNode = resultNode.FirstChild("FailureReasons");
    if(!failureReasonsNode.IsNull())
    {
      XmlNode failureReasonsMember = failureReasonsNode.FirstChild("member");
      while(!failureReasonsMember.IsNull())
      {
        m_failureReasons.push_back(failureReasonsMember);
        failureReasonsMember = failureReasonsMember.NextNode("member");
      }

      m_failureReasonsHasBeenSet = true;
    }
    XmlNode reportNode = resultNode.FirstChild("Report");
    if(!reportNode.IsNull())
    {
      m_report = reportNode;
      m_reportHasBeenSet = true;
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
    XmlNode roleArnNode = resultNode.FirstChild("RoleArn");
    if(!roleArnNode.IsNull())
    {
      m_roleArn = roleArnNode.GetText();
      m_roleArnHasBeenSet = true;
    }
    XmlNode suspendedDateNode = resultNode.FirstChild("SuspendedDate");
    if(!suspendedDateNode.IsNull())
    {
      m_suspendedDate = DateTime(StringUtils::Trim(suspendedDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_suspendedDateHasBeenSet = true;
    }
    XmlNode suspendedCauseNode = resultNode.FirstChild("SuspendedCause");
    if(!suspendedCauseNode.IsNull())
    {
      m_suspendedCause = suspendedCauseNode.GetText();
      m_suspendedCauseHasBeenSet = true;
    }
  }

  return *this;
}

void JobDescriptor::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_jobIdHasBeenSet)
  {
   XmlNode jobIdNode = parentNode.CreateChildElement("JobId");
   jobIdNode.SetText(m_jobId);
  }

  if(m_confirmationRequiredHasBeenSet)
  {
   XmlNode confirmationRequiredNode = parentNode.CreateChildElement("ConfirmationRequired");
   ss << std::boolalpha << m_confirmationRequired;
   confirmationRequiredNode.SetText(ss.str());
   ss.str("");
  }

  if(m_descriptionHasBeenSet)
  {
   XmlNode descriptionNode = parentNode.CreateChildElement("Description");
   descriptionNode.SetText(m_description);
  }

  if(m_jobArnHasBeenSet)
  {
   XmlNode jobArnNode = parentNode.CreateChildElement("JobArn");
   jobArnNode.SetText(m_jobArn);
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_manifestHasBeenSet)
  {
   XmlNode manifestNode = parentNode.CreateChildElement("Manifest");
   m_manifest.AddToNode(manifestNode);
  }

  if(m_operationHasBeenSet)
  {
   XmlNode operationNode = parentNode.CreateChildElement("Operation");
   m_operation.AddToNode(operationNode);
  }

  if(m_priorityHasBeenSet)
  {
   XmlNode priorityNode = parentNode.CreateChildElement("Priority");
   ss << m_priority;
   priorityNode.SetText(ss.str());
   ss.str("");
  }

  if(m_progressSummaryHasBeenSet)
  {
   XmlNode progressSummaryNode = parentNode.CreateChildElement("ProgressSummary");
   m_progressSummary.AddToNode(progressSummaryNode);
  }

  if(m_statusUpdateReasonHasBeenSet)
  {
   XmlNode statusUpdateReasonNode = parentNode.CreateChildElement("StatusUpdateReason");
   statusUpdateReasonNode.SetText(m_statusUpdateReason);
  }

  if(m_failureReasonsHasBeenSet)
  {
   XmlNode failureReasonsParentNode = parentNode.CreateChildElement("FailureReasons");
   for(const auto& item : m_failureReasons)
   {
     XmlNode failureReasonsNode = failureReasonsParentNode.CreateChildElement("JobFailure");
     item.AddToNode(failureReasonsNode);
   }
  }

  if(m_reportHasBeenSet)
  {
   XmlNode reportNode = parentNode.CreateChildElement("Report");
   m_report.AddToNode(reportNode);
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

  if(m_roleArnHasBeenSet)
  {
   XmlNode roleArnNode = parentNode.CreateChildElement("RoleArn");
   roleArnNode.SetText(m_roleArn);
  }

  if(m_suspendedDateHasBeenSet)
  {
   XmlNode suspendedDateNode = parentNode.CreateChildElement("SuspendedDate");
   suspendedDateNode.SetText(m_suspendedDate.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_suspendedCauseHasBeenSet)
  {
   XmlNode suspendedCauseNode = parentNode.CreateChildElement("SuspendedCause");
   suspendedCauseNode.SetText(m_suspendedCause);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
