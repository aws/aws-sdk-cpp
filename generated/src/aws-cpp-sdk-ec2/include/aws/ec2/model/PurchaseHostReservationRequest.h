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
    AWS_EC2_API PurchaseHostReservationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseHostReservation"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline PurchaseHostReservationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline PurchaseHostReservationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline PurchaseHostReservationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The currency in which the <code>totalUpfrontPrice</code>,
     * <code>LimitPrice</code>, and <code>totalHourlyPrice</code> amounts are
     * specified. At this time, the only supported currency is <code>USD</code>.</p>
     */
    inline const CurrencyCodeValues& GetCurrencyCode() const{ return m_currencyCode; }

    /**
     * <p>The currency in which the <code>totalUpfrontPrice</code>,
     * <code>LimitPrice</code>, and <code>totalHourlyPrice</code> amounts are
     * specified. At this time, the only supported currency is <code>USD</code>.</p>
     */
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }

    /**
     * <p>The currency in which the <code>totalUpfrontPrice</code>,
     * <code>LimitPrice</code>, and <code>totalHourlyPrice</code> amounts are
     * specified. At this time, the only supported currency is <code>USD</code>.</p>
     */
    inline void SetCurrencyCode(const CurrencyCodeValues& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }

    /**
     * <p>The currency in which the <code>totalUpfrontPrice</code>,
     * <code>LimitPrice</code>, and <code>totalHourlyPrice</code> amounts are
     * specified. At this time, the only supported currency is <code>USD</code>.</p>
     */
    inline void SetCurrencyCode(CurrencyCodeValues&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }

    /**
     * <p>The currency in which the <code>totalUpfrontPrice</code>,
     * <code>LimitPrice</code>, and <code>totalHourlyPrice</code> amounts are
     * specified. At this time, the only supported currency is <code>USD</code>.</p>
     */
    inline PurchaseHostReservationRequest& WithCurrencyCode(const CurrencyCodeValues& value) { SetCurrencyCode(value); return *this;}

    /**
     * <p>The currency in which the <code>totalUpfrontPrice</code>,
     * <code>LimitPrice</code>, and <code>totalHourlyPrice</code> amounts are
     * specified. At this time, the only supported currency is <code>USD</code>.</p>
     */
    inline PurchaseHostReservationRequest& WithCurrencyCode(CurrencyCodeValues&& value) { SetCurrencyCode(std::move(value)); return *this;}


    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation will be
     * associated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIdSet() const{ return m_hostIdSet; }

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation will be
     * associated.</p>
     */
    inline bool HostIdSetHasBeenSet() const { return m_hostIdSetHasBeenSet; }

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation will be
     * associated.</p>
     */
    inline void SetHostIdSet(const Aws::Vector<Aws::String>& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = value; }

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation will be
     * associated.</p>
     */
    inline void SetHostIdSet(Aws::Vector<Aws::String>&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet = std::move(value); }

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation will be
     * associated.</p>
     */
    inline PurchaseHostReservationRequest& WithHostIdSet(const Aws::Vector<Aws::String>& value) { SetHostIdSet(value); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation will be
     * associated.</p>
     */
    inline PurchaseHostReservationRequest& WithHostIdSet(Aws::Vector<Aws::String>&& value) { SetHostIdSet(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation will be
     * associated.</p>
     */
    inline PurchaseHostReservationRequest& AddHostIdSet(const Aws::String& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(value); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation will be
     * associated.</p>
     */
    inline PurchaseHostReservationRequest& AddHostIdSet(Aws::String&& value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Dedicated Hosts with which the reservation will be
     * associated.</p>
     */
    inline PurchaseHostReservationRequest& AddHostIdSet(const char* value) { m_hostIdSetHasBeenSet = true; m_hostIdSet.push_back(value); return *this; }


    /**
     * <p>The specified limit is checked against the total upfront cost of the
     * reservation (calculated as the offering's upfront cost multiplied by the host
     * count). If the total upfront cost is greater than the specified price limit, the
     * request fails. This is used to ensure that the purchase does not exceed the
     * expected upfront cost of the purchase. At this time, the only supported currency
     * is <code>USD</code>. For example, to indicate a limit price of USD 100, specify
     * 100.00.</p>
     */
    inline const Aws::String& GetLimitPrice() const{ return m_limitPrice; }

    /**
     * <p>The specified limit is checked against the total upfront cost of the
     * reservation (calculated as the offering's upfront cost multiplied by the host
     * count). If the total upfront cost is greater than the specified price limit, the
     * request fails. This is used to ensure that the purchase does not exceed the
     * expected upfront cost of the purchase. At this time, the only supported currency
     * is <code>USD</code>. For example, to indicate a limit price of USD 100, specify
     * 100.00.</p>
     */
    inline bool LimitPriceHasBeenSet() const { return m_limitPriceHasBeenSet; }

    /**
     * <p>The specified limit is checked against the total upfront cost of the
     * reservation (calculated as the offering's upfront cost multiplied by the host
     * count). If the total upfront cost is greater than the specified price limit, the
     * request fails. This is used to ensure that the purchase does not exceed the
     * expected upfront cost of the purchase. At this time, the only supported currency
     * is <code>USD</code>. For example, to indicate a limit price of USD 100, specify
     * 100.00.</p>
     */
    inline void SetLimitPrice(const Aws::String& value) { m_limitPriceHasBeenSet = true; m_limitPrice = value; }

    /**
     * <p>The specified limit is checked against the total upfront cost of the
     * reservation (calculated as the offering's upfront cost multiplied by the host
     * count). If the total upfront cost is greater than the specified price limit, the
     * request fails. This is used to ensure that the purchase does not exceed the
     * expected upfront cost of the purchase. At this time, the only supported currency
     * is <code>USD</code>. For example, to indicate a limit price of USD 100, specify
     * 100.00.</p>
     */
    inline void SetLimitPrice(Aws::String&& value) { m_limitPriceHasBeenSet = true; m_limitPrice = std::move(value); }

    /**
     * <p>The specified limit is checked against the total upfront cost of the
     * reservation (calculated as the offering's upfront cost multiplied by the host
     * count). If the total upfront cost is greater than the specified price limit, the
     * request fails. This is used to ensure that the purchase does not exceed the
     * expected upfront cost of the purchase. At this time, the only supported currency
     * is <code>USD</code>. For example, to indicate a limit price of USD 100, specify
     * 100.00.</p>
     */
    inline void SetLimitPrice(const char* value) { m_limitPriceHasBeenSet = true; m_limitPrice.assign(value); }

    /**
     * <p>The specified limit is checked against the total upfront cost of the
     * reservation (calculated as the offering's upfront cost multiplied by the host
     * count). If the total upfront cost is greater than the specified price limit, the
     * request fails. This is used to ensure that the purchase does not exceed the
     * expected upfront cost of the purchase. At this time, the only supported currency
     * is <code>USD</code>. For example, to indicate a limit price of USD 100, specify
     * 100.00.</p>
     */
    inline PurchaseHostReservationRequest& WithLimitPrice(const Aws::String& value) { SetLimitPrice(value); return *this;}

    /**
     * <p>The specified limit is checked against the total upfront cost of the
     * reservation (calculated as the offering's upfront cost multiplied by the host
     * count). If the total upfront cost is greater than the specified price limit, the
     * request fails. This is used to ensure that the purchase does not exceed the
     * expected upfront cost of the purchase. At this time, the only supported currency
     * is <code>USD</code>. For example, to indicate a limit price of USD 100, specify
     * 100.00.</p>
     */
    inline PurchaseHostReservationRequest& WithLimitPrice(Aws::String&& value) { SetLimitPrice(std::move(value)); return *this;}

    /**
     * <p>The specified limit is checked against the total upfront cost of the
     * reservation (calculated as the offering's upfront cost multiplied by the host
     * count). If the total upfront cost is greater than the specified price limit, the
     * request fails. This is used to ensure that the purchase does not exceed the
     * expected upfront cost of the purchase. At this time, the only supported currency
     * is <code>USD</code>. For example, to indicate a limit price of USD 100, specify
     * 100.00.</p>
     */
    inline PurchaseHostReservationRequest& WithLimitPrice(const char* value) { SetLimitPrice(value); return *this;}


    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline bool OfferingIdHasBeenSet() const { return m_offeringIdHasBeenSet; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(const Aws::String& value) { m_offeringIdHasBeenSet = true; m_offeringId = value; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(Aws::String&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::move(value); }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetOfferingId(const char* value) { m_offeringIdHasBeenSet = true; m_offeringId.assign(value); }

    /**
     * <p>The ID of the offering.</p>
     */
    inline PurchaseHostReservationRequest& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}

    /**
     * <p>The ID of the offering.</p>
     */
    inline PurchaseHostReservationRequest& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the offering.</p>
     */
    inline PurchaseHostReservationRequest& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}


    /**
     * <p>The tags to apply to the Dedicated Host Reservation during purchase.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the Dedicated Host Reservation during purchase.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the Dedicated Host Reservation during purchase.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the Dedicated Host Reservation during purchase.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the Dedicated Host Reservation during purchase.</p>
     */
    inline PurchaseHostReservationRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the Dedicated Host Reservation during purchase.</p>
     */
    inline PurchaseHostReservationRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the Dedicated Host Reservation during purchase.</p>
     */
    inline PurchaseHostReservationRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the Dedicated Host Reservation during purchase.</p>
     */
    inline PurchaseHostReservationRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    CurrencyCodeValues m_currencyCode;
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
