/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelReservedInstancesListingResponse.h>
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

CancelReservedInstancesListingResponse::CancelReservedInstancesListingResponse()
{
}

CancelReservedInstancesListingResponse::CancelReservedInstancesListingResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CancelReservedInstancesListingResponse& CancelReservedInstancesListingResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CancelReservedInstancesListingResponse"))
  {
    resultNode = rootNode.FirstChild("CancelReservedInstancesListingResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode reservedInstancesListingsNode = resultNode.FirstChild("reservedInstancesListingsSet");
    if(!reservedInstancesListingsNode.IsNull())
    {
      XmlNode reservedInstancesListingsMember = reservedInstancesListingsNode.FirstChild("item");
      while(!reservedInstancesListingsMember.IsNull())
      {
        m_reservedInstancesListings.push_back(reservedInstancesListingsMember);
        reservedInstancesListingsMember = reservedInstancesListingsMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CancelReservedInstancesListingResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
