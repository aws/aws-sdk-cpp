/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeCapacityReservationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeCapacityReservationResult::DescribeCapacityReservationResult() : 
    m_decreaseRequestsRemaining(0)
{
}

DescribeCapacityReservationResult::DescribeCapacityReservationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : DescribeCapacityReservationResult()
{
  *this = result;
}

DescribeCapacityReservationResult& DescribeCapacityReservationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeCapacityReservationResult"))
  {
    resultNode = rootNode.FirstChild("DescribeCapacityReservationResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode lastModifiedTimeNode = resultNode.FirstChild("LastModifiedTime");
    if(!lastModifiedTimeNode.IsNull())
    {
      m_lastModifiedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastModifiedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode decreaseRequestsRemainingNode = resultNode.FirstChild("DecreaseRequestsRemaining");
    if(!decreaseRequestsRemainingNode.IsNull())
    {
      m_decreaseRequestsRemaining = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(decreaseRequestsRemainingNode.GetText()).c_str()).c_str());
    }
    XmlNode minimumLoadBalancerCapacityNode = resultNode.FirstChild("MinimumLoadBalancerCapacity");
    if(!minimumLoadBalancerCapacityNode.IsNull())
    {
      m_minimumLoadBalancerCapacity = minimumLoadBalancerCapacityNode;
    }
    XmlNode capacityReservationStateNode = resultNode.FirstChild("CapacityReservationState");
    if(!capacityReservationStateNode.IsNull())
    {
      XmlNode capacityReservationStateMember = capacityReservationStateNode.FirstChild("member");
      while(!capacityReservationStateMember.IsNull())
      {
        m_capacityReservationState.push_back(capacityReservationStateMember);
        capacityReservationStateMember = capacityReservationStateMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::DescribeCapacityReservationResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
