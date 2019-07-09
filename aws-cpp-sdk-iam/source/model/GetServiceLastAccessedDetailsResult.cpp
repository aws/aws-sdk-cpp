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

#include <aws/iam/model/GetServiceLastAccessedDetailsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetServiceLastAccessedDetailsResult::GetServiceLastAccessedDetailsResult() : 
    m_jobStatus(JobStatusType::NOT_SET),
    m_isTruncated(false)
{
}

GetServiceLastAccessedDetailsResult::GetServiceLastAccessedDetailsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_jobStatus(JobStatusType::NOT_SET),
    m_isTruncated(false)
{
  *this = result;
}

GetServiceLastAccessedDetailsResult& GetServiceLastAccessedDetailsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetServiceLastAccessedDetailsResult"))
  {
    resultNode = rootNode.FirstChild("GetServiceLastAccessedDetailsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode jobStatusNode = resultNode.FirstChild("JobStatus");
    if(!jobStatusNode.IsNull())
    {
      m_jobStatus = JobStatusTypeMapper::GetJobStatusTypeForName(StringUtils::Trim(jobStatusNode.GetText().c_str()).c_str());
    }
    XmlNode jobCreationDateNode = resultNode.FirstChild("JobCreationDate");
    if(!jobCreationDateNode.IsNull())
    {
      m_jobCreationDate = DateTime(StringUtils::Trim(jobCreationDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode servicesLastAccessedNode = resultNode.FirstChild("ServicesLastAccessed");
    if(!servicesLastAccessedNode.IsNull())
    {
      XmlNode servicesLastAccessedMember = servicesLastAccessedNode.FirstChild("member");
      while(!servicesLastAccessedMember.IsNull())
      {
        m_servicesLastAccessed.push_back(servicesLastAccessedMember);
        servicesLastAccessedMember = servicesLastAccessedMember.NextNode("member");
      }

    }
    XmlNode jobCompletionDateNode = resultNode.FirstChild("JobCompletionDate");
    if(!jobCompletionDateNode.IsNull())
    {
      m_jobCompletionDate = DateTime(StringUtils::Trim(jobCompletionDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = markerNode.GetText();
    }
    XmlNode errorNode = resultNode.FirstChild("Error");
    if(!errorNode.IsNull())
    {
      m_error = errorNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetServiceLastAccessedDetailsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
