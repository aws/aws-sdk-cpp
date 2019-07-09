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
      m_success = StringUtils::ConvertToBool(StringUtils::Trim(successNode.GetText().c_str()).c_str());
    }
    XmlNode warningMessageNode = resultNode.FirstChild("WarningMessage");
    if(!warningMessageNode.IsNull())
    {
      m_warningMessage = warningMessageNode.GetText();
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
