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

GetReservedInstancesExchangeQuoteResponse::GetReservedInstancesExchangeQuoteResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
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
      m_currencyCodeHasBeenSet = true;
    }
    XmlNode isValidExchangeNode = resultNode.FirstChild("isValidExchange");
    if(!isValidExchangeNode.IsNull())
    {
      m_isValidExchange = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isValidExchangeNode.GetText()).c_str()).c_str());
      m_isValidExchangeHasBeenSet = true;
    }
    XmlNode outputReservedInstancesWillExpireAtNode = resultNode.FirstChild("outputReservedInstancesWillExpireAt");
    if(!outputReservedInstancesWillExpireAtNode.IsNull())
    {
      m_outputReservedInstancesWillExpireAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(outputReservedInstancesWillExpireAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_outputReservedInstancesWillExpireAtHasBeenSet = true;
    }
    XmlNode paymentDueNode = resultNode.FirstChild("paymentDue");
    if(!paymentDueNode.IsNull())
    {
      m_paymentDue = Aws::Utils::Xml::DecodeEscapedXmlText(paymentDueNode.GetText());
      m_paymentDueHasBeenSet = true;
    }
    XmlNode reservedInstanceValueRollupNode = resultNode.FirstChild("reservedInstanceValueRollup");
    if(!reservedInstanceValueRollupNode.IsNull())
    {
      m_reservedInstanceValueRollup = reservedInstanceValueRollupNode;
      m_reservedInstanceValueRollupHasBeenSet = true;
    }
    XmlNode reservedInstanceValueSetNode = resultNode.FirstChild("reservedInstanceValueSet");
    if(!reservedInstanceValueSetNode.IsNull())
    {
      XmlNode reservedInstanceValueSetMember = reservedInstanceValueSetNode.FirstChild("item");
      m_reservedInstanceValueSetHasBeenSet = !reservedInstanceValueSetMember.IsNull();
      while(!reservedInstanceValueSetMember.IsNull())
      {
        m_reservedInstanceValueSet.push_back(reservedInstanceValueSetMember);
        reservedInstanceValueSetMember = reservedInstanceValueSetMember.NextNode("item");
      }

      m_reservedInstanceValueSetHasBeenSet = true;
    }
    XmlNode targetConfigurationValueRollupNode = resultNode.FirstChild("targetConfigurationValueRollup");
    if(!targetConfigurationValueRollupNode.IsNull())
    {
      m_targetConfigurationValueRollup = targetConfigurationValueRollupNode;
      m_targetConfigurationValueRollupHasBeenSet = true;
    }
    XmlNode targetConfigurationValueSetNode = resultNode.FirstChild("targetConfigurationValueSet");
    if(!targetConfigurationValueSetNode.IsNull())
    {
      XmlNode targetConfigurationValueSetMember = targetConfigurationValueSetNode.FirstChild("item");
      m_targetConfigurationValueSetHasBeenSet = !targetConfigurationValueSetMember.IsNull();
      while(!targetConfigurationValueSetMember.IsNull())
      {
        m_targetConfigurationValueSet.push_back(targetConfigurationValueSetMember);
        targetConfigurationValueSetMember = targetConfigurationValueSetMember.NextNode("item");
      }

      m_targetConfigurationValueSetHasBeenSet = true;
    }
    XmlNode validationFailureReasonNode = resultNode.FirstChild("validationFailureReason");
    if(!validationFailureReasonNode.IsNull())
    {
      m_validationFailureReason = Aws::Utils::Xml::DecodeEscapedXmlText(validationFailureReasonNode.GetText());
      m_validationFailureReasonHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetReservedInstancesExchangeQuoteResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
