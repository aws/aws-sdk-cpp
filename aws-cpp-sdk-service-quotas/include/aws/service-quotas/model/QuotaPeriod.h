/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/PeriodUnit.h>
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
namespace ServiceQuotas
{
namespace Model
{

  /**
   * <p>Information about the quota period.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/QuotaPeriod">AWS
   * API Reference</a></p>
   */
  class QuotaPeriod
  {
  public:
    AWS_SERVICEQUOTAS_API QuotaPeriod();
    AWS_SERVICEQUOTAS_API QuotaPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API QuotaPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value.</p>
     */
    inline int GetPeriodValue() const{ return m_periodValue; }

    /**
     * <p>The value.</p>
     */
    inline bool PeriodValueHasBeenSet() const { return m_periodValueHasBeenSet; }

    /**
     * <p>The value.</p>
     */
    inline void SetPeriodValue(int value) { m_periodValueHasBeenSet = true; m_periodValue = value; }

    /**
     * <p>The value.</p>
     */
    inline QuotaPeriod& WithPeriodValue(int value) { SetPeriodValue(value); return *this;}


    /**
     * <p>The time unit.</p>
     */
    inline const PeriodUnit& GetPeriodUnit() const{ return m_periodUnit; }

    /**
     * <p>The time unit.</p>
     */
    inline bool PeriodUnitHasBeenSet() const { return m_periodUnitHasBeenSet; }

    /**
     * <p>The time unit.</p>
     */
    inline void SetPeriodUnit(const PeriodUnit& value) { m_periodUnitHasBeenSet = true; m_periodUnit = value; }

    /**
     * <p>The time unit.</p>
     */
    inline void SetPeriodUnit(PeriodUnit&& value) { m_periodUnitHasBeenSet = true; m_periodUnit = std::move(value); }

    /**
     * <p>The time unit.</p>
     */
    inline QuotaPeriod& WithPeriodUnit(const PeriodUnit& value) { SetPeriodUnit(value); return *this;}

    /**
     * <p>The time unit.</p>
     */
    inline QuotaPeriod& WithPeriodUnit(PeriodUnit&& value) { SetPeriodUnit(std::move(value)); return *this;}

  private:

    int m_periodValue;
    bool m_periodValueHasBeenSet = false;

    PeriodUnit m_periodUnit;
    bool m_periodUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
