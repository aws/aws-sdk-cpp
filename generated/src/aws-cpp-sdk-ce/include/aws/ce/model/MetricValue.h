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


    ///@{
    /**
     * <p>The actual number that represents the metric.</p>
     */
    inline const Aws::String& GetAmount() const{ return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(const Aws::String& value) { m_amountHasBeenSet = true; m_amount = value; }
    inline void SetAmount(Aws::String&& value) { m_amountHasBeenSet = true; m_amount = std::move(value); }
    inline void SetAmount(const char* value) { m_amountHasBeenSet = true; m_amount.assign(value); }
    inline MetricValue& WithAmount(const Aws::String& value) { SetAmount(value); return *this;}
    inline MetricValue& WithAmount(Aws::String&& value) { SetAmount(std::move(value)); return *this;}
    inline MetricValue& WithAmount(const char* value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit that the metric is given in.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline MetricValue& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline MetricValue& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline MetricValue& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}
  private:

    Aws::String m_amount;
    bool m_amountHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
