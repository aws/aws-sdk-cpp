/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

CreateFlowLogsResponse::CreateFlowLogsResponse()
{
}

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
      m_clientToken = clientTokenNode.GetText();
    }
    XmlNode flowLogIdsNode = resultNode.FirstChild("flowLogIdSet");
    if(!flowLogIdsNode.IsNull())
    {
      XmlNode flowLogIdsMember = flowLogIdsNode.FirstChild("item");
      while(!flowLogIdsMember.IsNull())
      {
        m_flowLogIds.push_back(flowLogIdsMember.GetText());
        flowLogIdsMember = flowLogIdsMember.NextNode("item");
      }

    }
    XmlNode unsuccessfulNode = resultNode.FirstChild("unsuccessful");
    if(!unsuccessfulNode.IsNull())
    {
      XmlNode unsuccessfulMember = unsuccessfulNode.FirstChild("item");
      while(!unsuccessfulMember.IsNull())
      {
        m_unsuccessful.push_back(unsuccessfulMember);
        unsuccessfulMember = unsuccessfulMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateFlowLogsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
