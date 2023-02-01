/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteLaunchTemplateVersionsResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DeleteLaunchTemplateVersionsResponse::DeleteLaunchTemplateVersionsResponse()
{
}

DeleteLaunchTemplateVersionsResponse::DeleteLaunchTemplateVersionsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteLaunchTemplateVersionsResponse& DeleteLaunchTemplateVersionsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteLaunchTemplateVersionsResponse"))
  {
    resultNode = rootNode.FirstChild("DeleteLaunchTemplateVersionsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode successfullyDeletedLaunchTemplateVersionsNode = resultNode.FirstChild("successfullyDeletedLaunchTemplateVersionSet");
    if(!successfullyDeletedLaunchTemplateVersionsNode.IsNull())
    {
      XmlNode successfullyDeletedLaunchTemplateVersionsMember = successfullyDeletedLaunchTemplateVersionsNode.FirstChild("item");
      while(!successfullyDeletedLaunchTemplateVersionsMember.IsNull())
      {
        m_successfullyDeletedLaunchTemplateVersions.push_back(successfullyDeletedLaunchTemplateVersionsMember);
        successfullyDeletedLaunchTemplateVersionsMember = successfullyDeletedLaunchTemplateVersionsMember.NextNode("item");
      }

    }
    XmlNode unsuccessfullyDeletedLaunchTemplateVersionsNode = resultNode.FirstChild("unsuccessfullyDeletedLaunchTemplateVersionSet");
    if(!unsuccessfullyDeletedLaunchTemplateVersionsNode.IsNull())
    {
      XmlNode unsuccessfullyDeletedLaunchTemplateVersionsMember = unsuccessfullyDeletedLaunchTemplateVersionsNode.FirstChild("item");
      while(!unsuccessfullyDeletedLaunchTemplateVersionsMember.IsNull())
      {
        m_unsuccessfullyDeletedLaunchTemplateVersions.push_back(unsuccessfullyDeletedLaunchTemplateVersionsMember);
        unsuccessfullyDeletedLaunchTemplateVersionsMember = unsuccessfullyDeletedLaunchTemplateVersionsMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DeleteLaunchTemplateVersionsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
