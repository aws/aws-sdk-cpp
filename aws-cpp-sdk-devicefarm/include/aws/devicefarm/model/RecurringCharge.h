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
    AWS_DEVICEFARM_API RecurringCharge();
    AWS_DEVICEFARM_API RecurringCharge(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API RecurringCharge& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The cost of the recurring charge.</p>
     */
    inline const MonetaryAmount& GetCost() const{ return m_cost; }

    /**
     * <p>The cost of the recurring charge.</p>
     */
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }

    /**
     * <p>The cost of the recurring charge.</p>
     */
    inline void SetCost(const MonetaryAmount& value) { m_costHasBeenSet = true; m_cost = value; }

    /**
     * <p>The cost of the recurring charge.</p>
     */
    inline void SetCost(MonetaryAmount&& value) { m_costHasBeenSet = true; m_cost = std::move(value); }

    /**
     * <p>The cost of the recurring charge.</p>
     */
    inline RecurringCharge& WithCost(const MonetaryAmount& value) { SetCost(value); return *this;}

    /**
     * <p>The cost of the recurring charge.</p>
     */
    inline RecurringCharge& WithCost(MonetaryAmount&& value) { SetCost(std::move(value)); return *this;}


    /**
     * <p>The frequency in which charges recur.</p>
     */
    inline const RecurringChargeFrequency& GetFrequency() const{ return m_frequency; }

    /**
     * <p>The frequency in which charges recur.</p>
     */
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }

    /**
     * <p>The frequency in which charges recur.</p>
     */
    inline void SetFrequency(const RecurringChargeFrequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p>The frequency in which charges recur.</p>
     */
    inline void SetFrequency(RecurringChargeFrequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }

    /**
     * <p>The frequency in which charges recur.</p>
     */
    inline RecurringCharge& WithFrequency(const RecurringChargeFrequency& value) { SetFrequency(value); return *this;}

    /**
     * <p>The frequency in which charges recur.</p>
     */
    inline RecurringCharge& WithFrequency(RecurringChargeFrequency&& value) { SetFrequency(std::move(value)); return *this;}

  private:

    MonetaryAmount m_cost;
    bool m_costHasBeenSet = false;

    RecurringChargeFrequency m_frequency;
    bool m_frequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
