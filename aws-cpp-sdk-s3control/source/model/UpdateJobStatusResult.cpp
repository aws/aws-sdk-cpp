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

#include <aws/s3control/model/UpdateJobStatusResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

UpdateJobStatusResult::UpdateJobStatusResult() : 
    m_status(JobStatus::NOT_SET)
{
}

UpdateJobStatusResult::UpdateJobStatusResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_status(JobStatus::NOT_SET)
{
  *this = result;
}

UpdateJobStatusResult& UpdateJobStatusResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode jobIdNode = resultNode.FirstChild("JobId");
    if(!jobIdNode.IsNull())
    {
      m_jobId = jobIdNode.GetText();
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = JobStatusMapper::GetJobStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
    }
    XmlNode statusUpdateReasonNode = resultNode.FirstChild("StatusUpdateReason");
    if(!statusUpdateReasonNode.IsNull())
    {
      m_statusUpdateReason = statusUpdateReasonNode.GetText();
    }
  }

  return *this;
}
