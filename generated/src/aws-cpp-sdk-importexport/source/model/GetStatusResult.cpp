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

GetStatusResult::GetStatusResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
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
      m_jobIdHasBeenSet = true;
    }
    XmlNode jobTypeNode = resultNode.FirstChild("JobType");
    if(!jobTypeNode.IsNull())
    {
      m_jobType = JobTypeMapper::GetJobTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(jobTypeNode.GetText()).c_str()));
      m_jobTypeHasBeenSet = true;
    }
    XmlNode locationCodeNode = resultNode.FirstChild("LocationCode");
    if(!locationCodeNode.IsNull())
    {
      m_locationCode = Aws::Utils::Xml::DecodeEscapedXmlText(locationCodeNode.GetText());
      m_locationCodeHasBeenSet = true;
    }
    XmlNode locationMessageNode = resultNode.FirstChild("LocationMessage");
    if(!locationMessageNode.IsNull())
    {
      m_locationMessage = Aws::Utils::Xml::DecodeEscapedXmlText(locationMessageNode.GetText());
      m_locationMessageHasBeenSet = true;
    }
    XmlNode progressCodeNode = resultNode.FirstChild("ProgressCode");
    if(!progressCodeNode.IsNull())
    {
      m_progressCode = Aws::Utils::Xml::DecodeEscapedXmlText(progressCodeNode.GetText());
      m_progressCodeHasBeenSet = true;
    }
    XmlNode progressMessageNode = resultNode.FirstChild("ProgressMessage");
    if(!progressMessageNode.IsNull())
    {
      m_progressMessage = Aws::Utils::Xml::DecodeEscapedXmlText(progressMessageNode.GetText());
      m_progressMessageHasBeenSet = true;
    }
    XmlNode carrierNode = resultNode.FirstChild("Carrier");
    if(!carrierNode.IsNull())
    {
      m_carrier = Aws::Utils::Xml::DecodeEscapedXmlText(carrierNode.GetText());
      m_carrierHasBeenSet = true;
    }
    XmlNode trackingNumberNode = resultNode.FirstChild("TrackingNumber");
    if(!trackingNumberNode.IsNull())
    {
      m_trackingNumber = Aws::Utils::Xml::DecodeEscapedXmlText(trackingNumberNode.GetText());
      m_trackingNumberHasBeenSet = true;
    }
    XmlNode logBucketNode = resultNode.FirstChild("LogBucket");
    if(!logBucketNode.IsNull())
    {
      m_logBucket = Aws::Utils::Xml::DecodeEscapedXmlText(logBucketNode.GetText());
      m_logBucketHasBeenSet = true;
    }
    XmlNode logKeyNode = resultNode.FirstChild("LogKey");
    if(!logKeyNode.IsNull())
    {
      m_logKey = Aws::Utils::Xml::DecodeEscapedXmlText(logKeyNode.GetText());
      m_logKeyHasBeenSet = true;
    }
    XmlNode errorCountNode = resultNode.FirstChild("ErrorCount");
    if(!errorCountNode.IsNull())
    {
      m_errorCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(errorCountNode.GetText()).c_str()).c_str());
      m_errorCountHasBeenSet = true;
    }
    XmlNode signatureNode = resultNode.FirstChild("Signature");
    if(!signatureNode.IsNull())
    {
      m_signature = Aws::Utils::Xml::DecodeEscapedXmlText(signatureNode.GetText());
      m_signatureHasBeenSet = true;
    }
    XmlNode signatureFileContentsNode = resultNode.FirstChild("SignatureFileContents");
    if(!signatureFileContentsNode.IsNull())
    {
      m_signatureFileContents = Aws::Utils::Xml::DecodeEscapedXmlText(signatureFileContentsNode.GetText());
      m_signatureFileContentsHasBeenSet = true;
    }
    XmlNode currentManifestNode = resultNode.FirstChild("CurrentManifest");
    if(!currentManifestNode.IsNull())
    {
      m_currentManifest = Aws::Utils::Xml::DecodeEscapedXmlText(currentManifestNode.GetText());
      m_currentManifestHasBeenSet = true;
    }
    XmlNode creationDateNode = resultNode.FirstChild("CreationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationDateHasBeenSet = true;
    }
    XmlNode artifactListNode = resultNode.FirstChild("ArtifactList");
    if(!artifactListNode.IsNull())
    {
      XmlNode artifactListMember = artifactListNode.FirstChild("member");
      m_artifactListHasBeenSet = !artifactListMember.IsNull();
      while(!artifactListMember.IsNull())
      {
        m_artifactList.push_back(artifactListMember);
        artifactListMember = artifactListMember.NextNode("member");
      }

      m_artifactListHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::ImportExport::Model::GetStatusResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
