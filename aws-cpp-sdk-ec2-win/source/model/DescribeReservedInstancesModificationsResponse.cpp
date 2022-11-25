/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeReservedInstancesModificationsResponse.h>
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

DescribeReservedInstancesModificationsResponse::DescribeReservedInstancesModificationsResponse()
{
}

DescribeReservedInstancesModificationsResponse::DescribeReservedInstancesModificationsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeReservedInstancesModificationsResponse& DescribeReservedInstancesModificationsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeReservedInstancesModificationsResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeReservedInstancesModificationsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode reservedInstancesModificationsNode = resultNode.FirstChild("reservedInstancesModificationsSet");
    if(!reservedInstancesModificationsNode.IsNull())
    {
      XmlNode reservedInstancesModificationsMember = reservedInstancesModificationsNode.FirstChild("item");
      while(!reservedInstancesModificationsMember.IsNull())
      {
        m_reservedInstancesModifications.push_back(reservedInstancesModificationsMember);
        reservedInstancesModificationsMember = reservedInstancesModificationsMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeReservedInstancesModificationsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
