/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateFlowLogsResponse.h>
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

CreateFlowLogsResponse::CreateFlowLogsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateFlowLogsResponse& CreateFlowLogsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateFlowLogsResponse"))
  {
    resultNode = rootNode.FirstChild("CreateFlowLogsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if(!clientTokenNode.IsNull())
    {
      m_clientToken = Aws::Utils::Xml::DecodeEscapedXmlText(clientTokenNode.GetText());
      m_clientTokenHasBeenSet = true;
    }
    XmlNode flowLogIdsNode = resultNode.FirstChild("flowLogIdSet");
    if(!flowLogIdsNode.IsNull())
    {
      XmlNode flowLogIdsMember = flowLogIdsNode.FirstChild("item");
      m_flowLogIdsHasBeenSet = !flowLogIdsMember.IsNull();
      while(!flowLogIdsMember.IsNull())
      {
        m_flowLogIds.push_back(flowLogIdsMember.GetText());
        flowLogIdsMember = flowLogIdsMember.NextNode("item");
      }

      m_flowLogIdsHasBeenSet = true;
    }
    XmlNode unsuccessfulNode = resultNode.FirstChild("unsuccessful");
    if(!unsuccessfulNode.IsNull())
    {
      XmlNode unsuccessfulMember = unsuccessfulNode.FirstChild("item");
      m_unsuccessfulHasBeenSet = !unsuccessfulMember.IsNull();
      while(!unsuccessfulMember.IsNull())
      {
        m_unsuccessful.push_back(unsuccessfulMember);
        unsuccessfulMember = unsuccessfulMember.NextNode("item");
      }

      m_unsuccessfulHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateFlowLogsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
