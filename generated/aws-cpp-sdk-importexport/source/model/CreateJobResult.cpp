/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/importexport/model/CreateJobResult.h>
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

CreateJobResult::CreateJobResult() : 
    m_jobType(JobType::NOT_SET)
{
}

CreateJobResult::CreateJobResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_jobType(JobType::NOT_SET)
{
  *this = result;
}

CreateJobResult& CreateJobResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateJobResult"))
  {
    resultNode = rootNode.FirstChild("CreateJobResult");
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
    XmlNode warningMessageNode = resultNode.FirstChild("WarningMessage");
    if(!warningMessageNode.IsNull())
    {
      m_warningMessage = Aws::Utils::Xml::DecodeEscapedXmlText(warningMessageNode.GetText());
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
    AWS_LOGSTREAM_DEBUG("Aws::ImportExport::Model::CreateJobResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
