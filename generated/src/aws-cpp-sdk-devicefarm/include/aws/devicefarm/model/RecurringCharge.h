/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/MonetaryAmount.h>
#include <aws/devicefarm/model/RecurringChargeFrequency.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Specifies whether charges for devices are recurring.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/RecurringCharge">AWS
   * API Reference</a></p>
   */
  class RecurringCharge
  {
  public:
    AWS_DEVICEFARM_API RecurringCharge() = default;
    AWS_DEVICEFARM_API RecurringCharge(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API RecurringCharge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cost of the recurring charge.</p>
     */
    inline const MonetaryAmount& GetCost() const { return m_cost; }
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
    template<typename CostT = MonetaryAmount>
    void SetCost(CostT&& value) { m_costHasBeenSet = true; m_cost = std::forward<CostT>(value); }
    template<typename CostT = MonetaryAmount>
    RecurringCharge& WithCost(CostT&& value) { SetCost(std::forward<CostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency in which charges recur.</p>
     */
    inline RecurringChargeFrequency GetFrequency() const { return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(RecurringChargeFrequency value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline RecurringCharge& WithFrequency(RecurringChargeFrequency value) { SetFrequency(value); return *this;}
    ///@}
  private:

    MonetaryAmount m_cost;
    bool m_costHasBeenSet = false;

    RecurringChargeFrequency m_frequency{RecurringChargeFrequency::NOT_SET};
    bool m_frequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
