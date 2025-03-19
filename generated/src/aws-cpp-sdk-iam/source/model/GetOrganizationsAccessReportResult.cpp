/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

GetOrganizationsAccessReportResult::GetOrganizationsAccessReportResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
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
      m_jobStatus = JobStatusTypeMapper::GetJobStatusTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(jobStatusNode.GetText()).c_str()));
      m_jobStatusHasBeenSet = true;
    }
    XmlNode jobCreationDateNode = resultNode.FirstChild("JobCreationDate");
    if(!jobCreationDateNode.IsNull())
    {
      m_jobCreationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(jobCreationDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_jobCreationDateHasBeenSet = true;
    }
    XmlNode jobCompletionDateNode = resultNode.FirstChild("JobCompletionDate");
    if(!jobCompletionDateNode.IsNull())
    {
      m_jobCompletionDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(jobCompletionDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_jobCompletionDateHasBeenSet = true;
    }
    XmlNode numberOfServicesAccessibleNode = resultNode.FirstChild("NumberOfServicesAccessible");
    if(!numberOfServicesAccessibleNode.IsNull())
    {
      m_numberOfServicesAccessible = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfServicesAccessibleNode.GetText()).c_str()).c_str());
      m_numberOfServicesAccessibleHasBeenSet = true;
    }
    XmlNode numberOfServicesNotAccessedNode = resultNode.FirstChild("NumberOfServicesNotAccessed");
    if(!numberOfServicesNotAccessedNode.IsNull())
    {
      m_numberOfServicesNotAccessed = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfServicesNotAccessedNode.GetText()).c_str()).c_str());
      m_numberOfServicesNotAccessedHasBeenSet = true;
    }
    XmlNode accessDetailsNode = resultNode.FirstChild("AccessDetails");
    if(!accessDetailsNode.IsNull())
    {
      XmlNode accessDetailsMember = accessDetailsNode.FirstChild("member");
      m_accessDetailsHasBeenSet = !accessDetailsMember.IsNull();
      while(!accessDetailsMember.IsNull())
      {
        m_accessDetails.push_back(accessDetailsMember);
        accessDetailsMember = accessDetailsMember.NextNode("member");
      }

      m_accessDetailsHasBeenSet = true;
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
      m_isTruncatedHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
    XmlNode errorDetailsNode = resultNode.FirstChild("ErrorDetails");
    if(!errorDetailsNode.IsNull())
    {
      m_errorDetails = errorDetailsNode;
      m_errorDetailsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetOrganizationsAccessReportResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
