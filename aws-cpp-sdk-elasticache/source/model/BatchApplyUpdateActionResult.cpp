/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/BatchApplyUpdateActionResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

BatchApplyUpdateActionResult::BatchApplyUpdateActionResult()
{
}

BatchApplyUpdateActionResult::BatchApplyUpdateActionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

BatchApplyUpdateActionResult& BatchApplyUpdateActionResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "BatchApplyUpdateActionResult"))
  {
    resultNode = rootNode.FirstChild("BatchApplyUpdateActionResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode processedUpdateActionsNode = resultNode.FirstChild("ProcessedUpdateActions");
    if(!processedUpdateActionsNode.IsNull())
    {
      XmlNode processedUpdateActionsMember = processedUpdateActionsNode.FirstChild("ProcessedUpdateAction");
      while(!processedUpdateActionsMember.IsNull())
      {
        m_processedUpdateActions.push_back(processedUpdateActionsMember);
        processedUpdateActionsMember = processedUpdateActionsMember.NextNode("ProcessedUpdateAction");
      }

    }
    XmlNode unprocessedUpdateActionsNode = resultNode.FirstChild("UnprocessedUpdateActions");
    if(!unprocessedUpdateActionsNode.IsNull())
    {
      XmlNode unprocessedUpdateActionsMember = unprocessedUpdateActionsNode.FirstChild("UnprocessedUpdateAction");
      while(!unprocessedUpdateActionsMember.IsNull())
      {
        m_unprocessedUpdateActions.push_back(unprocessedUpdateActionsMember);
        unprocessedUpdateActionsMember = unprocessedUpdateActionsMember.NextNode("UnprocessedUpdateAction");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElastiCache::Model::BatchApplyUpdateActionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
