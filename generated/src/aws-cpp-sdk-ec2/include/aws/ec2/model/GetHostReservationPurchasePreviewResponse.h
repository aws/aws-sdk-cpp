/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CurrencyCodeValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Purchase.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class GetHostReservationPurchasePreviewResponse
  {
  public:
    AWS_EC2_API GetHostReservationPurchasePreviewResponse() = default;
    AWS_EC2_API GetHostReservationPurchasePreviewResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetHostReservationPurchasePreviewResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The currency in which the <code>totalUpfrontPrice</code> and
     * <code>totalHourlyPrice</code> amounts are specified. At this time, the only
     * supported currency is <code>USD</code>.</p>
     */
    inline CurrencyCodeValues GetCurrencyCode() const { return m_currencyCode; }
    inline void SetCurrencyCode(CurrencyCodeValues value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline GetHostReservationPurchasePreviewResponse& WithCurrencyCode(CurrencyCodeValues value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The purchase information of the Dedicated Host reservation and the Dedicated
     * Hosts associated with it.</p>
     */
    inline const Aws::Vector<Purchase>& GetPurchase() const { return m_purchase; }
    template<typename PurchaseT = Aws::Vector<Purchase>>
    void SetPurchase(PurchaseT&& value) { m_purchaseHasBeenSet = true; m_purchase = std::forward<PurchaseT>(value); }
    template<typename PurchaseT = Aws::Vector<Purchase>>
    GetHostReservationPurchasePreviewResponse& WithPurchase(PurchaseT&& value) { SetPurchase(std::forward<PurchaseT>(value)); return *this;}
    template<typename PurchaseT = Purchase>
    GetHostReservationPurchasePreviewResponse& AddPurchase(PurchaseT&& value) { m_purchaseHasBeenSet = true; m_purchase.emplace_back(std::forward<PurchaseT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The potential total hourly price of the reservation per hour.</p>
     */
    inline const Aws::String& GetTotalHourlyPrice() const { return m_totalHourlyPrice; }
    template<typename TotalHourlyPriceT = Aws::String>
    void SetTotalHourlyPrice(TotalHourlyPriceT&& value) { m_totalHourlyPriceHasBeenSet = true; m_totalHourlyPrice = std::forward<TotalHourlyPriceT>(value); }
    template<typename TotalHourlyPriceT = Aws::String>
    GetHostReservationPurchasePreviewResponse& WithTotalHourlyPrice(TotalHourlyPriceT&& value) { SetTotalHourlyPrice(std::forward<TotalHourlyPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The potential total upfront price. This is billed immediately.</p>
     */
    inline const Aws::String& GetTotalUpfrontPrice() const { return m_totalUpfrontPrice; }
    template<typename TotalUpfrontPriceT = Aws::String>
    void SetTotalUpfrontPrice(TotalUpfrontPriceT&& value) { m_totalUpfrontPriceHasBeenSet = true; m_totalUpfrontPrice = std::forward<TotalUpfrontPriceT>(value); }
    template<typename TotalUpfrontPriceT = Aws::String>
    GetHostReservationPurchasePreviewResponse& WithTotalUpfrontPrice(TotalUpfrontPriceT&& value) { SetTotalUpfrontPrice(std::forward<TotalUpfrontPriceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetHostReservationPurchasePreviewResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    CurrencyCodeValues m_currencyCode{CurrencyCodeValues::NOT_SET};
    bool m_currencyCodeHasBeenSet = false;

    Aws::Vector<Purchase> m_purchase;
    bool m_purchaseHasBeenSet = false;

    Aws::String m_totalHourlyPrice;
    bool m_totalHourlyPriceHasBeenSet = false;

    Aws::String m_totalUpfrontPrice;
    bool m_totalUpfrontPriceHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
