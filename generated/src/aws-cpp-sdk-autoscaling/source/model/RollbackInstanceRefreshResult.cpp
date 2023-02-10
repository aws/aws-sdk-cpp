/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/RollbackInstanceRefreshResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

RollbackInstanceRefreshResult::RollbackInstanceRefreshResult()
{
}

RollbackInstanceRefreshResult::RollbackInstanceRefreshResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RollbackInstanceRefreshResult& RollbackInstanceRefreshResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RollbackInstanceRefreshResult"))
  {
    resultNode = rootNode.FirstChild("RollbackInstanceRefreshResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceRefreshIdNode = resultNode.FirstChild("InstanceRefreshId");
    if(!instanceRefreshIdNode.IsNull())
    {
      m_instanceRefreshId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceRefreshIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::RollbackInstanceRefreshResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
