﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PurchaseHostReservationResponse.h>
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

PurchaseHostReservationResponse::PurchaseHostReservationResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

PurchaseHostReservationResponse& PurchaseHostReservationResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "PurchaseHostReservationResponse"))
  {
    resultNode = rootNode.FirstChild("PurchaseHostReservationResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if(!clientTokenNode.IsNull())
    {
      m_clientToken = Aws::Utils::Xml::DecodeEscapedXmlText(clientTokenNode.GetText());
      m_clientTokenHasBeenSet = true;
    }
    XmlNode currencyCodeNode = resultNode.FirstChild("currencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = CurrencyCodeValuesMapper::GetCurrencyCodeValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(currencyCodeNode.GetText()).c_str()));
      m_currencyCodeHasBeenSet = true;
    }
    XmlNode purchaseNode = resultNode.FirstChild("purchase");
    if(!purchaseNode.IsNull())
    {
      XmlNode purchaseMember = purchaseNode.FirstChild("item");
      m_purchaseHasBeenSet = !purchaseMember.IsNull();
      while(!purchaseMember.IsNull())
      {
        m_purchase.push_back(purchaseMember);
        purchaseMember = purchaseMember.NextNode("item");
      }

      m_purchaseHasBeenSet = true;
    }
    XmlNode totalHourlyPriceNode = resultNode.FirstChild("totalHourlyPrice");
    if(!totalHourlyPriceNode.IsNull())
    {
      m_totalHourlyPrice = Aws::Utils::Xml::DecodeEscapedXmlText(totalHourlyPriceNode.GetText());
      m_totalHourlyPriceHasBeenSet = true;
    }
    XmlNode totalUpfrontPriceNode = resultNode.FirstChild("totalUpfrontPrice");
    if(!totalUpfrontPriceNode.IsNull())
    {
      m_totalUpfrontPrice = Aws::Utils::Xml::DecodeEscapedXmlText(totalUpfrontPriceNode.GetText());
      m_totalUpfrontPriceHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::PurchaseHostReservationResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
