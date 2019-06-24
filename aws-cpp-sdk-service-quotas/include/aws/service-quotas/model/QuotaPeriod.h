/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>A structure that contains information about the quota period.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/QuotaPeriod">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEQUOTAS_API QuotaPeriod
  {
  public:
    QuotaPeriod();
    QuotaPeriod(Aws::Utils::Json::JsonView jsonValue);
    QuotaPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value of a period.</p>
     */
    inline int GetPeriodValue() const{ return m_periodValue; }

    /**
     * <p>The value of a period.</p>
     */
    inline bool PeriodValueHasBeenSet() const { return m_periodValueHasBeenSet; }

    /**
     * <p>The value of a period.</p>
     */
    inline void SetPeriodValue(int value) { m_periodValueHasBeenSet = true; m_periodValue = value; }

    /**
     * <p>The value of a period.</p>
     */
    inline QuotaPeriod& WithPeriodValue(int value) { SetPeriodValue(value); return *this;}


    /**
     * <p>The time unit of a period.</p>
     */
    inline const PeriodUnit& GetPeriodUnit() const{ return m_periodUnit; }

    /**
     * <p>The time unit of a period.</p>
     */
    inline bool PeriodUnitHasBeenSet() const { return m_periodUnitHasBeenSet; }

    /**
     * <p>The time unit of a period.</p>
     */
    inline void SetPeriodUnit(const PeriodUnit& value) { m_periodUnitHasBeenSet = true; m_periodUnit = value; }

    /**
     * <p>The time unit of a period.</p>
     */
    inline void SetPeriodUnit(PeriodUnit&& value) { m_periodUnitHasBeenSet = true; m_periodUnit = std::move(value); }

    /**
     * <p>The time unit of a period.</p>
     */
    inline QuotaPeriod& WithPeriodUnit(const PeriodUnit& value) { SetPeriodUnit(value); return *this;}

    /**
     * <p>The time unit of a period.</p>
     */
    inline QuotaPeriod& WithPeriodUnit(PeriodUnit&& value) { SetPeriodUnit(std::move(value)); return *this;}

  private:

    int m_periodValue;
    bool m_periodValueHasBeenSet;

    PeriodUnit m_periodUnit;
    bool m_periodUnitHasBeenSet;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
