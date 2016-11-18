﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/MonetaryAmount.h>
#include <aws/devicefarm/model/RecurringChargeFrequency.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Specifies whether charges for devices will be recurring.</p>
   */
  class AWS_DEVICEFARM_API RecurringCharge
  {
  public:
    RecurringCharge();
    RecurringCharge(const Aws::Utils::Json::JsonValue& jsonValue);
    RecurringCharge& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The cost of the recurring charge.</p>
     */
    inline const MonetaryAmount& GetCost() const{ return m_cost; }

    /**
     * <p>The cost of the recurring charge.</p>
     */
    inline void SetCost(const MonetaryAmount& value) { m_costHasBeenSet = true; m_cost = value; }

    /**
     * <p>The cost of the recurring charge.</p>
     */
    inline void SetCost(MonetaryAmount&& value) { m_costHasBeenSet = true; m_cost = value; }

    /**
     * <p>The cost of the recurring charge.</p>
     */
    inline RecurringCharge& WithCost(const MonetaryAmount& value) { SetCost(value); return *this;}

    /**
     * <p>The cost of the recurring charge.</p>
     */
    inline RecurringCharge& WithCost(MonetaryAmount&& value) { SetCost(value); return *this;}

    /**
     * <p>The frequency in which charges will recur.</p>
     */
    inline const RecurringChargeFrequency& GetFrequency() const{ return m_frequency; }

    /**
     * <p>The frequency in which charges will recur.</p>
     */
    inline void SetFrequency(const RecurringChargeFrequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p>The frequency in which charges will recur.</p>
     */
    inline void SetFrequency(RecurringChargeFrequency&& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p>The frequency in which charges will recur.</p>
     */
    inline RecurringCharge& WithFrequency(const RecurringChargeFrequency& value) { SetFrequency(value); return *this;}

    /**
     * <p>The frequency in which charges will recur.</p>
     */
    inline RecurringCharge& WithFrequency(RecurringChargeFrequency&& value) { SetFrequency(value); return *this;}

  private:
    MonetaryAmount m_cost;
    bool m_costHasBeenSet;
    RecurringChargeFrequency m_frequency;
    bool m_frequencyHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
