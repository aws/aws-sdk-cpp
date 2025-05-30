﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeAccountAttributesResponse.h>
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

DescribeAccountAttributesResponse::DescribeAccountAttributesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeAccountAttributesResponse& DescribeAccountAttributesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeAccountAttributesResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeAccountAttributesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode accountAttributesNode = resultNode.FirstChild("accountAttributeSet");
    if(!accountAttributesNode.IsNull())
    {
      XmlNode accountAttributesMember = accountAttributesNode.FirstChild("item");
      m_accountAttributesHasBeenSet = !accountAttributesMember.IsNull();
      while(!accountAttributesMember.IsNull())
      {
        m_accountAttributes.push_back(accountAttributesMember);
        accountAttributesMember = accountAttributesMember.NextNode("item");
      }

      m_accountAttributesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeAccountAttributesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
