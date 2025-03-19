/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteFleetsResponse.h>
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

DeleteFleetsResponse::DeleteFleetsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteFleetsResponse& DeleteFleetsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteFleetsResponse"))
  {
    resultNode = rootNode.FirstChild("DeleteFleetsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode successfulFleetDeletionsNode = resultNode.FirstChild("successfulFleetDeletionSet");
    if(!successfulFleetDeletionsNode.IsNull())
    {
      XmlNode successfulFleetDeletionsMember = successfulFleetDeletionsNode.FirstChild("item");
      m_successfulFleetDeletionsHasBeenSet = !successfulFleetDeletionsMember.IsNull();
      while(!successfulFleetDeletionsMember.IsNull())
      {
        m_successfulFleetDeletions.push_back(successfulFleetDeletionsMember);
        successfulFleetDeletionsMember = successfulFleetDeletionsMember.NextNode("item");
      }

      m_successfulFleetDeletionsHasBeenSet = true;
    }
    XmlNode unsuccessfulFleetDeletionsNode = resultNode.FirstChild("unsuccessfulFleetDeletionSet");
    if(!unsuccessfulFleetDeletionsNode.IsNull())
    {
      XmlNode unsuccessfulFleetDeletionsMember = unsuccessfulFleetDeletionsNode.FirstChild("item");
      m_unsuccessfulFleetDeletionsHasBeenSet = !unsuccessfulFleetDeletionsMember.IsNull();
      while(!unsuccessfulFleetDeletionsMember.IsNull())
      {
        m_unsuccessfulFleetDeletions.push_back(unsuccessfulFleetDeletionsMember);
        unsuccessfulFleetDeletionsMember = unsuccessfulFleetDeletionsMember.NextNode("item");
      }

      m_unsuccessfulFleetDeletionsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DeleteFleetsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
