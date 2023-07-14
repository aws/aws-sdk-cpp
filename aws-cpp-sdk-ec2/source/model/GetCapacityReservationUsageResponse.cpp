/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetCapacityReservationUsageResponse.h>
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

GetCapacityReservationUsageResponse::GetCapacityReservationUsageResponse() : 
    m_totalInstanceCount(0),
    m_availableInstanceCount(0),
    m_state(CapacityReservationState::NOT_SET)
{
}

GetCapacityReservationUsageResponse::GetCapacityReservationUsageResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_totalInstanceCount(0),
    m_availableInstanceCount(0),
    m_state(CapacityReservationState::NOT_SET)
{
  *this = result;
}

GetCapacityReservationUsageResponse& GetCapacityReservationUsageResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetCapacityReservationUsageResponse"))
  {
    resultNode = rootNode.FirstChild("GetCapacityReservationUsageResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode capacityReservationIdNode = resultNode.FirstChild("capacityReservationId");
    if(!capacityReservationIdNode.IsNull())
    {
      m_capacityReservationId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationIdNode.GetText());
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
    }
    XmlNode totalInstanceCountNode = resultNode.FirstChild("totalInstanceCount");
    if(!totalInstanceCountNode.IsNull())
    {
      m_totalInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalInstanceCountNode.GetText()).c_str()).c_str());
    }
    XmlNode availableInstanceCountNode = resultNode.FirstChild("availableInstanceCount");
    if(!availableInstanceCountNode.IsNull())
    {
      m_availableInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(availableInstanceCountNode.GetText()).c_str()).c_str());
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = CapacityReservationStateMapper::GetCapacityReservationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
    }
    XmlNode instanceUsagesNode = resultNode.FirstChild("instanceUsageSet");
    if(!instanceUsagesNode.IsNull())
    {
      XmlNode instanceUsagesMember = instanceUsagesNode.FirstChild("item");
      while(!instanceUsagesMember.IsNull())
      {
        m_instanceUsages.push_back(instanceUsagesMember);
        instanceUsagesMember = instanceUsagesMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetCapacityReservationUsageResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
