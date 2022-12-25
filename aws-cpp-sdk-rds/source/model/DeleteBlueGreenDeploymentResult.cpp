/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteBlueGreenDeploymentResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DeleteBlueGreenDeploymentResult::DeleteBlueGreenDeploymentResult()
{
}

DeleteBlueGreenDeploymentResult::DeleteBlueGreenDeploymentResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteBlueGreenDeploymentResult& DeleteBlueGreenDeploymentResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteBlueGreenDeploymentResult"))
  {
    resultNode = rootNode.FirstChild("DeleteBlueGreenDeploymentResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode blueGreenDeploymentNode = resultNode.FirstChild("BlueGreenDeployment");
    if(!blueGreenDeploymentNode.IsNull())
    {
      m_blueGreenDeployment = blueGreenDeploymentNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DeleteBlueGreenDeploymentResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
