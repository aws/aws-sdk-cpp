/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/importexport/model/GetStatusResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ImportExport::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetStatusResult::GetStatusResult() : 
    m_jobType(JobType::NOT_SET),
    m_errorCount(0)
{
}

GetStatusResult::GetStatusResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_jobType(JobType::NOT_SET),
    m_errorCount(0)
{
  *this = result;
}

GetStatusResult& GetStatusResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetStatusResult"))
  {
    resultNode = rootNode.FirstChild("GetStatusResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode jobIdNode = resultNode.FirstChild("JobId");
    if(!jobIdNode.IsNull())
    {
      m_jobId = Aws::Utils::Xml::DecodeEscapedXmlText(jobIdNode.GetText());
    }
    XmlNode jobTypeNode = resultNode.FirstChild("JobType");
    if(!jobTypeNode.IsNull())
    {
      m_jobType = JobTypeMapper::GetJobTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(jobTypeNode.GetText()).c_str()).c_str());
    }
    XmlNode locationCodeNode = resultNode.FirstChild("LocationCode");
    if(!locationCodeNode.IsNull())
    {
      m_locationCode = Aws::Utils::Xml::DecodeEscapedXmlText(locationCodeNode.GetText());
    }
    XmlNode locationMessageNode = resultNode.FirstChild("LocationMessage");
    if(!locationMessageNode.IsNull())
    {
      m_locationMessage = Aws::Utils::Xml::DecodeEscapedXmlText(locationMessageNode.GetText());
    }
    XmlNode progressCodeNode = resultNode.FirstChild("ProgressCode");
    if(!progressCodeNode.IsNull())
    {
      m_progressCode = Aws::Utils::Xml::DecodeEscapedXmlText(progressCodeNode.GetText());
    }
    XmlNode progressMessageNode = resultNode.FirstChild("ProgressMessage");
    if(!progressMessageNode.IsNull())
    {
      m_progressMessage = Aws::Utils::Xml::DecodeEscapedXmlText(progressMessageNode.GetText());
    }
    XmlNode carrierNode = resultNode.FirstChild("Carrier");
    if(!carrierNode.IsNull())
    {
      m_carrier = Aws::Utils::Xml::DecodeEscapedXmlText(carrierNode.GetText());
    }
    XmlNode trackingNumberNode = resultNode.FirstChild("TrackingNumber");
    if(!trackingNumberNode.IsNull())
    {
      m_trackingNumber = Aws::Utils::Xml::DecodeEscapedXmlText(trackingNumberNode.GetText());
    }
    XmlNode logBucketNode = resultNode.FirstChild("LogBucket");
    if(!logBucketNode.IsNull())
    {
      m_logBucket = Aws::Utils::Xml::DecodeEscapedXmlText(logBucketNode.GetText());
    }
    XmlNode logKeyNode = resultNode.FirstChild("LogKey");
    if(!logKeyNode.IsNull())
    {
      m_logKey = Aws::Utils::Xml::DecodeEscapedXmlText(logKeyNode.GetText());
    }
    XmlNode errorCountNode = resultNode.FirstChild("ErrorCount");
    if(!errorCountNode.IsNull())
    {
      m_errorCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(errorCountNode.GetText()).c_str()).c_str());
    }
    XmlNode signatureNode = resultNode.FirstChild("Signature");
    if(!signatureNode.IsNull())
    {
      m_signature = Aws::Utils::Xml::DecodeEscapedXmlText(signatureNode.GetText());
    }
    XmlNode signatureFileContentsNode = resultNode.FirstChild("SignatureFileContents");
    if(!signatureFileContentsNode.IsNull())
    {
      m_signatureFileContents = Aws::Utils::Xml::DecodeEscapedXmlText(signatureFileContentsNode.GetText());
    }
    XmlNode currentManifestNode = resultNode.FirstChild("CurrentManifest");
    if(!currentManifestNode.IsNull())
    {
      m_currentManifest = Aws::Utils::Xml::DecodeEscapedXmlText(currentManifestNode.GetText());
    }
    XmlNode creationDateNode = resultNode.FirstChild("CreationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode artifactListNode = resultNode.FirstChild("ArtifactList");
    if(!artifactListNode.IsNull())
    {
      XmlNode artifactListMember = artifactListNode.FirstChild("member");
      while(!artifactListMember.IsNull())
      {
        m_artifactList.push_back(artifactListMember);
        artifactListMember = artifactListMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ImportExport::Model::GetStatusResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
