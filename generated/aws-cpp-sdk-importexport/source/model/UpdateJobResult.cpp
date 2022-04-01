/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/importexport/model/UpdateJobResult.h>
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

UpdateJobResult::UpdateJobResult() : 
    m_success(false)
{
}

UpdateJobResult::UpdateJobResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_success(false)
{
  *this = result;
}

UpdateJobResult& UpdateJobResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "UpdateJobResult"))
  {
    resultNode = rootNode.FirstChild("UpdateJobResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode successNode = resultNode.FirstChild("Success");
    if(!successNode.IsNull())
    {
      m_success = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(successNode.GetText()).c_str()).c_str());
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
    AWS_LOGSTREAM_DEBUG("Aws::ImportExport::Model::UpdateJobResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
