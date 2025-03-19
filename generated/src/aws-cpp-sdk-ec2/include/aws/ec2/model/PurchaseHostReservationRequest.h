/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CurrencyCodeValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class PurchaseHostReservationRequest : public EC2Request
  {
  public:
    AWS_EC2_API PurchaseHostReservationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseHostReservation"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    PurchaseHostReservationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency in which the <code>totalUpfrontPrice</code>,
     * <code>LimitPrice</code>, and <code>totalHourlyPrice</code> amounts are
     * specified. At this time, the only supported currency is <code>USD</code>.</p>
     */
    inline CurrencyCodeValues GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(CurrencyCodeValues value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline PurchaseHostReservationRequest& WithCurrencyCode(CurrencyCodeValues value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation will be
     * associated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIdSet() const { return m_hostIdSet; }
    inline bool HostIdSetHasBeenSet() const { return m_hostIdSetHasBeenSet; }
    template<typename HostIdSetT = Aws::Vector<Aws::String>>
    void SetHostIdSet(HostIdSetT&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = std::forward<HostIdSetT>(value); }
    template<typename HostIdSetT = Aws::Vector<Aws::String>>
    PurchaseHostReservationRequest& WithHostIdSet(HostIdSetT&& value) { SetHostIdSet(std::forward<HostIdSetT>(value)); return *this;}
    template<typename HostIdSetT = Aws::String>
    PurchaseHostReservationRequest& AddHostIdSet(HostIdSetT&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.emplace_back(std::forward<HostIdSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The specified limit is checked against the total upfront cost of the
     * reservation (calculated as the offering's upfront cost multiplied by the host
     * count). If the total upfront cost is greater than the specified price limit, the
     * request fails. This is used to ensure that the purchase does not exceed the
     * expected upfront cost of the purchase. At this time, the only supported currency
     * is <code>USD</code>. For example, to indicate a limit price of USD 100, specify
     * 100.00.</p>
     */
    inline const Aws::String& GetLimitPrice() const { return m_limitPrice; }
    inline bool LimitPriceHasBeenSet() const { return m_limitPriceHasBeenSet; }
    template<typename LimitPriceT = Aws::String>
    void SetLimitPrice(LimitPriceT&& value) { m_limitPriceHasBeenSet = true; m_limitPrice = std::forward<LimitPriceT>(value); }
    template<typename LimitPriceT = Aws::String>
    PurchaseHostReservationRequest& WithLimitPrice(LimitPriceT&& value) { SetLimitPrice(std::forward<LimitPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    PurchaseHostReservationRequest& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the Dedicated Host Reservation during purchase.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    PurchaseHostReservationRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    PurchaseHostReservationRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    CurrencyCodeValues m_currencyCode{CurrencyCodeValues::NOT_SET};
    bool m_currencyCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_hostIdSet;
    bool m_hostIdSetHasBeenSet = false;

    Aws::String m_limitPrice;
    bool m_limitPriceHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
