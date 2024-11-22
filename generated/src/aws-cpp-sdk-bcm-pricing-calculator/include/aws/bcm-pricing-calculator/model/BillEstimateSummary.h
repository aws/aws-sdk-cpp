/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BillEstimateStatus.h>
#include <aws/bcm-pricing-calculator/model/BillInterval.h>
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
   * <p> Provides a summary of a bill estimate. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BillEstimateSummary">AWS
   * API Reference</a></p>
   */
  class BillEstimateSummary
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BillEstimateSummary();
    AWS_BCMPRICINGCALCULATOR_API BillEstimateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BillEstimateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the bill estimate. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline BillEstimateSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline BillEstimateSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline BillEstimateSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the bill estimate. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline BillEstimateSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline BillEstimateSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline BillEstimateSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the bill estimate. </p>
     */
    inline const BillEstimateStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const BillEstimateStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(BillEstimateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline BillEstimateSummary& WithStatus(const BillEstimateStatus& value) { SetStatus(value); return *this;}
    inline BillEstimateSummary& WithStatus(BillEstimateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time period covered by the bill estimate. </p>
     */
    inline const BillInterval& GetBillInterval() const{ return m_billInterval; }
    inline bool BillIntervalHasBeenSet() const { return m_billIntervalHasBeenSet; }
    inline void SetBillInterval(const BillInterval& value) { m_billIntervalHasBeenSet = true; m_billInterval = value; }
    inline void SetBillInterval(BillInterval&& value) { m_billIntervalHasBeenSet = true; m_billInterval = std::move(value); }
    inline BillEstimateSummary& WithBillInterval(const BillInterval& value) { SetBillInterval(value); return *this;}
    inline BillEstimateSummary& WithBillInterval(BillInterval&& value) { SetBillInterval(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the bill estimate was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline BillEstimateSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline BillEstimateSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the bill estimate will expire. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAtHasBeenSet = true; m_expiresAt = value; }
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::move(value); }
    inline BillEstimateSummary& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}
    inline BillEstimateSummary& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    BillEstimateStatus m_status;
    bool m_statusHasBeenSet = false;

    BillInterval m_billInterval;
    bool m_billIntervalHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt;
    bool m_expiresAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
