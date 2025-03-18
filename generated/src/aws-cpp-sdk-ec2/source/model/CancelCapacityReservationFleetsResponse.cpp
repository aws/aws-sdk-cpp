/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelCapacityReservationFleetsResponse.h>
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

CancelCapacityReservationFleetsResponse::CancelCapacityReservationFleetsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CancelCapacityReservationFleetsResponse& CancelCapacityReservationFleetsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CancelCapacityReservationFleetsResponse"))
  {
    resultNode = rootNode.FirstChild("CancelCapacityReservationFleetsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode successfulFleetCancellationsNode = resultNode.FirstChild("successfulFleetCancellationSet");
    if(!successfulFleetCancellationsNode.IsNull())
    {
      XmlNode successfulFleetCancellationsMember = successfulFleetCancellationsNode.FirstChild("item");
      m_successfulFleetCancellationsHasBeenSet = !successfulFleetCancellationsMember.IsNull();
      while(!successfulFleetCancellationsMember.IsNull())
      {
        m_successfulFleetCancellations.push_back(successfulFleetCancellationsMember);
        successfulFleetCancellationsMember = successfulFleetCancellationsMember.NextNode("item");
      }

      m_successfulFleetCancellationsHasBeenSet = true;
    }
    XmlNode failedFleetCancellationsNode = resultNode.FirstChild("failedFleetCancellationSet");
    if(!failedFleetCancellationsNode.IsNull())
    {
      XmlNode failedFleetCancellationsMember = failedFleetCancellationsNode.FirstChild("item");
      m_failedFleetCancellationsHasBeenSet = !failedFleetCancellationsMember.IsNull();
      while(!failedFleetCancellationsMember.IsNull())
      {
        m_failedFleetCancellations.push_back(failedFleetCancellationsMember);
        failedFleetCancellationsMember = failedFleetCancellationsMember.NextNode("item");
      }

      m_failedFleetCancellationsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CancelCapacityReservationFleetsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
