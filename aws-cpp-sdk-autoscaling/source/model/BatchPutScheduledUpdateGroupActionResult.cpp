/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/BatchPutScheduledUpdateGroupActionResult.h>
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

BatchPutScheduledUpdateGroupActionResult::BatchPutScheduledUpdateGroupActionResult()
{
}

BatchPutScheduledUpdateGroupActionResult::BatchPutScheduledUpdateGroupActionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

BatchPutScheduledUpdateGroupActionResult& BatchPutScheduledUpdateGroupActionResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "BatchPutScheduledUpdateGroupActionResult"))
  {
    resultNode = rootNode.FirstChild("BatchPutScheduledUpdateGroupActionResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode failedScheduledUpdateGroupActionsNode = resultNode.FirstChild("FailedScheduledUpdateGroupActions");
    if(!failedScheduledUpdateGroupActionsNode.IsNull())
    {
      XmlNode failedScheduledUpdateGroupActionsMember = failedScheduledUpdateGroupActionsNode.FirstChild("member");
      while(!failedScheduledUpdateGroupActionsMember.IsNull())
      {
        m_failedScheduledUpdateGroupActions.push_back(failedScheduledUpdateGroupActionsMember);
        failedScheduledUpdateGroupActionsMember = failedScheduledUpdateGroupActionsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::AutoScaling::Model::BatchPutScheduledUpdateGroupActionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
