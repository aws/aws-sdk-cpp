/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The aggregated value for a metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/MetricValue">AWS API
   * Reference</a></p>
   */
  class MetricValue
  {
  public:
    AWS_COSTEXPLORER_API MetricValue();
    AWS_COSTEXPLORER_API MetricValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API MetricValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The actual number that represents the metric.</p>
     */
    inline const Aws::String& GetAmount() const{ return m_amount; }

    /**
     * <p>The actual number that represents the metric.</p>
     */
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }

    /**
     * <p>The actual number that represents the metric.</p>
     */
    inline void SetAmount(const Aws::String& value) { m_amountHasBeenSet = true; m_amount = value; }

    /**
     * <p>The actual number that represents the metric.</p>
     */
    inline void SetAmount(Aws::String&& value) { m_amountHasBeenSet = true; m_amount = std::move(value); }

    /**
     * <p>The actual number that represents the metric.</p>
     */
    inline void SetAmount(const char* value) { m_amountHasBeenSet = true; m_amount.assign(value); }

    /**
     * <p>The actual number that represents the metric.</p>
     */
    inline MetricValue& WithAmount(const Aws::String& value) { SetAmount(value); return *this;}

    /**
     * <p>The actual number that represents the metric.</p>
     */
    inline MetricValue& WithAmount(Aws::String&& value) { SetAmount(std::move(value)); return *this;}

    /**
     * <p>The actual number that represents the metric.</p>
     */
    inline MetricValue& WithAmount(const char* value) { SetAmount(value); return *this;}


    /**
     * <p>The unit that the metric is given in.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit that the metric is given in.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit that the metric is given in.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit that the metric is given in.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit that the metric is given in.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit that the metric is given in.</p>
     */
    inline MetricValue& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit that the metric is given in.</p>
     */
    inline MetricValue& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit that the metric is given in.</p>
     */
    inline MetricValue& WithUnit(const char* value) { SetUnit(value); return *this;}

  private:

    Aws::String m_amount;
    bool m_amountHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
