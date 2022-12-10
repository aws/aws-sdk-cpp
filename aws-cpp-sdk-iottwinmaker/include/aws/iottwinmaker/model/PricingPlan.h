/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/BundleInformation.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iottwinmaker/model/PricingMode.h>
#include <aws/iottwinmaker/model/UpdateReason.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The pricing plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PricingPlan">AWS
   * API Reference</a></p>
   */
  class PricingPlan
  {
  public:
    AWS_IOTTWINMAKER_API PricingPlan();
    AWS_IOTTWINMAKER_API PricingPlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PricingPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The billable entity count.</p>
     */
    inline long long GetBillableEntityCount() const{ return m_billableEntityCount; }

    /**
     * <p>The billable entity count.</p>
     */
    inline bool BillableEntityCountHasBeenSet() const { return m_billableEntityCountHasBeenSet; }

    /**
     * <p>The billable entity count.</p>
     */
    inline void SetBillableEntityCount(long long value) { m_billableEntityCountHasBeenSet = true; m_billableEntityCount = value; }

    /**
     * <p>The billable entity count.</p>
     */
    inline PricingPlan& WithBillableEntityCount(long long value) { SetBillableEntityCount(value); return *this;}


    /**
     * <p>The pricing plan's bundle information.</p>
     */
    inline const BundleInformation& GetBundleInformation() const{ return m_bundleInformation; }

    /**
     * <p>The pricing plan's bundle information.</p>
     */
    inline bool BundleInformationHasBeenSet() const { return m_bundleInformationHasBeenSet; }

    /**
     * <p>The pricing plan's bundle information.</p>
     */
    inline void SetBundleInformation(const BundleInformation& value) { m_bundleInformationHasBeenSet = true; m_bundleInformation = value; }

    /**
     * <p>The pricing plan's bundle information.</p>
     */
    inline void SetBundleInformation(BundleInformation&& value) { m_bundleInformationHasBeenSet = true; m_bundleInformation = std::move(value); }

    /**
     * <p>The pricing plan's bundle information.</p>
     */
    inline PricingPlan& WithBundleInformation(const BundleInformation& value) { SetBundleInformation(value); return *this;}

    /**
     * <p>The pricing plan's bundle information.</p>
     */
    inline PricingPlan& WithBundleInformation(BundleInformation&& value) { SetBundleInformation(std::move(value)); return *this;}


    /**
     * <p>The effective date and time of the pricing plan.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveDateTime() const{ return m_effectiveDateTime; }

    /**
     * <p>The effective date and time of the pricing plan.</p>
     */
    inline bool EffectiveDateTimeHasBeenSet() const { return m_effectiveDateTimeHasBeenSet; }

    /**
     * <p>The effective date and time of the pricing plan.</p>
     */
    inline void SetEffectiveDateTime(const Aws::Utils::DateTime& value) { m_effectiveDateTimeHasBeenSet = true; m_effectiveDateTime = value; }

    /**
     * <p>The effective date and time of the pricing plan.</p>
     */
    inline void SetEffectiveDateTime(Aws::Utils::DateTime&& value) { m_effectiveDateTimeHasBeenSet = true; m_effectiveDateTime = std::move(value); }

    /**
     * <p>The effective date and time of the pricing plan.</p>
     */
    inline PricingPlan& WithEffectiveDateTime(const Aws::Utils::DateTime& value) { SetEffectiveDateTime(value); return *this;}

    /**
     * <p>The effective date and time of the pricing plan.</p>
     */
    inline PricingPlan& WithEffectiveDateTime(Aws::Utils::DateTime&& value) { SetEffectiveDateTime(std::move(value)); return *this;}


    /**
     * <p>The pricing mode.</p>
     */
    inline const PricingMode& GetPricingMode() const{ return m_pricingMode; }

    /**
     * <p>The pricing mode.</p>
     */
    inline bool PricingModeHasBeenSet() const { return m_pricingModeHasBeenSet; }

    /**
     * <p>The pricing mode.</p>
     */
    inline void SetPricingMode(const PricingMode& value) { m_pricingModeHasBeenSet = true; m_pricingMode = value; }

    /**
     * <p>The pricing mode.</p>
     */
    inline void SetPricingMode(PricingMode&& value) { m_pricingModeHasBeenSet = true; m_pricingMode = std::move(value); }

    /**
     * <p>The pricing mode.</p>
     */
    inline PricingPlan& WithPricingMode(const PricingMode& value) { SetPricingMode(value); return *this;}

    /**
     * <p>The pricing mode.</p>
     */
    inline PricingPlan& WithPricingMode(PricingMode&& value) { SetPricingMode(std::move(value)); return *this;}


    /**
     * <p>The set date and time for updating a pricing plan.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The set date and time for updating a pricing plan.</p>
     */
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }

    /**
     * <p>The set date and time for updating a pricing plan.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = value; }

    /**
     * <p>The set date and time for updating a pricing plan.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::move(value); }

    /**
     * <p>The set date and time for updating a pricing plan.</p>
     */
    inline PricingPlan& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The set date and time for updating a pricing plan.</p>
     */
    inline PricingPlan& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}


    /**
     * <p>The update reason, for changing a pricing plan.</p>
     */
    inline const UpdateReason& GetUpdateReason() const{ return m_updateReason; }

    /**
     * <p>The update reason, for changing a pricing plan.</p>
     */
    inline bool UpdateReasonHasBeenSet() const { return m_updateReasonHasBeenSet; }

    /**
     * <p>The update reason, for changing a pricing plan.</p>
     */
    inline void SetUpdateReason(const UpdateReason& value) { m_updateReasonHasBeenSet = true; m_updateReason = value; }

    /**
     * <p>The update reason, for changing a pricing plan.</p>
     */
    inline void SetUpdateReason(UpdateReason&& value) { m_updateReasonHasBeenSet = true; m_updateReason = std::move(value); }

    /**
     * <p>The update reason, for changing a pricing plan.</p>
     */
    inline PricingPlan& WithUpdateReason(const UpdateReason& value) { SetUpdateReason(value); return *this;}

    /**
     * <p>The update reason, for changing a pricing plan.</p>
     */
    inline PricingPlan& WithUpdateReason(UpdateReason&& value) { SetUpdateReason(std::move(value)); return *this;}

  private:

    long long m_billableEntityCount;
    bool m_billableEntityCountHasBeenSet = false;

    BundleInformation m_bundleInformation;
    bool m_bundleInformationHasBeenSet = false;

    Aws::Utils::DateTime m_effectiveDateTime;
    bool m_effectiveDateTimeHasBeenSet = false;

    PricingMode m_pricingMode;
    bool m_pricingModeHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime;
    bool m_updateDateTimeHasBeenSet = false;

    UpdateReason m_updateReason;
    bool m_updateReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
