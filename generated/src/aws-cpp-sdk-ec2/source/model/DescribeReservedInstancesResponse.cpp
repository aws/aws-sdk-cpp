﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeReservedInstancesResponse.h>
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

DescribeReservedInstancesResponse::DescribeReservedInstancesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeReservedInstancesResponse& DescribeReservedInstancesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeReservedInstancesResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeReservedInstancesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode reservedInstancesNode = resultNode.FirstChild("reservedInstancesSet");
    if(!reservedInstancesNode.IsNull())
    {
      XmlNode reservedInstancesMember = reservedInstancesNode.FirstChild("item");
      m_reservedInstancesHasBeenSet = !reservedInstancesMember.IsNull();
      while(!reservedInstancesMember.IsNull())
      {
        m_reservedInstances.push_back(reservedInstancesMember);
        reservedInstancesMember = reservedInstancesMember.NextNode("item");
      }

      m_reservedInstancesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeReservedInstancesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
