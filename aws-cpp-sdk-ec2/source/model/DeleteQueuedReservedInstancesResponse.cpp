/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteQueuedReservedInstancesResponse.h>
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

DeleteQueuedReservedInstancesResponse::DeleteQueuedReservedInstancesResponse()
{
}

DeleteQueuedReservedInstancesResponse::DeleteQueuedReservedInstancesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteQueuedReservedInstancesResponse& DeleteQueuedReservedInstancesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteQueuedReservedInstancesResponse"))
  {
    resultNode = rootNode.FirstChild("DeleteQueuedReservedInstancesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode successfulQueuedPurchaseDeletionsNode = resultNode.FirstChild("successfulQueuedPurchaseDeletionSet");
    if(!successfulQueuedPurchaseDeletionsNode.IsNull())
    {
      XmlNode successfulQueuedPurchaseDeletionsMember = successfulQueuedPurchaseDeletionsNode.FirstChild("item");
      while(!successfulQueuedPurchaseDeletionsMember.IsNull())
      {
        m_successfulQueuedPurchaseDeletions.push_back(successfulQueuedPurchaseDeletionsMember);
        successfulQueuedPurchaseDeletionsMember = successfulQueuedPurchaseDeletionsMember.NextNode("item");
      }

    }
    XmlNode failedQueuedPurchaseDeletionsNode = resultNode.FirstChild("failedQueuedPurchaseDeletionSet");
    if(!failedQueuedPurchaseDeletionsNode.IsNull())
    {
      XmlNode failedQueuedPurchaseDeletionsMember = failedQueuedPurchaseDeletionsNode.FirstChild("item");
      while(!failedQueuedPurchaseDeletionsMember.IsNull())
      {
        m_failedQueuedPurchaseDeletions.push_back(failedQueuedPurchaseDeletionsMember);
        failedQueuedPurchaseDeletionsMember = failedQueuedPurchaseDeletionsMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DeleteQueuedReservedInstancesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
