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

#include <aws/iam/model/GetOrganizationsAccessReportResult.h>
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

GetOrganizationsAccessReportResult::GetOrganizationsAccessReportResult() : 
    m_jobStatus(JobStatusType::NOT_SET),
    m_numberOfServicesAccessible(0),
    m_numberOfServicesNotAccessed(0),
    m_isTruncated(false)
{
}

GetOrganizationsAccessReportResult::GetOrganizationsAccessReportResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_jobStatus(JobStatusType::NOT_SET),
    m_numberOfServicesAccessible(0),
    m_numberOfServicesNotAccessed(0),
    m_isTruncated(false)
{
  *this = result;
}

GetOrganizationsAccessReportResult& GetOrganizationsAccessReportResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetOrganizationsAccessReportResult"))
  {
    resultNode = rootNode.FirstChild("GetOrganizationsAccessReportResult");
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
    XmlNode jobCompletionDateNode = resultNode.FirstChild("JobCompletionDate");
    if(!jobCompletionDateNode.IsNull())
    {
      m_jobCompletionDate = DateTime(StringUtils::Trim(jobCompletionDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode numberOfServicesAccessibleNode = resultNode.FirstChild("NumberOfServicesAccessible");
    if(!numberOfServicesAccessibleNode.IsNull())
    {
      m_numberOfServicesAccessible = StringUtils::ConvertToInt32(StringUtils::Trim(numberOfServicesAccessibleNode.GetText().c_str()).c_str());
    }
    XmlNode numberOfServicesNotAccessedNode = resultNode.FirstChild("NumberOfServicesNotAccessed");
    if(!numberOfServicesNotAccessedNode.IsNull())
    {
      m_numberOfServicesNotAccessed = StringUtils::ConvertToInt32(StringUtils::Trim(numberOfServicesNotAccessedNode.GetText().c_str()).c_str());
    }
    XmlNode accessDetailsNode = resultNode.FirstChild("AccessDetails");
    if(!accessDetailsNode.IsNull())
    {
      XmlNode accessDetailsMember = accessDetailsNode.FirstChild("member");
      while(!accessDetailsMember.IsNull())
      {
        m_accessDetails.push_back(accessDetailsMember);
        accessDetailsMember = accessDetailsMember.NextNode("member");
      }

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
    XmlNode errorDetailsNode = resultNode.FirstChild("ErrorDetails");
    if(!errorDetailsNode.IsNull())
    {
      m_errorDetails = errorDetailsNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetOrganizationsAccessReportResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
