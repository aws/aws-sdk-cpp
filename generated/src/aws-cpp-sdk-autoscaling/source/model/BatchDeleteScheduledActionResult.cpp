/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/BatchDeleteScheduledActionResult.h>
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

BatchDeleteScheduledActionResult::BatchDeleteScheduledActionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

BatchDeleteScheduledActionResult& BatchDeleteScheduledActionResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "BatchDeleteScheduledActionResult"))
  {
    resultNode = rootNode.FirstChild("BatchDeleteScheduledActionResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode failedScheduledActionsNode = resultNode.FirstChild("FailedScheduledActions");
    if(!failedScheduledActionsNode.IsNull())
    {
      XmlNode failedScheduledActionsMember = failedScheduledActionsNode.FirstChild("member");
      m_failedScheduledActionsHasBeenSet = !failedScheduledActionsMember.IsNull();
      while(!failedScheduledActionsMember.IsNull())
      {
        m_failedScheduledActions.push_back(failedScheduledActionsMember);
        failedScheduledActionsMember = failedScheduledActionsMember.NextNode("member");
      }

      m_failedScheduledActionsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::BatchDeleteScheduledActionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
