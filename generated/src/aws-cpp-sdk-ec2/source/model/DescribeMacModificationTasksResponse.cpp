﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeMacModificationTasksResponse.h>
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

DescribeMacModificationTasksResponse::DescribeMacModificationTasksResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeMacModificationTasksResponse& DescribeMacModificationTasksResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeMacModificationTasksResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeMacModificationTasksResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode macModificationTasksNode = resultNode.FirstChild("macModificationTaskSet");
    if(!macModificationTasksNode.IsNull())
    {
      XmlNode macModificationTasksMember = macModificationTasksNode.FirstChild("item");
      m_macModificationTasksHasBeenSet = !macModificationTasksMember.IsNull();
      while(!macModificationTasksMember.IsNull())
      {
        m_macModificationTasks.push_back(macModificationTasksMember);
        macModificationTasksMember = macModificationTasksMember.NextNode("item");
      }

      m_macModificationTasksHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeMacModificationTasksResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
