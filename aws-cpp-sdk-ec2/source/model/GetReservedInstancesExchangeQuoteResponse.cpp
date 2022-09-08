/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetReservedInstancesExchangeQuoteResponse.h>
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

GetReservedInstancesExchangeQuoteResponse::GetReservedInstancesExchangeQuoteResponse() : 
    m_isValidExchange(false)
{
}

GetReservedInstancesExchangeQuoteResponse::GetReservedInstancesExchangeQuoteResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_isValidExchange(false)
{
  *this = result;
}

GetReservedInstancesExchangeQuoteResponse& GetReservedInstancesExchangeQuoteResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetReservedInstancesExchangeQuoteResponse"))
  {
    resultNode = rootNode.FirstChild("GetReservedInstancesExchangeQuoteResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode currencyCodeNode = resultNode.FirstChild("currencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = Aws::Utils::Xml::DecodeEscapedXmlText(currencyCodeNode.GetText());
    }
    XmlNode isValidExchangeNode = resultNode.FirstChild("isValidExchange");
    if(!isValidExchangeNode.IsNull())
    {
      m_isValidExchange = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isValidExchangeNode.GetText()).c_str()).c_str());
    }
    XmlNode outputReservedInstancesWillExpireAtNode = resultNode.FirstChild("outputReservedInstancesWillExpireAt");
    if(!outputReservedInstancesWillExpireAtNode.IsNull())
    {
      m_outputReservedInstancesWillExpireAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(outputReservedInstancesWillExpireAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode paymentDueNode = resultNode.FirstChild("paymentDue");
    if(!paymentDueNode.IsNull())
    {
      m_paymentDue = Aws::Utils::Xml::DecodeEscapedXmlText(paymentDueNode.GetText());
    }
    XmlNode reservedInstanceValueRollupNode = resultNode.FirstChild("reservedInstanceValueRollup");
    if(!reservedInstanceValueRollupNode.IsNull())
    {
      m_reservedInstanceValueRollup = reservedInstanceValueRollupNode;
    }
    XmlNode reservedInstanceValueSetNode = resultNode.FirstChild("reservedInstanceValueSet");
    if(!reservedInstanceValueSetNode.IsNull())
    {
      XmlNode reservedInstanceValueSetMember = reservedInstanceValueSetNode.FirstChild("item");
      while(!reservedInstanceValueSetMember.IsNull())
      {
        m_reservedInstanceValueSet.push_back(reservedInstanceValueSetMember);
        reservedInstanceValueSetMember = reservedInstanceValueSetMember.NextNode("item");
      }

    }
    XmlNode targetConfigurationValueRollupNode = resultNode.FirstChild("targetConfigurationValueRollup");
    if(!targetConfigurationValueRollupNode.IsNull())
    {
      m_targetConfigurationValueRollup = targetConfigurationValueRollupNode;
    }
    XmlNode targetConfigurationValueSetNode = resultNode.FirstChild("targetConfigurationValueSet");
    if(!targetConfigurationValueSetNode.IsNull())
    {
      XmlNode targetConfigurationValueSetMember = targetConfigurationValueSetNode.FirstChild("item");
      while(!targetConfigurationValueSetMember.IsNull())
      {
        m_targetConfigurationValueSet.push_back(targetConfigurationValueSetMember);
        targetConfigurationValueSetMember = targetConfigurationValueSetMember.NextNode("item");
      }

    }
    XmlNode validationFailureReasonNode = resultNode.FirstChild("validationFailureReason");
    if(!validationFailureReasonNode.IsNull())
    {
      m_validationFailureReason = Aws::Utils::Xml::DecodeEscapedXmlText(validationFailureReasonNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetReservedInstancesExchangeQuoteResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
