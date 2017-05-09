/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/GetHostReservationPurchasePreviewResponse.h>
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

GetHostReservationPurchasePreviewResponse::GetHostReservationPurchasePreviewResponse() : 
    m_currencyCode(CurrencyCodeValues::NOT_SET)
{
}

GetHostReservationPurchasePreviewResponse::GetHostReservationPurchasePreviewResponse(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_currencyCode(CurrencyCodeValues::NOT_SET)
{
  *this = result;
}

GetHostReservationPurchasePreviewResponse& GetHostReservationPurchasePreviewResponse::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "GetHostReservationPurchasePreviewResponse")
  {
    resultNode = rootNode.FirstChild("GetHostReservationPurchasePreviewResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode purchaseNode = resultNode.FirstChild("purchase");
    if(!purchaseNode.IsNull())
    {
      XmlNode purchaseMember = purchaseNode.FirstChild("member");
      while(!purchaseMember.IsNull())
      {
        m_purchase.push_back(purchaseMember);
        purchaseMember = purchaseMember.NextNode("member");
      }

    }
    XmlNode totalUpfrontPriceNode = resultNode.FirstChild("totalUpfrontPrice");
    if(!totalUpfrontPriceNode.IsNull())
    {
      m_totalUpfrontPrice = StringUtils::Trim(totalUpfrontPriceNode.GetText().c_str());
    }
    XmlNode totalHourlyPriceNode = resultNode.FirstChild("totalHourlyPrice");
    if(!totalHourlyPriceNode.IsNull())
    {
      m_totalHourlyPrice = StringUtils::Trim(totalHourlyPriceNode.GetText().c_str());
    }
    XmlNode currencyCodeNode = resultNode.FirstChild("currencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = CurrencyCodeValuesMapper::GetCurrencyCodeValuesForName(StringUtils::Trim(currencyCodeNode.GetText().c_str()).c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetHostReservationPurchasePreviewResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
