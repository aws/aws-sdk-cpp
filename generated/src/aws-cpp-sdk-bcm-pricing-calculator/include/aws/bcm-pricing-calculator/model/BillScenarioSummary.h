/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BillInterval.h>
#include <aws/bcm-pricing-calculator/model/BillScenarioStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   * <p> Provides a summary of a bill scenario. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BillScenarioSummary">AWS
   * API Reference</a></p>
   */
  class BillScenarioSummary
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BillScenarioSummary() = default;
    AWS_BCMPRICINGCALCULATOR_API BillScenarioSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BillScenarioSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the bill scenario. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    BillScenarioSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the bill scenario. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    BillScenarioSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time period covered by the bill scenario. </p>
     */
    inline const BillInterval& GetBillInterval() const { return m_billInterval; }
    inline bool BillIntervalHasBeenSet() const { return m_billIntervalHasBeenSet; }
    template<typename BillIntervalT = BillInterval>
    void SetBillInterval(BillIntervalT&& value) { m_billIntervalHasBeenSet = true; m_billInterval = std::forward<BillIntervalT>(value); }
    template<typename BillIntervalT = BillInterval>
    BillScenarioSummary& WithBillInterval(BillIntervalT&& value) { SetBillInterval(std::forward<BillIntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the bill scenario. </p>
     */
    inline BillScenarioStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BillScenarioStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline BillScenarioSummary& WithStatus(BillScenarioStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the bill scenario was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    BillScenarioSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the bill scenario will expire. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    void SetExpiresAt(ExpiresAtT&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::forward<ExpiresAtT>(value); }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    BillScenarioSummary& WithExpiresAt(ExpiresAtT&& value) { SetExpiresAt(std::forward<ExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An error message if the bill scenario creation or processing failed. </p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    BillScenarioSummary& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    BillInterval m_billInterval;
    bool m_billIntervalHasBeenSet = false;

    BillScenarioStatus m_status{BillScenarioStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt{};
    bool m_expiresAtHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
