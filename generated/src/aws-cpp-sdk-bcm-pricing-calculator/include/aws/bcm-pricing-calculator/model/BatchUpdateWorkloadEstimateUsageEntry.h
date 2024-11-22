/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Represents an entry in a batch operation to update workload estimate usage.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/BatchUpdateWorkloadEstimateUsageEntry">AWS
   * API Reference</a></p>
   */
  class BatchUpdateWorkloadEstimateUsageEntry
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateWorkloadEstimateUsageEntry();
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateWorkloadEstimateUsageEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API BatchUpdateWorkloadEstimateUsageEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the usage estimate to update. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline BatchUpdateWorkloadEstimateUsageEntry& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline BatchUpdateWorkloadEstimateUsageEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline BatchUpdateWorkloadEstimateUsageEntry& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The updated group identifier for the usage estimate. </p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }
    inline BatchUpdateWorkloadEstimateUsageEntry& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}
    inline BatchUpdateWorkloadEstimateUsageEntry& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}
    inline BatchUpdateWorkloadEstimateUsageEntry& WithGroup(const char* value) { SetGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The updated estimated usage amount. </p>
     */
    inline double GetAmount() const{ return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(double value) { m_amountHasBeenSet = true; m_amount = value; }
    inline BatchUpdateWorkloadEstimateUsageEntry& WithAmount(double value) { SetAmount(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    double m_amount;
    bool m_amountHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
